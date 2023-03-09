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

#include <tencentcloud/cvm/v20170312/model/RepairTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

RepairTaskInfo::RepairTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_taskTypeNameHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_deviceStatusHasBeenSet(false),
    m_operateStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_authTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskDetailHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_lanIpHasBeenSet(false),
    m_productHasBeenSet(false),
    m_taskSubTypeHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_authSourceHasBeenSet(false)
{
}

CoreInternalOutcome RepairTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.TaskTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetUint64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeName") && !value["TaskTypeName"].IsNull())
    {
        if (!value["TaskTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.TaskTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeName = string(value["TaskTypeName"].GetString());
        m_taskTypeNameHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.TaskStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetUint64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("DeviceStatus") && !value["DeviceStatus"].IsNull())
    {
        if (!value["DeviceStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.DeviceStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceStatus = value["DeviceStatus"].GetUint64();
        m_deviceStatusHasBeenSet = true;
    }

    if (value.HasMember("OperateStatus") && !value["OperateStatus"].IsNull())
    {
        if (!value["OperateStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.OperateStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operateStatus = value["OperateStatus"].GetUint64();
        m_operateStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AuthTime") && !value["AuthTime"].IsNull())
    {
        if (!value["AuthTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.AuthTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authTime = string(value["AuthTime"].GetString());
        m_authTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskDetail") && !value["TaskDetail"].IsNull())
    {
        if (!value["TaskDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.TaskDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskDetail = string(value["TaskDetail"].GetString());
        m_taskDetailHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("LanIp") && !value["LanIp"].IsNull())
    {
        if (!value["LanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.LanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIp = string(value["LanIp"].GetString());
        m_lanIpHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("TaskSubType") && !value["TaskSubType"].IsNull())
    {
        if (!value["TaskSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.TaskSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskSubType = string(value["TaskSubType"].GetString());
        m_taskSubTypeHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.AuthType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authType = value["AuthType"].GetUint64();
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("AuthSource") && !value["AuthSource"].IsNull())
    {
        if (!value["AuthSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairTaskInfo.AuthSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authSource = string(value["AuthSource"].GetString());
        m_authSourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RepairTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_taskTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
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

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
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

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_taskSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authType, allocator);
    }

    if (m_authSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authSource.c_str(), allocator).Move(), allocator);
    }

}


string RepairTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void RepairTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RepairTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string RepairTaskInfo::GetInstanceId() const
{
    return m_instanceId;
}

void RepairTaskInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RepairTaskInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RepairTaskInfo::GetAlias() const
{
    return m_alias;
}

void RepairTaskInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool RepairTaskInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

uint64_t RepairTaskInfo::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void RepairTaskInfo::SetTaskTypeId(const uint64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool RepairTaskInfo::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string RepairTaskInfo::GetTaskTypeName() const
{
    return m_taskTypeName;
}

void RepairTaskInfo::SetTaskTypeName(const string& _taskTypeName)
{
    m_taskTypeName = _taskTypeName;
    m_taskTypeNameHasBeenSet = true;
}

bool RepairTaskInfo::TaskTypeNameHasBeenSet() const
{
    return m_taskTypeNameHasBeenSet;
}

uint64_t RepairTaskInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void RepairTaskInfo::SetTaskStatus(const uint64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool RepairTaskInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

uint64_t RepairTaskInfo::GetDeviceStatus() const
{
    return m_deviceStatus;
}

void RepairTaskInfo::SetDeviceStatus(const uint64_t& _deviceStatus)
{
    m_deviceStatus = _deviceStatus;
    m_deviceStatusHasBeenSet = true;
}

bool RepairTaskInfo::DeviceStatusHasBeenSet() const
{
    return m_deviceStatusHasBeenSet;
}

uint64_t RepairTaskInfo::GetOperateStatus() const
{
    return m_operateStatus;
}

void RepairTaskInfo::SetOperateStatus(const uint64_t& _operateStatus)
{
    m_operateStatus = _operateStatus;
    m_operateStatusHasBeenSet = true;
}

bool RepairTaskInfo::OperateStatusHasBeenSet() const
{
    return m_operateStatusHasBeenSet;
}

string RepairTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void RepairTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RepairTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RepairTaskInfo::GetAuthTime() const
{
    return m_authTime;
}

void RepairTaskInfo::SetAuthTime(const string& _authTime)
{
    m_authTime = _authTime;
    m_authTimeHasBeenSet = true;
}

bool RepairTaskInfo::AuthTimeHasBeenSet() const
{
    return m_authTimeHasBeenSet;
}

string RepairTaskInfo::GetEndTime() const
{
    return m_endTime;
}

void RepairTaskInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RepairTaskInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RepairTaskInfo::GetTaskDetail() const
{
    return m_taskDetail;
}

void RepairTaskInfo::SetTaskDetail(const string& _taskDetail)
{
    m_taskDetail = _taskDetail;
    m_taskDetailHasBeenSet = true;
}

bool RepairTaskInfo::TaskDetailHasBeenSet() const
{
    return m_taskDetailHasBeenSet;
}

string RepairTaskInfo::GetZone() const
{
    return m_zone;
}

void RepairTaskInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool RepairTaskInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string RepairTaskInfo::GetRegion() const
{
    return m_region;
}

void RepairTaskInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RepairTaskInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string RepairTaskInfo::GetVpcId() const
{
    return m_vpcId;
}

void RepairTaskInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool RepairTaskInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string RepairTaskInfo::GetVpcName() const
{
    return m_vpcName;
}

void RepairTaskInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool RepairTaskInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string RepairTaskInfo::GetSubnetId() const
{
    return m_subnetId;
}

void RepairTaskInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool RepairTaskInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string RepairTaskInfo::GetSubnetName() const
{
    return m_subnetName;
}

void RepairTaskInfo::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool RepairTaskInfo::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string RepairTaskInfo::GetWanIp() const
{
    return m_wanIp;
}

void RepairTaskInfo::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool RepairTaskInfo::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

string RepairTaskInfo::GetLanIp() const
{
    return m_lanIp;
}

void RepairTaskInfo::SetLanIp(const string& _lanIp)
{
    m_lanIp = _lanIp;
    m_lanIpHasBeenSet = true;
}

bool RepairTaskInfo::LanIpHasBeenSet() const
{
    return m_lanIpHasBeenSet;
}

string RepairTaskInfo::GetProduct() const
{
    return m_product;
}

void RepairTaskInfo::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool RepairTaskInfo::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string RepairTaskInfo::GetTaskSubType() const
{
    return m_taskSubType;
}

void RepairTaskInfo::SetTaskSubType(const string& _taskSubType)
{
    m_taskSubType = _taskSubType;
    m_taskSubTypeHasBeenSet = true;
}

bool RepairTaskInfo::TaskSubTypeHasBeenSet() const
{
    return m_taskSubTypeHasBeenSet;
}

uint64_t RepairTaskInfo::GetAuthType() const
{
    return m_authType;
}

void RepairTaskInfo::SetAuthType(const uint64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool RepairTaskInfo::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string RepairTaskInfo::GetAuthSource() const
{
    return m_authSource;
}

void RepairTaskInfo::SetAuthSource(const string& _authSource)
{
    m_authSource = _authSource;
    m_authSourceHasBeenSet = true;
}

bool RepairTaskInfo::AuthSourceHasBeenSet() const
{
    return m_authSourceHasBeenSet;
}

