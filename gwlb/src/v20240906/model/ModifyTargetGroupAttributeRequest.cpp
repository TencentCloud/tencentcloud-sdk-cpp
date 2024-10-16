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

#include <tencentcloud/gwlb/v20240906/model/ModifyTargetGroupAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

ModifyTargetGroupAttributeRequest::ModifyTargetGroupAttributeRequest() :
    m_targetGroupIdHasBeenSet(false),
    m_targetGroupNameHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_allDeadToAliveHasBeenSet(false)
{
}

string ModifyTargetGroupAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_allDeadToAliveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllDeadToAlive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allDeadToAlive, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTargetGroupAttributeRequest::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void ModifyTargetGroupAttributeRequest::SetTargetGroupId(const string& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

string ModifyTargetGroupAttributeRequest::GetTargetGroupName() const
{
    return m_targetGroupName;
}

void ModifyTargetGroupAttributeRequest::SetTargetGroupName(const string& _targetGroupName)
{
    m_targetGroupName = _targetGroupName;
    m_targetGroupNameHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::TargetGroupNameHasBeenSet() const
{
    return m_targetGroupNameHasBeenSet;
}

TargetGroupHealthCheck ModifyTargetGroupAttributeRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void ModifyTargetGroupAttributeRequest::SetHealthCheck(const TargetGroupHealthCheck& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

bool ModifyTargetGroupAttributeRequest::GetAllDeadToAlive() const
{
    return m_allDeadToAlive;
}

void ModifyTargetGroupAttributeRequest::SetAllDeadToAlive(const bool& _allDeadToAlive)
{
    m_allDeadToAlive = _allDeadToAlive;
    m_allDeadToAliveHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::AllDeadToAliveHasBeenSet() const
{
    return m_allDeadToAliveHasBeenSet;
}


