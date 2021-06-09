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

#include <tencentcloud/apigateway/v20180808/model/ModifyApiIncrementRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ModifyApiIncrementRequest::ModifyApiIncrementRequest() :
    m_serviceIdHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_businessTypeHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_loginRedirectUrlHasBeenSet(false)
{
}

string ModifyApiIncrementRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_businessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessType.c_str(), allocator).Move(), allocator);
    }

    if (m_publicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_loginRedirectUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginRedirectUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginRedirectUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApiIncrementRequest::GetServiceId() const
{
    return m_serviceId;
}

void ModifyApiIncrementRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ModifyApiIncrementRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string ModifyApiIncrementRequest::GetApiId() const
{
    return m_apiId;
}

void ModifyApiIncrementRequest::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool ModifyApiIncrementRequest::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string ModifyApiIncrementRequest::GetBusinessType() const
{
    return m_businessType;
}

void ModifyApiIncrementRequest::SetBusinessType(const string& _businessType)
{
    m_businessType = _businessType;
    m_businessTypeHasBeenSet = true;
}

bool ModifyApiIncrementRequest::BusinessTypeHasBeenSet() const
{
    return m_businessTypeHasBeenSet;
}

string ModifyApiIncrementRequest::GetPublicKey() const
{
    return m_publicKey;
}

void ModifyApiIncrementRequest::SetPublicKey(const string& _publicKey)
{
    m_publicKey = _publicKey;
    m_publicKeyHasBeenSet = true;
}

bool ModifyApiIncrementRequest::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

string ModifyApiIncrementRequest::GetLoginRedirectUrl() const
{
    return m_loginRedirectUrl;
}

void ModifyApiIncrementRequest::SetLoginRedirectUrl(const string& _loginRedirectUrl)
{
    m_loginRedirectUrl = _loginRedirectUrl;
    m_loginRedirectUrlHasBeenSet = true;
}

bool ModifyApiIncrementRequest::LoginRedirectUrlHasBeenSet() const
{
    return m_loginRedirectUrlHasBeenSet;
}


