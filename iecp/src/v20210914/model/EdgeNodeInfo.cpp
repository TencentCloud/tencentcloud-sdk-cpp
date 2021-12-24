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

#include <tencentcloud/iecp/v20210914/model/EdgeNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

EdgeNodeInfo::EdgeNodeInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_cpuArchitectureHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_operatingSystemHasBeenSet(false),
    m_nodeUnitsHasBeenSet(false)
{
}

CoreInternalOutcome EdgeNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeInfo.Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(value["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("CpuArchitecture") && !value["CpuArchitecture"].IsNull())
    {
        if (!value["CpuArchitecture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeInfo.CpuArchitecture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuArchitecture = string(value["CpuArchitecture"].GetString());
        m_cpuArchitectureHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("OperatingSystem") && !value["OperatingSystem"].IsNull())
    {
        if (!value["OperatingSystem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeInfo.OperatingSystem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatingSystem = string(value["OperatingSystem"].GetString());
        m_operatingSystemHasBeenSet = true;
    }

    if (value.HasMember("NodeUnits") && !value["NodeUnits"].IsNull())
    {
        if (!value["NodeUnits"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeNodeInfo.NodeUnits` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeUnits.Deserialize(value["NodeUnits"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeUnitsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cpuArchitectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuArchitecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuArchitecture.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_operatingSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatingSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatingSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUnitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUnits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeUnits.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t EdgeNodeInfo::GetId() const
{
    return m_id;
}

void EdgeNodeInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EdgeNodeInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string EdgeNodeInfo::GetName() const
{
    return m_name;
}

void EdgeNodeInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EdgeNodeInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t EdgeNodeInfo::GetStatus() const
{
    return m_status;
}

void EdgeNodeInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EdgeNodeInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EdgeNodeInfo::GetCreateTime() const
{
    return m_createTime;
}

void EdgeNodeInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EdgeNodeInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

EdgeNodeResourceInfo EdgeNodeInfo::GetResource() const
{
    return m_resource;
}

void EdgeNodeInfo::SetResource(const EdgeNodeResourceInfo& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool EdgeNodeInfo::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string EdgeNodeInfo::GetCpuArchitecture() const
{
    return m_cpuArchitecture;
}

void EdgeNodeInfo::SetCpuArchitecture(const string& _cpuArchitecture)
{
    m_cpuArchitecture = _cpuArchitecture;
    m_cpuArchitectureHasBeenSet = true;
}

bool EdgeNodeInfo::CpuArchitectureHasBeenSet() const
{
    return m_cpuArchitectureHasBeenSet;
}

string EdgeNodeInfo::GetIp() const
{
    return m_ip;
}

void EdgeNodeInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool EdgeNodeInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string EdgeNodeInfo::GetOperatingSystem() const
{
    return m_operatingSystem;
}

void EdgeNodeInfo::SetOperatingSystem(const string& _operatingSystem)
{
    m_operatingSystem = _operatingSystem;
    m_operatingSystemHasBeenSet = true;
}

bool EdgeNodeInfo::OperatingSystemHasBeenSet() const
{
    return m_operatingSystemHasBeenSet;
}

KeyValueObj EdgeNodeInfo::GetNodeUnits() const
{
    return m_nodeUnits;
}

void EdgeNodeInfo::SetNodeUnits(const KeyValueObj& _nodeUnits)
{
    m_nodeUnits = _nodeUnits;
    m_nodeUnitsHasBeenSet = true;
}

bool EdgeNodeInfo::NodeUnitsHasBeenSet() const
{
    return m_nodeUnitsHasBeenSet;
}

