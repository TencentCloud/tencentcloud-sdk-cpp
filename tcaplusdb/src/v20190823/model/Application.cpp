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

#include <tencentcloud/tcaplusdb/v20190823/model/Application.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

Application::Application() :
    m_applicationIdHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_tableGroupNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_applicantHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_applicationStatusHasBeenSet(false),
    m_tableGroupIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_tableInstanceIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_executeUserHasBeenSet(false),
    m_executeStatusHasBeenSet(false),
    m_canCensorHasBeenSet(false),
    m_canWithdrawalHasBeenSet(false)
{
}

CoreInternalOutcome Application::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Application.ApplicationType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = value["ApplicationType"].GetInt64();
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("TableGroupName") && !value["TableGroupName"].IsNull())
    {
        if (!value["TableGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.TableGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupName = string(value["TableGroupName"].GetString());
        m_tableGroupNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("Applicant") && !value["Applicant"].IsNull())
    {
        if (!value["Applicant"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.Applicant` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicant = string(value["Applicant"].GetString());
        m_applicantHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationStatus") && !value["ApplicationStatus"].IsNull())
    {
        if (!value["ApplicationStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Application.ApplicationStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationStatus = value["ApplicationStatus"].GetInt64();
        m_applicationStatusHasBeenSet = true;
    }

    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.TableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = string(value["TableGroupId"].GetString());
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TableInstanceId") && !value["TableInstanceId"].IsNull())
    {
        if (!value["TableInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.TableInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableInstanceId = string(value["TableInstanceId"].GetString());
        m_tableInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecuteUser") && !value["ExecuteUser"].IsNull())
    {
        if (!value["ExecuteUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.ExecuteUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeUser = string(value["ExecuteUser"].GetString());
        m_executeUserHasBeenSet = true;
    }

    if (value.HasMember("ExecuteStatus") && !value["ExecuteStatus"].IsNull())
    {
        if (!value["ExecuteStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.ExecuteStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeStatus = string(value["ExecuteStatus"].GetString());
        m_executeStatusHasBeenSet = true;
    }

    if (value.HasMember("CanCensor") && !value["CanCensor"].IsNull())
    {
        if (!value["CanCensor"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Application.CanCensor` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canCensor = value["CanCensor"].GetBool();
        m_canCensorHasBeenSet = true;
    }

    if (value.HasMember("CanWithdrawal") && !value["CanWithdrawal"].IsNull())
    {
        if (!value["CanWithdrawal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Application.CanWithdrawal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canWithdrawal = value["CanWithdrawal"].GetBool();
        m_canWithdrawalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Application::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationType, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Applicant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicant.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationStatus, allocator);
    }

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executeUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeUser.c_str(), allocator).Move(), allocator);
    }

    if (m_executeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_canCensorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanCensor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canCensor, allocator);
    }

    if (m_canWithdrawalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanWithdrawal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canWithdrawal, allocator);
    }

}


string Application::GetApplicationId() const
{
    return m_applicationId;
}

void Application::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool Application::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

int64_t Application::GetApplicationType() const
{
    return m_applicationType;
}

void Application::SetApplicationType(const int64_t& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool Application::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string Application::GetClusterId() const
{
    return m_clusterId;
}

void Application::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Application::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Application::GetClusterName() const
{
    return m_clusterName;
}

void Application::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool Application::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string Application::GetTableGroupName() const
{
    return m_tableGroupName;
}

void Application::SetTableGroupName(const string& _tableGroupName)
{
    m_tableGroupName = _tableGroupName;
    m_tableGroupNameHasBeenSet = true;
}

bool Application::TableGroupNameHasBeenSet() const
{
    return m_tableGroupNameHasBeenSet;
}

string Application::GetTableName() const
{
    return m_tableName;
}

void Application::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool Application::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string Application::GetApplicant() const
{
    return m_applicant;
}

void Application::SetApplicant(const string& _applicant)
{
    m_applicant = _applicant;
    m_applicantHasBeenSet = true;
}

bool Application::ApplicantHasBeenSet() const
{
    return m_applicantHasBeenSet;
}

string Application::GetCreatedTime() const
{
    return m_createdTime;
}

void Application::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Application::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t Application::GetApplicationStatus() const
{
    return m_applicationStatus;
}

void Application::SetApplicationStatus(const int64_t& _applicationStatus)
{
    m_applicationStatus = _applicationStatus;
    m_applicationStatusHasBeenSet = true;
}

bool Application::ApplicationStatusHasBeenSet() const
{
    return m_applicationStatusHasBeenSet;
}

string Application::GetTableGroupId() const
{
    return m_tableGroupId;
}

void Application::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool Application::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

string Application::GetTaskId() const
{
    return m_taskId;
}

void Application::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool Application::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string Application::GetTableInstanceId() const
{
    return m_tableInstanceId;
}

void Application::SetTableInstanceId(const string& _tableInstanceId)
{
    m_tableInstanceId = _tableInstanceId;
    m_tableInstanceIdHasBeenSet = true;
}

bool Application::TableInstanceIdHasBeenSet() const
{
    return m_tableInstanceIdHasBeenSet;
}

string Application::GetUpdateTime() const
{
    return m_updateTime;
}

void Application::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Application::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Application::GetExecuteUser() const
{
    return m_executeUser;
}

void Application::SetExecuteUser(const string& _executeUser)
{
    m_executeUser = _executeUser;
    m_executeUserHasBeenSet = true;
}

bool Application::ExecuteUserHasBeenSet() const
{
    return m_executeUserHasBeenSet;
}

string Application::GetExecuteStatus() const
{
    return m_executeStatus;
}

void Application::SetExecuteStatus(const string& _executeStatus)
{
    m_executeStatus = _executeStatus;
    m_executeStatusHasBeenSet = true;
}

bool Application::ExecuteStatusHasBeenSet() const
{
    return m_executeStatusHasBeenSet;
}

bool Application::GetCanCensor() const
{
    return m_canCensor;
}

void Application::SetCanCensor(const bool& _canCensor)
{
    m_canCensor = _canCensor;
    m_canCensorHasBeenSet = true;
}

bool Application::CanCensorHasBeenSet() const
{
    return m_canCensorHasBeenSet;
}

bool Application::GetCanWithdrawal() const
{
    return m_canWithdrawal;
}

void Application::SetCanWithdrawal(const bool& _canWithdrawal)
{
    m_canWithdrawal = _canWithdrawal;
    m_canWithdrawalHasBeenSet = true;
}

bool Application::CanWithdrawalHasBeenSet() const
{
    return m_canWithdrawalHasBeenSet;
}

