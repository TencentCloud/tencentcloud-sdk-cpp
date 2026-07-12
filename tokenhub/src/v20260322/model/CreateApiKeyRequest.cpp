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

#include <tencentcloud/tokenhub/v20260322/model/CreateApiKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

CreateApiKeyRequest::CreateApiKeyRequest() :
    m_apiKeyNameHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_bindTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_bindingsHasBeenSet(false),
    m_ipWhitelistHasBeenSet(false),
    m_quotasHasBeenSet(false)
{
}

string CreateApiKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apiKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiKeyName.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bindType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_bindingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bindings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindings.begin(); itr != m_bindings.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_quotasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quotas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_quotas.begin(); itr != m_quotas.end(); ++itr, ++i)
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


string CreateApiKeyRequest::GetApiKeyName() const
{
    return m_apiKeyName;
}

void CreateApiKeyRequest::SetApiKeyName(const string& _apiKeyName)
{
    m_apiKeyName = _apiKeyName;
    m_apiKeyNameHasBeenSet = true;
}

bool CreateApiKeyRequest::ApiKeyNameHasBeenSet() const
{
    return m_apiKeyNameHasBeenSet;
}

string CreateApiKeyRequest::GetPlatform() const
{
    return m_platform;
}

void CreateApiKeyRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool CreateApiKeyRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string CreateApiKeyRequest::GetBindType() const
{
    return m_bindType;
}

void CreateApiKeyRequest::SetBindType(const string& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool CreateApiKeyRequest::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

string CreateApiKeyRequest::GetRemark() const
{
    return m_remark;
}

void CreateApiKeyRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateApiKeyRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateApiKeyRequest::GetStatus() const
{
    return m_status;
}

void CreateApiKeyRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateApiKeyRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<BindingItem> CreateApiKeyRequest::GetBindings() const
{
    return m_bindings;
}

void CreateApiKeyRequest::SetBindings(const vector<BindingItem>& _bindings)
{
    m_bindings = _bindings;
    m_bindingsHasBeenSet = true;
}

bool CreateApiKeyRequest::BindingsHasBeenSet() const
{
    return m_bindingsHasBeenSet;
}

vector<string> CreateApiKeyRequest::GetIpWhitelist() const
{
    return m_ipWhitelist;
}

void CreateApiKeyRequest::SetIpWhitelist(const vector<string>& _ipWhitelist)
{
    m_ipWhitelist = _ipWhitelist;
    m_ipWhitelistHasBeenSet = true;
}

bool CreateApiKeyRequest::IpWhitelistHasBeenSet() const
{
    return m_ipWhitelistHasBeenSet;
}

vector<QuotaCreateItem> CreateApiKeyRequest::GetQuotas() const
{
    return m_quotas;
}

void CreateApiKeyRequest::SetQuotas(const vector<QuotaCreateItem>& _quotas)
{
    m_quotas = _quotas;
    m_quotasHasBeenSet = true;
}

bool CreateApiKeyRequest::QuotasHasBeenSet() const
{
    return m_quotasHasBeenSet;
}


