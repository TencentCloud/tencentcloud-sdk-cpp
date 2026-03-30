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

#include <tencentcloud/tse/v20201207/model/CreateOrModifyCloudNativeAPIGatewayCORSRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateOrModifyCloudNativeAPIGatewayCORSRequest::CreateOrModifyCloudNativeAPIGatewayCORSRequest() :
    m_gatewayIdHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_originsHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_methodsHasBeenSet(false),
    m_exposedHeadersHasBeenSet(false),
    m_maxAgeHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_preFlightContinueHasBeenSet(false)
{
}

string CreateOrModifyCloudNativeAPIGatewayCORSRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }

    if (m_originsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_origins.begin(); itr != m_origins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_methodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Methods";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_methods.begin(); itr != m_methods.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exposedHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExposedHeaders";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_exposedHeaders.begin(); itr != m_exposedHeaders.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxAge, allocator);
    }

    if (m_credentialsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credentials";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_credentials, allocator);
    }

    if (m_preFlightContinueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreFlightContinue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_preFlightContinue, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateOrModifyCloudNativeAPIGatewayCORSRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateOrModifyCloudNativeAPIGatewayCORSRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayCORSRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateOrModifyCloudNativeAPIGatewayCORSRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateOrModifyCloudNativeAPIGatewayCORSRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayCORSRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string CreateOrModifyCloudNativeAPIGatewayCORSRequest::GetSourceId() const
{
    return m_sourceId;
}

void CreateOrModifyCloudNativeAPIGatewayCORSRequest::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayCORSRequest::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

bool CreateOrModifyCloudNativeAPIGatewayCORSRequest::GetEnabled() const
{
    return m_enabled;
}

void CreateOrModifyCloudNativeAPIGatewayCORSRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayCORSRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<string> CreateOrModifyCloudNativeAPIGatewayCORSRequest::GetOrigins() const
{
    return m_origins;
}

void CreateOrModifyCloudNativeAPIGatewayCORSRequest::SetOrigins(const vector<string>& _origins)
{
    m_origins = _origins;
    m_originsHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayCORSRequest::OriginsHasBeenSet() const
{
    return m_originsHasBeenSet;
}

vector<string> CreateOrModifyCloudNativeAPIGatewayCORSRequest::GetHeaders() const
{
    return m_headers;
}

void CreateOrModifyCloudNativeAPIGatewayCORSRequest::SetHeaders(const vector<string>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayCORSRequest::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

vector<string> CreateOrModifyCloudNativeAPIGatewayCORSRequest::GetMethods() const
{
    return m_methods;
}

void CreateOrModifyCloudNativeAPIGatewayCORSRequest::SetMethods(const vector<string>& _methods)
{
    m_methods = _methods;
    m_methodsHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayCORSRequest::MethodsHasBeenSet() const
{
    return m_methodsHasBeenSet;
}

vector<string> CreateOrModifyCloudNativeAPIGatewayCORSRequest::GetExposedHeaders() const
{
    return m_exposedHeaders;
}

void CreateOrModifyCloudNativeAPIGatewayCORSRequest::SetExposedHeaders(const vector<string>& _exposedHeaders)
{
    m_exposedHeaders = _exposedHeaders;
    m_exposedHeadersHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayCORSRequest::ExposedHeadersHasBeenSet() const
{
    return m_exposedHeadersHasBeenSet;
}

int64_t CreateOrModifyCloudNativeAPIGatewayCORSRequest::GetMaxAge() const
{
    return m_maxAge;
}

void CreateOrModifyCloudNativeAPIGatewayCORSRequest::SetMaxAge(const int64_t& _maxAge)
{
    m_maxAge = _maxAge;
    m_maxAgeHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayCORSRequest::MaxAgeHasBeenSet() const
{
    return m_maxAgeHasBeenSet;
}

bool CreateOrModifyCloudNativeAPIGatewayCORSRequest::GetCredentials() const
{
    return m_credentials;
}

void CreateOrModifyCloudNativeAPIGatewayCORSRequest::SetCredentials(const bool& _credentials)
{
    m_credentials = _credentials;
    m_credentialsHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayCORSRequest::CredentialsHasBeenSet() const
{
    return m_credentialsHasBeenSet;
}

bool CreateOrModifyCloudNativeAPIGatewayCORSRequest::GetPreFlightContinue() const
{
    return m_preFlightContinue;
}

void CreateOrModifyCloudNativeAPIGatewayCORSRequest::SetPreFlightContinue(const bool& _preFlightContinue)
{
    m_preFlightContinue = _preFlightContinue;
    m_preFlightContinueHasBeenSet = true;
}

bool CreateOrModifyCloudNativeAPIGatewayCORSRequest::PreFlightContinueHasBeenSet() const
{
    return m_preFlightContinueHasBeenSet;
}


