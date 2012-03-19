// Generated by admPyClass.pl do not edit !
// audioCodec -> int editor->setAudioCodec (int str   couples ) 
static tp_obj zzpy_audioCodec(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  const char *p1 = pm.asString();
  CONFcouple *p2 = NULL;
  pm.makeCouples(&p2);
  int r =   editor->setAudioCodec(p0,p1,p2); 
  return tp_number(r);
}
// saveBmp -> int editor->saveImageBmp (str ) 
static tp_obj zzpy_saveBmp(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  int r =   editor->saveImageBmp(p0); 
  return tp_number(r);
}
// addVideoFilter -> int editor->addVideoFilter (str  couples ) 
static tp_obj zzpy_addVideoFilter(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  CONFcouple *p1 = NULL;
  pm.makeCouples(&p1);
  int r =   editor->addVideoFilter(p0,p1); 
  return tp_number(r);
}
// loadVideo -> int editor->openFile (str ) 
static tp_obj zzpy_loadVideo(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  int r =   editor->openFile(p0); 
  return tp_number(r);
}
// getPARWidth -> int editor->getPARWidth (void ) 
static tp_obj zzpy_getPARWidth(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int r =   editor->getPARWidth(); 
  return tp_number(r);
}
// clearSegments -> int editor->clearSegment (void ) 
static tp_obj zzpy_clearSegments(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int r =   editor->clearSegment(); 
  return tp_number(r);
}
// getHeight -> int pyGetHeight (IEditor ) 
static tp_obj zzpy_getHeight(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int r =   pyGetHeight(p0); 
  return tp_number(r);
}
// setPostProc -> int editor->setPostProc (int  int  int ) 
static tp_obj zzpy_setPostProc(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  int p1 = pm.asInt();
  int p2 = pm.asInt();
  int r =   editor->setPostProc(p0,p1,p2); 
  return tp_number(r);
}
// save -> int editor->saveFile (str ) 
static tp_obj zzpy_save(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  int r =   editor->saveFile(p0); 
  return tp_number(r);
}
// videoCodecChangeParam -> int editor->setVideoCodec (str  couples ) 
static tp_obj zzpy_videoCodecChangeParam(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  CONFcouple *p1 = NULL;
  pm.makeCouples(&p1);
  int r =   editor->setVideoCodec(p0,p1); 
  return tp_number(r);
}
// appendVideo -> int editor->appendFile (str ) 
static tp_obj zzpy_appendVideo(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  int r =   editor->appendFile(p0); 
  return tp_number(r);
}
// audioMixer -> int editor->setAudioMixer (int str ) 
static tp_obj zzpy_audioMixer(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  const char *p1 = pm.asString();
  int r =   editor->setAudioMixer(p0,p1); 
  return tp_number(r);
}
// getFps1000 -> int pyGetFps1000 (IEditor ) 
static tp_obj zzpy_getFps1000(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int r =   pyGetFps1000(p0); 
  return tp_number(r);
}
// saveAudio -> int editor->saveAudio (int str ) 
static tp_obj zzpy_saveAudio(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  const char *p1 = pm.asString();
  int r =   editor->saveAudio(p0,p1); 
  return tp_number(r);
}
// videoCodec -> int editor->setVideoCodec (str  couples ) 
static tp_obj zzpy_videoCodec(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  CONFcouple *p1 = NULL;
  pm.makeCouples(&p1);
  int r =   editor->setVideoCodec(p0,p1); 
  return tp_number(r);
}
// getWidth -> int pyGetWidth (IEditor ) 
static tp_obj zzpy_getWidth(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int r =   pyGetWidth(p0); 
  return tp_number(r);
}
// addSegment -> int editor->addSegment (int  double  double ) 
static tp_obj zzpy_addSegment(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  double p1 = pm.asDouble();
  double p2 = pm.asDouble();
  int r =   editor->addSegment(p0,p1,p2); 
  return tp_number(r);
}
// clearVideoFilters -> void editor->clearFilters (void ) 
static tp_obj zzpy_clearVideoFilters(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  editor->clearFilters(); 
 return tp_None;
}
// saveJpeg -> int editor->saveImageJpg (str ) 
static tp_obj zzpy_saveJpeg(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  int r =   editor->saveImageJpg(p0); 
  return tp_number(r);
}
// setAudioTrack -> int pyChangeAudioStream (IEditor int ) 
static tp_obj zzpy_setAudioTrack(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int r =   pyChangeAudioStream(p0,p1); 
  return tp_number(r);
}
// setContainer -> int editor->setContainer (str  couples ) 
static tp_obj zzpy_setContainer(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  CONFcouple *p1 = NULL;
  pm.makeCouples(&p1);
  int r =   editor->setContainer(p0,p1); 
  return tp_number(r);
}
// audioReset -> void editor->resetAudioFilter (int ) 
static tp_obj zzpy_audioReset(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  editor->resetAudioFilter(p0); 
 return tp_None;
}
// getVideoCodec -> str editor->getVideoCodec (void ) 
static tp_obj zzpy_getVideoCodec(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  char *r =   editor->getVideoCodec(); 
  if(!r) pm.raise("pyAdm : null pointer");

  tp_obj o = tp_string_copy(tp, r, strlen(r));
  ADM_dealloc(r);
  return o;
}
// getPARHeight -> int editor->getPARHeight (void ) 
static tp_obj zzpy_getPARHeight(TP)
 {
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int r =   editor->getPARHeight(); 
  return tp_number(r);
}
tp_obj zzpy__pyAdm_get(tp_vm *vm)
{
  tp_obj self = tp_getraw(vm);
  IScriptEngine *engine = (IScriptEngine*)tp_get(vm, vm->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(vm);
  void *me=(void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);
  char const *key = pm.asString();
  if (!strcmp(key, "markerA"))
  {
     return tp_number(editor->getMarkerAPts());
  }
  if (!strcmp(key, "markerB"))
  {
     return tp_number(editor->getMarkerBPts());
  }
  if (!strcmp(key, "audioCodec"))
  {
     return tp_method(vm, self, zzpy_audioCodec);
  }
  if (!strcmp(key, "saveBmp"))
  {
     return tp_method(vm, self, zzpy_saveBmp);
  }
  if (!strcmp(key, "addVideoFilter"))
  {
     return tp_method(vm, self, zzpy_addVideoFilter);
  }
  if (!strcmp(key, "loadVideo"))
  {
     return tp_method(vm, self, zzpy_loadVideo);
  }
  if (!strcmp(key, "getPARWidth"))
  {
     return tp_method(vm, self, zzpy_getPARWidth);
  }
  if (!strcmp(key, "clearSegments"))
  {
     return tp_method(vm, self, zzpy_clearSegments);
  }
  if (!strcmp(key, "getHeight"))
  {
     return tp_method(vm, self, zzpy_getHeight);
  }
  if (!strcmp(key, "setPostProc"))
  {
     return tp_method(vm, self, zzpy_setPostProc);
  }
  if (!strcmp(key, "save"))
  {
     return tp_method(vm, self, zzpy_save);
  }
  if (!strcmp(key, "videoCodecChangeParam"))
  {
     return tp_method(vm, self, zzpy_videoCodecChangeParam);
  }
  if (!strcmp(key, "appendVideo"))
  {
     return tp_method(vm, self, zzpy_appendVideo);
  }
  if (!strcmp(key, "audioMixer"))
  {
     return tp_method(vm, self, zzpy_audioMixer);
  }
  if (!strcmp(key, "getFps1000"))
  {
     return tp_method(vm, self, zzpy_getFps1000);
  }
  if (!strcmp(key, "saveAudio"))
  {
     return tp_method(vm, self, zzpy_saveAudio);
  }
  if (!strcmp(key, "videoCodec"))
  {
     return tp_method(vm, self, zzpy_videoCodec);
  }
  if (!strcmp(key, "getWidth"))
  {
     return tp_method(vm, self, zzpy_getWidth);
  }
  if (!strcmp(key, "addSegment"))
  {
     return tp_method(vm, self, zzpy_addSegment);
  }
  if (!strcmp(key, "clearVideoFilters"))
  {
     return tp_method(vm, self, zzpy_clearVideoFilters);
  }
  if (!strcmp(key, "saveJpeg"))
  {
     return tp_method(vm, self, zzpy_saveJpeg);
  }
  if (!strcmp(key, "setAudioTrack"))
  {
     return tp_method(vm, self, zzpy_setAudioTrack);
  }
  if (!strcmp(key, "setContainer"))
  {
     return tp_method(vm, self, zzpy_setContainer);
  }
  if (!strcmp(key, "audioReset"))
  {
     return tp_method(vm, self, zzpy_audioReset);
  }
  if (!strcmp(key, "getVideoCodec"))
  {
     return tp_method(vm, self, zzpy_getVideoCodec);
  }
  if (!strcmp(key, "getPARHeight"))
  {
     return tp_method(vm, self, zzpy_getPARHeight);
  }
  return tp_get(vm, self, tp_string(key));
}
tp_obj zzpy__pyAdm_set(tp_vm *vm)
{
  tp_obj self = tp_getraw(vm);
  IScriptEngine *engine = (IScriptEngine*)tp_get(vm, vm->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->getEditor();
  TinyParams pm(vm);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);
  char const *key = pm.asString();
  if (!strcmp(key, "markerA"))
  {
     double val = pm.asDouble();
     editor->setMarkerAPts(val);
     return tp_None;
  }
  if (!strcmp(key, "markerB"))
  {
     double val = pm.asDouble();
     editor->setMarkerBPts(val);
     return tp_None;
  }
  return tp_None;
}
// Dctor
static void myDtorpyAdm(tp_vm *vm,tp_obj self)
{
}
// Ctor ()
static tp_obj myCtorpyAdm(tp_vm *vm)
{
  tp_obj self = tp_getraw(vm);
  TinyParams pm(vm);
  void *me = NULL;
  tp_obj cdata = tp_data(vm, ADM_PYID_AVIDEMUX, me);
  cdata.data.info->xfree = myDtorpyAdm;
  tp_set(vm, self, tp_string("cdata"), cdata);
  return tp_None;
}
static tp_obj zzpy__pyAdm_help(TP)
{
	PythonEngine *engine = (PythonEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;

	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "audioCodec(int,str,  couples)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "saveBmp(str)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "addVideoFilter(str, couples)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "loadVideo(str)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "getPARWidth(void)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "clearSegments(void)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "getHeight(IEditor)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "setPostProc(int, int, int)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "save(str)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "videoCodecChangeParam(str, couples)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "appendVideo(str)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "audioMixer(int,str)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "getFps1000(IEditor)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "saveAudio(int,str)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "videoCodec(str, couples)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "getWidth(IEditor)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "addSegment(int, double, double)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "clearVideoFilters(void)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "saveJpeg(str)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "setAudioTrack(IEditor,int)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "setContainer(str, couples)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "audioReset(int)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "getVideoCodec(void)");
	engine->callEventHandlers(IScriptEngine::EVENT_TYPE_INFORMATION, NULL, -1, "getPARHeight(void)");

	return tp_None;
};
tp_obj initClasspyAdm(tp_vm *vm)
{
  tp_obj myClass = tp_class(vm);
  tp_set(vm,myClass, tp_string("__init__"), tp_fnc(vm,myCtorpyAdm));
  tp_set(vm,myClass, tp_string("__set__"), tp_fnc(vm,zzpy__pyAdm_set));
  tp_set(vm,myClass, tp_string("__get__"), tp_fnc(vm,zzpy__pyAdm_get));
  tp_set(vm,myClass, tp_string("help"), tp_fnc(vm,zzpy__pyAdm_help));
  return myClass;
}
