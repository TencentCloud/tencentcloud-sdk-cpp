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

#include <tencentcloud/cdwdoris/v20211228/model/NodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

NodeInfo::NodeInfo() :
    m_ipHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_nodeRoleHasBeenSet(false),
    m_lastRestartTimeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_idHasBeenSet(false),
    m_rIpHasBeenSet(false),
    m_computeGroupIdHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome NodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("ComponentName") && !value["ComponentName"].IsNull())
    {
        if (!value["ComponentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.ComponentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentName = string(value["ComponentName"].GetString());
        m_componentNameHasBeenSet = true;
    }

    if (value.HasMember("NodeRole") && !value["NodeRole"].IsNull())
    {
        if (!value["NodeRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.NodeRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeRole = string(value["NodeRole"].GetString());
        m_nodeRoleHasBeenSet = true;
    }

    if (value.HasMember("LastRestartTime") && !value["LastRestartTime"].IsNull())
    {
        if (!value["LastRestartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.LastRestartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRestartTime = string(value["LastRestartTime"].GetString());
        m_lastRestartTimeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RIp") && !value["RIp"].IsNull())
    {
        if (!value["RIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.RIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rIp = string(value["RIp"].GetString());
        m_rIpHasBeenSet = true;
    }

    if (value.HasMember("ComputeGroupId") && !value["ComputeGroupId"].IsNull())
    {
        if (!value["ComputeGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.ComputeGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeGroupId = string(value["ComputeGroupId"].GetString());
        m_computeGroupIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_componentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeRole.c_str(), allocator).Move(), allocator);
    }

    if (m_lastRestartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRestartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRestartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_rIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rIp.c_str(), allocator).Move(), allocator);
    }

    if (m_computeGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string NodeInfo::GetIp() const
{
    return m_ip;
}

void NodeInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool NodeInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t NodeInfo::GetStatus() const
{
    return m_status;
}

void NodeInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NodeInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NodeInfo::GetNodeName() const
{
    return m_nodeName;
}

void NodeInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool NodeInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string NodeInfo::GetComponentName() const
{
    return m_componentName;
}

void NodeInfo::SetComponentName(const string& _componentName)
{
    m_componentName = _componentName;
    m_componentNameHasBeenSet = true;
}

bool NodeInfo::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}

string NodeInfo::GetNodeRole() const
{
    return m_nodeRole;
}

void NodeInfo::SetNodeRole(const string& _nodeRole)
{
    m_nodeRole = _nodeRole;
    m_nodeRoleHasBeenSet = true;
}

bool NodeInfo::NodeRoleHasBeenSet() const
{
    return m_nodeRoleHasBeenSet;
}

string NodeInfo::GetLastRestartTime() const
{
    return m_lastRestartTime;
}

void NodeInfo::SetLastRestartTime(const string& _lastRestartTime)
{
    m_lastRestartTime = _lastRestartTime;
    m_lastRestartTimeHasBeenSet = true;
}

bool NodeInfo::LastRestartTimeHasBeenSet() const
{
    return m_lastRestartTimeHasBeenSet;
}

string NodeInfo::GetZone() const
{
    return m_zone;
}

void NodeInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool NodeInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string NodeInfo::GetId() const
{
    return m_id;
}

void NodeInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NodeInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string NodeInfo::GetRIp() const
{
    return m_rIp;
}

void NodeInfo::SetRIp(const string& _rIp)
{
    m_rIp = _rIp;
    m_rIpHasBeenSet = true;
}

bool NodeInfo::RIpHasBeenSet() const
{
    return m_rIpHasBeenSet;
}

string NodeInfo::GetComputeGroupId() const
{
    return m_computeGroupId;
}

void NodeInfo::SetComputeGroupId(const string& _computeGroupId)
{
    m_computeGroupId = _computeGroupId;
    m_computeGroupIdHasBeenSet = true;
}

bool NodeInfo::ComputeGroupIdHasBeenSet() const
{
    return m_computeGroupIdHasBeenSet;
}

string NodeInfo::GetCreateTime() const
{
    return m_createTime;
}

void NodeInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NodeInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

