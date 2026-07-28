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

#include <tencentcloud/postgres/v20170312/model/ProxyRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ProxyRoute::ProxyRoute() :
    m_nodeIdHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ProxyRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyRoute.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyRoute.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyRoute.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyRoute.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string ProxyRoute::GetNodeId() const
{
    return m_nodeId;
}

void ProxyRoute::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool ProxyRoute::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string ProxyRoute::GetRole() const
{
    return m_role;
}

void ProxyRoute::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool ProxyRoute::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

int64_t ProxyRoute::GetWeight() const
{
    return m_weight;
}

void ProxyRoute::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool ProxyRoute::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string ProxyRoute::GetStatus() const
{
    return m_status;
}

void ProxyRoute::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProxyRoute::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

