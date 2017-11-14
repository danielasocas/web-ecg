from django.core.urlresolvers import reverse   
from django import forms

class RecordF(forms.Form):
    # record_name = forms.CharField(max_length = 6)
    #record_header = forms.FileField()
    record_image = forms.ImageField(widget=forms.ClearableFileInput(attrs={'multiple': True}))
    #image_name = forms.CharField()

    # def __init__(self, *args, **kwargs):
    #     self.request = kwargs.pop('request')    
    #     super(RecordForm, self).__init__(*args, **kwargs)
        
    # def get_absolute_url(self):
    #     return reverse('ecg:converter', kwargs={'pk': self.pk})
    
    # def __str__(self):
    #     return self.recordname