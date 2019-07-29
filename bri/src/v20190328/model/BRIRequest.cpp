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
using namespace rapidjson;
using namespace std;

BRIRequest::BRIRequest() :
    m_serviceHasBeenSet(false),
    m_certMd5HasBeenSet(false),
    m_fileMd5HasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome BRIRequest::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Error("response `BRIRequest.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("CertMd5") && !value["CertMd5"].IsNull())
    {
        if (!value["CertMd5"].IsString())
        {
            return CoreInternalOutcome(Error("response `BRIRequest.CertMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certMd5 = string(value["CertMd5"].GetString());
        m_certMd5HasBeenSet = true;
    }

    if (value.HasMember("FileMd5") && !value["FileMd5"].IsNull())
    {
        if (!value["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Error("response `BRIRequest.FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(value["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BRIRequest.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("Imei") && !value["Imei"].IsNull())
    {
        if (!value["Imei"].IsString())
        {
            return CoreInternalOutcome(Error("response `BRIRequest.Imei` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imei = string(value["Imei"].GetString());
        m_imeiHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Error("response `BRIRequest.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BRIRequest.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Error("response `BRIRequest.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Error("response `BRIRequest.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BRIRequest::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_serviceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_certMd5HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_certMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMd5HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_imeiHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
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

