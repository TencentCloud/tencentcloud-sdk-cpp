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

#include <tencentcloud/tcb/v20180608/model/UpdateUserKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

UpdateUserKeyRequest::UpdateUserKeyRequest() :
    m_envIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_keyIDHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_authTypeCodeHasBeenSet(false),
    m_extHasBeenSet(false),
    m_businessHasBeenSet(false),
    m_runtimeConfigHasBeenSet(false),
    m_demoCodeFunctionNameHasBeenSet(false)
{
}

string UpdateUserKeyRequest::ToJsonString() const
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


string UpdateUserKeyRequest::GetEnvId() const
{
    return m_envId;
}

void UpdateUserKeyRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool UpdateUserKeyRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string UpdateUserKeyRequest::GetName() const
{
    return m_name;
}

void UpdateUserKeyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateUserKeyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateUserKeyRequest::GetKeyID() const
{
    return m_keyID;
}

void UpdateUserKeyRequest::SetKeyID(const string& _keyID)
{
    m_keyID = _keyID;
    m_keyIDHasBeenSet = true;
}

bool UpdateUserKeyRequest::KeyIDHasBeenSet() const
{
    return m_keyIDHasBeenSet;
}

string UpdateUserKeyRequest::GetDescription() const
{
    return m_description;
}

void UpdateUserKeyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateUserKeyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateUserKeyRequest::GetAuthTypeCode() const
{
    return m_authTypeCode;
}

void UpdateUserKeyRequest::SetAuthTypeCode(const string& _authTypeCode)
{
    m_authTypeCode = _authTypeCode;
    m_authTypeCodeHasBeenSet = true;
}

bool UpdateUserKeyRequest::AuthTypeCodeHasBeenSet() const
{
    return m_authTypeCodeHasBeenSet;
}

string UpdateUserKeyRequest::GetExt() const
{
    return m_ext;
}

void UpdateUserKeyRequest::SetExt(const string& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool UpdateUserKeyRequest::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}

string UpdateUserKeyRequest::GetBusiness() const
{
    return m_business;
}

void UpdateUserKeyRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool UpdateUserKeyRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

AgentRuntimeConfig UpdateUserKeyRequest::GetRuntimeConfig() const
{
    return m_runtimeConfig;
}

void UpdateUserKeyRequest::SetRuntimeConfig(const AgentRuntimeConfig& _runtimeConfig)
{
    m_runtimeConfig = _runtimeConfig;
    m_runtimeConfigHasBeenSet = true;
}

bool UpdateUserKeyRequest::RuntimeConfigHasBeenSet() const
{
    return m_runtimeConfigHasBeenSet;
}

string UpdateUserKeyRequest::GetDemoCodeFunctionName() const
{
    return m_demoCodeFunctionName;
}

void UpdateUserKeyRequest::SetDemoCodeFunctionName(const string& _demoCodeFunctionName)
{
    m_demoCodeFunctionName = _demoCodeFunctionName;
    m_demoCodeFunctionNameHasBeenSet = true;
}

bool UpdateUserKeyRequest::DemoCodeFunctionNameHasBeenSet() const
{
    return m_demoCodeFunctionNameHasBeenSet;
}


