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

#include <tencentcloud/tcbr/v20220217/model/ServerManageTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

ServerManageTaskInfo::ServerManageTaskInfo() :
    m_idHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_changeTypeHasBeenSet(false),
    m_releaseTypeHasBeenSet(false),
    m_deployTypeHasBeenSet(false),
    m_preVersionNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_pipelineIdHasBeenSet(false),
    m_pipelineTaskIdHasBeenSet(false),
    m_releaseIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_operatorRemarkHasBeenSet(false)
{
}

CoreInternalOutcome ServerManageTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("ServerName") && !value["ServerName"].IsNull())
    {
        if (!value["ServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(value["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ChangeType") && !value["ChangeType"].IsNull())
    {
        if (!value["ChangeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.ChangeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_changeType = string(value["ChangeType"].GetString());
        m_changeTypeHasBeenSet = true;
    }

    if (value.HasMember("ReleaseType") && !value["ReleaseType"].IsNull())
    {
        if (!value["ReleaseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.ReleaseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseType = string(value["ReleaseType"].GetString());
        m_releaseTypeHasBeenSet = true;
    }

    if (value.HasMember("DeployType") && !value["DeployType"].IsNull())
    {
        if (!value["DeployType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.DeployType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployType = string(value["DeployType"].GetString());
        m_deployTypeHasBeenSet = true;
    }

    if (value.HasMember("PreVersionName") && !value["PreVersionName"].IsNull())
    {
        if (!value["PreVersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.PreVersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preVersionName = string(value["PreVersionName"].GetString());
        m_preVersionNameHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("PipelineId") && !value["PipelineId"].IsNull())
    {
        if (!value["PipelineId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.PipelineId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pipelineId = value["PipelineId"].GetInt64();
        m_pipelineIdHasBeenSet = true;
    }

    if (value.HasMember("PipelineTaskId") && !value["PipelineTaskId"].IsNull())
    {
        if (!value["PipelineTaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.PipelineTaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pipelineTaskId = value["PipelineTaskId"].GetInt64();
        m_pipelineTaskIdHasBeenSet = true;
    }

    if (value.HasMember("ReleaseId") && !value["ReleaseId"].IsNull())
    {
        if (!value["ReleaseId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.ReleaseId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_releaseId = value["ReleaseId"].GetInt64();
        m_releaseIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Steps") && !value["Steps"].IsNull())
    {
        if (!value["Steps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.Steps` is not array type"));

        const rapidjson::Value &tmpValue = value["Steps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskStepInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_steps.push_back(item);
        }
        m_stepsHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("OperatorRemark") && !value["OperatorRemark"].IsNull())
    {
        if (!value["OperatorRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerManageTaskInfo.OperatorRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorRemark = string(value["OperatorRemark"].GetString());
        m_operatorRemarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerManageTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_changeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_changeType.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_deployTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployType.c_str(), allocator).Move(), allocator);
    }

    if (m_preVersionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreVersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preVersionName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_pipelineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pipelineId, allocator);
    }

    if (m_pipelineTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pipelineTaskId, allocator);
    }

    if (m_releaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_releaseId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_stepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Steps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_steps.begin(); itr != m_steps.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorRemark.c_str(), allocator).Move(), allocator);
    }

}


int64_t ServerManageTaskInfo::GetId() const
{
    return m_id;
}

void ServerManageTaskInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ServerManageTaskInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ServerManageTaskInfo::GetEnvId() const
{
    return m_envId;
}

void ServerManageTaskInfo::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool ServerManageTaskInfo::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string ServerManageTaskInfo::GetServerName() const
{
    return m_serverName;
}

void ServerManageTaskInfo::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool ServerManageTaskInfo::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string ServerManageTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void ServerManageTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ServerManageTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ServerManageTaskInfo::GetChangeType() const
{
    return m_changeType;
}

void ServerManageTaskInfo::SetChangeType(const string& _changeType)
{
    m_changeType = _changeType;
    m_changeTypeHasBeenSet = true;
}

bool ServerManageTaskInfo::ChangeTypeHasBeenSet() const
{
    return m_changeTypeHasBeenSet;
}

string ServerManageTaskInfo::GetReleaseType() const
{
    return m_releaseType;
}

void ServerManageTaskInfo::SetReleaseType(const string& _releaseType)
{
    m_releaseType = _releaseType;
    m_releaseTypeHasBeenSet = true;
}

bool ServerManageTaskInfo::ReleaseTypeHasBeenSet() const
{
    return m_releaseTypeHasBeenSet;
}

string ServerManageTaskInfo::GetDeployType() const
{
    return m_deployType;
}

void ServerManageTaskInfo::SetDeployType(const string& _deployType)
{
    m_deployType = _deployType;
    m_deployTypeHasBeenSet = true;
}

bool ServerManageTaskInfo::DeployTypeHasBeenSet() const
{
    return m_deployTypeHasBeenSet;
}

string ServerManageTaskInfo::GetPreVersionName() const
{
    return m_preVersionName;
}

void ServerManageTaskInfo::SetPreVersionName(const string& _preVersionName)
{
    m_preVersionName = _preVersionName;
    m_preVersionNameHasBeenSet = true;
}

bool ServerManageTaskInfo::PreVersionNameHasBeenSet() const
{
    return m_preVersionNameHasBeenSet;
}

string ServerManageTaskInfo::GetVersionName() const
{
    return m_versionName;
}

void ServerManageTaskInfo::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool ServerManageTaskInfo::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

int64_t ServerManageTaskInfo::GetPipelineId() const
{
    return m_pipelineId;
}

void ServerManageTaskInfo::SetPipelineId(const int64_t& _pipelineId)
{
    m_pipelineId = _pipelineId;
    m_pipelineIdHasBeenSet = true;
}

bool ServerManageTaskInfo::PipelineIdHasBeenSet() const
{
    return m_pipelineIdHasBeenSet;
}

int64_t ServerManageTaskInfo::GetPipelineTaskId() const
{
    return m_pipelineTaskId;
}

void ServerManageTaskInfo::SetPipelineTaskId(const int64_t& _pipelineTaskId)
{
    m_pipelineTaskId = _pipelineTaskId;
    m_pipelineTaskIdHasBeenSet = true;
}

bool ServerManageTaskInfo::PipelineTaskIdHasBeenSet() const
{
    return m_pipelineTaskIdHasBeenSet;
}

int64_t ServerManageTaskInfo::GetReleaseId() const
{
    return m_releaseId;
}

void ServerManageTaskInfo::SetReleaseId(const int64_t& _releaseId)
{
    m_releaseId = _releaseId;
    m_releaseIdHasBeenSet = true;
}

bool ServerManageTaskInfo::ReleaseIdHasBeenSet() const
{
    return m_releaseIdHasBeenSet;
}

string ServerManageTaskInfo::GetStatus() const
{
    return m_status;
}

void ServerManageTaskInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServerManageTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<TaskStepInfo> ServerManageTaskInfo::GetSteps() const
{
    return m_steps;
}

void ServerManageTaskInfo::SetSteps(const vector<TaskStepInfo>& _steps)
{
    m_steps = _steps;
    m_stepsHasBeenSet = true;
}

bool ServerManageTaskInfo::StepsHasBeenSet() const
{
    return m_stepsHasBeenSet;
}

string ServerManageTaskInfo::GetFailReason() const
{
    return m_failReason;
}

void ServerManageTaskInfo::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool ServerManageTaskInfo::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string ServerManageTaskInfo::GetOperatorRemark() const
{
    return m_operatorRemark;
}

void ServerManageTaskInfo::SetOperatorRemark(const string& _operatorRemark)
{
    m_operatorRemark = _operatorRemark;
    m_operatorRemarkHasBeenSet = true;
}

bool ServerManageTaskInfo::OperatorRemarkHasBeenSet() const
{
    return m_operatorRemarkHasBeenSet;
}

