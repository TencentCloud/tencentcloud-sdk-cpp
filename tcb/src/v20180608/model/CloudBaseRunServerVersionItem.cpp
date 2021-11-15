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

#include <tencentcloud/tcb/v20180608/model/CloudBaseRunServerVersionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseRunServerVersionItem::CloudBaseRunServerVersionItem() :
    m_versionNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_flowRatioHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_buildIdHasBeenSet(false),
    m_uploadTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_urlParamHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_isDefaultPriorityHasBeenSet(false),
    m_flowParamsHasBeenSet(false),
    m_minReplicasHasBeenSet(false),
    m_maxReplicasHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_currentReplicasHasBeenSet(false),
    m_architectureHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseRunServerVersionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FlowRatio") && !value["FlowRatio"].IsNull())
    {
        if (!value["FlowRatio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.FlowRatio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowRatio = value["FlowRatio"].GetInt64();
        m_flowRatioHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("BuildId") && !value["BuildId"].IsNull())
    {
        if (!value["BuildId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.BuildId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_buildId = value["BuildId"].GetInt64();
        m_buildIdHasBeenSet = true;
    }

    if (value.HasMember("UploadType") && !value["UploadType"].IsNull())
    {
        if (!value["UploadType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.UploadType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadType = string(value["UploadType"].GetString());
        m_uploadTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("UrlParam") && !value["UrlParam"].IsNull())
    {
        if (!value["UrlParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.UrlParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_urlParam.Deserialize(value["UrlParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_urlParamHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("IsDefaultPriority") && !value["IsDefaultPriority"].IsNull())
    {
        if (!value["IsDefaultPriority"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.IsDefaultPriority` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultPriority = value["IsDefaultPriority"].GetBool();
        m_isDefaultPriorityHasBeenSet = true;
    }

    if (value.HasMember("FlowParams") && !value["FlowParams"].IsNull())
    {
        if (!value["FlowParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.FlowParams` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudBaseRunKVPriority item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowParams.push_back(item);
        }
        m_flowParamsHasBeenSet = true;
    }

    if (value.HasMember("MinReplicas") && !value["MinReplicas"].IsNull())
    {
        if (!value["MinReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.MinReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minReplicas = value["MinReplicas"].GetInt64();
        m_minReplicasHasBeenSet = true;
    }

    if (value.HasMember("MaxReplicas") && !value["MaxReplicas"].IsNull())
    {
        if (!value["MaxReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.MaxReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplicas = value["MaxReplicas"].GetInt64();
        m_maxReplicasHasBeenSet = true;
    }

    if (value.HasMember("RunId") && !value["RunId"].IsNull())
    {
        if (!value["RunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.RunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runId = string(value["RunId"].GetString());
        m_runIdHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.Percent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetInt64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("CurrentReplicas") && !value["CurrentReplicas"].IsNull())
    {
        if (!value["CurrentReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.CurrentReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentReplicas = value["CurrentReplicas"].GetInt64();
        m_currentReplicasHasBeenSet = true;
    }

    if (value.HasMember("Architecture") && !value["Architecture"].IsNull())
    {
        if (!value["Architecture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunServerVersionItem.Architecture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_architecture = string(value["Architecture"].GetString());
        m_architectureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseRunServerVersionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_flowRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowRatio, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_buildIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buildId, allocator);
    }

    if (m_uploadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_urlParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_urlParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_isDefaultPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefaultPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefaultPriority, allocator);
    }

    if (m_flowParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowParams.begin(); itr != m_flowParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_minReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minReplicas, allocator);
    }

    if (m_maxReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReplicas, allocator);
    }

    if (m_runIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runId.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_currentReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentReplicas, allocator);
    }

    if (m_architectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Architecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_architecture.c_str(), allocator).Move(), allocator);
    }

}


string CloudBaseRunServerVersionItem::GetVersionName() const
{
    return m_versionName;
}

void CloudBaseRunServerVersionItem::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string CloudBaseRunServerVersionItem::GetStatus() const
{
    return m_status;
}

void CloudBaseRunServerVersionItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t CloudBaseRunServerVersionItem::GetFlowRatio() const
{
    return m_flowRatio;
}

void CloudBaseRunServerVersionItem::SetFlowRatio(const int64_t& _flowRatio)
{
    m_flowRatio = _flowRatio;
    m_flowRatioHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::FlowRatioHasBeenSet() const
{
    return m_flowRatioHasBeenSet;
}

string CloudBaseRunServerVersionItem::GetCreatedTime() const
{
    return m_createdTime;
}

void CloudBaseRunServerVersionItem::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string CloudBaseRunServerVersionItem::GetUpdatedTime() const
{
    return m_updatedTime;
}

void CloudBaseRunServerVersionItem::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

int64_t CloudBaseRunServerVersionItem::GetBuildId() const
{
    return m_buildId;
}

void CloudBaseRunServerVersionItem::SetBuildId(const int64_t& _buildId)
{
    m_buildId = _buildId;
    m_buildIdHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::BuildIdHasBeenSet() const
{
    return m_buildIdHasBeenSet;
}

string CloudBaseRunServerVersionItem::GetUploadType() const
{
    return m_uploadType;
}

void CloudBaseRunServerVersionItem::SetUploadType(const string& _uploadType)
{
    m_uploadType = _uploadType;
    m_uploadTypeHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::UploadTypeHasBeenSet() const
{
    return m_uploadTypeHasBeenSet;
}

string CloudBaseRunServerVersionItem::GetRemark() const
{
    return m_remark;
}

void CloudBaseRunServerVersionItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

ObjectKV CloudBaseRunServerVersionItem::GetUrlParam() const
{
    return m_urlParam;
}

void CloudBaseRunServerVersionItem::SetUrlParam(const ObjectKV& _urlParam)
{
    m_urlParam = _urlParam;
    m_urlParamHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::UrlParamHasBeenSet() const
{
    return m_urlParamHasBeenSet;
}

int64_t CloudBaseRunServerVersionItem::GetPriority() const
{
    return m_priority;
}

void CloudBaseRunServerVersionItem::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

bool CloudBaseRunServerVersionItem::GetIsDefaultPriority() const
{
    return m_isDefaultPriority;
}

void CloudBaseRunServerVersionItem::SetIsDefaultPriority(const bool& _isDefaultPriority)
{
    m_isDefaultPriority = _isDefaultPriority;
    m_isDefaultPriorityHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::IsDefaultPriorityHasBeenSet() const
{
    return m_isDefaultPriorityHasBeenSet;
}

vector<CloudBaseRunKVPriority> CloudBaseRunServerVersionItem::GetFlowParams() const
{
    return m_flowParams;
}

void CloudBaseRunServerVersionItem::SetFlowParams(const vector<CloudBaseRunKVPriority>& _flowParams)
{
    m_flowParams = _flowParams;
    m_flowParamsHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::FlowParamsHasBeenSet() const
{
    return m_flowParamsHasBeenSet;
}

int64_t CloudBaseRunServerVersionItem::GetMinReplicas() const
{
    return m_minReplicas;
}

void CloudBaseRunServerVersionItem::SetMinReplicas(const int64_t& _minReplicas)
{
    m_minReplicas = _minReplicas;
    m_minReplicasHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::MinReplicasHasBeenSet() const
{
    return m_minReplicasHasBeenSet;
}

int64_t CloudBaseRunServerVersionItem::GetMaxReplicas() const
{
    return m_maxReplicas;
}

void CloudBaseRunServerVersionItem::SetMaxReplicas(const int64_t& _maxReplicas)
{
    m_maxReplicas = _maxReplicas;
    m_maxReplicasHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::MaxReplicasHasBeenSet() const
{
    return m_maxReplicasHasBeenSet;
}

string CloudBaseRunServerVersionItem::GetRunId() const
{
    return m_runId;
}

void CloudBaseRunServerVersionItem::SetRunId(const string& _runId)
{
    m_runId = _runId;
    m_runIdHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::RunIdHasBeenSet() const
{
    return m_runIdHasBeenSet;
}

int64_t CloudBaseRunServerVersionItem::GetPercent() const
{
    return m_percent;
}

void CloudBaseRunServerVersionItem::SetPercent(const int64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

int64_t CloudBaseRunServerVersionItem::GetCurrentReplicas() const
{
    return m_currentReplicas;
}

void CloudBaseRunServerVersionItem::SetCurrentReplicas(const int64_t& _currentReplicas)
{
    m_currentReplicas = _currentReplicas;
    m_currentReplicasHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::CurrentReplicasHasBeenSet() const
{
    return m_currentReplicasHasBeenSet;
}

string CloudBaseRunServerVersionItem::GetArchitecture() const
{
    return m_architecture;
}

void CloudBaseRunServerVersionItem::SetArchitecture(const string& _architecture)
{
    m_architecture = _architecture;
    m_architectureHasBeenSet = true;
}

bool CloudBaseRunServerVersionItem::ArchitectureHasBeenSet() const
{
    return m_architectureHasBeenSet;
}

