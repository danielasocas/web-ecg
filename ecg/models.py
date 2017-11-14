from django.db import models
from django.core.urlresolvers import reverse

class Record(models.Model):
    recordname = models.CharField(max_length = 6)
    #record_header = models.FileField(blank=True)
    #record_mat = models.FileField(blank=True)
    #record_image = models.FileField()
    
    def get_absolute_url(self):
        return reverse('ecg:detail', kwargs={'pk': self.pk})
    
    def __str__(self):
        return self.recordname