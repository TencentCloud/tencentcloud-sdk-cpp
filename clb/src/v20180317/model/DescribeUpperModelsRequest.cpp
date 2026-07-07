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

#include <tencentcloud/clb/v20180317/model/DescribeUpperModelsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DescribeUpperModelsRequest::DescribeUpperModelsRequest() :
    m_accessTypeHasBeenSet(false),
    m_apiBaseHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_hostHeaderHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_modelPathHasBeenSet(false),
    m_modelProtocolHasBeenSet(false),
    m_modelProviderHasBeenSet(false),
    m_serviceProviderIdHasBeenSet(false)
{
}

string DescribeUpperModelsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_apiBaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiBase";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiBase.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostHeader.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelPath.c_str(), allocator).Move(), allocator);
    }

    if (m_modelProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_modelProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelProvider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelProvider.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceProviderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceProviderId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUpperModelsRequest::GetAccessType() const
{
    return m_accessType;
}

void DescribeUpperModelsRequest::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool DescribeUpperModelsRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string DescribeUpperModelsRequest::GetApiBase() const
{
    return m_apiBase;
}

void DescribeUpperModelsRequest::SetApiBase(const string& _apiBase)
{
    m_apiBase = _apiBase;
    m_apiBaseHasBeenSet = true;
}

bool DescribeUpperModelsRequest::ApiBaseHasBeenSet() const
{
    return m_apiBaseHasBeenSet;
}

string DescribeUpperModelsRequest::GetApiKey() const
{
    return m_apiKey;
}

void DescribeUpperModelsRequest::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool DescribeUpperModelsRequest::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

string DescribeUpperModelsRequest::GetHostHeader() const
{
    return m_hostHeader;
}

void DescribeUpperModelsRequest::SetHostHeader(const string& _hostHeader)
{
    m_hostHeader = _hostHeader;
    m_hostHeaderHasBeenSet = true;
}

bool DescribeUpperModelsRequest::HostHeaderHasBeenSet() const
{
    return m_hostHeaderHasBeenSet;
}

string DescribeUpperModelsRequest::GetKeyId() const
{
    return m_keyId;
}

void DescribeUpperModelsRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool DescribeUpperModelsRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string DescribeUpperModelsRequest::GetModelPath() const
{
    return m_modelPath;
}

void DescribeUpperModelsRequest::SetModelPath(const string& _modelPath)
{
    m_modelPath = _modelPath;
    m_modelPathHasBeenSet = true;
}

bool DescribeUpperModelsRequest::ModelPathHasBeenSet() const
{
    return m_modelPathHasBeenSet;
}

string DescribeUpperModelsRequest::GetModelProtocol() const
{
    return m_modelProtocol;
}

void DescribeUpperModelsRequest::SetModelProtocol(const string& _modelProtocol)
{
    m_modelProtocol = _modelProtocol;
    m_modelProtocolHasBeenSet = true;
}

bool DescribeUpperModelsRequest::ModelProtocolHasBeenSet() const
{
    return m_modelProtocolHasBeenSet;
}

string DescribeUpperModelsRequest::GetModelProvider() const
{
    return m_modelProvider;
}

void DescribeUpperModelsRequest::SetModelProvider(const string& _modelProvider)
{
    m_modelProvider = _modelProvider;
    m_modelProviderHasBeenSet = true;
}

bool DescribeUpperModelsRequest::ModelProviderHasBeenSet() const
{
    return m_modelProviderHasBeenSet;
}

string DescribeUpperModelsRequest::GetServiceProviderId() const
{
    return m_serviceProviderId;
}

void DescribeUpperModelsRequest::SetServiceProviderId(const string& _serviceProviderId)
{
    m_serviceProviderId = _serviceProviderId;
    m_serviceProviderIdHasBeenSet = true;
}

bool DescribeUpperModelsRequest::ServiceProviderIdHasBeenSet() const
{
    return m_serviceProviderIdHasBeenSet;
}


