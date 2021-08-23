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

#include <tencentcloud/bm/v20180423/model/TaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

TaskInfo::TaskInfo() :
    m_taskIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_authTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskDetailHasBeenSet(false),
    m_deviceStatusHasBeenSet(false),
    m_operateStatusHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_subnetCidrBlockHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_lanIpHasBeenSet(false),
    m_mgtIpHasBeenSet(false),
    m_taskTypeNameHasBeenSet(false),
    m_taskSubTypeHasBeenSet(false)
{
}

CoreInternalOutcome TaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetUint64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetUint64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AuthTime") && !value["AuthTime"].IsNull())
    {
        if (!value["AuthTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.AuthTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authTime = string(value["AuthTime"].GetString());
        m_authTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskDetail") && !value["TaskDetail"].IsNull())
    {
        if (!value["TaskDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskDetail = string(value["TaskDetail"].GetString());
        m_taskDetailHasBeenSet = true;
    }

    if (value.HasMember("DeviceStatus") && !value["DeviceStatus"].IsNull())
    {
        if (!value["DeviceStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.DeviceStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceStatus = value["DeviceStatus"].GetUint64();
        m_deviceStatusHasBeenSet = true;
    }

    if (value.HasMember("OperateStatus") && !value["OperateStatus"].IsNull())
    {
        if (!value["OperateStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.OperateStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operateStatus = value["OperateStatus"].GetUint64();
        m_operateStatusHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("SubnetCidrBlock") && !value["SubnetCidrBlock"].IsNull())
    {
        if (!value["SubnetCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.SubnetCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCidrBlock = string(value["SubnetCidrBlock"].GetString());
        m_subnetCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("LanIp") && !value["LanIp"].IsNull())
    {
        if (!value["LanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.LanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIp = string(value["LanIp"].GetString());
        m_lanIpHasBeenSet = true;
    }

    if (value.HasMember("MgtIp") && !value["MgtIp"].IsNull())
    {
        if (!value["MgtIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.MgtIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mgtIp = string(value["MgtIp"].GetString());
        m_mgtIpHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeName") && !value["TaskTypeName"].IsNull())
    {
        if (!value["TaskTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeName = string(value["TaskTypeName"].GetString());
        m_taskTypeNameHasBeenSet = true;
    }

    if (value.HasMember("TaskSubType") && !value["TaskSubType"].IsNull())
    {
        if (!value["TaskSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskSubType = string(value["TaskSubType"].GetString());
        m_taskSubTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTypeId, allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_authTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceStatus, allocator);
    }

    if (m_operateStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operateStatus, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_wanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_lanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_mgtIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MgtIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mgtIp.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskSubType.c_str(), allocator).Move(), allocator);
    }

}


string TaskInfo::GetTaskId() const
{
    return m_taskId;
}

void TaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskInfo::GetInstanceId() const
{
    return m_instanceId;
}

void TaskInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TaskInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TaskInfo::GetAlias() const
{
    return m_alias;
}

void TaskInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool TaskInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

uint64_t TaskInfo::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void TaskInfo::SetTaskTypeId(const uint64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool TaskInfo::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

uint64_t TaskInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void TaskInfo::SetTaskStatus(const uint64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool TaskInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string TaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void TaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskInfo::GetAuthTime() const
{
    return m_authTime;
}

void TaskInfo::SetAuthTime(const string& _authTime)
{
    m_authTime = _authTime;
    m_authTimeHasBeenSet = true;
}

bool TaskInfo::AuthTimeHasBeenSet() const
{
    return m_authTimeHasBeenSet;
}

string TaskInfo::GetEndTime() const
{
    return m_endTime;
}

void TaskInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TaskInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TaskInfo::GetTaskDetail() const
{
    return m_taskDetail;
}

void TaskInfo::SetTaskDetail(const string& _taskDetail)
{
    m_taskDetail = _taskDetail;
    m_taskDetailHasBeenSet = true;
}

bool TaskInfo::TaskDetailHasBeenSet() const
{
    return m_taskDetailHasBeenSet;
}

uint64_t TaskInfo::GetDeviceStatus() const
{
    return m_deviceStatus;
}

void TaskInfo::SetDeviceStatus(const uint64_t& _deviceStatus)
{
    m_deviceStatus = _deviceStatus;
    m_deviceStatusHasBeenSet = true;
}

bool TaskInfo::DeviceStatusHasBeenSet() const
{
    return m_deviceStatusHasBeenSet;
}

uint64_t TaskInfo::GetOperateStatus() const
{
    return m_operateStatus;
}

void TaskInfo::SetOperateStatus(const uint64_t& _operateStatus)
{
    m_operateStatus = _operateStatus;
    m_operateStatusHasBeenSet = true;
}

bool TaskInfo::OperateStatusHasBeenSet() const
{
    return m_operateStatusHasBeenSet;
}

string TaskInfo::GetZone() const
{
    return m_zone;
}

void TaskInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool TaskInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string TaskInfo::GetRegion() const
{
    return m_region;
}

void TaskInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool TaskInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string TaskInfo::GetVpcId() const
{
    return m_vpcId;
}

void TaskInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool TaskInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string TaskInfo::GetSubnetId() const
{
    return m_subnetId;
}

void TaskInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool TaskInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string TaskInfo::GetSubnetName() const
{
    return m_subnetName;
}

void TaskInfo::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool TaskInfo::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string TaskInfo::GetVpcName() const
{
    return m_vpcName;
}

void TaskInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool TaskInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string TaskInfo::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void TaskInfo::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool TaskInfo::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string TaskInfo::GetSubnetCidrBlock() const
{
    return m_subnetCidrBlock;
}

void TaskInfo::SetSubnetCidrBlock(const string& _subnetCidrBlock)
{
    m_subnetCidrBlock = _subnetCidrBlock;
    m_subnetCidrBlockHasBeenSet = true;
}

bool TaskInfo::SubnetCidrBlockHasBeenSet() const
{
    return m_subnetCidrBlockHasBeenSet;
}

string TaskInfo::GetWanIp() const
{
    return m_wanIp;
}

void TaskInfo::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool TaskInfo::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

string TaskInfo::GetLanIp() const
{
    return m_lanIp;
}

void TaskInfo::SetLanIp(const string& _lanIp)
{
    m_lanIp = _lanIp;
    m_lanIpHasBeenSet = true;
}

bool TaskInfo::LanIpHasBeenSet() const
{
    return m_lanIpHasBeenSet;
}

string TaskInfo::GetMgtIp() const
{
    return m_mgtIp;
}

void TaskInfo::SetMgtIp(const string& _mgtIp)
{
    m_mgtIp = _mgtIp;
    m_mgtIpHasBeenSet = true;
}

bool TaskInfo::MgtIpHasBeenSet() const
{
    return m_mgtIpHasBeenSet;
}

string TaskInfo::GetTaskTypeName() const
{
    return m_taskTypeName;
}

void TaskInfo::SetTaskTypeName(const string& _taskTypeName)
{
    m_taskTypeName = _taskTypeName;
    m_taskTypeNameHasBeenSet = true;
}

bool TaskInfo::TaskTypeNameHasBeenSet() const
{
    return m_taskTypeNameHasBeenSet;
}

string TaskInfo::GetTaskSubType() const
{
    return m_taskSubType;
}

void TaskInfo::SetTaskSubType(const string& _taskSubType)
{
    m_taskSubType = _taskSubType;
    m_taskSubTypeHasBeenSet = true;
}

bool TaskInfo::TaskSubTypeHasBeenSet() const
{
    return m_taskSubTypeHasBeenSet;
}

