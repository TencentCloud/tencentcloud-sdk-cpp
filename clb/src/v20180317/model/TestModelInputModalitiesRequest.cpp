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

#include <tencentcloud/clb/v20180317/model/TestModelInputModalitiesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

TestModelInputModalitiesRequest::TestModelInputModalitiesRequest() :
    m_modelHasBeenSet(false),
    m_providerKeyHasBeenSet(false),
    m_providerKeyIdHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_modelProtocolHasBeenSet(false),
    m_modelProviderHasBeenSet(false),
    m_apiBaseHasBeenSet(false),
    m_hostHeaderHasBeenSet(false),
    m_serviceProviderIdHasBeenSet(false),
    m_verifySSLHasBeenSet(false)
{
}

string TestModelInputModalitiesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
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


string TestModelInputModalitiesRequest::GetModel() const
{
    return m_model;
}

void TestModelInputModalitiesRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool TestModelInputModalitiesRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string TestModelInputModalitiesRequest::GetProviderKey() const
{
    return m_providerKey;
}

void TestModelInputModalitiesRequest::SetProviderKey(const string& _providerKey)
{
    m_providerKey = _providerKey;
    m_providerKeyHasBeenSet = true;
}

bool TestModelInputModalitiesRequest::ProviderKeyHasBeenSet() const
{
    return m_providerKeyHasBeenSet;
}

string TestModelInputModalitiesRequest::GetProviderKeyId() const
{
    return m_providerKeyId;
}

void TestModelInputModalitiesRequest::SetProviderKeyId(const string& _providerKeyId)
{
    m_providerKeyId = _providerKeyId;
    m_providerKeyIdHasBeenSet = true;
}

bool TestModelInputModalitiesRequest::ProviderKeyIdHasBeenSet() const
{
    return m_providerKeyIdHasBeenSet;
}

string TestModelInputModalitiesRequest::GetAccessType() const
{
    return m_accessType;
}

void TestModelInputModalitiesRequest::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool TestModelInputModalitiesRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string TestModelInputModalitiesRequest::GetModelProtocol() const
{
    return m_modelProtocol;
}

void TestModelInputModalitiesRequest::SetModelProtocol(const string& _modelProtocol)
{
    m_modelProtocol = _modelProtocol;
    m_modelProtocolHasBeenSet = true;
}

bool TestModelInputModalitiesRequest::ModelProtocolHasBeenSet() const
{
    return m_modelProtocolHasBeenSet;
}

string TestModelInputModalitiesRequest::GetModelProvider() const
{
    return m_modelProvider;
}

void TestModelInputModalitiesRequest::SetModelProvider(const string& _modelProvider)
{
    m_modelProvider = _modelProvider;
    m_modelProviderHasBeenSet = true;
}

bool TestModelInputModalitiesRequest::ModelProviderHasBeenSet() const
{
    return m_modelProviderHasBeenSet;
}

string TestModelInputModalitiesRequest::GetApiBase() const
{
    return m_apiBase;
}

void TestModelInputModalitiesRequest::SetApiBase(const string& _apiBase)
{
    m_apiBase = _apiBase;
    m_apiBaseHasBeenSet = true;
}

bool TestModelInputModalitiesRequest::ApiBaseHasBeenSet() const
{
    return m_apiBaseHasBeenSet;
}

string TestModelInputModalitiesRequest::GetHostHeader() const
{
    return m_hostHeader;
}

void TestModelInputModalitiesRequest::SetHostHeader(const string& _hostHeader)
{
    m_hostHeader = _hostHeader;
    m_hostHeaderHasBeenSet = true;
}

bool TestModelInputModalitiesRequest::HostHeaderHasBeenSet() const
{
    return m_hostHeaderHasBeenSet;
}

string TestModelInputModalitiesRequest::GetServiceProviderId() const
{
    return m_serviceProviderId;
}

void TestModelInputModalitiesRequest::SetServiceProviderId(const string& _serviceProviderId)
{
    m_serviceProviderId = _serviceProviderId;
    m_serviceProviderIdHasBeenSet = true;
}

bool TestModelInputModalitiesRequest::ServiceProviderIdHasBeenSet() const
{
    return m_serviceProviderIdHasBeenSet;
}

bool TestModelInputModalitiesRequest::GetVerifySSL() const
{
    return m_verifySSL;
}

void TestModelInputModalitiesRequest::SetVerifySSL(const bool& _verifySSL)
{
    m_verifySSL = _verifySSL;
    m_verifySSLHasBeenSet = true;
}

bool TestModelInputModalitiesRequest::VerifySSLHasBeenSet() const
{
    return m_verifySSLHasBeenSet;
}


