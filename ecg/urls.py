from django.conf.urls import url
from . import views

app_name = 'ecg'

urlpatterns = [
    
    url(r'^$', views.IndexView.as_view(), name = 'index'),
    url(r'^(?P<pk>[0-9]+)/$', views.DetailView.as_view(), name = 'detail'),
    
    # /ecg/record/browse/
    url(r'record/browse/$', views.RecordForm.as_view(), name = 'record-create'),
    
    # /ecg/record/2/ 
 #   url(r'record/(?P<pk>[0-9]+)/$', views.RecordUpdate.as_view(), name = 'record-update'),
    
    #/ecg/record/2/delete/
 #   url(r'record/(?P<pk>[0-9]+)/delete/$', views.RecordDelete.as_view(), name = 'record-delete'),
    
    #/ecg/record/3/
    url(r'record/converter/$', views.ConverterView.as_view(), name = 'converter'),
]