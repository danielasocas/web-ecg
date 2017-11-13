from django.db import models
from django.core.urlresolvers import reverse

class Record(models.Model):
    recordname = models.CharField(max_length = 6)
    
    def get_absolute_url(self):
        return reverse('music:detail', kwargs={'pk': self.pk})
    
    def __str__(self):
        return self.recordname