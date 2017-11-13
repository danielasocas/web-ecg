from django.shortcuts import render
from django.http import HttpResponse
from django.template import loader
from models import Record 

# Create your views here.
def index(request):
    template = loader.get_template('ecg/index.html')
    
    return HttpResponse(template.render(request))