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

#include <tencentcloud/oceanus/v20190422/model/ClusterSession.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

ClusterSession::ClusterSession() :
    m_clusterGroupSerialIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cuNumHasBeenSet(false),
    m_flinkVersionHasBeenSet(false),
    m_webUIUrlHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_resourceRefsHasBeenSet(false),
    m_jobManagerCuSpecHasBeenSet(false),
    m_taskManagerCuSpecHasBeenSet(false),
    m_taskManagerNumHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_jobManagerCpuHasBeenSet(false),
    m_jobManagerMemHasBeenSet(false),
    m_taskManagerCpuHasBeenSet(false),
    m_taskManagerMemHasBeenSet(false),
    m_jdkVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serialIdHasBeenSet(false),
    m_clusterGroupNameHasBeenSet(false),
    m_totalCpuHasBeenSet(false),
    m_totalMemHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_workSpaceNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_updateUinHasBeenSet(false)
{
}

CoreInternalOutcome ClusterSession::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterGroupSerialId") && !value["ClusterGroupSerialId"].IsNull())
    {
        if (!value["ClusterGroupSerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.ClusterGroupSerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterGroupSerialId = string(value["ClusterGroupSerialId"].GetString());
        m_clusterGroupSerialIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CuNum") && !value["CuNum"].IsNull())
    {
        if (!value["CuNum"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.CuNum` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cuNum = value["CuNum"].GetDouble();
        m_cuNumHasBeenSet = true;
    }

    if (value.HasMember("FlinkVersion") && !value["FlinkVersion"].IsNull())
    {
        if (!value["FlinkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.FlinkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flinkVersion = string(value["FlinkVersion"].GetString());
        m_flinkVersionHasBeenSet = true;
    }

    if (value.HasMember("WebUIUrl") && !value["WebUIUrl"].IsNull())
    {
        if (!value["WebUIUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.WebUIUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webUIUrl = string(value["WebUIUrl"].GetString());
        m_webUIUrlHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterSession.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Property item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("ResourceRefs") && !value["ResourceRefs"].IsNull())
    {
        if (!value["ResourceRefs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterSession.ResourceRefs` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceRefs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SessionClusterRefItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceRefs.push_back(item);
        }
        m_resourceRefsHasBeenSet = true;
    }

    if (value.HasMember("JobManagerCuSpec") && !value["JobManagerCuSpec"].IsNull())
    {
        if (!value["JobManagerCuSpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.JobManagerCuSpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_jobManagerCuSpec = value["JobManagerCuSpec"].GetDouble();
        m_jobManagerCuSpecHasBeenSet = true;
    }

    if (value.HasMember("TaskManagerCuSpec") && !value["TaskManagerCuSpec"].IsNull())
    {
        if (!value["TaskManagerCuSpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.TaskManagerCuSpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_taskManagerCuSpec = value["TaskManagerCuSpec"].GetDouble();
        m_taskManagerCuSpecHasBeenSet = true;
    }

    if (value.HasMember("TaskManagerNum") && !value["TaskManagerNum"].IsNull())
    {
        if (!value["TaskManagerNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.TaskManagerNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskManagerNum = value["TaskManagerNum"].GetInt64();
        m_taskManagerNumHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("JobManagerCpu") && !value["JobManagerCpu"].IsNull())
    {
        if (!value["JobManagerCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.JobManagerCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_jobManagerCpu = value["JobManagerCpu"].GetDouble();
        m_jobManagerCpuHasBeenSet = true;
    }

    if (value.HasMember("JobManagerMem") && !value["JobManagerMem"].IsNull())
    {
        if (!value["JobManagerMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.JobManagerMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_jobManagerMem = value["JobManagerMem"].GetDouble();
        m_jobManagerMemHasBeenSet = true;
    }

    if (value.HasMember("TaskManagerCpu") && !value["TaskManagerCpu"].IsNull())
    {
        if (!value["TaskManagerCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.TaskManagerCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_taskManagerCpu = value["TaskManagerCpu"].GetDouble();
        m_taskManagerCpuHasBeenSet = true;
    }

    if (value.HasMember("TaskManagerMem") && !value["TaskManagerMem"].IsNull())
    {
        if (!value["TaskManagerMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.TaskManagerMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_taskManagerMem = value["TaskManagerMem"].GetDouble();
        m_taskManagerMemHasBeenSet = true;
    }

    if (value.HasMember("JdkVersion") && !value["JdkVersion"].IsNull())
    {
        if (!value["JdkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.JdkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jdkVersion = string(value["JdkVersion"].GetString());
        m_jdkVersionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SerialId") && !value["SerialId"].IsNull())
    {
        if (!value["SerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.SerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialId = string(value["SerialId"].GetString());
        m_serialIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterGroupName") && !value["ClusterGroupName"].IsNull())
    {
        if (!value["ClusterGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.ClusterGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterGroupName = string(value["ClusterGroupName"].GetString());
        m_clusterGroupNameHasBeenSet = true;
    }

    if (value.HasMember("TotalCpu") && !value["TotalCpu"].IsNull())
    {
        if (!value["TotalCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.TotalCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCpu = value["TotalCpu"].GetDouble();
        m_totalCpuHasBeenSet = true;
    }

    if (value.HasMember("TotalMem") && !value["TotalMem"].IsNull())
    {
        if (!value["TotalMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.TotalMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalMem = value["TotalMem"].GetDouble();
        m_totalMemHasBeenSet = true;
    }

    if (value.HasMember("WorkSpaceId") && !value["WorkSpaceId"].IsNull())
    {
        if (!value["WorkSpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.WorkSpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workSpaceId = string(value["WorkSpaceId"].GetString());
        m_workSpaceIdHasBeenSet = true;
    }

    if (value.HasMember("WorkSpaceName") && !value["WorkSpaceName"].IsNull())
    {
        if (!value["WorkSpaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.WorkSpaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workSpaceName = string(value["WorkSpaceName"].GetString());
        m_workSpaceNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterSession.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("LogConfig") && !value["LogConfig"].IsNull())
    {
        if (!value["LogConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.LogConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logConfig = string(value["LogConfig"].GetString());
        m_logConfigHasBeenSet = true;
    }

    if (value.HasMember("UpdateUin") && !value["UpdateUin"].IsNull())
    {
        if (!value["UpdateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSession.UpdateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUin = string(value["UpdateUin"].GetString());
        m_updateUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterSession::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterGroupSerialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterGroupSerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterGroupSerialId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cuNum, allocator);
    }

    if (m_flinkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlinkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flinkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_webUIUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebUIUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webUIUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceRefsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRefs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceRefs.begin(); itr != m_resourceRefs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_jobManagerCuSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobManagerCuSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobManagerCuSpec, allocator);
    }

    if (m_taskManagerCuSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskManagerCuSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskManagerCuSpec, allocator);
    }

    if (m_taskManagerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskManagerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskManagerNum, allocator);
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

    if (m_jobManagerCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobManagerCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobManagerCpu, allocator);
    }

    if (m_jobManagerMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobManagerMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobManagerMem, allocator);
    }

    if (m_taskManagerCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskManagerCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskManagerCpu, allocator);
    }

    if (m_taskManagerMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskManagerMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskManagerMem, allocator);
    }

    if (m_jdkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JdkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jdkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_serialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCpu, allocator);
    }

    if (m_totalMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalMem, allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workSpaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_logConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUin.c_str(), allocator).Move(), allocator);
    }

}


string ClusterSession::GetClusterGroupSerialId() const
{
    return m_clusterGroupSerialId;
}

void ClusterSession::SetClusterGroupSerialId(const string& _clusterGroupSerialId)
{
    m_clusterGroupSerialId = _clusterGroupSerialId;
    m_clusterGroupSerialIdHasBeenSet = true;
}

bool ClusterSession::ClusterGroupSerialIdHasBeenSet() const
{
    return m_clusterGroupSerialIdHasBeenSet;
}

int64_t ClusterSession::GetAppId() const
{
    return m_appId;
}

void ClusterSession::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ClusterSession::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ClusterSession::GetOwnerUin() const
{
    return m_ownerUin;
}

void ClusterSession::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ClusterSession::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ClusterSession::GetCreatorUin() const
{
    return m_creatorUin;
}

void ClusterSession::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool ClusterSession::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string ClusterSession::GetRegion() const
{
    return m_region;
}

void ClusterSession::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ClusterSession::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ClusterSession::GetZone() const
{
    return m_zone;
}

void ClusterSession::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ClusterSession::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t ClusterSession::GetStatus() const
{
    return m_status;
}

void ClusterSession::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClusterSession::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

double ClusterSession::GetCuNum() const
{
    return m_cuNum;
}

void ClusterSession::SetCuNum(const double& _cuNum)
{
    m_cuNum = _cuNum;
    m_cuNumHasBeenSet = true;
}

bool ClusterSession::CuNumHasBeenSet() const
{
    return m_cuNumHasBeenSet;
}

string ClusterSession::GetFlinkVersion() const
{
    return m_flinkVersion;
}

void ClusterSession::SetFlinkVersion(const string& _flinkVersion)
{
    m_flinkVersion = _flinkVersion;
    m_flinkVersionHasBeenSet = true;
}

bool ClusterSession::FlinkVersionHasBeenSet() const
{
    return m_flinkVersionHasBeenSet;
}

string ClusterSession::GetWebUIUrl() const
{
    return m_webUIUrl;
}

void ClusterSession::SetWebUIUrl(const string& _webUIUrl)
{
    m_webUIUrl = _webUIUrl;
    m_webUIUrlHasBeenSet = true;
}

bool ClusterSession::WebUIUrlHasBeenSet() const
{
    return m_webUIUrlHasBeenSet;
}

vector<Property> ClusterSession::GetProperties() const
{
    return m_properties;
}

void ClusterSession::SetProperties(const vector<Property>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool ClusterSession::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

vector<SessionClusterRefItem> ClusterSession::GetResourceRefs() const
{
    return m_resourceRefs;
}

void ClusterSession::SetResourceRefs(const vector<SessionClusterRefItem>& _resourceRefs)
{
    m_resourceRefs = _resourceRefs;
    m_resourceRefsHasBeenSet = true;
}

bool ClusterSession::ResourceRefsHasBeenSet() const
{
    return m_resourceRefsHasBeenSet;
}

double ClusterSession::GetJobManagerCuSpec() const
{
    return m_jobManagerCuSpec;
}

void ClusterSession::SetJobManagerCuSpec(const double& _jobManagerCuSpec)
{
    m_jobManagerCuSpec = _jobManagerCuSpec;
    m_jobManagerCuSpecHasBeenSet = true;
}

bool ClusterSession::JobManagerCuSpecHasBeenSet() const
{
    return m_jobManagerCuSpecHasBeenSet;
}

double ClusterSession::GetTaskManagerCuSpec() const
{
    return m_taskManagerCuSpec;
}

void ClusterSession::SetTaskManagerCuSpec(const double& _taskManagerCuSpec)
{
    m_taskManagerCuSpec = _taskManagerCuSpec;
    m_taskManagerCuSpecHasBeenSet = true;
}

bool ClusterSession::TaskManagerCuSpecHasBeenSet() const
{
    return m_taskManagerCuSpecHasBeenSet;
}

int64_t ClusterSession::GetTaskManagerNum() const
{
    return m_taskManagerNum;
}

void ClusterSession::SetTaskManagerNum(const int64_t& _taskManagerNum)
{
    m_taskManagerNum = _taskManagerNum;
    m_taskManagerNumHasBeenSet = true;
}

bool ClusterSession::TaskManagerNumHasBeenSet() const
{
    return m_taskManagerNumHasBeenSet;
}

string ClusterSession::GetCreateTime() const
{
    return m_createTime;
}

void ClusterSession::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClusterSession::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ClusterSession::GetUpdateTime() const
{
    return m_updateTime;
}

void ClusterSession::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ClusterSession::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

double ClusterSession::GetJobManagerCpu() const
{
    return m_jobManagerCpu;
}

void ClusterSession::SetJobManagerCpu(const double& _jobManagerCpu)
{
    m_jobManagerCpu = _jobManagerCpu;
    m_jobManagerCpuHasBeenSet = true;
}

bool ClusterSession::JobManagerCpuHasBeenSet() const
{
    return m_jobManagerCpuHasBeenSet;
}

double ClusterSession::GetJobManagerMem() const
{
    return m_jobManagerMem;
}

void ClusterSession::SetJobManagerMem(const double& _jobManagerMem)
{
    m_jobManagerMem = _jobManagerMem;
    m_jobManagerMemHasBeenSet = true;
}

bool ClusterSession::JobManagerMemHasBeenSet() const
{
    return m_jobManagerMemHasBeenSet;
}

double ClusterSession::GetTaskManagerCpu() const
{
    return m_taskManagerCpu;
}

void ClusterSession::SetTaskManagerCpu(const double& _taskManagerCpu)
{
    m_taskManagerCpu = _taskManagerCpu;
    m_taskManagerCpuHasBeenSet = true;
}

bool ClusterSession::TaskManagerCpuHasBeenSet() const
{
    return m_taskManagerCpuHasBeenSet;
}

double ClusterSession::GetTaskManagerMem() const
{
    return m_taskManagerMem;
}

void ClusterSession::SetTaskManagerMem(const double& _taskManagerMem)
{
    m_taskManagerMem = _taskManagerMem;
    m_taskManagerMemHasBeenSet = true;
}

bool ClusterSession::TaskManagerMemHasBeenSet() const
{
    return m_taskManagerMemHasBeenSet;
}

string ClusterSession::GetJdkVersion() const
{
    return m_jdkVersion;
}

void ClusterSession::SetJdkVersion(const string& _jdkVersion)
{
    m_jdkVersion = _jdkVersion;
    m_jdkVersionHasBeenSet = true;
}

bool ClusterSession::JdkVersionHasBeenSet() const
{
    return m_jdkVersionHasBeenSet;
}

string ClusterSession::GetDescription() const
{
    return m_description;
}

void ClusterSession::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ClusterSession::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ClusterSession::GetName() const
{
    return m_name;
}

void ClusterSession::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ClusterSession::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ClusterSession::GetSerialId() const
{
    return m_serialId;
}

void ClusterSession::SetSerialId(const string& _serialId)
{
    m_serialId = _serialId;
    m_serialIdHasBeenSet = true;
}

bool ClusterSession::SerialIdHasBeenSet() const
{
    return m_serialIdHasBeenSet;
}

string ClusterSession::GetClusterGroupName() const
{
    return m_clusterGroupName;
}

void ClusterSession::SetClusterGroupName(const string& _clusterGroupName)
{
    m_clusterGroupName = _clusterGroupName;
    m_clusterGroupNameHasBeenSet = true;
}

bool ClusterSession::ClusterGroupNameHasBeenSet() const
{
    return m_clusterGroupNameHasBeenSet;
}

double ClusterSession::GetTotalCpu() const
{
    return m_totalCpu;
}

void ClusterSession::SetTotalCpu(const double& _totalCpu)
{
    m_totalCpu = _totalCpu;
    m_totalCpuHasBeenSet = true;
}

bool ClusterSession::TotalCpuHasBeenSet() const
{
    return m_totalCpuHasBeenSet;
}

double ClusterSession::GetTotalMem() const
{
    return m_totalMem;
}

void ClusterSession::SetTotalMem(const double& _totalMem)
{
    m_totalMem = _totalMem;
    m_totalMemHasBeenSet = true;
}

bool ClusterSession::TotalMemHasBeenSet() const
{
    return m_totalMemHasBeenSet;
}

string ClusterSession::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void ClusterSession::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool ClusterSession::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

string ClusterSession::GetWorkSpaceName() const
{
    return m_workSpaceName;
}

void ClusterSession::SetWorkSpaceName(const string& _workSpaceName)
{
    m_workSpaceName = _workSpaceName;
    m_workSpaceNameHasBeenSet = true;
}

bool ClusterSession::WorkSpaceNameHasBeenSet() const
{
    return m_workSpaceNameHasBeenSet;
}

vector<Tag> ClusterSession::GetTags() const
{
    return m_tags;
}

void ClusterSession::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ClusterSession::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ClusterSession::GetLogConfig() const
{
    return m_logConfig;
}

void ClusterSession::SetLogConfig(const string& _logConfig)
{
    m_logConfig = _logConfig;
    m_logConfigHasBeenSet = true;
}

bool ClusterSession::LogConfigHasBeenSet() const
{
    return m_logConfigHasBeenSet;
}

string ClusterSession::GetUpdateUin() const
{
    return m_updateUin;
}

void ClusterSession::SetUpdateUin(const string& _updateUin)
{
    m_updateUin = _updateUin;
    m_updateUinHasBeenSet = true;
}

bool ClusterSession::UpdateUinHasBeenSet() const
{
    return m_updateUinHasBeenSet;
}

