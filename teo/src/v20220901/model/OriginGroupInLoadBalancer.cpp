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

#include <tencentcloud/teo/v20220901/model/OriginGroupInLoadBalancer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

OriginGroupInLoadBalancer::OriginGroupInLoadBalancer() :
    m_priorityHasBeenSet(false),
    m_originGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome OriginGroupInLoadBalancer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroupInLoadBalancer.Priority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_priority = string(value["Priority"].GetString());
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("OriginGroupId") && !value["OriginGroupId"].IsNull())
    {
        if (!value["OriginGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroupInLoadBalancer.OriginGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originGroupId = string(value["OriginGroupId"].GetString());
        m_originGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginGroupInLoadBalancer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_priority.c_str(), allocator).Move(), allocator);
    }

    if (m_originGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originGroupId.c_str(), allocator).Move(), allocator);
    }

}


string OriginGroupInLoadBalancer::GetPriority() const
{
    return m_priority;
}

void OriginGroupInLoadBalancer::SetPriority(const string& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool OriginGroupInLoadBalancer::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string OriginGroupInLoadBalancer::GetOriginGroupId() const
{
    return m_originGroupId;
}

void OriginGroupInLoadBalancer::SetOriginGroupId(const string& _originGroupId)
{
    m_originGroupId = _originGroupId;
    m_originGroupIdHasBeenSet = true;
}

bool OriginGroupInLoadBalancer::OriginGroupIdHasBeenSet() const
{
    return m_originGroupIdHasBeenSet;
}

