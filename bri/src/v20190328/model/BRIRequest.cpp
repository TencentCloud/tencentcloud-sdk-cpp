/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/bri/v20190328/model/BRIRequest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bri::V20190328::Model;
using namespace std;

BRIRequest::BRIRequest() :
    m_serviceHasBeenSet(false),
    m_qQHasBeenSet(false),
    m_qQTagHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_certMd5HasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_fileMd5HasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_wechatHasBeenSet(false),
    m_wechatTagHasBeenSet(false),
    m_subAppidHasBeenSet(false)
{
}

CoreInternalOutcome BRIRequest::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("QQ") && !value["QQ"].IsNull())
    {
        if (!value["QQ"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.QQ` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qQ = string(value["QQ"].GetString());
        m_qQHasBeenSet = true;
    }

    if (value.HasMember("QQTag") && !value["QQTag"].IsNull())
    {
        if (!value["QQTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.QQTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qQTag = string(value["QQTag"].GetString());
        m_qQTagHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("CertMd5") && !value["CertMd5"].IsNull())
    {
        if (!value["CertMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.CertMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certMd5 = string(value["CertMd5"].GetString());
        m_certMd5HasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("FileMd5") && !value["FileMd5"].IsNull())
    {
        if (!value["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(value["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }

    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Imei") && !value["Imei"].IsNull())
    {
        if (!value["Imei"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.Imei` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imei = string(value["Imei"].GetString());
        m_imeiHasBeenSet = true;
    }

    if (value.HasMember("Wechat") && !value["Wechat"].IsNull())
    {
        if (!value["Wechat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.Wechat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechat = string(value["Wechat"].GetString());
        m_wechatHasBeenSet = true;
    }

    if (value.HasMember("WechatTag") && !value["WechatTag"].IsNull())
    {
        if (!value["WechatTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.WechatTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatTag = string(value["WechatTag"].GetString());
        m_wechatTagHasBeenSet = true;
    }

    if (value.HasMember("SubAppid") && !value["SubAppid"].IsNull())
    {
        if (!value["SubAppid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BRIRequest.SubAppid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAppid = string(value["SubAppid"].GetString());
        m_subAppidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BRIRequest::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_qQHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QQ";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qQ.c_str(), allocator).Move(), allocator);
    }

    if (m_qQTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QQTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qQTag.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_certMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_imeiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wechat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechat.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatTag.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAppid.c_str(), allocator).Move(), allocator);
    }

}


string BRIRequest::GetService() const
{
    return m_service;
}

void BRIRequest::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool BRIRequest::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string BRIRequest::GetQQ() const
{
    return m_qQ;
}

void BRIRequest::SetQQ(const string& _qQ)
{
    m_qQ = _qQ;
    m_qQHasBeenSet = true;
}

bool BRIRequest::QQHasBeenSet() const
{
    return m_qQHasBeenSet;
}

string BRIRequest::GetQQTag() const
{
    return m_qQTag;
}

void BRIRequest::SetQQTag(const string& _qQTag)
{
    m_qQTag = _qQTag;
    m_qQTagHasBeenSet = true;
}

bool BRIRequest::QQTagHasBeenSet() const
{
    return m_qQTagHasBeenSet;
}

string BRIRequest::GetUrl() const
{
    return m_url;
}

void BRIRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool BRIRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string BRIRequest::GetCertMd5() const
{
    return m_certMd5;
}

void BRIRequest::SetCertMd5(const string& _certMd5)
{
    m_certMd5 = _certMd5;
    m_certMd5HasBeenSet = true;
}

bool BRIRequest::CertMd5HasBeenSet() const
{
    return m_certMd5HasBeenSet;
}

string BRIRequest::GetPackageName() const
{
    return m_packageName;
}

void BRIRequest::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool BRIRequest::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string BRIRequest::GetFileMd5() const
{
    return m_fileMd5;
}

void BRIRequest::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool BRIRequest::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

string BRIRequest::GetScene() const
{
    return m_scene;
}

void BRIRequest::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool BRIRequest::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string BRIRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void BRIRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool BRIRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

int64_t BRIRequest::GetFileSize() const
{
    return m_fileSize;
}

void BRIRequest::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool BRIRequest::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string BRIRequest::GetIp() const
{
    return m_ip;
}

void BRIRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool BRIRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string BRIRequest::GetImei() const
{
    return m_imei;
}

void BRIRequest::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool BRIRequest::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

string BRIRequest::GetWechat() const
{
    return m_wechat;
}

void BRIRequest::SetWechat(const string& _wechat)
{
    m_wechat = _wechat;
    m_wechatHasBeenSet = true;
}

bool BRIRequest::WechatHasBeenSet() const
{
    return m_wechatHasBeenSet;
}

string BRIRequest::GetWechatTag() const
{
    return m_wechatTag;
}

void BRIRequest::SetWechatTag(const string& _wechatTag)
{
    m_wechatTag = _wechatTag;
    m_wechatTagHasBeenSet = true;
}

bool BRIRequest::WechatTagHasBeenSet() const
{
    return m_wechatTagHasBeenSet;
}

string BRIRequest::GetSubAppid() const
{
    return m_subAppid;
}

void BRIRequest::SetSubAppid(const string& _subAppid)
{
    m_subAppid = _subAppid;
    m_subAppidHasBeenSet = true;
}

bool BRIRequest::SubAppidHasBeenSet() const
{
    return m_subAppidHasBeenSet;
}

