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

#include <tencentcloud/iecp/v20210914/model/NodeUnitNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

NodeUnitNodeInfo::NodeUnitNodeInfo() :
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_internalIPHasBeenSet(false)
{
}

CoreInternalOutcome NodeUnitNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUnitNodeInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUnitNodeInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUnitNodeInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("InternalIP") && !value["InternalIP"].IsNull())
    {
        if (!value["InternalIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUnitNodeInfo.InternalIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalIP = string(value["InternalIP"].GetString());
        m_internalIPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeUnitNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_internalIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalIP.c_str(), allocator).Move(), allocator);
    }

}


uint64_t NodeUnitNodeInfo::GetId() const
{
    return m_id;
}

void NodeUnitNodeInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NodeUnitNodeInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string NodeUnitNodeInfo::GetStatus() const
{
    return m_status;
}

void NodeUnitNodeInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NodeUnitNodeInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NodeUnitNodeInfo::GetNodeName() const
{
    return m_nodeName;
}

void NodeUnitNodeInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool NodeUnitNodeInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string NodeUnitNodeInfo::GetInternalIP() const
{
    return m_internalIP;
}

void NodeUnitNodeInfo::SetInternalIP(const string& _internalIP)
{
    m_internalIP = _internalIP;
    m_internalIPHasBeenSet = true;
}

bool NodeUnitNodeInfo::InternalIPHasBeenSet() const
{
    return m_internalIPHasBeenSet;
}

