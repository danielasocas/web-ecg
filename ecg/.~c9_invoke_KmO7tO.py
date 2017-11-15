from django.core.files.storage import FileSystemStorage
from django.views import generic
from django.views.generic.edit import CreateView, UpdateView, DeleteView, FormView
from django.views.generic import TemplateView
from django.core.urlresolvers import reverse_lazy, reverse
from django.http import HttpResponseRedirect
from .models import Record 
from .forms import RecordF
import os

# Create your views here.
class IndexView(generic.ListView):
    # request.session['converted'] = 'false'
    template_name = 'ecg/index.html'
    context_object_name = 'all_records'
    
    def get_queryset(self):
        return Record.objects.all()

class DetailView(generic.DetailView):
    model =  Record 
    template_name = 'ecg/detail.html'

class ConverterView(TemplateView):
#     form =  RecordF 
     template_name = 'ecg/converter.html'
    
# class RecordForm(generic.CreateView):
    # model = Record
    # fields = ['recordname', 'record_image', 'record_header', 'record_mat']

class RecordForm(FormView):
    form_class = RecordF
    template_name = 'ecg/record_form.html'  # Replace with your template.
    success_url = reverse_lazy('ecg:converter')  # Replace with your URL or reverse().

    # def get_form_kwargs(self):
    #     kwargs = super(RecordForm, self).get_form_kwargs()
    #     kwargs['request'] = self.request
    #     return kwargs

    def form_valid(self, form, file_names, file_type):
        print(file_names[0])
        self.request.session['files'] = file_names
        self.request.session['file_type'] = file_type
        # print(form.cleaned_data) 
        return super(RecordForm, self).form_valid(form)

    def post(self, request, *args, **kwargs):
        form_class = self.get_form_class()
        form = self.get_form(form_class)
        
        files = request.FILES.getlist('record_image')
        file_names = []
        
        # store uploaded file
        fs = FileSystemStorage()
        
        for file in files:
            # get file extension
            ext = os.path.splitext(file.name)[1]
            # set type of file
            if ext == '.jpg':
                file_type = 'image'
            elif ext == '.mat':
                file_type = 'signal'
            # save name of files
            file_names.append'h)
            filename = fs.save(file.name, file)
        
        return self.form_valid(form, file_names, file_type)
        
        # form = RecordF(request.POST, request.FILES)
        # if form.is_valid():
            # return self.form_valid(form)
        

        # get ammount of files uploaded
        # files_len = len(files)
        # file extension and ammount verification
        # if (form.is_valid()):
        #     # check whether is image or signal
        #     if (ext == '.mat') or (ext == '.hea'):
        #         if (filesLen != 2):
        #             print('error in ammount of signal files')
        #             return self.form_invalid(form)
        #         else
        #             print('convert signal time!')
        #     elif (ext == '.jpg'):
        #         if (filesLen != 1):
        #             print('error in ammount of image files')
        #             return self.form_invalid(form)
        #         else:
        #             print('convert image time!')
        #     return self.form_valid(form)
        # return self.form_valid(form)
    print 
def ImageConverter(request):
    print('convert image time!')
    
    return HttpResponseRedirect('/ecg/record/converter?hola')

# class RecordUpdate(generic.UpdateView):
#     model = Record
#     fields = ['recordname']
    
# class RecordDelete(generic.DeleteView):
#     model = Record
#     success_url = reverse_lazy('ecg:index')