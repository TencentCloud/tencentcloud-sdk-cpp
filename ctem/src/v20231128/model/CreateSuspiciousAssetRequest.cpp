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

#include <tencentcloud/ctem/v20231128/model/CreateSuspiciousAssetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

CreateSuspiciousAssetRequest::CreateSuspiciousAssetRequest() :
    m_customerIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_enterpriseUidHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceValueHasBeenSet(false),
    m_trustedHasBeenSet(false)
{
}

string CreateSuspiciousAssetRequest::ToJsonString() const
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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceValue.c_str(), allocator).Move(), allocator);
    }

    if (m_trustedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trusted";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trusted, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateSuspiciousAssetRequest::GetCustomerId() const
{
    return m_customerId;
}

void CreateSuspiciousAssetRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool CreateSuspiciousAssetRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string CreateSuspiciousAssetRequest::GetUrl() const
{
    return m_url;
}

void CreateSuspiciousAssetRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreateSuspiciousAssetRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string CreateSuspiciousAssetRequest::GetEnterpriseUid() const
{
    return m_enterpriseUid;
}

void CreateSuspiciousAssetRequest::SetEnterpriseUid(const string& _enterpriseUid)
{
    m_enterpriseUid = _enterpriseUid;
    m_enterpriseUidHasBeenSet = true;
}

bool CreateSuspiciousAssetRequest::EnterpriseUidHasBeenSet() const
{
    return m_enterpriseUidHasBeenSet;
}

string CreateSuspiciousAssetRequest::GetTitle() const
{
    return m_title;
}

void CreateSuspiciousAssetRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool CreateSuspiciousAssetRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string CreateSuspiciousAssetRequest::GetTags() const
{
    return m_tags;
}

void CreateSuspiciousAssetRequest::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateSuspiciousAssetRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateSuspiciousAssetRequest::GetOwner() const
{
    return m_owner;
}

void CreateSuspiciousAssetRequest::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool CreateSuspiciousAssetRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string CreateSuspiciousAssetRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateSuspiciousAssetRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateSuspiciousAssetRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string CreateSuspiciousAssetRequest::GetSourceValue() const
{
    return m_sourceValue;
}

void CreateSuspiciousAssetRequest::SetSourceValue(const string& _sourceValue)
{
    m_sourceValue = _sourceValue;
    m_sourceValueHasBeenSet = true;
}

bool CreateSuspiciousAssetRequest::SourceValueHasBeenSet() const
{
    return m_sourceValueHasBeenSet;
}

bool CreateSuspiciousAssetRequest::GetTrusted() const
{
    return m_trusted;
}

void CreateSuspiciousAssetRequest::SetTrusted(const bool& _trusted)
{
    m_trusted = _trusted;
    m_trustedHasBeenSet = true;
}

bool CreateSuspiciousAssetRequest::TrustedHasBeenSet() const
{
    return m_trustedHasBeenSet;
}


