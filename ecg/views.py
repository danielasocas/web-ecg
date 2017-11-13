from django.views import generic
from django.views.generic.edit import CreateView, UpdateView, DeleteView
from django.core.urlresolvers import reverse_lazy
from models import Record 

# Create your views here.
class IndexView(generic.ListView):
    template_name = 'ecg/index.html'
    context_object_name = 'all_records'
    
    def get_queryset(self):
        return Record.objects.all()

class DetailView(generic.DetailView):
    model =  Record 
    template_name = 'ecg/detail.html'
    
class RecordCreate(generic.CreateView):
    model = Record
    fields = ['recordname']

class RecordUpdate(generic.UpdateView):
    model = Record
    fields = ['recordname']
    
class RecordDelete(generic.DeleteView):
    model = Record
    success_url = reverse_lazy('ecg:index')