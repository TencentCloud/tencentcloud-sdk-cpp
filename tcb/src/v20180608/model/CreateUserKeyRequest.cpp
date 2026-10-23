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

#include <tencentcloud/tcb/v20180608/model/CreateUserKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateUserKeyRequest::CreateUserKeyRequest() :
    m_envIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_keyIDHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_authTypeCodeHasBeenSet(false),
    m_extHasBeenSet(false),
    m_ticketIDHasBeenSet(false),
    m_businessHasBeenSet(false),
    m_runtimeConfigHasBeenSet(false),
    m_demoCodeFunctionNameHasBeenSet(false)
{
}

string CreateUserKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyID.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthTypeCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authTypeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_extHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ext.c_str(), allocator).Move(), allocator);
    }

    if (m_ticketIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ticketID.c_str(), allocator).Move(), allocator);
    }

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_runtimeConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_demoCodeFunctionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DemoCodeFunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_demoCodeFunctionName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUserKeyRequest::GetEnvId() const
{
    return m_envId;
}

void CreateUserKeyRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateUserKeyRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CreateUserKeyRequest::GetName() const
{
    return m_name;
}

void CreateUserKeyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateUserKeyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateUserKeyRequest::GetKeyID() const
{
    return m_keyID;
}

void CreateUserKeyRequest::SetKeyID(const string& _keyID)
{
    m_keyID = _keyID;
    m_keyIDHasBeenSet = true;
}

bool CreateUserKeyRequest::KeyIDHasBeenSet() const
{
    return m_keyIDHasBeenSet;
}

string CreateUserKeyRequest::GetDescription() const
{
    return m_description;
}

void CreateUserKeyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateUserKeyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateUserKeyRequest::GetAuthTypeCode() const
{
    return m_authTypeCode;
}

void CreateUserKeyRequest::SetAuthTypeCode(const string& _authTypeCode)
{
    m_authTypeCode = _authTypeCode;
    m_authTypeCodeHasBeenSet = true;
}

bool CreateUserKeyRequest::AuthTypeCodeHasBeenSet() const
{
    return m_authTypeCodeHasBeenSet;
}

string CreateUserKeyRequest::GetExt() const
{
    return m_ext;
}

void CreateUserKeyRequest::SetExt(const string& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool CreateUserKeyRequest::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}

string CreateUserKeyRequest::GetTicketID() const
{
    return m_ticketID;
}

void CreateUserKeyRequest::SetTicketID(const string& _ticketID)
{
    m_ticketID = _ticketID;
    m_ticketIDHasBeenSet = true;
}

bool CreateUserKeyRequest::TicketIDHasBeenSet() const
{
    return m_ticketIDHasBeenSet;
}

string CreateUserKeyRequest::GetBusiness() const
{
    return m_business;
}

void CreateUserKeyRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool CreateUserKeyRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

AgentRuntimeConfig CreateUserKeyRequest::GetRuntimeConfig() const
{
    return m_runtimeConfig;
}

void CreateUserKeyRequest::SetRuntimeConfig(const AgentRuntimeConfig& _runtimeConfig)
{
    m_runtimeConfig = _runtimeConfig;
    m_runtimeConfigHasBeenSet = true;
}

bool CreateUserKeyRequest::RuntimeConfigHasBeenSet() const
{
    return m_runtimeConfigHasBeenSet;
}

string CreateUserKeyRequest::GetDemoCodeFunctionName() const
{
    return m_demoCodeFunctionName;
}

void CreateUserKeyRequest::SetDemoCodeFunctionName(const string& _demoCodeFunctionName)
{
    m_demoCodeFunctionName = _demoCodeFunctionName;
    m_demoCodeFunctionNameHasBeenSet = true;
}

bool CreateUserKeyRequest::DemoCodeFunctionNameHasBeenSet() const
{
    return m_demoCodeFunctionNameHasBeenSet;
}


