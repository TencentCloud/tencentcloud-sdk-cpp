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

#include <tencentcloud/dbdc/v20201029/model/DBCustomClusterNodeResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

DBCustomClusterNodeResource::DBCustomClusterNodeResource() :
    m_nodeIdHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_allocatableHasBeenSet(false),
    m_requestsHasBeenSet(false),
    m_limitsHasBeenSet(false),
    m_availableHasBeenSet(false)
{
}

CoreInternalOutcome DBCustomClusterNodeResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomClusterNodeResource.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("Capacity") && !value["Capacity"].IsNull())
    {
        if (!value["Capacity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomClusterNodeResource.Capacity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_capacity.Deserialize(value["Capacity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_capacityHasBeenSet = true;
    }

    if (value.HasMember("Allocatable") && !value["Allocatable"].IsNull())
    {
        if (!value["Allocatable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomClusterNodeResource.Allocatable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_allocatable.Deserialize(value["Allocatable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_allocatableHasBeenSet = true;
    }

    if (value.HasMember("Requests") && !value["Requests"].IsNull())
    {
        if (!value["Requests"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomClusterNodeResource.Requests` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_requests.Deserialize(value["Requests"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_requestsHasBeenSet = true;
    }

    if (value.HasMember("Limits") && !value["Limits"].IsNull())
    {
        if (!value["Limits"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomClusterNodeResource.Limits` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_limits.Deserialize(value["Limits"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_limitsHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomClusterNodeResource.Available` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_available.Deserialize(value["Available"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_availableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBCustomClusterNodeResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_capacity.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_allocatableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Allocatable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_allocatable.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_requestsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Requests";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_requests.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_limitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limits.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_available.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DBCustomClusterNodeResource::GetNodeId() const
{
    return m_nodeId;
}

void DBCustomClusterNodeResource::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool DBCustomClusterNodeResource::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

MetaResource DBCustomClusterNodeResource::GetCapacity() const
{
    return m_capacity;
}

void DBCustomClusterNodeResource::SetCapacity(const MetaResource& _capacity)
{
    m_capacity = _capacity;
    m_capacityHasBeenSet = true;
}

bool DBCustomClusterNodeResource::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}

MetaResource DBCustomClusterNodeResource::GetAllocatable() const
{
    return m_allocatable;
}

void DBCustomClusterNodeResource::SetAllocatable(const MetaResource& _allocatable)
{
    m_allocatable = _allocatable;
    m_allocatableHasBeenSet = true;
}

bool DBCustomClusterNodeResource::AllocatableHasBeenSet() const
{
    return m_allocatableHasBeenSet;
}

MetaResource DBCustomClusterNodeResource::GetRequests() const
{
    return m_requests;
}

void DBCustomClusterNodeResource::SetRequests(const MetaResource& _requests)
{
    m_requests = _requests;
    m_requestsHasBeenSet = true;
}

bool DBCustomClusterNodeResource::RequestsHasBeenSet() const
{
    return m_requestsHasBeenSet;
}

MetaResource DBCustomClusterNodeResource::GetLimits() const
{
    return m_limits;
}

void DBCustomClusterNodeResource::SetLimits(const MetaResource& _limits)
{
    m_limits = _limits;
    m_limitsHasBeenSet = true;
}

bool DBCustomClusterNodeResource::LimitsHasBeenSet() const
{
    return m_limitsHasBeenSet;
}

MetaResource DBCustomClusterNodeResource::GetAvailable() const
{
    return m_available;
}

void DBCustomClusterNodeResource::SetAvailable(const MetaResource& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool DBCustomClusterNodeResource::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

