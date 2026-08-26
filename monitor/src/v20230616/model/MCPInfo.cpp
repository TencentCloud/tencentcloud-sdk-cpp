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

#include <tencentcloud/monitor/v20230616/model/MCPInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

MCPInfo::MCPInfo() :
    m_mCPIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_transportHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_authSecretHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_retryCountHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome MCPInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MCPId") && !value["MCPId"].IsNull())
    {
        if (!value["MCPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPInfo.MCPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mCPId = string(value["MCPId"].GetString());
        m_mCPIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Transport") && !value["Transport"].IsNull())
    {
        if (!value["Transport"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPInfo.Transport` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transport = string(value["Transport"].GetString());
        m_transportHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPInfo.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("AuthSecret") && !value["AuthSecret"].IsNull())
    {
        if (!value["AuthSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPInfo.AuthSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authSecret = string(value["AuthSecret"].GetString());
        m_authSecretHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MCPInfo.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("RetryCount") && !value["RetryCount"].IsNull())
    {
        if (!value["RetryCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MCPInfo.RetryCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryCount = value["RetryCount"].GetInt64();
        m_retryCountHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPInfo.Headers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headers = string(value["Headers"].GetString());
        m_headersHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MCPInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MCPInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mCPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mCPId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_transportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transport.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_authSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_retryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryCount, allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headers.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

}


string MCPInfo::GetMCPId() const
{
    return m_mCPId;
}

void MCPInfo::SetMCPId(const string& _mCPId)
{
    m_mCPId = _mCPId;
    m_mCPIdHasBeenSet = true;
}

bool MCPInfo::MCPIdHasBeenSet() const
{
    return m_mCPIdHasBeenSet;
}

string MCPInfo::GetName() const
{
    return m_name;
}

void MCPInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MCPInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MCPInfo::GetDescription() const
{
    return m_description;
}

void MCPInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool MCPInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string MCPInfo::GetUrl() const
{
    return m_url;
}

void MCPInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool MCPInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string MCPInfo::GetTransport() const
{
    return m_transport;
}

void MCPInfo::SetTransport(const string& _transport)
{
    m_transport = _transport;
    m_transportHasBeenSet = true;
}

bool MCPInfo::TransportHasBeenSet() const
{
    return m_transportHasBeenSet;
}

string MCPInfo::GetAuthType() const
{
    return m_authType;
}

void MCPInfo::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool MCPInfo::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string MCPInfo::GetAuthSecret() const
{
    return m_authSecret;
}

void MCPInfo::SetAuthSecret(const string& _authSecret)
{
    m_authSecret = _authSecret;
    m_authSecretHasBeenSet = true;
}

bool MCPInfo::AuthSecretHasBeenSet() const
{
    return m_authSecretHasBeenSet;
}

int64_t MCPInfo::GetTimeout() const
{
    return m_timeout;
}

void MCPInfo::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool MCPInfo::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t MCPInfo::GetRetryCount() const
{
    return m_retryCount;
}

void MCPInfo::SetRetryCount(const int64_t& _retryCount)
{
    m_retryCount = _retryCount;
    m_retryCountHasBeenSet = true;
}

bool MCPInfo::RetryCountHasBeenSet() const
{
    return m_retryCountHasBeenSet;
}

string MCPInfo::GetHeaders() const
{
    return m_headers;
}

void MCPInfo::SetHeaders(const string& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool MCPInfo::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

bool MCPInfo::GetEnabled() const
{
    return m_enabled;
}

void MCPInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool MCPInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

