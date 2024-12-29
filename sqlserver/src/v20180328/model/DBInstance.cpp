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

#include <tencentcloud/sqlserver/v20180328/model/DBInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DBInstance::DBInstance() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_usedStorageHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_backupTimeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_isolateOperatorHasBeenSet(false),
    m_subFlagHasBeenSet(false),
    m_rOFlagHasBeenSet(false),
    m_hAFlagHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_backupModelHasBeenSet(false),
    m_instanceNoteHasBeenSet(false),
    m_backupCycleHasBeenSet(false),
    m_backupCycleTypeHasBeenSet(false),
    m_backupSaveDaysHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_crossRegionsHasBeenSet(false),
    m_crossBackupEnabledHasBeenSet(false),
    m_crossBackupSaveDaysHasBeenSet(false),
    m_dnsPodDomainHasBeenSet(false),
    m_tgwWanVPortHasBeenSet(false),
    m_collationHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_isDrZoneHasBeenSet(false),
    m_slaveZonesHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_styleHasBeenSet(false),
    m_multiSlaveZonesHasBeenSet(false)
{
}

CoreInternalOutcome DBInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.VpcId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = value["VpcId"].GetInt64();
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.SubnetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = value["SubnetId"].GetInt64();
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("IsolateTime") && !value["IsolateTime"].IsNull())
    {
        if (!value["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(value["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("UsedStorage") && !value["UsedStorage"].IsNull())
    {
        if (!value["UsedStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.UsedStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedStorage = value["UsedStorage"].GetInt64();
        m_usedStorageHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Model` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_model = value["Model"].GetInt64();
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("BackupTime") && !value["BackupTime"].IsNull())
    {
        if (!value["BackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.BackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTime = string(value["BackupTime"].GetString());
        m_backupTimeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("IsolateOperator") && !value["IsolateOperator"].IsNull())
    {
        if (!value["IsolateOperator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.IsolateOperator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateOperator = string(value["IsolateOperator"].GetString());
        m_isolateOperatorHasBeenSet = true;
    }

    if (value.HasMember("SubFlag") && !value["SubFlag"].IsNull())
    {
        if (!value["SubFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.SubFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subFlag = string(value["SubFlag"].GetString());
        m_subFlagHasBeenSet = true;
    }

    if (value.HasMember("ROFlag") && !value["ROFlag"].IsNull())
    {
        if (!value["ROFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.ROFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rOFlag = string(value["ROFlag"].GetString());
        m_rOFlagHasBeenSet = true;
    }

    if (value.HasMember("HAFlag") && !value["HAFlag"].IsNull())
    {
        if (!value["HAFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.HAFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hAFlag = string(value["HAFlag"].GetString());
        m_hAFlagHasBeenSet = true;
    }

    if (value.HasMember("ResourceTags") && !value["ResourceTags"].IsNull())
    {
        if (!value["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBInstance.ResourceTags` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceTags.push_back(item);
        }
        m_resourceTagsHasBeenSet = true;
    }

    if (value.HasMember("BackupModel") && !value["BackupModel"].IsNull())
    {
        if (!value["BackupModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.BackupModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupModel = string(value["BackupModel"].GetString());
        m_backupModelHasBeenSet = true;
    }

    if (value.HasMember("InstanceNote") && !value["InstanceNote"].IsNull())
    {
        if (!value["InstanceNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.InstanceNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNote = string(value["InstanceNote"].GetString());
        m_instanceNoteHasBeenSet = true;
    }

    if (value.HasMember("BackupCycle") && !value["BackupCycle"].IsNull())
    {
        if (!value["BackupCycle"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBInstance.BackupCycle` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupCycle"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_backupCycle.push_back((*itr).GetInt64());
        }
        m_backupCycleHasBeenSet = true;
    }

    if (value.HasMember("BackupCycleType") && !value["BackupCycleType"].IsNull())
    {
        if (!value["BackupCycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.BackupCycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupCycleType = string(value["BackupCycleType"].GetString());
        m_backupCycleTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupSaveDays") && !value["BackupSaveDays"].IsNull())
    {
        if (!value["BackupSaveDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.BackupSaveDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSaveDays = value["BackupSaveDays"].GetInt64();
        m_backupSaveDaysHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("CrossRegions") && !value["CrossRegions"].IsNull())
    {
        if (!value["CrossRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBInstance.CrossRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["CrossRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_crossRegions.push_back((*itr).GetString());
        }
        m_crossRegionsHasBeenSet = true;
    }

    if (value.HasMember("CrossBackupEnabled") && !value["CrossBackupEnabled"].IsNull())
    {
        if (!value["CrossBackupEnabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.CrossBackupEnabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crossBackupEnabled = string(value["CrossBackupEnabled"].GetString());
        m_crossBackupEnabledHasBeenSet = true;
    }

    if (value.HasMember("CrossBackupSaveDays") && !value["CrossBackupSaveDays"].IsNull())
    {
        if (!value["CrossBackupSaveDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.CrossBackupSaveDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_crossBackupSaveDays = value["CrossBackupSaveDays"].GetUint64();
        m_crossBackupSaveDaysHasBeenSet = true;
    }

    if (value.HasMember("DnsPodDomain") && !value["DnsPodDomain"].IsNull())
    {
        if (!value["DnsPodDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.DnsPodDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsPodDomain = string(value["DnsPodDomain"].GetString());
        m_dnsPodDomainHasBeenSet = true;
    }

    if (value.HasMember("TgwWanVPort") && !value["TgwWanVPort"].IsNull())
    {
        if (!value["TgwWanVPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.TgwWanVPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tgwWanVPort = value["TgwWanVPort"].GetInt64();
        m_tgwWanVPortHasBeenSet = true;
    }

    if (value.HasMember("Collation") && !value["Collation"].IsNull())
    {
        if (!value["Collation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Collation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collation = string(value["Collation"].GetString());
        m_collationHasBeenSet = true;
    }

    if (value.HasMember("TimeZone") && !value["TimeZone"].IsNull())
    {
        if (!value["TimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.TimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = string(value["TimeZone"].GetString());
        m_timeZoneHasBeenSet = true;
    }

    if (value.HasMember("IsDrZone") && !value["IsDrZone"].IsNull())
    {
        if (!value["IsDrZone"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.IsDrZone` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDrZone = value["IsDrZone"].GetBool();
        m_isDrZoneHasBeenSet = true;
    }

    if (value.HasMember("SlaveZones") && !value["SlaveZones"].IsNull())
    {
        if (!value["SlaveZones"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.SlaveZones` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_slaveZones.Deserialize(value["SlaveZones"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_slaveZonesHasBeenSet = true;
    }

    if (value.HasMember("Architecture") && !value["Architecture"].IsNull())
    {
        if (!value["Architecture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Architecture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_architecture = string(value["Architecture"].GetString());
        m_architectureHasBeenSet = true;
    }

    if (value.HasMember("Style") && !value["Style"].IsNull())
    {
        if (!value["Style"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Style` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_style = string(value["Style"].GetString());
        m_styleHasBeenSet = true;
    }

    if (value.HasMember("MultiSlaveZones") && !value["MultiSlaveZones"].IsNull())
    {
        if (!value["MultiSlaveZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBInstance.MultiSlaveZones` is not array type"));

        const rapidjson::Value &tmpValue = value["MultiSlaveZones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SlaveZones item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_multiSlaveZones.push_back(item);
        }
        m_multiSlaveZonesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcId, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_usedStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedStorage, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_model, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_subFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_rOFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ROFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rOFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_hAFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HAFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hAFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_backupModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupModel.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceNote.c_str(), allocator).Move(), allocator);
    }

    if (m_backupCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupCycle.begin(); itr != m_backupCycle.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_backupCycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupCycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupCycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSaveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSaveDays, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_crossRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_crossRegions.begin(); itr != m_crossRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_crossBackupEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBackupEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crossBackupEnabled.c_str(), allocator).Move(), allocator);
    }

    if (m_crossBackupSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBackupSaveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossBackupSaveDays, allocator);
    }

    if (m_dnsPodDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsPodDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsPodDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_tgwWanVPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TgwWanVPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tgwWanVPort, allocator);
    }

    if (m_collationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Collation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collation.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_isDrZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDrZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDrZone, allocator);
    }

    if (m_slaveZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_slaveZones.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_architectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Architecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_architecture.c_str(), allocator).Move(), allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_style.c_str(), allocator).Move(), allocator);
    }

    if (m_multiSlaveZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiSlaveZones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiSlaveZones.begin(); itr != m_multiSlaveZones.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DBInstance::GetInstanceId() const
{
    return m_instanceId;
}

void DBInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DBInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DBInstance::GetName() const
{
    return m_name;
}

void DBInstance::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DBInstance::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DBInstance::GetProjectId() const
{
    return m_projectId;
}

void DBInstance::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DBInstance::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DBInstance::GetRegionId() const
{
    return m_regionId;
}

void DBInstance::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool DBInstance::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t DBInstance::GetZoneId() const
{
    return m_zoneId;
}

void DBInstance::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DBInstance::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t DBInstance::GetVpcId() const
{
    return m_vpcId;
}

void DBInstance::SetVpcId(const int64_t& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DBInstance::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t DBInstance::GetSubnetId() const
{
    return m_subnetId;
}

void DBInstance::SetSubnetId(const int64_t& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DBInstance::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t DBInstance::GetStatus() const
{
    return m_status;
}

void DBInstance::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DBInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DBInstance::GetVip() const
{
    return m_vip;
}

void DBInstance::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool DBInstance::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t DBInstance::GetVport() const
{
    return m_vport;
}

void DBInstance::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool DBInstance::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string DBInstance::GetCreateTime() const
{
    return m_createTime;
}

void DBInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DBInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DBInstance::GetUpdateTime() const
{
    return m_updateTime;
}

void DBInstance::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DBInstance::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DBInstance::GetStartTime() const
{
    return m_startTime;
}

void DBInstance::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DBInstance::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DBInstance::GetEndTime() const
{
    return m_endTime;
}

void DBInstance::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DBInstance::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DBInstance::GetIsolateTime() const
{
    return m_isolateTime;
}

void DBInstance::SetIsolateTime(const string& _isolateTime)
{
    m_isolateTime = _isolateTime;
    m_isolateTimeHasBeenSet = true;
}

bool DBInstance::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

int64_t DBInstance::GetMemory() const
{
    return m_memory;
}

void DBInstance::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DBInstance::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t DBInstance::GetUsedStorage() const
{
    return m_usedStorage;
}

void DBInstance::SetUsedStorage(const int64_t& _usedStorage)
{
    m_usedStorage = _usedStorage;
    m_usedStorageHasBeenSet = true;
}

bool DBInstance::UsedStorageHasBeenSet() const
{
    return m_usedStorageHasBeenSet;
}

int64_t DBInstance::GetStorage() const
{
    return m_storage;
}

void DBInstance::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool DBInstance::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string DBInstance::GetVersionName() const
{
    return m_versionName;
}

void DBInstance::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool DBInstance::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

int64_t DBInstance::GetRenewFlag() const
{
    return m_renewFlag;
}

void DBInstance::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool DBInstance::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

int64_t DBInstance::GetModel() const
{
    return m_model;
}

void DBInstance::SetModel(const int64_t& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool DBInstance::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string DBInstance::GetRegion() const
{
    return m_region;
}

void DBInstance::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DBInstance::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DBInstance::GetZone() const
{
    return m_zone;
}

void DBInstance::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DBInstance::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DBInstance::GetBackupTime() const
{
    return m_backupTime;
}

void DBInstance::SetBackupTime(const string& _backupTime)
{
    m_backupTime = _backupTime;
    m_backupTimeHasBeenSet = true;
}

bool DBInstance::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

int64_t DBInstance::GetPayMode() const
{
    return m_payMode;
}

void DBInstance::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DBInstance::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DBInstance::GetUid() const
{
    return m_uid;
}

void DBInstance::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool DBInstance::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

int64_t DBInstance::GetCpu() const
{
    return m_cpu;
}

void DBInstance::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DBInstance::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string DBInstance::GetVersion() const
{
    return m_version;
}

void DBInstance::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool DBInstance::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DBInstance::GetType() const
{
    return m_type;
}

void DBInstance::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DBInstance::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DBInstance::GetPid() const
{
    return m_pid;
}

void DBInstance::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool DBInstance::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string DBInstance::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void DBInstance::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool DBInstance::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string DBInstance::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void DBInstance::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool DBInstance::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

string DBInstance::GetIsolateOperator() const
{
    return m_isolateOperator;
}

void DBInstance::SetIsolateOperator(const string& _isolateOperator)
{
    m_isolateOperator = _isolateOperator;
    m_isolateOperatorHasBeenSet = true;
}

bool DBInstance::IsolateOperatorHasBeenSet() const
{
    return m_isolateOperatorHasBeenSet;
}

string DBInstance::GetSubFlag() const
{
    return m_subFlag;
}

void DBInstance::SetSubFlag(const string& _subFlag)
{
    m_subFlag = _subFlag;
    m_subFlagHasBeenSet = true;
}

bool DBInstance::SubFlagHasBeenSet() const
{
    return m_subFlagHasBeenSet;
}

string DBInstance::GetROFlag() const
{
    return m_rOFlag;
}

void DBInstance::SetROFlag(const string& _rOFlag)
{
    m_rOFlag = _rOFlag;
    m_rOFlagHasBeenSet = true;
}

bool DBInstance::ROFlagHasBeenSet() const
{
    return m_rOFlagHasBeenSet;
}

string DBInstance::GetHAFlag() const
{
    return m_hAFlag;
}

void DBInstance::SetHAFlag(const string& _hAFlag)
{
    m_hAFlag = _hAFlag;
    m_hAFlagHasBeenSet = true;
}

bool DBInstance::HAFlagHasBeenSet() const
{
    return m_hAFlagHasBeenSet;
}

vector<ResourceTag> DBInstance::GetResourceTags() const
{
    return m_resourceTags;
}

void DBInstance::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool DBInstance::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string DBInstance::GetBackupModel() const
{
    return m_backupModel;
}

void DBInstance::SetBackupModel(const string& _backupModel)
{
    m_backupModel = _backupModel;
    m_backupModelHasBeenSet = true;
}

bool DBInstance::BackupModelHasBeenSet() const
{
    return m_backupModelHasBeenSet;
}

string DBInstance::GetInstanceNote() const
{
    return m_instanceNote;
}

void DBInstance::SetInstanceNote(const string& _instanceNote)
{
    m_instanceNote = _instanceNote;
    m_instanceNoteHasBeenSet = true;
}

bool DBInstance::InstanceNoteHasBeenSet() const
{
    return m_instanceNoteHasBeenSet;
}

vector<int64_t> DBInstance::GetBackupCycle() const
{
    return m_backupCycle;
}

void DBInstance::SetBackupCycle(const vector<int64_t>& _backupCycle)
{
    m_backupCycle = _backupCycle;
    m_backupCycleHasBeenSet = true;
}

bool DBInstance::BackupCycleHasBeenSet() const
{
    return m_backupCycleHasBeenSet;
}

string DBInstance::GetBackupCycleType() const
{
    return m_backupCycleType;
}

void DBInstance::SetBackupCycleType(const string& _backupCycleType)
{
    m_backupCycleType = _backupCycleType;
    m_backupCycleTypeHasBeenSet = true;
}

bool DBInstance::BackupCycleTypeHasBeenSet() const
{
    return m_backupCycleTypeHasBeenSet;
}

int64_t DBInstance::GetBackupSaveDays() const
{
    return m_backupSaveDays;
}

void DBInstance::SetBackupSaveDays(const int64_t& _backupSaveDays)
{
    m_backupSaveDays = _backupSaveDays;
    m_backupSaveDaysHasBeenSet = true;
}

bool DBInstance::BackupSaveDaysHasBeenSet() const
{
    return m_backupSaveDaysHasBeenSet;
}

string DBInstance::GetInstanceType() const
{
    return m_instanceType;
}

void DBInstance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DBInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<string> DBInstance::GetCrossRegions() const
{
    return m_crossRegions;
}

void DBInstance::SetCrossRegions(const vector<string>& _crossRegions)
{
    m_crossRegions = _crossRegions;
    m_crossRegionsHasBeenSet = true;
}

bool DBInstance::CrossRegionsHasBeenSet() const
{
    return m_crossRegionsHasBeenSet;
}

string DBInstance::GetCrossBackupEnabled() const
{
    return m_crossBackupEnabled;
}

void DBInstance::SetCrossBackupEnabled(const string& _crossBackupEnabled)
{
    m_crossBackupEnabled = _crossBackupEnabled;
    m_crossBackupEnabledHasBeenSet = true;
}

bool DBInstance::CrossBackupEnabledHasBeenSet() const
{
    return m_crossBackupEnabledHasBeenSet;
}

uint64_t DBInstance::GetCrossBackupSaveDays() const
{
    return m_crossBackupSaveDays;
}

void DBInstance::SetCrossBackupSaveDays(const uint64_t& _crossBackupSaveDays)
{
    m_crossBackupSaveDays = _crossBackupSaveDays;
    m_crossBackupSaveDaysHasBeenSet = true;
}

bool DBInstance::CrossBackupSaveDaysHasBeenSet() const
{
    return m_crossBackupSaveDaysHasBeenSet;
}

string DBInstance::GetDnsPodDomain() const
{
    return m_dnsPodDomain;
}

void DBInstance::SetDnsPodDomain(const string& _dnsPodDomain)
{
    m_dnsPodDomain = _dnsPodDomain;
    m_dnsPodDomainHasBeenSet = true;
}

bool DBInstance::DnsPodDomainHasBeenSet() const
{
    return m_dnsPodDomainHasBeenSet;
}

int64_t DBInstance::GetTgwWanVPort() const
{
    return m_tgwWanVPort;
}

void DBInstance::SetTgwWanVPort(const int64_t& _tgwWanVPort)
{
    m_tgwWanVPort = _tgwWanVPort;
    m_tgwWanVPortHasBeenSet = true;
}

bool DBInstance::TgwWanVPortHasBeenSet() const
{
    return m_tgwWanVPortHasBeenSet;
}

string DBInstance::GetCollation() const
{
    return m_collation;
}

void DBInstance::SetCollation(const string& _collation)
{
    m_collation = _collation;
    m_collationHasBeenSet = true;
}

bool DBInstance::CollationHasBeenSet() const
{
    return m_collationHasBeenSet;
}

string DBInstance::GetTimeZone() const
{
    return m_timeZone;
}

void DBInstance::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool DBInstance::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

bool DBInstance::GetIsDrZone() const
{
    return m_isDrZone;
}

void DBInstance::SetIsDrZone(const bool& _isDrZone)
{
    m_isDrZone = _isDrZone;
    m_isDrZoneHasBeenSet = true;
}

bool DBInstance::IsDrZoneHasBeenSet() const
{
    return m_isDrZoneHasBeenSet;
}

SlaveZones DBInstance::GetSlaveZones() const
{
    return m_slaveZones;
}

void DBInstance::SetSlaveZones(const SlaveZones& _slaveZones)
{
    m_slaveZones = _slaveZones;
    m_slaveZonesHasBeenSet = true;
}

bool DBInstance::SlaveZonesHasBeenSet() const
{
    return m_slaveZonesHasBeenSet;
}

string DBInstance::GetArchitecture() const
{
    return m_architecture;
}

void DBInstance::SetArchitecture(const string& _architecture)
{
    m_architecture = _architecture;
    m_architectureHasBeenSet = true;
}

bool DBInstance::ArchitectureHasBeenSet() const
{
    return m_architectureHasBeenSet;
}

string DBInstance::GetStyle() const
{
    return m_style;
}

void DBInstance::SetStyle(const string& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool DBInstance::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

vector<SlaveZones> DBInstance::GetMultiSlaveZones() const
{
    return m_multiSlaveZones;
}

void DBInstance::SetMultiSlaveZones(const vector<SlaveZones>& _multiSlaveZones)
{
    m_multiSlaveZones = _multiSlaveZones;
    m_multiSlaveZonesHasBeenSet = true;
}

bool DBInstance::MultiSlaveZonesHasBeenSet() const
{
    return m_multiSlaveZonesHasBeenSet;
}

