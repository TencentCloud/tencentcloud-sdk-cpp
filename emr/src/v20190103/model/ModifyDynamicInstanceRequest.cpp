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

#include <tencentcloud/emr/v20190103/model/ModifyDynamicInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyDynamicInstanceRequest::ModifyDynamicInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_dynamicInstanceTypeHasBeenSet(false),
    m_dynamicInstanceIdHasBeenSet(false),
    m_dynamicInstanceFormHasBeenSet(false),
    m_dynamicInstanceYamlHasBeenSet(false)
{
}

string ModifyDynamicInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dynamicInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicInstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dynamicInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_dynamicInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dynamicInstanceId, allocator);
    }

    if (m_dynamicInstanceFormHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicInstanceForm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dynamicInstanceForm.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dynamicInstanceYamlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicInstanceYaml";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dynamicInstanceYaml.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDynamicInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDynamicInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDynamicInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDynamicInstanceRequest::GetServiceName() const
{
    return m_serviceName;
}

void ModifyDynamicInstanceRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ModifyDynamicInstanceRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string ModifyDynamicInstanceRequest::GetDynamicInstanceType() const
{
    return m_dynamicInstanceType;
}

void ModifyDynamicInstanceRequest::SetDynamicInstanceType(const string& _dynamicInstanceType)
{
    m_dynamicInstanceType = _dynamicInstanceType;
    m_dynamicInstanceTypeHasBeenSet = true;
}

bool ModifyDynamicInstanceRequest::DynamicInstanceTypeHasBeenSet() const
{
    return m_dynamicInstanceTypeHasBeenSet;
}

uint64_t ModifyDynamicInstanceRequest::GetDynamicInstanceId() const
{
    return m_dynamicInstanceId;
}

void ModifyDynamicInstanceRequest::SetDynamicInstanceId(const uint64_t& _dynamicInstanceId)
{
    m_dynamicInstanceId = _dynamicInstanceId;
    m_dynamicInstanceIdHasBeenSet = true;
}

bool ModifyDynamicInstanceRequest::DynamicInstanceIdHasBeenSet() const
{
    return m_dynamicInstanceIdHasBeenSet;
}

ModifyDynamicInstanceForm ModifyDynamicInstanceRequest::GetDynamicInstanceForm() const
{
    return m_dynamicInstanceForm;
}

void ModifyDynamicInstanceRequest::SetDynamicInstanceForm(const ModifyDynamicInstanceForm& _dynamicInstanceForm)
{
    m_dynamicInstanceForm = _dynamicInstanceForm;
    m_dynamicInstanceFormHasBeenSet = true;
}

bool ModifyDynamicInstanceRequest::DynamicInstanceFormHasBeenSet() const
{
    return m_dynamicInstanceFormHasBeenSet;
}

string ModifyDynamicInstanceRequest::GetDynamicInstanceYaml() const
{
    return m_dynamicInstanceYaml;
}

void ModifyDynamicInstanceRequest::SetDynamicInstanceYaml(const string& _dynamicInstanceYaml)
{
    m_dynamicInstanceYaml = _dynamicInstanceYaml;
    m_dynamicInstanceYamlHasBeenSet = true;
}

bool ModifyDynamicInstanceRequest::DynamicInstanceYamlHasBeenSet() const
{
    return m_dynamicInstanceYamlHasBeenSet;
}


