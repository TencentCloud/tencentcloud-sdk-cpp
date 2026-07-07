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

#include <tencentcloud/clb/v20180317/model/TestServiceProviderConnectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

TestServiceProviderConnectionRequest::TestServiceProviderConnectionRequest() :
    m_modelsHasBeenSet(false),
    m_providerKeyHasBeenSet(false),
    m_providerKeyIdHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_modelProviderHasBeenSet(false),
    m_modelProtocolHasBeenSet(false),
    m_apiBaseHasBeenSet(false),
    m_hostHeaderHasBeenSet(false),
    m_serviceProviderIdHasBeenSet(false),
    m_verifySSLHasBeenSet(false)
{
}

string TestServiceProviderConnectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Models";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_models.begin(); itr != m_models.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_providerKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_providerKey.c_str(), allocator).Move(), allocator);
    }

    if (m_providerKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_providerKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelProvider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelProvider.c_str(), allocator).Move(), allocator);
    }

    if (m_modelProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_apiBaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiBase";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiBase.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostHeader.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceProviderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceProviderId.c_str(), allocator).Move(), allocator);
    }

    if (m_verifySSLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifySSL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_verifySSL, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> TestServiceProviderConnectionRequest::GetModels() const
{
    return m_models;
}

void TestServiceProviderConnectionRequest::SetModels(const vector<string>& _models)
{
    m_models = _models;
    m_modelsHasBeenSet = true;
}

bool TestServiceProviderConnectionRequest::ModelsHasBeenSet() const
{
    return m_modelsHasBeenSet;
}

string TestServiceProviderConnectionRequest::GetProviderKey() const
{
    return m_providerKey;
}

void TestServiceProviderConnectionRequest::SetProviderKey(const string& _providerKey)
{
    m_providerKey = _providerKey;
    m_providerKeyHasBeenSet = true;
}

bool TestServiceProviderConnectionRequest::ProviderKeyHasBeenSet() const
{
    return m_providerKeyHasBeenSet;
}

string TestServiceProviderConnectionRequest::GetProviderKeyId() const
{
    return m_providerKeyId;
}

void TestServiceProviderConnectionRequest::SetProviderKeyId(const string& _providerKeyId)
{
    m_providerKeyId = _providerKeyId;
    m_providerKeyIdHasBeenSet = true;
}

bool TestServiceProviderConnectionRequest::ProviderKeyIdHasBeenSet() const
{
    return m_providerKeyIdHasBeenSet;
}

string TestServiceProviderConnectionRequest::GetAccessType() const
{
    return m_accessType;
}

void TestServiceProviderConnectionRequest::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool TestServiceProviderConnectionRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string TestServiceProviderConnectionRequest::GetModelProvider() const
{
    return m_modelProvider;
}

void TestServiceProviderConnectionRequest::SetModelProvider(const string& _modelProvider)
{
    m_modelProvider = _modelProvider;
    m_modelProviderHasBeenSet = true;
}

bool TestServiceProviderConnectionRequest::ModelProviderHasBeenSet() const
{
    return m_modelProviderHasBeenSet;
}

string TestServiceProviderConnectionRequest::GetModelProtocol() const
{
    return m_modelProtocol;
}

void TestServiceProviderConnectionRequest::SetModelProtocol(const string& _modelProtocol)
{
    m_modelProtocol = _modelProtocol;
    m_modelProtocolHasBeenSet = true;
}

bool TestServiceProviderConnectionRequest::ModelProtocolHasBeenSet() const
{
    return m_modelProtocolHasBeenSet;
}

string TestServiceProviderConnectionRequest::GetApiBase() const
{
    return m_apiBase;
}

void TestServiceProviderConnectionRequest::SetApiBase(const string& _apiBase)
{
    m_apiBase = _apiBase;
    m_apiBaseHasBeenSet = true;
}

bool TestServiceProviderConnectionRequest::ApiBaseHasBeenSet() const
{
    return m_apiBaseHasBeenSet;
}

string TestServiceProviderConnectionRequest::GetHostHeader() const
{
    return m_hostHeader;
}

void TestServiceProviderConnectionRequest::SetHostHeader(const string& _hostHeader)
{
    m_hostHeader = _hostHeader;
    m_hostHeaderHasBeenSet = true;
}

bool TestServiceProviderConnectionRequest::HostHeaderHasBeenSet() const
{
    return m_hostHeaderHasBeenSet;
}

string TestServiceProviderConnectionRequest::GetServiceProviderId() const
{
    return m_serviceProviderId;
}

void TestServiceProviderConnectionRequest::SetServiceProviderId(const string& _serviceProviderId)
{
    m_serviceProviderId = _serviceProviderId;
    m_serviceProviderIdHasBeenSet = true;
}

bool TestServiceProviderConnectionRequest::ServiceProviderIdHasBeenSet() const
{
    return m_serviceProviderIdHasBeenSet;
}

bool TestServiceProviderConnectionRequest::GetVerifySSL() const
{
    return m_verifySSL;
}

void TestServiceProviderConnectionRequest::SetVerifySSL(const bool& _verifySSL)
{
    m_verifySSL = _verifySSL;
    m_verifySSLHasBeenSet = true;
}

bool TestServiceProviderConnectionRequest::VerifySSLHasBeenSet() const
{
    return m_verifySSLHasBeenSet;
}


