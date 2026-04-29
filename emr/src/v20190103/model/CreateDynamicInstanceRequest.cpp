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

#include <tencentcloud/emr/v20190103/model/CreateDynamicInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

CreateDynamicInstanceRequest::CreateDynamicInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_dynamicInstanceTypeHasBeenSet(false),
    m_dynamicInstanceFormHasBeenSet(false),
    m_dynamicInstanceYamlHasBeenSet(false)
{
}

string CreateDynamicInstanceRequest::ToJsonString() const
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


string CreateDynamicInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateDynamicInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateDynamicInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateDynamicInstanceRequest::GetServiceName() const
{
    return m_serviceName;
}

void CreateDynamicInstanceRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool CreateDynamicInstanceRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string CreateDynamicInstanceRequest::GetDynamicInstanceType() const
{
    return m_dynamicInstanceType;
}

void CreateDynamicInstanceRequest::SetDynamicInstanceType(const string& _dynamicInstanceType)
{
    m_dynamicInstanceType = _dynamicInstanceType;
    m_dynamicInstanceTypeHasBeenSet = true;
}

bool CreateDynamicInstanceRequest::DynamicInstanceTypeHasBeenSet() const
{
    return m_dynamicInstanceTypeHasBeenSet;
}

DynamicInstanceForm CreateDynamicInstanceRequest::GetDynamicInstanceForm() const
{
    return m_dynamicInstanceForm;
}

void CreateDynamicInstanceRequest::SetDynamicInstanceForm(const DynamicInstanceForm& _dynamicInstanceForm)
{
    m_dynamicInstanceForm = _dynamicInstanceForm;
    m_dynamicInstanceFormHasBeenSet = true;
}

bool CreateDynamicInstanceRequest::DynamicInstanceFormHasBeenSet() const
{
    return m_dynamicInstanceFormHasBeenSet;
}

string CreateDynamicInstanceRequest::GetDynamicInstanceYaml() const
{
    return m_dynamicInstanceYaml;
}

void CreateDynamicInstanceRequest::SetDynamicInstanceYaml(const string& _dynamicInstanceYaml)
{
    m_dynamicInstanceYaml = _dynamicInstanceYaml;
    m_dynamicInstanceYamlHasBeenSet = true;
}

bool CreateDynamicInstanceRequest::DynamicInstanceYamlHasBeenSet() const
{
    return m_dynamicInstanceYamlHasBeenSet;
}


