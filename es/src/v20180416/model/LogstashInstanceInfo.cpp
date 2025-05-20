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

#include <tencentcloud/es/v20180416/model/LogstashInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

LogstashInstanceInfo::LogstashInstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_chargePeriodHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_logstashVersionHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_bindedESInstanceIdHasBeenSet(false),
    m_yMLConfigHasBeenSet(false),
    m_extendedFilesHasBeenSet(false),
    m_operationDurationHasBeenSet(false),
    m_cpuNumHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_multiZoneInfoHasBeenSet(false)
{
}

CoreInternalOutcome LogstashInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("ChargePeriod") && !value["ChargePeriod"].IsNull())
    {
        if (!value["ChargePeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.ChargePeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chargePeriod = value["ChargePeriod"].GetUint64();
        m_chargePeriodHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeNum") && !value["NodeNum"].IsNull())
    {
        if (!value["NodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.NodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNum = value["NodeNum"].GetUint64();
        m_nodeNumHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.DiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetUint64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("LogstashVersion") && !value["LogstashVersion"].IsNull())
    {
        if (!value["LogstashVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.LogstashVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logstashVersion = string(value["LogstashVersion"].GetString());
        m_logstashVersionHasBeenSet = true;
    }

    if (value.HasMember("LicenseType") && !value["LicenseType"].IsNull())
    {
        if (!value["LicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.LicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = string(value["LicenseType"].GetString());
        m_licenseTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.Deadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = string(value["Deadline"].GetString());
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("Nodes") && !value["Nodes"].IsNull())
    {
        if (!value["Nodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.Nodes` is not array type"));

        const rapidjson::Value &tmpValue = value["Nodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogstashNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodes.push_back(item);
        }
        m_nodesHasBeenSet = true;
    }

    if (value.HasMember("BindedESInstanceId") && !value["BindedESInstanceId"].IsNull())
    {
        if (!value["BindedESInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.BindedESInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindedESInstanceId = string(value["BindedESInstanceId"].GetString());
        m_bindedESInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("YMLConfig") && !value["YMLConfig"].IsNull())
    {
        if (!value["YMLConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.YMLConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yMLConfig = string(value["YMLConfig"].GetString());
        m_yMLConfigHasBeenSet = true;
    }

    if (value.HasMember("ExtendedFiles") && !value["ExtendedFiles"].IsNull())
    {
        if (!value["ExtendedFiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.ExtendedFiles` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtendedFiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogstashExtendedFile item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extendedFiles.push_back(item);
        }
        m_extendedFilesHasBeenSet = true;
    }

    if (value.HasMember("OperationDuration") && !value["OperationDuration"].IsNull())
    {
        if (!value["OperationDuration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.OperationDuration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_operationDuration.Deserialize(value["OperationDuration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_operationDurationHasBeenSet = true;
    }

    if (value.HasMember("CpuNum") && !value["CpuNum"].IsNull())
    {
        if (!value["CpuNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.CpuNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuNum = value["CpuNum"].GetUint64();
        m_cpuNumHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagList.push_back(item);
        }
        m_tagListHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.MemSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetUint64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("DeployMode") && !value["DeployMode"].IsNull())
    {
        if (!value["DeployMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.DeployMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deployMode = value["DeployMode"].GetUint64();
        m_deployModeHasBeenSet = true;
    }

    if (value.HasMember("MultiZoneInfo") && !value["MultiZoneInfo"].IsNull())
    {
        if (!value["MultiZoneInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogstashInstanceInfo.MultiZoneInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["MultiZoneInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_multiZoneInfo.push_back(item);
        }
        m_multiZoneInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogstashInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
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

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_chargePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargePeriod, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_logstashVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogstashVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logstashVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
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

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadline.c_str(), allocator).Move(), allocator);
    }

    if (m_nodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodes.begin(); itr != m_nodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bindedESInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindedESInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindedESInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_yMLConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YMLConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yMLConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_extendedFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendedFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extendedFiles.begin(); itr != m_extendedFiles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_operationDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operationDuration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuNum, allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployMode, allocator);
    }

    if (m_multiZoneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZoneInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiZoneInfo.begin(); itr != m_multiZoneInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LogstashInstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void LogstashInstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool LogstashInstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string LogstashInstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void LogstashInstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool LogstashInstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string LogstashInstanceInfo::GetRegion() const
{
    return m_region;
}

void LogstashInstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool LogstashInstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string LogstashInstanceInfo::GetZone() const
{
    return m_zone;
}

void LogstashInstanceInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool LogstashInstanceInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t LogstashInstanceInfo::GetAppId() const
{
    return m_appId;
}

void LogstashInstanceInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool LogstashInstanceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string LogstashInstanceInfo::GetUin() const
{
    return m_uin;
}

void LogstashInstanceInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool LogstashInstanceInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string LogstashInstanceInfo::GetVpcId() const
{
    return m_vpcId;
}

void LogstashInstanceInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool LogstashInstanceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string LogstashInstanceInfo::GetSubnetId() const
{
    return m_subnetId;
}

void LogstashInstanceInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool LogstashInstanceInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t LogstashInstanceInfo::GetStatus() const
{
    return m_status;
}

void LogstashInstanceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LogstashInstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LogstashInstanceInfo::GetChargeType() const
{
    return m_chargeType;
}

void LogstashInstanceInfo::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool LogstashInstanceInfo::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

uint64_t LogstashInstanceInfo::GetChargePeriod() const
{
    return m_chargePeriod;
}

void LogstashInstanceInfo::SetChargePeriod(const uint64_t& _chargePeriod)
{
    m_chargePeriod = _chargePeriod;
    m_chargePeriodHasBeenSet = true;
}

bool LogstashInstanceInfo::ChargePeriodHasBeenSet() const
{
    return m_chargePeriodHasBeenSet;
}

string LogstashInstanceInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void LogstashInstanceInfo::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool LogstashInstanceInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string LogstashInstanceInfo::GetNodeType() const
{
    return m_nodeType;
}

void LogstashInstanceInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool LogstashInstanceInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t LogstashInstanceInfo::GetNodeNum() const
{
    return m_nodeNum;
}

void LogstashInstanceInfo::SetNodeNum(const uint64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool LogstashInstanceInfo::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

string LogstashInstanceInfo::GetDiskType() const
{
    return m_diskType;
}

void LogstashInstanceInfo::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool LogstashInstanceInfo::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

uint64_t LogstashInstanceInfo::GetDiskSize() const
{
    return m_diskSize;
}

void LogstashInstanceInfo::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool LogstashInstanceInfo::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string LogstashInstanceInfo::GetLogstashVersion() const
{
    return m_logstashVersion;
}

void LogstashInstanceInfo::SetLogstashVersion(const string& _logstashVersion)
{
    m_logstashVersion = _logstashVersion;
    m_logstashVersionHasBeenSet = true;
}

bool LogstashInstanceInfo::LogstashVersionHasBeenSet() const
{
    return m_logstashVersionHasBeenSet;
}

string LogstashInstanceInfo::GetLicenseType() const
{
    return m_licenseType;
}

void LogstashInstanceInfo::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool LogstashInstanceInfo::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

string LogstashInstanceInfo::GetCreateTime() const
{
    return m_createTime;
}

void LogstashInstanceInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LogstashInstanceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LogstashInstanceInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void LogstashInstanceInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LogstashInstanceInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string LogstashInstanceInfo::GetDeadline() const
{
    return m_deadline;
}

void LogstashInstanceInfo::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool LogstashInstanceInfo::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

vector<LogstashNodeInfo> LogstashInstanceInfo::GetNodes() const
{
    return m_nodes;
}

void LogstashInstanceInfo::SetNodes(const vector<LogstashNodeInfo>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool LogstashInstanceInfo::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

string LogstashInstanceInfo::GetBindedESInstanceId() const
{
    return m_bindedESInstanceId;
}

void LogstashInstanceInfo::SetBindedESInstanceId(const string& _bindedESInstanceId)
{
    m_bindedESInstanceId = _bindedESInstanceId;
    m_bindedESInstanceIdHasBeenSet = true;
}

bool LogstashInstanceInfo::BindedESInstanceIdHasBeenSet() const
{
    return m_bindedESInstanceIdHasBeenSet;
}

string LogstashInstanceInfo::GetYMLConfig() const
{
    return m_yMLConfig;
}

void LogstashInstanceInfo::SetYMLConfig(const string& _yMLConfig)
{
    m_yMLConfig = _yMLConfig;
    m_yMLConfigHasBeenSet = true;
}

bool LogstashInstanceInfo::YMLConfigHasBeenSet() const
{
    return m_yMLConfigHasBeenSet;
}

vector<LogstashExtendedFile> LogstashInstanceInfo::GetExtendedFiles() const
{
    return m_extendedFiles;
}

void LogstashInstanceInfo::SetExtendedFiles(const vector<LogstashExtendedFile>& _extendedFiles)
{
    m_extendedFiles = _extendedFiles;
    m_extendedFilesHasBeenSet = true;
}

bool LogstashInstanceInfo::ExtendedFilesHasBeenSet() const
{
    return m_extendedFilesHasBeenSet;
}

OperationDuration LogstashInstanceInfo::GetOperationDuration() const
{
    return m_operationDuration;
}

void LogstashInstanceInfo::SetOperationDuration(const OperationDuration& _operationDuration)
{
    m_operationDuration = _operationDuration;
    m_operationDurationHasBeenSet = true;
}

bool LogstashInstanceInfo::OperationDurationHasBeenSet() const
{
    return m_operationDurationHasBeenSet;
}

uint64_t LogstashInstanceInfo::GetCpuNum() const
{
    return m_cpuNum;
}

void LogstashInstanceInfo::SetCpuNum(const uint64_t& _cpuNum)
{
    m_cpuNum = _cpuNum;
    m_cpuNumHasBeenSet = true;
}

bool LogstashInstanceInfo::CpuNumHasBeenSet() const
{
    return m_cpuNumHasBeenSet;
}

vector<TagInfo> LogstashInstanceInfo::GetTagList() const
{
    return m_tagList;
}

void LogstashInstanceInfo::SetTagList(const vector<TagInfo>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool LogstashInstanceInfo::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

uint64_t LogstashInstanceInfo::GetMemSize() const
{
    return m_memSize;
}

void LogstashInstanceInfo::SetMemSize(const uint64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool LogstashInstanceInfo::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

uint64_t LogstashInstanceInfo::GetDeployMode() const
{
    return m_deployMode;
}

void LogstashInstanceInfo::SetDeployMode(const uint64_t& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool LogstashInstanceInfo::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

vector<ZoneDetail> LogstashInstanceInfo::GetMultiZoneInfo() const
{
    return m_multiZoneInfo;
}

void LogstashInstanceInfo::SetMultiZoneInfo(const vector<ZoneDetail>& _multiZoneInfo)
{
    m_multiZoneInfo = _multiZoneInfo;
    m_multiZoneInfoHasBeenSet = true;
}

bool LogstashInstanceInfo::MultiZoneInfoHasBeenSet() const
{
    return m_multiZoneInfoHasBeenSet;
}

