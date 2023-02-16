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

#include <tencentcloud/tem/v20210701/model/ServiceVersionBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

ServiceVersionBrief::ServiceVersionBrief() :
    m_versionNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_enableEsHasBeenSet(false),
    m_currentInstancesHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_logOutputConfHasBeenSet(false),
    m_expectedInstancesHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_buildTaskIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_underDeployingHasBeenSet(false),
    m_batchDeployStatusHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_nodeInfosHasBeenSet(false),
    m_podListHasBeenSet(false),
    m_workloadInfoHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_regionIdHasBeenSet(false)
{
}

CoreInternalOutcome ServiceVersionBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EnableEs") && !value["EnableEs"].IsNull())
    {
        if (!value["EnableEs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.EnableEs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableEs = value["EnableEs"].GetInt64();
        m_enableEsHasBeenSet = true;
    }

    if (value.HasMember("CurrentInstances") && !value["CurrentInstances"].IsNull())
    {
        if (!value["CurrentInstances"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.CurrentInstances` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentInstances = value["CurrentInstances"].GetInt64();
        m_currentInstancesHasBeenSet = true;
    }

    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("LogOutputConf") && !value["LogOutputConf"].IsNull())
    {
        if (!value["LogOutputConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.LogOutputConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logOutputConf.Deserialize(value["LogOutputConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logOutputConfHasBeenSet = true;
    }

    if (value.HasMember("ExpectedInstances") && !value["ExpectedInstances"].IsNull())
    {
        if (!value["ExpectedInstances"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.ExpectedInstances` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expectedInstances = value["ExpectedInstances"].GetInt64();
        m_expectedInstancesHasBeenSet = true;
    }

    if (value.HasMember("DeployMode") && !value["DeployMode"].IsNull())
    {
        if (!value["DeployMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.DeployMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployMode = string(value["DeployMode"].GetString());
        m_deployModeHasBeenSet = true;
    }

    if (value.HasMember("BuildTaskId") && !value["BuildTaskId"].IsNull())
    {
        if (!value["BuildTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.BuildTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildTaskId = string(value["BuildTaskId"].GetString());
        m_buildTaskIdHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentName") && !value["EnvironmentName"].IsNull())
    {
        if (!value["EnvironmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.EnvironmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentName = string(value["EnvironmentName"].GetString());
        m_environmentNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("UnderDeploying") && !value["UnderDeploying"].IsNull())
    {
        if (!value["UnderDeploying"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.UnderDeploying` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_underDeploying = value["UnderDeploying"].GetBool();
        m_underDeployingHasBeenSet = true;
    }

    if (value.HasMember("BatchDeployStatus") && !value["BatchDeployStatus"].IsNull())
    {
        if (!value["BatchDeployStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.BatchDeployStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchDeployStatus = string(value["BatchDeployStatus"].GetString());
        m_batchDeployStatusHasBeenSet = true;
    }

    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.Zones` is not array type"));

        const rapidjson::Value &tmpValue = value["Zones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zones.push_back((*itr).GetString());
        }
        m_zonesHasBeenSet = true;
    }

    if (value.HasMember("NodeInfos") && !value["NodeInfos"].IsNull())
    {
        if (!value["NodeInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.NodeInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeInfos.push_back(item);
        }
        m_nodeInfosHasBeenSet = true;
    }

    if (value.HasMember("PodList") && !value["PodList"].IsNull())
    {
        if (!value["PodList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.PodList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_podList.Deserialize(value["PodList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_podListHasBeenSet = true;
    }

    if (value.HasMember("WorkloadInfo") && !value["WorkloadInfo"].IsNull())
    {
        if (!value["WorkloadInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.WorkloadInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workloadInfo.Deserialize(value["WorkloadInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workloadInfoHasBeenSet = true;
    }

    if (value.HasMember("CreateDate") && !value["CreateDate"].IsNull())
    {
        if (!value["CreateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.CreateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createDate = string(value["CreateDate"].GetString());
        m_createDateHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVersionBrief.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceVersionBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_enableEsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableEs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableEs, allocator);
    }

    if (m_currentInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentInstances, allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_logOutputConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogOutputConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logOutputConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_expectedInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expectedInstances, allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployMode.c_str(), allocator).Move(), allocator);
    }

    if (m_buildTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_underDeployingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnderDeploying";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_underDeploying, allocator);
    }

    if (m_batchDeployStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchDeployStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchDeployStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nodeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeInfos.begin(); itr != m_nodeInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_podListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_podList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workloadInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workloadInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createDate.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

}


string ServiceVersionBrief::GetVersionName() const
{
    return m_versionName;
}

void ServiceVersionBrief::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool ServiceVersionBrief::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string ServiceVersionBrief::GetStatus() const
{
    return m_status;
}

void ServiceVersionBrief::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServiceVersionBrief::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ServiceVersionBrief::GetEnableEs() const
{
    return m_enableEs;
}

void ServiceVersionBrief::SetEnableEs(const int64_t& _enableEs)
{
    m_enableEs = _enableEs;
    m_enableEsHasBeenSet = true;
}

bool ServiceVersionBrief::EnableEsHasBeenSet() const
{
    return m_enableEsHasBeenSet;
}

int64_t ServiceVersionBrief::GetCurrentInstances() const
{
    return m_currentInstances;
}

void ServiceVersionBrief::SetCurrentInstances(const int64_t& _currentInstances)
{
    m_currentInstances = _currentInstances;
    m_currentInstancesHasBeenSet = true;
}

bool ServiceVersionBrief::CurrentInstancesHasBeenSet() const
{
    return m_currentInstancesHasBeenSet;
}

string ServiceVersionBrief::GetVersionId() const
{
    return m_versionId;
}

void ServiceVersionBrief::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool ServiceVersionBrief::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

LogOutputConf ServiceVersionBrief::GetLogOutputConf() const
{
    return m_logOutputConf;
}

void ServiceVersionBrief::SetLogOutputConf(const LogOutputConf& _logOutputConf)
{
    m_logOutputConf = _logOutputConf;
    m_logOutputConfHasBeenSet = true;
}

bool ServiceVersionBrief::LogOutputConfHasBeenSet() const
{
    return m_logOutputConfHasBeenSet;
}

int64_t ServiceVersionBrief::GetExpectedInstances() const
{
    return m_expectedInstances;
}

void ServiceVersionBrief::SetExpectedInstances(const int64_t& _expectedInstances)
{
    m_expectedInstances = _expectedInstances;
    m_expectedInstancesHasBeenSet = true;
}

bool ServiceVersionBrief::ExpectedInstancesHasBeenSet() const
{
    return m_expectedInstancesHasBeenSet;
}

string ServiceVersionBrief::GetDeployMode() const
{
    return m_deployMode;
}

void ServiceVersionBrief::SetDeployMode(const string& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool ServiceVersionBrief::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

string ServiceVersionBrief::GetBuildTaskId() const
{
    return m_buildTaskId;
}

void ServiceVersionBrief::SetBuildTaskId(const string& _buildTaskId)
{
    m_buildTaskId = _buildTaskId;
    m_buildTaskIdHasBeenSet = true;
}

bool ServiceVersionBrief::BuildTaskIdHasBeenSet() const
{
    return m_buildTaskIdHasBeenSet;
}

string ServiceVersionBrief::GetEnvironmentId() const
{
    return m_environmentId;
}

void ServiceVersionBrief::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool ServiceVersionBrief::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string ServiceVersionBrief::GetEnvironmentName() const
{
    return m_environmentName;
}

void ServiceVersionBrief::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool ServiceVersionBrief::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

string ServiceVersionBrief::GetApplicationId() const
{
    return m_applicationId;
}

void ServiceVersionBrief::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ServiceVersionBrief::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ServiceVersionBrief::GetApplicationName() const
{
    return m_applicationName;
}

void ServiceVersionBrief::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ServiceVersionBrief::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

bool ServiceVersionBrief::GetUnderDeploying() const
{
    return m_underDeploying;
}

void ServiceVersionBrief::SetUnderDeploying(const bool& _underDeploying)
{
    m_underDeploying = _underDeploying;
    m_underDeployingHasBeenSet = true;
}

bool ServiceVersionBrief::UnderDeployingHasBeenSet() const
{
    return m_underDeployingHasBeenSet;
}

string ServiceVersionBrief::GetBatchDeployStatus() const
{
    return m_batchDeployStatus;
}

void ServiceVersionBrief::SetBatchDeployStatus(const string& _batchDeployStatus)
{
    m_batchDeployStatus = _batchDeployStatus;
    m_batchDeployStatusHasBeenSet = true;
}

bool ServiceVersionBrief::BatchDeployStatusHasBeenSet() const
{
    return m_batchDeployStatusHasBeenSet;
}

vector<string> ServiceVersionBrief::GetZones() const
{
    return m_zones;
}

void ServiceVersionBrief::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool ServiceVersionBrief::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

vector<NodeInfo> ServiceVersionBrief::GetNodeInfos() const
{
    return m_nodeInfos;
}

void ServiceVersionBrief::SetNodeInfos(const vector<NodeInfo>& _nodeInfos)
{
    m_nodeInfos = _nodeInfos;
    m_nodeInfosHasBeenSet = true;
}

bool ServiceVersionBrief::NodeInfosHasBeenSet() const
{
    return m_nodeInfosHasBeenSet;
}

DescribeRunPodPage ServiceVersionBrief::GetPodList() const
{
    return m_podList;
}

void ServiceVersionBrief::SetPodList(const DescribeRunPodPage& _podList)
{
    m_podList = _podList;
    m_podListHasBeenSet = true;
}

bool ServiceVersionBrief::PodListHasBeenSet() const
{
    return m_podListHasBeenSet;
}

WorkloadInfo ServiceVersionBrief::GetWorkloadInfo() const
{
    return m_workloadInfo;
}

void ServiceVersionBrief::SetWorkloadInfo(const WorkloadInfo& _workloadInfo)
{
    m_workloadInfo = _workloadInfo;
    m_workloadInfoHasBeenSet = true;
}

bool ServiceVersionBrief::WorkloadInfoHasBeenSet() const
{
    return m_workloadInfoHasBeenSet;
}

string ServiceVersionBrief::GetCreateDate() const
{
    return m_createDate;
}

void ServiceVersionBrief::SetCreateDate(const string& _createDate)
{
    m_createDate = _createDate;
    m_createDateHasBeenSet = true;
}

bool ServiceVersionBrief::CreateDateHasBeenSet() const
{
    return m_createDateHasBeenSet;
}

string ServiceVersionBrief::GetRegionId() const
{
    return m_regionId;
}

void ServiceVersionBrief::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ServiceVersionBrief::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

