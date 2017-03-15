/****************************************************************************
** Meta object code from reading C++ file 'phpbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "phpbrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'phpbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PhpWebPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_PhpWebPage[] = {
    "PhpWebPage\0"
};

void PhpWebPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PhpWebPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PhpWebPage::staticMetaObject = {
    { &QWebPage::staticMetaObject, qt_meta_stringdata_PhpWebPage,
      qt_meta_data_PhpWebPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PhpWebPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PhpWebPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PhpWebPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PhpWebPage))
        return static_cast<void*>(const_cast< PhpWebPage*>(this));
    return QWebPage::qt_metacast(_clname);
}

int PhpWebPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_WebElementBridge[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x0a,
      48,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WebElementBridge[] = {
    "WebElementBridge\0\0elem\0passElement(QWebElement)\0"
    "clear()\0"
};

void WebElementBridge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WebElementBridge *_t = static_cast<WebElementBridge *>(_o);
        switch (_id) {
        case 0: _t->passElement((*reinterpret_cast< const QWebElement(*)>(_a[1]))); break;
        case 1: _t->clear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebElementBridge::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebElementBridge::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebElementBridge,
      qt_meta_data_WebElementBridge, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebElementBridge::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebElementBridge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebElementBridge::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebElementBridge))
        return static_cast<void*>(const_cast< WebElementBridge*>(this));
    return QObject::qt_metacast(_clname);
}

int WebElementBridge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_PhpWebView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   33,   29,   11, 0x0a,
      73,   67,   29,   11, 0x2a,
     101,   88,   29,   11, 0x0a,
     131,  126,   29,   11, 0x2a,
     151,   11,   11,   11, 0x09,
     163,   11,   11,   11, 0x09,
     174,   11,   11,   11, 0x09,
     194,  191,   11,   11, 0x09,
     217,  211,   11,   11, 0x09,
     249,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PhpWebView[] = {
    "PhpWebView\0\0newViewCreated()\0int\0"
    "xpath,samewnd\0click(QString,bool)\0"
    "xpath\0click(QString)\0elem,samewnd\0"
    "click2(QWebElement,bool)\0elem\0"
    "click2(QWebElement)\0showXPath()\0"
    "closeTab()\0setTargetBlank()\0ok\0"
    "setTabName(bool)\0reply\0"
    "requestFinished(QNetworkReply*)\0"
    "handleLoadStarted()\0"
};

void PhpWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PhpWebView *_t = static_cast<PhpWebView *>(_o);
        switch (_id) {
        case 0: _t->newViewCreated(); break;
        case 1: { int _r = _t->click((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->click((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->click2((*reinterpret_cast< QWebElement(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->click2((*reinterpret_cast< QWebElement(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->showXPath(); break;
        case 6: _t->closeTab(); break;
        case 7: _t->setTargetBlank(); break;
        case 8: _t->setTabName((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->requestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->handleLoadStarted(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PhpWebView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PhpWebView::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_PhpWebView,
      qt_meta_data_PhpWebView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PhpWebView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PhpWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PhpWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PhpWebView))
        return static_cast<void*>(const_cast< PhpWebView*>(this));
    return QWebView::qt_metacast(_clname);
}

int PhpWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void PhpWebView::newViewCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_WebElementTS[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   20,   14,   13, 0x0a,
      60,   13,   48,   13, 0x0a,
      77,   13,   14,   13, 0x0a,
      87,   20,   14,   13, 0x0a,
     119,   13,  105,   13, 0x0a,
     128,   13,   14,   13, 0x0a,
     138,   13,   14,   13, 0x0a,
     145,   13,  105,   13, 0x0a,
     159,   13,  105,   13, 0x0a,
     173,   13,  105,   13, 0x0a,
     186,   13,  105,   13, 0x0a,
     203,   13,  198,   13, 0x0a,
     212,   13,   14,   13, 0x0a,
     223,   13,   14,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WebElementTS[] = {
    "WebElementTS\0\0char*\0name\0"
    "attribute(const char*)\0QStringList\0"
    "attributeNames()\0tagName()\0prop(const char*)\0"
    "WebElementTS*\0parent()\0textAll()\0"
    "text()\0nextSibling()\0prevSibling()\0"
    "firstChild()\0lastChild()\0bool\0isNull()\0"
    "getXPath()\0html()\0"
};

void WebElementTS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WebElementTS *_t = static_cast<WebElementTS *>(_o);
        switch (_id) {
        case 0: { char* _r = _t->attribute((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = _r; }  break;
        case 1: { QStringList _r = _t->attributeNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 2: { char* _r = _t->tagName();
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = _r; }  break;
        case 3: { char* _r = _t->prop((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = _r; }  break;
        case 4: { WebElementTS* _r = _t->parent();
            if (_a[0]) *reinterpret_cast< WebElementTS**>(_a[0]) = _r; }  break;
        case 5: { char* _r = _t->textAll();
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = _r; }  break;
        case 6: { char* _r = _t->text();
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = _r; }  break;
        case 7: { WebElementTS* _r = _t->nextSibling();
            if (_a[0]) *reinterpret_cast< WebElementTS**>(_a[0]) = _r; }  break;
        case 8: { WebElementTS* _r = _t->prevSibling();
            if (_a[0]) *reinterpret_cast< WebElementTS**>(_a[0]) = _r; }  break;
        case 9: { WebElementTS* _r = _t->firstChild();
            if (_a[0]) *reinterpret_cast< WebElementTS**>(_a[0]) = _r; }  break;
        case 10: { WebElementTS* _r = _t->lastChild();
            if (_a[0]) *reinterpret_cast< WebElementTS**>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isNull();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { char* _r = _t->getXPath();
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = _r; }  break;
        case 13: { char* _r = _t->html();
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebElementTS::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebElementTS::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebElementTS,
      qt_meta_data_WebElementTS, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebElementTS::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebElementTS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebElementTS::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebElementTS))
        return static_cast<void*>(const_cast< WebElementTS*>(this));
    return QObject::qt_metacast(_clname);
}

int WebElementTS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
static const uint qt_meta_data_PhpBrowser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      43,   23,   19,   11, 0x0a,
      82,   70,   19,   11, 0x2a,
     109,  105,   19,   11, 0x2a,
     127,   11,   11,   11, 0x0a,
     138,  134,   11,   11, 0x0a,
     169,  155,   19,   11, 0x0a,
     199,  193,   19,   11, 0x2a,
     231,  218,   19,   11, 0x0a,
     263,  258,   19,   11, 0x2a,
     297,  285,   19,   11, 0x0a,
     327,  193,   19,   11, 0x0a,
     346,  193,   19,   11, 0x0a,
     367,  193,   19,   11, 0x0a,
     386,  193,   19,   11, 0x0a,
     417,  406,   19,   11, 0x0a,
     455,  285,   19,   11, 0x0a,
     509,  494,   19,   11, 0x0a,
     553,  543,   19,   11, 0x0a,
     599,  193,  587,   11, 0x0a,
     644,  193,  623,   11, 0x0a,
     680,  669,  623,   11, 0x0a,
     726,   11,  720,   11, 0x0a,
     744,  736,   11,   11, 0x0a,
     764,  754,   19,   11, 0x0a,
     792,  776,   19,   11, 0x0a,
     832,  824,   19,   11, 0x2a,
     859,   11,  587,   11, 0x0a,
     871,   11,  720,   11, 0x0a,
     878,   11,  720,   11, 0x0a,
     884,   11,  720,   11, 0x0a,
     903,  899,   11,   11, 0x0a,
     931,   11,  720,   11, 0x0a,
     957,  948,   11,   11, 0x0a,
     995,  990,   11,   11, 0x2a,
    1023, 1016,   11,   11, 0x0a,
    1053, 1045,   19,   11, 0x0a,
    1087,  105,   11,   11, 0x09,
    1107, 1101,   11,   11, 0x09,
    1129,   11,   11,   11, 0x09,
    1154, 1148,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PhpBrowser[] = {
    "PhpBrowser\0\0show()\0int\0url,samewnd,timeout\0"
    "load(const char*,bool,int)\0url,samewnd\0"
    "load(const char*,bool)\0url\0load(const char*)\0"
    "back()\0ret\0gettitle(char**)\0xpath,samewnd\0"
    "click(const char*,bool)\0xpath\0"
    "click(const char*)\0elem,samewnd\0"
    "click2(WebElementTS*,bool)\0elem\0"
    "click2(WebElementTS*)\0xpath,value\0"
    "fill(const char*,const char*)\0"
    "check(const char*)\0uncheck(const char*)\0"
    "radio(const char*)\0select(const char*)\0"
    "xpath,text\0selectbytext(const char*,const char*)\0"
    "selectbyvalue(const char*,const char*)\0"
    "xpath,filename\0fillfile(const char*,const char*)\0"
    "link,dest\0download(const char*,const char*)\0"
    "QStringList\0getimglink(const char*)\0"
    "QList<WebElementTS*>\0getelements(const char*)\0"
    "xpath,node\0getelements2(const char*,WebElementTS*)\0"
    "char*\0console()\0seconds\0wait(int)\0"
    "numscreen\0scroll(int)\0strlist,ischeck\0"
    "setproxylist(QStringList&,bool)\0strlist\0"
    "setproxylist(QStringList&)\0proxylist()\0"
    "html()\0url()\0requestedurl()\0dir\0"
    "setDownloadDir(const char*)\0"
    "getDownloadDir()\0html,url\0"
    "setHtml(const char*,const char*)\0html\0"
    "setHtml(const char*)\0isload\0"
    "setImageLoading(bool)\0elem,js\0"
    "jsexec(WebElementTS*,const char*)\0"
    "setEdit(QUrl)\0index\0handleTabChanged(int)\0"
    "handleUrlChanged()\0reply\0"
    "startDownload(QNetworkReply*)\0"
};

void PhpBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PhpBrowser *_t = static_cast<PhpBrowser *>(_o);
        switch (_id) {
        case 0: _t->show(); break;
        case 1: { int _r = _t->load((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->load((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->load((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->back(); break;
        case 5: _t->gettitle((*reinterpret_cast< char**(*)>(_a[1]))); break;
        case 6: { int _r = _t->click((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->click((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->click2((*reinterpret_cast< WebElementTS*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->click2((*reinterpret_cast< WebElementTS*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->fill((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->check((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->uncheck((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->radio((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->select((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->selectbytext((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->selectbyvalue((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->fillfile((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->download((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { QStringList _r = _t->getimglink((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 20: { QList<WebElementTS*> _r = _t->getelements((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<WebElementTS*>*>(_a[0]) = _r; }  break;
        case 21: { QList<WebElementTS*> _r = _t->getelements2((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< WebElementTS*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<WebElementTS*>*>(_a[0]) = _r; }  break;
        case 22: { char* _r = _t->console();
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = _r; }  break;
        case 23: _t->wait((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: { int _r = _t->scroll((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->setproxylist((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->setproxylist((*reinterpret_cast< QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { QStringList _r = _t->proxylist();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 28: { char* _r = _t->html();
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = _r; }  break;
        case 29: { char* _r = _t->url();
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = _r; }  break;
        case 30: { char* _r = _t->requestedurl();
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = _r; }  break;
        case 31: _t->setDownloadDir((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 32: { char* _r = _t->getDownloadDir();
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = _r; }  break;
        case 33: _t->setHtml((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 34: _t->setHtml((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 35: _t->setImageLoading((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: { int _r = _t->jsexec((*reinterpret_cast< WebElementTS*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 37: _t->setEdit((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 38: _t->handleTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->handleUrlChanged(); break;
        case 40: _t->startDownload((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PhpBrowser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PhpBrowser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PhpBrowser,
      qt_meta_data_PhpBrowser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PhpBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PhpBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PhpBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PhpBrowser))
        return static_cast<void*>(const_cast< PhpBrowser*>(this));
    return QWidget::qt_metacast(_clname);
}

int PhpBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}
static const uint qt_meta_data_Initializer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      33,   25,   12,   12, 0x0a,
      77,   12,   63,   12, 0x0a,
      95,   12,   86,   12, 0x0a,
     122,   12,  110,   12, 0x0a,
     146,  141,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Initializer[] = {
    "Initializer\0\0createApp()\0browser\0"
    "setActiveBrowser(PhpBrowser*)\0"
    "QApplication*\0getApp()\0QThread*\0"
    "getAppThread()\0PhpBrowser*\0"
    "createPhpBrowser()\0elem\0"
    "deleteWebElement(QWebElement*)\0"
};

void Initializer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Initializer *_t = static_cast<Initializer *>(_o);
        switch (_id) {
        case 0: _t->createApp(); break;
        case 1: _t->setActiveBrowser((*reinterpret_cast< PhpBrowser*(*)>(_a[1]))); break;
        case 2: { QApplication* _r = _t->getApp();
            if (_a[0]) *reinterpret_cast< QApplication**>(_a[0]) = _r; }  break;
        case 3: { QThread* _r = _t->getAppThread();
            if (_a[0]) *reinterpret_cast< QThread**>(_a[0]) = _r; }  break;
        case 4: { PhpBrowser* _r = _t->createPhpBrowser();
            if (_a[0]) *reinterpret_cast< PhpBrowser**>(_a[0]) = _r; }  break;
        case 5: _t->deleteWebElement((*reinterpret_cast< QWebElement*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Initializer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Initializer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Initializer,
      qt_meta_data_Initializer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Initializer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Initializer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Initializer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Initializer))
        return static_cast<void*>(const_cast< Initializer*>(this));
    return QObject::qt_metacast(_clname);
}

int Initializer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_GuiThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_GuiThread[] = {
    "GuiThread\0"
};

void GuiThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GuiThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GuiThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_GuiThread,
      qt_meta_data_GuiThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GuiThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GuiThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GuiThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GuiThread))
        return static_cast<void*>(const_cast< GuiThread*>(this));
    return QThread::qt_metacast(_clname);
}

int GuiThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
