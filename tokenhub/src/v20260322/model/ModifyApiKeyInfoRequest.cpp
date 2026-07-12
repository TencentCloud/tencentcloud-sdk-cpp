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

#include <tencentcloud/tokenhub/v20260322/model/ModifyApiKeyInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

ModifyApiKeyInfoRequest::ModifyApiKeyInfoRequest() :
    m_apiKeyIdHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_apiKeyNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_ipWhitelistHasBeenSet(false),
    m_quotasDesiredHasBeenSet(false)
{
}

string ModifyApiKeyInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apiKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiKeyName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_ipWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhitelist";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipWhitelist.begin(); itr != m_ipWhitelist.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_quotasDesiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotasDesired";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_quotasDesired.begin(); itr != m_quotasDesired.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApiKeyInfoRequest::GetApiKeyId() const
{
    return m_apiKeyId;
}

void ModifyApiKeyInfoRequest::SetApiKeyId(const string& _apiKeyId)
{
    m_apiKeyId = _apiKeyId;
    m_apiKeyIdHasBeenSet = true;
}

bool ModifyApiKeyInfoRequest::ApiKeyIdHasBeenSet() const
{
    return m_apiKeyIdHasBeenSet;
}

string ModifyApiKeyInfoRequest::GetPlatform() const
{
    return m_platform;
}

void ModifyApiKeyInfoRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ModifyApiKeyInfoRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string ModifyApiKeyInfoRequest::GetApiKeyName() const
{
    return m_apiKeyName;
}

void ModifyApiKeyInfoRequest::SetApiKeyName(const string& _apiKeyName)
{
    m_apiKeyName = _apiKeyName;
    m_apiKeyNameHasBeenSet = true;
}

bool ModifyApiKeyInfoRequest::ApiKeyNameHasBeenSet() const
{
    return m_apiKeyNameHasBeenSet;
}

string ModifyApiKeyInfoRequest::GetRemark() const
{
    return m_remark;
}

void ModifyApiKeyInfoRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyApiKeyInfoRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<string> ModifyApiKeyInfoRequest::GetIpWhitelist() const
{
    return m_ipWhitelist;
}

void ModifyApiKeyInfoRequest::SetIpWhitelist(const vector<string>& _ipWhitelist)
{
    m_ipWhitelist = _ipWhitelist;
    m_ipWhitelistHasBeenSet = true;
}

bool ModifyApiKeyInfoRequest::IpWhitelistHasBeenSet() const
{
    return m_ipWhitelistHasBeenSet;
}

vector<QuotasDesired> ModifyApiKeyInfoRequest::GetQuotasDesired() const
{
    return m_quotasDesired;
}

void ModifyApiKeyInfoRequest::SetQuotasDesired(const vector<QuotasDesired>& _quotasDesired)
{
    m_quotasDesired = _quotasDesired;
    m_quotasDesiredHasBeenSet = true;
}

bool ModifyApiKeyInfoRequest::QuotasDesiredHasBeenSet() const
{
    return m_quotasDesiredHasBeenSet;
}


