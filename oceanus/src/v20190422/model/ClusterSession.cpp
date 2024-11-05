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
    m_taskManagerMemHasBeenSet(false)
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

