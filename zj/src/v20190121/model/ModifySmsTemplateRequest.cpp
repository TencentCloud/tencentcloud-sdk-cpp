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

#include <tencentcloud/zj/v20190121/model/ModifySmsTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

ModifySmsTemplateRequest::ModifySmsTemplateRequest() :
    m_licenseHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_signIDHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateContentHasBeenSet(false),
    m_smsTypeHasBeenSet(false),
    m_internationalHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_urlsHasBeenSet(false),
    m_commonParamsHasBeenSet(false),
    m_urlParamsHasBeenSet(false)
{
}

string ModifySmsTemplateRequest::ToJsonString() const
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

    if (m_templateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_signIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SignID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_signID, allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_templateContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_templateContent.c_str(), allocator).Move(), allocator);
    }

    if (m_smsTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SmsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_smsType, allocator);
    }

    if (m_internationalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "International";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_international, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
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

    if (m_commonParamsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommonParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_commonParams.begin(); itr != m_commonParams.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
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
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySmsTemplateRequest::GetLicense() const
{
    return m_license;
}

void ModifySmsTemplateRequest::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool ModifySmsTemplateRequest::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

int64_t ModifySmsTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void ModifySmsTemplateRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ModifySmsTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

uint64_t ModifySmsTemplateRequest::GetSignID() const
{
    return m_signID;
}

void ModifySmsTemplateRequest::SetSignID(const uint64_t& _signID)
{
    m_signID = _signID;
    m_signIDHasBeenSet = true;
}

bool ModifySmsTemplateRequest::SignIDHasBeenSet() const
{
    return m_signIDHasBeenSet;
}

string ModifySmsTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void ModifySmsTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool ModifySmsTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string ModifySmsTemplateRequest::GetTemplateContent() const
{
    return m_templateContent;
}

void ModifySmsTemplateRequest::SetTemplateContent(const string& _templateContent)
{
    m_templateContent = _templateContent;
    m_templateContentHasBeenSet = true;
}

bool ModifySmsTemplateRequest::TemplateContentHasBeenSet() const
{
    return m_templateContentHasBeenSet;
}

uint64_t ModifySmsTemplateRequest::GetSmsType() const
{
    return m_smsType;
}

void ModifySmsTemplateRequest::SetSmsType(const uint64_t& _smsType)
{
    m_smsType = _smsType;
    m_smsTypeHasBeenSet = true;
}

bool ModifySmsTemplateRequest::SmsTypeHasBeenSet() const
{
    return m_smsTypeHasBeenSet;
}

uint64_t ModifySmsTemplateRequest::GetInternational() const
{
    return m_international;
}

void ModifySmsTemplateRequest::SetInternational(const uint64_t& _international)
{
    m_international = _international;
    m_internationalHasBeenSet = true;
}

bool ModifySmsTemplateRequest::InternationalHasBeenSet() const
{
    return m_internationalHasBeenSet;
}

string ModifySmsTemplateRequest::GetRemark() const
{
    return m_remark;
}

void ModifySmsTemplateRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifySmsTemplateRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<string> ModifySmsTemplateRequest::GetUrls() const
{
    return m_urls;
}

void ModifySmsTemplateRequest::SetUrls(const vector<string>& _urls)
{
    m_urls = _urls;
    m_urlsHasBeenSet = true;
}

bool ModifySmsTemplateRequest::UrlsHasBeenSet() const
{
    return m_urlsHasBeenSet;
}

vector<int64_t> ModifySmsTemplateRequest::GetCommonParams() const
{
    return m_commonParams;
}

void ModifySmsTemplateRequest::SetCommonParams(const vector<int64_t>& _commonParams)
{
    m_commonParams = _commonParams;
    m_commonParamsHasBeenSet = true;
}

bool ModifySmsTemplateRequest::CommonParamsHasBeenSet() const
{
    return m_commonParamsHasBeenSet;
}

vector<int64_t> ModifySmsTemplateRequest::GetUrlParams() const
{
    return m_urlParams;
}

void ModifySmsTemplateRequest::SetUrlParams(const vector<int64_t>& _urlParams)
{
    m_urlParams = _urlParams;
    m_urlParamsHasBeenSet = true;
}

bool ModifySmsTemplateRequest::UrlParamsHasBeenSet() const
{
    return m_urlParamsHasBeenSet;
}


