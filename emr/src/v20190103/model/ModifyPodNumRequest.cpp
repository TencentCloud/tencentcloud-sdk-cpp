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

#include <tencentcloud/emr/v20190103/model/ModifyPodNumRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyPodNumRequest::ModifyPodNumRequest() :
    m_instanceIdHasBeenSet(false),
    m_serviceGroupHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_podNumHasBeenSet(false)
{
}

string ModifyPodNumRequest::ToJsonString() const
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

    if (m_serviceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceGroup, allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceType, allocator);
    }

    if (m_podNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_podNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPodNumRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyPodNumRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyPodNumRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyPodNumRequest::GetServiceGroup() const
{
    return m_serviceGroup;
}

void ModifyPodNumRequest::SetServiceGroup(const int64_t& _serviceGroup)
{
    m_serviceGroup = _serviceGroup;
    m_serviceGroupHasBeenSet = true;
}

bool ModifyPodNumRequest::ServiceGroupHasBeenSet() const
{
    return m_serviceGroupHasBeenSet;
}

int64_t ModifyPodNumRequest::GetServiceType() const
{
    return m_serviceType;
}

void ModifyPodNumRequest::SetServiceType(const int64_t& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ModifyPodNumRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

int64_t ModifyPodNumRequest::GetPodNum() const
{
    return m_podNum;
}

void ModifyPodNumRequest::SetPodNum(const int64_t& _podNum)
{
    m_podNum = _podNum;
    m_podNumHasBeenSet = true;
}

bool ModifyPodNumRequest::PodNumHasBeenSet() const
{
    return m_podNumHasBeenSet;
}


