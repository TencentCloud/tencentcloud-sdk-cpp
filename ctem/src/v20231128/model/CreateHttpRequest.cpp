/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ctem/v20231128/model/CreateHttpRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

CreateHttpRequest::CreateHttpRequest() :
    m_customerIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_enterpriseUidHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_contentLengthHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_screenshotUrlHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_sslHasBeenSet(false),
    m_sslExpiredTimeHasBeenSet(false)
{
}

string CreateHttpRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerId, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enterpriseUid.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_contentLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentLength";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_contentLength, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_screenshotUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScreenshotUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_screenshotUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_code, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_sslHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ssl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ssl.c_str(), allocator).Move(), allocator);
    }

    if (m_sslExpiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sslExpiredTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateHttpRequest::GetCustomerId() const
{
    return m_customerId;
}

void CreateHttpRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool CreateHttpRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string CreateHttpRequest::GetUrl() const
{
    return m_url;
}

void CreateHttpRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreateHttpRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string CreateHttpRequest::GetEnterpriseUid() const
{
    return m_enterpriseUid;
}

void CreateHttpRequest::SetEnterpriseUid(const string& _enterpriseUid)
{
    m_enterpriseUid = _enterpriseUid;
    m_enterpriseUidHasBeenSet = true;
}

bool CreateHttpRequest::EnterpriseUidHasBeenSet() const
{
    return m_enterpriseUidHasBeenSet;
}

string CreateHttpRequest::GetTitle() const
{
    return m_title;
}

void CreateHttpRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool CreateHttpRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t CreateHttpRequest::GetContentLength() const
{
    return m_contentLength;
}

void CreateHttpRequest::SetContentLength(const int64_t& _contentLength)
{
    m_contentLength = _contentLength;
    m_contentLengthHasBeenSet = true;
}

bool CreateHttpRequest::ContentLengthHasBeenSet() const
{
    return m_contentLengthHasBeenSet;
}

string CreateHttpRequest::GetContent() const
{
    return m_content;
}

void CreateHttpRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CreateHttpRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string CreateHttpRequest::GetScreenshotUrl() const
{
    return m_screenshotUrl;
}

void CreateHttpRequest::SetScreenshotUrl(const string& _screenshotUrl)
{
    m_screenshotUrl = _screenshotUrl;
    m_screenshotUrlHasBeenSet = true;
}

bool CreateHttpRequest::ScreenshotUrlHasBeenSet() const
{
    return m_screenshotUrlHasBeenSet;
}

string CreateHttpRequest::GetTags() const
{
    return m_tags;
}

void CreateHttpRequest::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateHttpRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t CreateHttpRequest::GetCode() const
{
    return m_code;
}

void CreateHttpRequest::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool CreateHttpRequest::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string CreateHttpRequest::GetIp() const
{
    return m_ip;
}

void CreateHttpRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool CreateHttpRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string CreateHttpRequest::GetSsl() const
{
    return m_ssl;
}

void CreateHttpRequest::SetSsl(const string& _ssl)
{
    m_ssl = _ssl;
    m_sslHasBeenSet = true;
}

bool CreateHttpRequest::SslHasBeenSet() const
{
    return m_sslHasBeenSet;
}

string CreateHttpRequest::GetSslExpiredTime() const
{
    return m_sslExpiredTime;
}

void CreateHttpRequest::SetSslExpiredTime(const string& _sslExpiredTime)
{
    m_sslExpiredTime = _sslExpiredTime;
    m_sslExpiredTimeHasBeenSet = true;
}

bool CreateHttpRequest::SslExpiredTimeHasBeenSet() const
{
    return m_sslExpiredTimeHasBeenSet;
}


