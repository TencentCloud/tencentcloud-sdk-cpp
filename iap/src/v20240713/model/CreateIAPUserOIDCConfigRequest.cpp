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

#include <tencentcloud/iap/v20240713/model/CreateIAPUserOIDCConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iap::V20240713::Model;
using namespace std;

CreateIAPUserOIDCConfigRequest::CreateIAPUserOIDCConfigRequest() :
    m_identityUrlHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_authorizationEndpointHasBeenSet(false),
    m_responseTypeHasBeenSet(false),
    m_responseModeHasBeenSet(false),
    m_mappingFiledHasBeenSet(false),
    m_identityKeyHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateIAPUserOIDCConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_identityUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_identityUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationEndpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authorizationEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_responseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_responseType.c_str(), allocator).Move(), allocator);
    }

    if (m_responseModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_responseMode.c_str(), allocator).Move(), allocator);
    }

    if (m_mappingFiledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MappingFiled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mappingFiled.c_str(), allocator).Move(), allocator);
    }

    if (m_identityKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_identityKey.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scope.begin(); itr != m_scope.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateIAPUserOIDCConfigRequest::GetIdentityUrl() const
{
    return m_identityUrl;
}

void CreateIAPUserOIDCConfigRequest::SetIdentityUrl(const string& _identityUrl)
{
    m_identityUrl = _identityUrl;
    m_identityUrlHasBeenSet = true;
}

bool CreateIAPUserOIDCConfigRequest::IdentityUrlHasBeenSet() const
{
    return m_identityUrlHasBeenSet;
}

string CreateIAPUserOIDCConfigRequest::GetClientId() const
{
    return m_clientId;
}

void CreateIAPUserOIDCConfigRequest::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool CreateIAPUserOIDCConfigRequest::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string CreateIAPUserOIDCConfigRequest::GetAuthorizationEndpoint() const
{
    return m_authorizationEndpoint;
}

void CreateIAPUserOIDCConfigRequest::SetAuthorizationEndpoint(const string& _authorizationEndpoint)
{
    m_authorizationEndpoint = _authorizationEndpoint;
    m_authorizationEndpointHasBeenSet = true;
}

bool CreateIAPUserOIDCConfigRequest::AuthorizationEndpointHasBeenSet() const
{
    return m_authorizationEndpointHasBeenSet;
}

string CreateIAPUserOIDCConfigRequest::GetResponseType() const
{
    return m_responseType;
}

void CreateIAPUserOIDCConfigRequest::SetResponseType(const string& _responseType)
{
    m_responseType = _responseType;
    m_responseTypeHasBeenSet = true;
}

bool CreateIAPUserOIDCConfigRequest::ResponseTypeHasBeenSet() const
{
    return m_responseTypeHasBeenSet;
}

string CreateIAPUserOIDCConfigRequest::GetResponseMode() const
{
    return m_responseMode;
}

void CreateIAPUserOIDCConfigRequest::SetResponseMode(const string& _responseMode)
{
    m_responseMode = _responseMode;
    m_responseModeHasBeenSet = true;
}

bool CreateIAPUserOIDCConfigRequest::ResponseModeHasBeenSet() const
{
    return m_responseModeHasBeenSet;
}

string CreateIAPUserOIDCConfigRequest::GetMappingFiled() const
{
    return m_mappingFiled;
}

void CreateIAPUserOIDCConfigRequest::SetMappingFiled(const string& _mappingFiled)
{
    m_mappingFiled = _mappingFiled;
    m_mappingFiledHasBeenSet = true;
}

bool CreateIAPUserOIDCConfigRequest::MappingFiledHasBeenSet() const
{
    return m_mappingFiledHasBeenSet;
}

string CreateIAPUserOIDCConfigRequest::GetIdentityKey() const
{
    return m_identityKey;
}

void CreateIAPUserOIDCConfigRequest::SetIdentityKey(const string& _identityKey)
{
    m_identityKey = _identityKey;
    m_identityKeyHasBeenSet = true;
}

bool CreateIAPUserOIDCConfigRequest::IdentityKeyHasBeenSet() const
{
    return m_identityKeyHasBeenSet;
}

vector<string> CreateIAPUserOIDCConfigRequest::GetScope() const
{
    return m_scope;
}

void CreateIAPUserOIDCConfigRequest::SetScope(const vector<string>& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool CreateIAPUserOIDCConfigRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string CreateIAPUserOIDCConfigRequest::GetDescription() const
{
    return m_description;
}

void CreateIAPUserOIDCConfigRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateIAPUserOIDCConfigRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


