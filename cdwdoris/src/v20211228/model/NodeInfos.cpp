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

#include <tencentcloud/cdwdoris/v20211228/model/NodeInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

NodeInfos::NodeInfos() :
    m_nodeNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_nodeRoleHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_lastRestartTimeHasBeenSet(false)
{
}

CoreInternalOutcome NodeInfos::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfos.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfos.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfos.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("NodeRole") && !value["NodeRole"].IsNull())
    {
        if (!value["NodeRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfos.NodeRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeRole = string(value["NodeRole"].GetString());
        m_nodeRoleHasBeenSet = true;
    }

    if (value.HasMember("ComponentName") && !value["ComponentName"].IsNull())
    {
        if (!value["ComponentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfos.ComponentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentName = string(value["ComponentName"].GetString());
        m_componentNameHasBeenSet = true;
    }

    if (value.HasMember("LastRestartTime") && !value["LastRestartTime"].IsNull())
    {
        if (!value["LastRestartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfos.LastRestartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRestartTime = string(value["LastRestartTime"].GetString());
        m_lastRestartTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeInfos::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeRole.c_str(), allocator).Move(), allocator);
    }

    if (m_componentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastRestartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRestartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRestartTime.c_str(), allocator).Move(), allocator);
    }

}


string NodeInfos::GetNodeName() const
{
    return m_nodeName;
}

void NodeInfos::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool NodeInfos::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

int64_t NodeInfos::GetStatus() const
{
    return m_status;
}

void NodeInfos::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NodeInfos::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NodeInfos::GetIp() const
{
    return m_ip;
}

void NodeInfos::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool NodeInfos::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string NodeInfos::GetNodeRole() const
{
    return m_nodeRole;
}

void NodeInfos::SetNodeRole(const string& _nodeRole)
{
    m_nodeRole = _nodeRole;
    m_nodeRoleHasBeenSet = true;
}

bool NodeInfos::NodeRoleHasBeenSet() const
{
    return m_nodeRoleHasBeenSet;
}

string NodeInfos::GetComponentName() const
{
    return m_componentName;
}

void NodeInfos::SetComponentName(const string& _componentName)
{
    m_componentName = _componentName;
    m_componentNameHasBeenSet = true;
}

bool NodeInfos::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}

string NodeInfos::GetLastRestartTime() const
{
    return m_lastRestartTime;
}

void NodeInfos::SetLastRestartTime(const string& _lastRestartTime)
{
    m_lastRestartTime = _lastRestartTime;
    m_lastRestartTimeHasBeenSet = true;
}

bool NodeInfos::LastRestartTimeHasBeenSet() const
{
    return m_lastRestartTimeHasBeenSet;
}

