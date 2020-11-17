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

#include <tencentcloud/zj/v20190121/model/CreateMmsInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

CreateMmsInstanceRequest::CreateMmsInstanceRequest() :
    m_licenseHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_signHasBeenSet(false),
    m_contentsHasBeenSet(false),
    m_urlsHasBeenSet(false),
    m_phoneTypeHasBeenSet(false),
    m_commonParamsHasBeenSet(false),
    m_urlParamsHasBeenSet(false)
{
}

string CreateMmsInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_licenseHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "License";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_license.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_signHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Sign";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sign.c_str(), allocator).Move(), allocator);
    }

    if (m_contentsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contents.begin(); itr != m_contents.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_urlsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Urls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_urls.begin(); itr != m_urls.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_phoneTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PhoneType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_phoneType.begin(); itr != m_phoneType.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }

    if (m_commonParamsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommonParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_commonParams.begin(); itr != m_commonParams.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }

    if (m_urlParamsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UrlParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_urlParams.begin(); itr != m_urlParams.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMmsInstanceRequest::GetLicense() const
{
    return m_license;
}

void CreateMmsInstanceRequest::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool CreateMmsInstanceRequest::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

string CreateMmsInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateMmsInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateMmsInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreateMmsInstanceRequest::GetTitle() const
{
    return m_title;
}

void CreateMmsInstanceRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool CreateMmsInstanceRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string CreateMmsInstanceRequest::GetSign() const
{
    return m_sign;
}

void CreateMmsInstanceRequest::SetSign(const string& _sign)
{
    m_sign = _sign;
    m_signHasBeenSet = true;
}

bool CreateMmsInstanceRequest::SignHasBeenSet() const
{
    return m_signHasBeenSet;
}

vector<CreateMmsInstanceItem> CreateMmsInstanceRequest::GetContents() const
{
    return m_contents;
}

void CreateMmsInstanceRequest::SetContents(const vector<CreateMmsInstanceItem>& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool CreateMmsInstanceRequest::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}

vector<string> CreateMmsInstanceRequest::GetUrls() const
{
    return m_urls;
}

void CreateMmsInstanceRequest::SetUrls(const vector<string>& _urls)
{
    m_urls = _urls;
    m_urlsHasBeenSet = true;
}

bool CreateMmsInstanceRequest::UrlsHasBeenSet() const
{
    return m_urlsHasBeenSet;
}

vector<uint64_t> CreateMmsInstanceRequest::GetPhoneType() const
{
    return m_phoneType;
}

void CreateMmsInstanceRequest::SetPhoneType(const vector<uint64_t>& _phoneType)
{
    m_phoneType = _phoneType;
    m_phoneTypeHasBeenSet = true;
}

bool CreateMmsInstanceRequest::PhoneTypeHasBeenSet() const
{
    return m_phoneTypeHasBeenSet;
}

vector<uint64_t> CreateMmsInstanceRequest::GetCommonParams() const
{
    return m_commonParams;
}

void CreateMmsInstanceRequest::SetCommonParams(const vector<uint64_t>& _commonParams)
{
    m_commonParams = _commonParams;
    m_commonParamsHasBeenSet = true;
}

bool CreateMmsInstanceRequest::CommonParamsHasBeenSet() const
{
    return m_commonParamsHasBeenSet;
}

vector<uint64_t> CreateMmsInstanceRequest::GetUrlParams() const
{
    return m_urlParams;
}

void CreateMmsInstanceRequest::SetUrlParams(const vector<uint64_t>& _urlParams)
{
    m_urlParams = _urlParams;
    m_urlParamsHasBeenSet = true;
}

bool CreateMmsInstanceRequest::UrlParamsHasBeenSet() const
{
    return m_urlParamsHasBeenSet;
}


