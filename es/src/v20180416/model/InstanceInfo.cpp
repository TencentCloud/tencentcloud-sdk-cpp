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

#include <tencentcloud/es/v20180416/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace rapidjson;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_vpcUidHasBeenSet(false),
    m_subnetUidHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_chargePeriodHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_cpuNumHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_esDomainHasBeenSet(false),
    m_esVipHasBeenSet(false),
    m_esPortHasBeenSet(false),
    m_kibanaUrlHasBeenSet(false),
    m_esVersionHasBeenSet(false),
    m_esConfigHasBeenSet(false),
    m_esAclHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_ikConfigHasBeenSet(false),
    m_masterNodeInfoHasBeenSet(false),
    m_cosBackupHasBeenSet(false),
    m_allowCosBackupHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("VpcUid") && !value["VpcUid"].IsNull())
    {
        if (!value["VpcUid"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.VpcUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcUid = string(value["VpcUid"].GetString());
        m_vpcUidHasBeenSet = true;
    }

    if (value.HasMember("SubnetUid") && !value["SubnetUid"].IsNull())
    {
        if (!value["SubnetUid"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.SubnetUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetUid = string(value["SubnetUid"].GetString());
        m_subnetUidHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("ChargePeriod") && !value["ChargePeriod"].IsNull())
    {
        if (!value["ChargePeriod"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.ChargePeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chargePeriod = value["ChargePeriod"].GetUint64();
        m_chargePeriodHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeNum") && !value["NodeNum"].IsNull())
    {
        if (!value["NodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.NodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNum = value["NodeNum"].GetUint64();
        m_nodeNumHasBeenSet = true;
    }

    if (value.HasMember("CpuNum") && !value["CpuNum"].IsNull())
    {
        if (!value["CpuNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.CpuNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuNum = value["CpuNum"].GetUint64();
        m_cpuNumHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.MemSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetUint64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.DiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetUint64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("EsDomain") && !value["EsDomain"].IsNull())
    {
        if (!value["EsDomain"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.EsDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esDomain = string(value["EsDomain"].GetString());
        m_esDomainHasBeenSet = true;
    }

    if (value.HasMember("EsVip") && !value["EsVip"].IsNull())
    {
        if (!value["EsVip"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.EsVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esVip = string(value["EsVip"].GetString());
        m_esVipHasBeenSet = true;
    }

    if (value.HasMember("EsPort") && !value["EsPort"].IsNull())
    {
        if (!value["EsPort"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.EsPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_esPort = value["EsPort"].GetUint64();
        m_esPortHasBeenSet = true;
    }

    if (value.HasMember("KibanaUrl") && !value["KibanaUrl"].IsNull())
    {
        if (!value["KibanaUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.KibanaUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kibanaUrl = string(value["KibanaUrl"].GetString());
        m_kibanaUrlHasBeenSet = true;
    }

    if (value.HasMember("EsVersion") && !value["EsVersion"].IsNull())
    {
        if (!value["EsVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.EsVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esVersion = string(value["EsVersion"].GetString());
        m_esVersionHasBeenSet = true;
    }

    if (value.HasMember("EsConfig") && !value["EsConfig"].IsNull())
    {
        if (!value["EsConfig"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.EsConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esConfig = string(value["EsConfig"].GetString());
        m_esConfigHasBeenSet = true;
    }

    if (value.HasMember("EsAcl") && !value["EsAcl"].IsNull())
    {
        if (!value["EsAcl"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.EsAcl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_esAcl.Deserialize(value["EsAcl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_esAclHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.Deadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = string(value["Deadline"].GetString());
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.InstanceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetUint64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("IkConfig") && !value["IkConfig"].IsNull())
    {
        if (!value["IkConfig"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.IkConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ikConfig.Deserialize(value["IkConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ikConfigHasBeenSet = true;
    }

    if (value.HasMember("MasterNodeInfo") && !value["MasterNodeInfo"].IsNull())
    {
        if (!value["MasterNodeInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.MasterNodeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_masterNodeInfo.Deserialize(value["MasterNodeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_masterNodeInfoHasBeenSet = true;
    }

    if (value.HasMember("CosBackup") && !value["CosBackup"].IsNull())
    {
        if (!value["CosBackup"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.CosBackup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosBackup.Deserialize(value["CosBackup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosBackupHasBeenSet = true;
    }

    if (value.HasMember("AllowCosBackup") && !value["AllowCosBackup"].IsNull())
    {
        if (!value["AllowCosBackup"].IsBool())
        {
            return CoreInternalOutcome(Error("response `InstanceInfo.AllowCosBackup` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowCosBackup = value["AllowCosBackup"].GetBool();
        m_allowCosBackupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcUidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcUid.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetUidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetUid.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_chargePeriodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChargePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargePeriod, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_cpuNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuNum, allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_esDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EsDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_esDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_esVipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EsVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_esVip.c_str(), allocator).Move(), allocator);
    }

    if (m_esPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EsPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_esPort, allocator);
    }

    if (m_kibanaUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KibanaUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_kibanaUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_esVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_esVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_esConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EsConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_esConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_esAclHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EsAcl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_esAcl.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deadline.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_ikConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IkConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_ikConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_masterNodeInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterNodeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_masterNodeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cosBackupHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosBackup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cosBackup.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_allowCosBackupHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AllowCosBackup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowCosBackup, allocator);
    }

}


string InstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceInfo::GetRegion() const
{
    return m_region;
}

void InstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InstanceInfo::GetZone() const
{
    return m_zone;
}

void InstanceInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t InstanceInfo::GetAppId() const
{
    return m_appId;
}

void InstanceInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InstanceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string InstanceInfo::GetUin() const
{
    return m_uin;
}

void InstanceInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool InstanceInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string InstanceInfo::GetVpcUid() const
{
    return m_vpcUid;
}

void InstanceInfo::SetVpcUid(const string& _vpcUid)
{
    m_vpcUid = _vpcUid;
    m_vpcUidHasBeenSet = true;
}

bool InstanceInfo::VpcUidHasBeenSet() const
{
    return m_vpcUidHasBeenSet;
}

string InstanceInfo::GetSubnetUid() const
{
    return m_subnetUid;
}

void InstanceInfo::SetSubnetUid(const string& _subnetUid)
{
    m_subnetUid = _subnetUid;
    m_subnetUidHasBeenSet = true;
}

bool InstanceInfo::SubnetUidHasBeenSet() const
{
    return m_subnetUidHasBeenSet;
}

int64_t InstanceInfo::GetStatus() const
{
    return m_status;
}

void InstanceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InstanceInfo::GetChargeType() const
{
    return m_chargeType;
}

void InstanceInfo::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool InstanceInfo::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

uint64_t InstanceInfo::GetChargePeriod() const
{
    return m_chargePeriod;
}

void InstanceInfo::SetChargePeriod(const uint64_t& _chargePeriod)
{
    m_chargePeriod = _chargePeriod;
    m_chargePeriodHasBeenSet = true;
}

bool InstanceInfo::ChargePeriodHasBeenSet() const
{
    return m_chargePeriodHasBeenSet;
}

string InstanceInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void InstanceInfo::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool InstanceInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string InstanceInfo::GetNodeType() const
{
    return m_nodeType;
}

void InstanceInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool InstanceInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t InstanceInfo::GetNodeNum() const
{
    return m_nodeNum;
}

void InstanceInfo::SetNodeNum(const uint64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool InstanceInfo::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

uint64_t InstanceInfo::GetCpuNum() const
{
    return m_cpuNum;
}

void InstanceInfo::SetCpuNum(const uint64_t& _cpuNum)
{
    m_cpuNum = _cpuNum;
    m_cpuNumHasBeenSet = true;
}

bool InstanceInfo::CpuNumHasBeenSet() const
{
    return m_cpuNumHasBeenSet;
}

uint64_t InstanceInfo::GetMemSize() const
{
    return m_memSize;
}

void InstanceInfo::SetMemSize(const uint64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool InstanceInfo::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

string InstanceInfo::GetDiskType() const
{
    return m_diskType;
}

void InstanceInfo::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool InstanceInfo::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

uint64_t InstanceInfo::GetDiskSize() const
{
    return m_diskSize;
}

void InstanceInfo::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool InstanceInfo::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string InstanceInfo::GetEsDomain() const
{
    return m_esDomain;
}

void InstanceInfo::SetEsDomain(const string& _esDomain)
{
    m_esDomain = _esDomain;
    m_esDomainHasBeenSet = true;
}

bool InstanceInfo::EsDomainHasBeenSet() const
{
    return m_esDomainHasBeenSet;
}

string InstanceInfo::GetEsVip() const
{
    return m_esVip;
}

void InstanceInfo::SetEsVip(const string& _esVip)
{
    m_esVip = _esVip;
    m_esVipHasBeenSet = true;
}

bool InstanceInfo::EsVipHasBeenSet() const
{
    return m_esVipHasBeenSet;
}

uint64_t InstanceInfo::GetEsPort() const
{
    return m_esPort;
}

void InstanceInfo::SetEsPort(const uint64_t& _esPort)
{
    m_esPort = _esPort;
    m_esPortHasBeenSet = true;
}

bool InstanceInfo::EsPortHasBeenSet() const
{
    return m_esPortHasBeenSet;
}

string InstanceInfo::GetKibanaUrl() const
{
    return m_kibanaUrl;
}

void InstanceInfo::SetKibanaUrl(const string& _kibanaUrl)
{
    m_kibanaUrl = _kibanaUrl;
    m_kibanaUrlHasBeenSet = true;
}

bool InstanceInfo::KibanaUrlHasBeenSet() const
{
    return m_kibanaUrlHasBeenSet;
}

string InstanceInfo::GetEsVersion() const
{
    return m_esVersion;
}

void InstanceInfo::SetEsVersion(const string& _esVersion)
{
    m_esVersion = _esVersion;
    m_esVersionHasBeenSet = true;
}

bool InstanceInfo::EsVersionHasBeenSet() const
{
    return m_esVersionHasBeenSet;
}

string InstanceInfo::GetEsConfig() const
{
    return m_esConfig;
}

void InstanceInfo::SetEsConfig(const string& _esConfig)
{
    m_esConfig = _esConfig;
    m_esConfigHasBeenSet = true;
}

bool InstanceInfo::EsConfigHasBeenSet() const
{
    return m_esConfigHasBeenSet;
}

EsAcl InstanceInfo::GetEsAcl() const
{
    return m_esAcl;
}

void InstanceInfo::SetEsAcl(const EsAcl& _esAcl)
{
    m_esAcl = _esAcl;
    m_esAclHasBeenSet = true;
}

bool InstanceInfo::EsAclHasBeenSet() const
{
    return m_esAclHasBeenSet;
}

string InstanceInfo::GetCreateTime() const
{
    return m_createTime;
}

void InstanceInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void InstanceInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool InstanceInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string InstanceInfo::GetDeadline() const
{
    return m_deadline;
}

void InstanceInfo::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool InstanceInfo::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

uint64_t InstanceInfo::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceInfo::SetInstanceType(const uint64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

EsDictionaryInfo InstanceInfo::GetIkConfig() const
{
    return m_ikConfig;
}

void InstanceInfo::SetIkConfig(const EsDictionaryInfo& _ikConfig)
{
    m_ikConfig = _ikConfig;
    m_ikConfigHasBeenSet = true;
}

bool InstanceInfo::IkConfigHasBeenSet() const
{
    return m_ikConfigHasBeenSet;
}

MasterNodeInfo InstanceInfo::GetMasterNodeInfo() const
{
    return m_masterNodeInfo;
}

void InstanceInfo::SetMasterNodeInfo(const MasterNodeInfo& _masterNodeInfo)
{
    m_masterNodeInfo = _masterNodeInfo;
    m_masterNodeInfoHasBeenSet = true;
}

bool InstanceInfo::MasterNodeInfoHasBeenSet() const
{
    return m_masterNodeInfoHasBeenSet;
}

CosBackup InstanceInfo::GetCosBackup() const
{
    return m_cosBackup;
}

void InstanceInfo::SetCosBackup(const CosBackup& _cosBackup)
{
    m_cosBackup = _cosBackup;
    m_cosBackupHasBeenSet = true;
}

bool InstanceInfo::CosBackupHasBeenSet() const
{
    return m_cosBackupHasBeenSet;
}

bool InstanceInfo::GetAllowCosBackup() const
{
    return m_allowCosBackup;
}

void InstanceInfo::SetAllowCosBackup(const bool& _allowCosBackup)
{
    m_allowCosBackup = _allowCosBackup;
    m_allowCosBackupHasBeenSet = true;
}

bool InstanceInfo::AllowCosBackupHasBeenSet() const
{
    return m_allowCosBackupHasBeenSet;
}

