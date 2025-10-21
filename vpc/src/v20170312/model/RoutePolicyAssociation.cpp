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

#include <tencentcloud/vpc/v20170312/model/RoutePolicyAssociation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

RoutePolicyAssociation::RoutePolicyAssociation() :
    m_routeTableIdHasBeenSet(false),
    m_routePolicyIdHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

CoreInternalOutcome RoutePolicyAssociation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteTableId") && !value["RouteTableId"].IsNull())
    {
        if (!value["RouteTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicyAssociation.RouteTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableId = string(value["RouteTableId"].GetString());
        m_routeTableIdHasBeenSet = true;
    }

    if (value.HasMember("RoutePolicyId") && !value["RoutePolicyId"].IsNull())
    {
        if (!value["RoutePolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicyAssociation.RoutePolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routePolicyId = string(value["RoutePolicyId"].GetString());
        m_routePolicyIdHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicyAssociation.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoutePolicyAssociation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_routePolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routePolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

}


string RoutePolicyAssociation::GetRouteTableId() const
{
    return m_routeTableId;
}

void RoutePolicyAssociation::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool RoutePolicyAssociation::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

string RoutePolicyAssociation::GetRoutePolicyId() const
{
    return m_routePolicyId;
}

void RoutePolicyAssociation::SetRoutePolicyId(const string& _routePolicyId)
{
    m_routePolicyId = _routePolicyId;
    m_routePolicyIdHasBeenSet = true;
}

bool RoutePolicyAssociation::RoutePolicyIdHasBeenSet() const
{
    return m_routePolicyIdHasBeenSet;
}

uint64_t RoutePolicyAssociation::GetPriority() const
{
    return m_priority;
}

void RoutePolicyAssociation::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool RoutePolicyAssociation::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

