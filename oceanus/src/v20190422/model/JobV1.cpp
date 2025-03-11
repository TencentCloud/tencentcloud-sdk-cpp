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

#include <tencentcloud/oceanus/v20190422/model/JobV1.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

JobV1::JobV1() :
    m_jobIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_totalRunMillisHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_lastOpResultHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_latestJobConfigVersionHasBeenSet(false),
    m_publishedJobConfigVersionHasBeenSet(false),
    m_runningCuNumHasBeenSet(false),
    m_cuMemHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_currentRunMillisHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_webUIUrlHasBeenSet(false),
    m_schedulerTypeHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_runningCuHasBeenSet(false),
    m_flinkVersionHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_workSpaceNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_eventInfoHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scalingTypeHasBeenSet(false),
    m_runningCpuHasBeenSet(false),
    m_runningMemHasBeenSet(false),
    m_openJobDefaultAlarmHasBeenSet(false),
    m_progressDescHasBeenSet(false)
{
}

CoreInternalOutcome JobV1::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.JobType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = value["JobType"].GetInt64();
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("StopTime") && !value["StopTime"].IsNull())
    {
        if (!value["StopTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.StopTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopTime = string(value["StopTime"].GetString());
        m_stopTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalRunMillis") && !value["TotalRunMillis"].IsNull())
    {
        if (!value["TotalRunMillis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.TotalRunMillis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRunMillis = value["TotalRunMillis"].GetInt64();
        m_totalRunMillisHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("LastOpResult") && !value["LastOpResult"].IsNull())
    {
        if (!value["LastOpResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.LastOpResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOpResult = string(value["LastOpResult"].GetString());
        m_lastOpResultHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("LatestJobConfigVersion") && !value["LatestJobConfigVersion"].IsNull())
    {
        if (!value["LatestJobConfigVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.LatestJobConfigVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latestJobConfigVersion = value["LatestJobConfigVersion"].GetInt64();
        m_latestJobConfigVersionHasBeenSet = true;
    }

    if (value.HasMember("PublishedJobConfigVersion") && !value["PublishedJobConfigVersion"].IsNull())
    {
        if (!value["PublishedJobConfigVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.PublishedJobConfigVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publishedJobConfigVersion = value["PublishedJobConfigVersion"].GetInt64();
        m_publishedJobConfigVersionHasBeenSet = true;
    }

    if (value.HasMember("RunningCuNum") && !value["RunningCuNum"].IsNull())
    {
        if (!value["RunningCuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.RunningCuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningCuNum = value["RunningCuNum"].GetInt64();
        m_runningCuNumHasBeenSet = true;
    }

    if (value.HasMember("CuMem") && !value["CuMem"].IsNull())
    {
        if (!value["CuMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.CuMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cuMem = value["CuMem"].GetInt64();
        m_cuMemHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("CurrentRunMillis") && !value["CurrentRunMillis"].IsNull())
    {
        if (!value["CurrentRunMillis"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.CurrentRunMillis` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentRunMillis = value["CurrentRunMillis"].GetInt64();
        m_currentRunMillisHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("WebUIUrl") && !value["WebUIUrl"].IsNull())
    {
        if (!value["WebUIUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.WebUIUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webUIUrl = string(value["WebUIUrl"].GetString());
        m_webUIUrlHasBeenSet = true;
    }

    if (value.HasMember("SchedulerType") && !value["SchedulerType"].IsNull())
    {
        if (!value["SchedulerType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.SchedulerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerType = value["SchedulerType"].GetInt64();
        m_schedulerTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.ClusterStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = value["ClusterStatus"].GetInt64();
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("RunningCu") && !value["RunningCu"].IsNull())
    {
        if (!value["RunningCu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.RunningCu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningCu = value["RunningCu"].GetDouble();
        m_runningCuHasBeenSet = true;
    }

    if (value.HasMember("FlinkVersion") && !value["FlinkVersion"].IsNull())
    {
        if (!value["FlinkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.FlinkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flinkVersion = string(value["FlinkVersion"].GetString());
        m_flinkVersionHasBeenSet = true;
    }

    if (value.HasMember("WorkSpaceId") && !value["WorkSpaceId"].IsNull())
    {
        if (!value["WorkSpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.WorkSpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workSpaceId = string(value["WorkSpaceId"].GetString());
        m_workSpaceIdHasBeenSet = true;
    }

    if (value.HasMember("WorkSpaceName") && !value["WorkSpaceName"].IsNull())
    {
        if (!value["WorkSpaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.WorkSpaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workSpaceName = string(value["WorkSpaceName"].GetString());
        m_workSpaceNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobV1.Tags` is not array type"));

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

    if (value.HasMember("EventInfo") && !value["EventInfo"].IsNull())
    {
        if (!value["EventInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.EventInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eventInfo.Deserialize(value["EventInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eventInfoHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ScalingType") && !value["ScalingType"].IsNull())
    {
        if (!value["ScalingType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.ScalingType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scalingType = value["ScalingType"].GetInt64();
        m_scalingTypeHasBeenSet = true;
    }

    if (value.HasMember("RunningCpu") && !value["RunningCpu"].IsNull())
    {
        if (!value["RunningCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.RunningCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningCpu = value["RunningCpu"].GetDouble();
        m_runningCpuHasBeenSet = true;
    }

    if (value.HasMember("RunningMem") && !value["RunningMem"].IsNull())
    {
        if (!value["RunningMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.RunningMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_runningMem = value["RunningMem"].GetDouble();
        m_runningMemHasBeenSet = true;
    }

    if (value.HasMember("OpenJobDefaultAlarm") && !value["OpenJobDefaultAlarm"].IsNull())
    {
        if (!value["OpenJobDefaultAlarm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.OpenJobDefaultAlarm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_openJobDefaultAlarm = value["OpenJobDefaultAlarm"].GetInt64();
        m_openJobDefaultAlarmHasBeenSet = true;
    }

    if (value.HasMember("ProgressDesc") && !value["ProgressDesc"].IsNull())
    {
        if (!value["ProgressDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobV1.ProgressDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_progressDesc = string(value["ProgressDesc"].GetString());
        m_progressDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobV1::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobType, allocator);
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_totalRunMillisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRunMillis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRunMillis, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_lastOpResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOpResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastOpResult.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_latestJobConfigVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestJobConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestJobConfigVersion, allocator);
    }

    if (m_publishedJobConfigVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishedJobConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publishedJobConfigVersion, allocator);
    }

    if (m_runningCuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCuNum, allocator);
    }

    if (m_cuMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CuMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cuMem, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_currentRunMillisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentRunMillis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentRunMillis, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_webUIUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebUIUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webUIUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_schedulerType, allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterStatus, allocator);
    }

    if (m_runningCuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCu, allocator);
    }

    if (m_flinkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlinkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flinkVersion.c_str(), allocator).Move(), allocator);
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

    if (m_eventInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_scalingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scalingType, allocator);
    }

    if (m_runningCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCpu, allocator);
    }

    if (m_runningMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningMem, allocator);
    }

    if (m_openJobDefaultAlarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenJobDefaultAlarm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openJobDefaultAlarm, allocator);
    }

    if (m_progressDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgressDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_progressDesc.c_str(), allocator).Move(), allocator);
    }

}


string JobV1::GetJobId() const
{
    return m_jobId;
}

void JobV1::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool JobV1::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string JobV1::GetRegion() const
{
    return m_region;
}

void JobV1::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool JobV1::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string JobV1::GetZone() const
{
    return m_zone;
}

void JobV1::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool JobV1::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t JobV1::GetAppId() const
{
    return m_appId;
}

void JobV1::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool JobV1::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string JobV1::GetOwnerUin() const
{
    return m_ownerUin;
}

void JobV1::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool JobV1::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string JobV1::GetCreatorUin() const
{
    return m_creatorUin;
}

void JobV1::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool JobV1::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string JobV1::GetName() const
{
    return m_name;
}

void JobV1::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool JobV1::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t JobV1::GetJobType() const
{
    return m_jobType;
}

void JobV1::SetJobType(const int64_t& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool JobV1::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

int64_t JobV1::GetStatus() const
{
    return m_status;
}

void JobV1::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool JobV1::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string JobV1::GetCreateTime() const
{
    return m_createTime;
}

void JobV1::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JobV1::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string JobV1::GetStartTime() const
{
    return m_startTime;
}

void JobV1::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool JobV1::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string JobV1::GetStopTime() const
{
    return m_stopTime;
}

void JobV1::SetStopTime(const string& _stopTime)
{
    m_stopTime = _stopTime;
    m_stopTimeHasBeenSet = true;
}

bool JobV1::StopTimeHasBeenSet() const
{
    return m_stopTimeHasBeenSet;
}

string JobV1::GetUpdateTime() const
{
    return m_updateTime;
}

void JobV1::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool JobV1::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t JobV1::GetTotalRunMillis() const
{
    return m_totalRunMillis;
}

void JobV1::SetTotalRunMillis(const int64_t& _totalRunMillis)
{
    m_totalRunMillis = _totalRunMillis;
    m_totalRunMillisHasBeenSet = true;
}

bool JobV1::TotalRunMillisHasBeenSet() const
{
    return m_totalRunMillisHasBeenSet;
}

string JobV1::GetRemark() const
{
    return m_remark;
}

void JobV1::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool JobV1::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string JobV1::GetLastOpResult() const
{
    return m_lastOpResult;
}

void JobV1::SetLastOpResult(const string& _lastOpResult)
{
    m_lastOpResult = _lastOpResult;
    m_lastOpResultHasBeenSet = true;
}

bool JobV1::LastOpResultHasBeenSet() const
{
    return m_lastOpResultHasBeenSet;
}

string JobV1::GetClusterName() const
{
    return m_clusterName;
}

void JobV1::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool JobV1::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

int64_t JobV1::GetLatestJobConfigVersion() const
{
    return m_latestJobConfigVersion;
}

void JobV1::SetLatestJobConfigVersion(const int64_t& _latestJobConfigVersion)
{
    m_latestJobConfigVersion = _latestJobConfigVersion;
    m_latestJobConfigVersionHasBeenSet = true;
}

bool JobV1::LatestJobConfigVersionHasBeenSet() const
{
    return m_latestJobConfigVersionHasBeenSet;
}

int64_t JobV1::GetPublishedJobConfigVersion() const
{
    return m_publishedJobConfigVersion;
}

void JobV1::SetPublishedJobConfigVersion(const int64_t& _publishedJobConfigVersion)
{
    m_publishedJobConfigVersion = _publishedJobConfigVersion;
    m_publishedJobConfigVersionHasBeenSet = true;
}

bool JobV1::PublishedJobConfigVersionHasBeenSet() const
{
    return m_publishedJobConfigVersionHasBeenSet;
}

int64_t JobV1::GetRunningCuNum() const
{
    return m_runningCuNum;
}

void JobV1::SetRunningCuNum(const int64_t& _runningCuNum)
{
    m_runningCuNum = _runningCuNum;
    m_runningCuNumHasBeenSet = true;
}

bool JobV1::RunningCuNumHasBeenSet() const
{
    return m_runningCuNumHasBeenSet;
}

int64_t JobV1::GetCuMem() const
{
    return m_cuMem;
}

void JobV1::SetCuMem(const int64_t& _cuMem)
{
    m_cuMem = _cuMem;
    m_cuMemHasBeenSet = true;
}

bool JobV1::CuMemHasBeenSet() const
{
    return m_cuMemHasBeenSet;
}

string JobV1::GetStatusDesc() const
{
    return m_statusDesc;
}

void JobV1::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool JobV1::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

int64_t JobV1::GetCurrentRunMillis() const
{
    return m_currentRunMillis;
}

void JobV1::SetCurrentRunMillis(const int64_t& _currentRunMillis)
{
    m_currentRunMillis = _currentRunMillis;
    m_currentRunMillisHasBeenSet = true;
}

bool JobV1::CurrentRunMillisHasBeenSet() const
{
    return m_currentRunMillisHasBeenSet;
}

string JobV1::GetClusterId() const
{
    return m_clusterId;
}

void JobV1::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool JobV1::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string JobV1::GetWebUIUrl() const
{
    return m_webUIUrl;
}

void JobV1::SetWebUIUrl(const string& _webUIUrl)
{
    m_webUIUrl = _webUIUrl;
    m_webUIUrlHasBeenSet = true;
}

bool JobV1::WebUIUrlHasBeenSet() const
{
    return m_webUIUrlHasBeenSet;
}

int64_t JobV1::GetSchedulerType() const
{
    return m_schedulerType;
}

void JobV1::SetSchedulerType(const int64_t& _schedulerType)
{
    m_schedulerType = _schedulerType;
    m_schedulerTypeHasBeenSet = true;
}

bool JobV1::SchedulerTypeHasBeenSet() const
{
    return m_schedulerTypeHasBeenSet;
}

int64_t JobV1::GetClusterStatus() const
{
    return m_clusterStatus;
}

void JobV1::SetClusterStatus(const int64_t& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool JobV1::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

double JobV1::GetRunningCu() const
{
    return m_runningCu;
}

void JobV1::SetRunningCu(const double& _runningCu)
{
    m_runningCu = _runningCu;
    m_runningCuHasBeenSet = true;
}

bool JobV1::RunningCuHasBeenSet() const
{
    return m_runningCuHasBeenSet;
}

string JobV1::GetFlinkVersion() const
{
    return m_flinkVersion;
}

void JobV1::SetFlinkVersion(const string& _flinkVersion)
{
    m_flinkVersion = _flinkVersion;
    m_flinkVersionHasBeenSet = true;
}

bool JobV1::FlinkVersionHasBeenSet() const
{
    return m_flinkVersionHasBeenSet;
}

string JobV1::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void JobV1::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool JobV1::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

string JobV1::GetWorkSpaceName() const
{
    return m_workSpaceName;
}

void JobV1::SetWorkSpaceName(const string& _workSpaceName)
{
    m_workSpaceName = _workSpaceName;
    m_workSpaceNameHasBeenSet = true;
}

bool JobV1::WorkSpaceNameHasBeenSet() const
{
    return m_workSpaceNameHasBeenSet;
}

vector<Tag> JobV1::GetTags() const
{
    return m_tags;
}

void JobV1::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool JobV1::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

JobEventInfo JobV1::GetEventInfo() const
{
    return m_eventInfo;
}

void JobV1::SetEventInfo(const JobEventInfo& _eventInfo)
{
    m_eventInfo = _eventInfo;
    m_eventInfoHasBeenSet = true;
}

bool JobV1::EventInfoHasBeenSet() const
{
    return m_eventInfoHasBeenSet;
}

string JobV1::GetDescription() const
{
    return m_description;
}

void JobV1::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool JobV1::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t JobV1::GetScalingType() const
{
    return m_scalingType;
}

void JobV1::SetScalingType(const int64_t& _scalingType)
{
    m_scalingType = _scalingType;
    m_scalingTypeHasBeenSet = true;
}

bool JobV1::ScalingTypeHasBeenSet() const
{
    return m_scalingTypeHasBeenSet;
}

double JobV1::GetRunningCpu() const
{
    return m_runningCpu;
}

void JobV1::SetRunningCpu(const double& _runningCpu)
{
    m_runningCpu = _runningCpu;
    m_runningCpuHasBeenSet = true;
}

bool JobV1::RunningCpuHasBeenSet() const
{
    return m_runningCpuHasBeenSet;
}

double JobV1::GetRunningMem() const
{
    return m_runningMem;
}

void JobV1::SetRunningMem(const double& _runningMem)
{
    m_runningMem = _runningMem;
    m_runningMemHasBeenSet = true;
}

bool JobV1::RunningMemHasBeenSet() const
{
    return m_runningMemHasBeenSet;
}

int64_t JobV1::GetOpenJobDefaultAlarm() const
{
    return m_openJobDefaultAlarm;
}

void JobV1::SetOpenJobDefaultAlarm(const int64_t& _openJobDefaultAlarm)
{
    m_openJobDefaultAlarm = _openJobDefaultAlarm;
    m_openJobDefaultAlarmHasBeenSet = true;
}

bool JobV1::OpenJobDefaultAlarmHasBeenSet() const
{
    return m_openJobDefaultAlarmHasBeenSet;
}

string JobV1::GetProgressDesc() const
{
    return m_progressDesc;
}

void JobV1::SetProgressDesc(const string& _progressDesc)
{
    m_progressDesc = _progressDesc;
    m_progressDescHasBeenSet = true;
}

bool JobV1::ProgressDescHasBeenSet() const
{
    return m_progressDescHasBeenSet;
}

