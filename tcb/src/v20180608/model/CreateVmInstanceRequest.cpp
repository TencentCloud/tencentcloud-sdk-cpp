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

#include <tencentcloud/tcb/v20180608/model/CreateVmInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateVmInstanceRequest::CreateVmInstanceRequest() :
    m_envIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_lightHouseBundleIdHasBeenSet(false),
    m_lightHouseBlueprintIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_loginConfigurationHasBeenSet(false)
{
}

string CreateVmInstanceRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_lightHouseBundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LightHouseBundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lightHouseBundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_lightHouseBlueprintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LightHouseBlueprintId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lightHouseBlueprintId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_loginConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVmInstanceRequest::GetEnvId() const
{
    return m_envId;
}

void CreateVmInstanceRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateVmInstanceRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CreateVmInstanceRequest::GetType() const
{
    return m_type;
}

void CreateVmInstanceRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateVmInstanceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateVmInstanceRequest::GetLightHouseBundleId() const
{
    return m_lightHouseBundleId;
}

void CreateVmInstanceRequest::SetLightHouseBundleId(const string& _lightHouseBundleId)
{
    m_lightHouseBundleId = _lightHouseBundleId;
    m_lightHouseBundleIdHasBeenSet = true;
}

bool CreateVmInstanceRequest::LightHouseBundleIdHasBeenSet() const
{
    return m_lightHouseBundleIdHasBeenSet;
}

string CreateVmInstanceRequest::GetLightHouseBlueprintId() const
{
    return m_lightHouseBlueprintId;
}

void CreateVmInstanceRequest::SetLightHouseBlueprintId(const string& _lightHouseBlueprintId)
{
    m_lightHouseBlueprintId = _lightHouseBlueprintId;
    m_lightHouseBlueprintIdHasBeenSet = true;
}

bool CreateVmInstanceRequest::LightHouseBlueprintIdHasBeenSet() const
{
    return m_lightHouseBlueprintIdHasBeenSet;
}

string CreateVmInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateVmInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateVmInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

VMLoginConfiguration CreateVmInstanceRequest::GetLoginConfiguration() const
{
    return m_loginConfiguration;
}

void CreateVmInstanceRequest::SetLoginConfiguration(const VMLoginConfiguration& _loginConfiguration)
{
    m_loginConfiguration = _loginConfiguration;
    m_loginConfigurationHasBeenSet = true;
}

bool CreateVmInstanceRequest::LoginConfigurationHasBeenSet() const
{
    return m_loginConfigurationHasBeenSet;
}


