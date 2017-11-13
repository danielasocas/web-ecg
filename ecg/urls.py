from django.conf.urls import url
from . import views

app_name = 'ecg'

urlpatterns = [
    url(r'^$', views.IndexView.as_view(), name = 'index'),
    url(r'^(?P<pk>[0-9]+)/$', views.DetailView.as_view(), name = 'detail'),
    
    # /ecg/record/add/
    url(r'record/add/$', views.EcgCreate.as_view(), name = 'record-create'),
    
    # /ecg/record/2/ 
    url(r'record/(?P<pk>[0-9]+)/$', views.EcgUpdate.as_view(), name = 'record-update'),
    
    #/ecg/record/2/delete/
    url(r'record/(?P<pk>[0-9]+)/delete/$', views.EcgDelete.as_view(), name = 'record-delete'),
]