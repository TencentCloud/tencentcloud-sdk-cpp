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

#include <tencentcloud/eis/v20210601/model/ListDeployableRuntimesMCRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eis::V20210601::Model;
using namespace std;

ListDeployableRuntimesMCRequest::ListDeployableRuntimesMCRequest() :
    m_projectIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_planTypeHasBeenSet(false),
    m_runtimeClassHasBeenSet(false)
{
}

string ListDeployableRuntimesMCRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceId, allocator);
    }

    if (m_planTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_planType, allocator);
    }

    if (m_runtimeClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runtimeClass, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ListDeployableRuntimesMCRequest::GetProjectId() const
{
    return m_projectId;
}

void ListDeployableRuntimesMCRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ListDeployableRuntimesMCRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t ListDeployableRuntimesMCRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ListDeployableRuntimesMCRequest::SetInstanceId(const int64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ListDeployableRuntimesMCRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ListDeployableRuntimesMCRequest::GetPlanType() const
{
    return m_planType;
}

void ListDeployableRuntimesMCRequest::SetPlanType(const int64_t& _planType)
{
    m_planType = _planType;
    m_planTypeHasBeenSet = true;
}

bool ListDeployableRuntimesMCRequest::PlanTypeHasBeenSet() const
{
    return m_planTypeHasBeenSet;
}

int64_t ListDeployableRuntimesMCRequest::GetRuntimeClass() const
{
    return m_runtimeClass;
}

void ListDeployableRuntimesMCRequest::SetRuntimeClass(const int64_t& _runtimeClass)
{
    m_runtimeClass = _runtimeClass;
    m_runtimeClassHasBeenSet = true;
}

bool ListDeployableRuntimesMCRequest::RuntimeClassHasBeenSet() const
{
    return m_runtimeClassHasBeenSet;
}


