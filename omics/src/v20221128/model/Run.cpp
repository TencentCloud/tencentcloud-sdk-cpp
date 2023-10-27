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

#include <tencentcloud/omics/v20221128/model/Run.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

Run::Run() :
    m_runUuidHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_runGroupIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_userDefinedIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableRowUuidHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_optionHasBeenSet(false),
    m_executionTimeHasBeenSet(false),
    m_cacheHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome Run::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RunUuid") && !value["RunUuid"].IsNull())
    {
        if (!value["RunUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Run.RunUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runUuid = string(value["RunUuid"].GetString());
        m_runUuidHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Run.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Run.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("RunGroupId") && !value["RunGroupId"].IsNull())
    {
        if (!value["RunGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Run.RunGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runGroupId = string(value["RunGroupId"].GetString());
        m_runGroupIdHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Run.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("UserDefinedId") && !value["UserDefinedId"].IsNull())
    {
        if (!value["UserDefinedId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Run.UserDefinedId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDefinedId = string(value["UserDefinedId"].GetString());
        m_userDefinedIdHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Run.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("TableRowUuid") && !value["TableRowUuid"].IsNull())
    {
        if (!value["TableRowUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Run.TableRowUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableRowUuid = string(value["TableRowUuid"].GetString());
        m_tableRowUuidHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Run.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Run.Input` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_input = string(value["Input"].GetString());
        m_inputHasBeenSet = true;
    }

    if (value.HasMember("Option") && !value["Option"].IsNull())
    {
        if (!value["Option"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Run.Option` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_option.Deserialize(value["Option"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_optionHasBeenSet = true;
    }

    if (value.HasMember("ExecutionTime") && !value["ExecutionTime"].IsNull())
    {
        if (!value["ExecutionTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Run.ExecutionTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_executionTime.Deserialize(value["ExecutionTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_executionTimeHasBeenSet = true;
    }

    if (value.HasMember("Cache") && !value["Cache"].IsNull())
    {
        if (!value["Cache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Run.Cache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cache.Deserialize(value["Cache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Run.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Run.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Run.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Run::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_runUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_runGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_userDefinedIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefinedId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDefinedId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableRowUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableRowUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableRowUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_input.c_str(), allocator).Move(), allocator);
    }

    if (m_optionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Option";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_option.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_executionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_executionTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
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

}


string Run::GetRunUuid() const
{
    return m_runUuid;
}

void Run::SetRunUuid(const string& _runUuid)
{
    m_runUuid = _runUuid;
    m_runUuidHasBeenSet = true;
}

bool Run::RunUuidHasBeenSet() const
{
    return m_runUuidHasBeenSet;
}

string Run::GetProjectId() const
{
    return m_projectId;
}

void Run::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Run::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string Run::GetApplicationId() const
{
    return m_applicationId;
}

void Run::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool Run::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string Run::GetRunGroupId() const
{
    return m_runGroupId;
}

void Run::SetRunGroupId(const string& _runGroupId)
{
    m_runGroupId = _runGroupId;
    m_runGroupIdHasBeenSet = true;
}

bool Run::RunGroupIdHasBeenSet() const
{
    return m_runGroupIdHasBeenSet;
}

string Run::GetEnvironmentId() const
{
    return m_environmentId;
}

void Run::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool Run::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string Run::GetUserDefinedId() const
{
    return m_userDefinedId;
}

void Run::SetUserDefinedId(const string& _userDefinedId)
{
    m_userDefinedId = _userDefinedId;
    m_userDefinedIdHasBeenSet = true;
}

bool Run::UserDefinedIdHasBeenSet() const
{
    return m_userDefinedIdHasBeenSet;
}

string Run::GetTableId() const
{
    return m_tableId;
}

void Run::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool Run::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string Run::GetTableRowUuid() const
{
    return m_tableRowUuid;
}

void Run::SetTableRowUuid(const string& _tableRowUuid)
{
    m_tableRowUuid = _tableRowUuid;
    m_tableRowUuidHasBeenSet = true;
}

bool Run::TableRowUuidHasBeenSet() const
{
    return m_tableRowUuidHasBeenSet;
}

string Run::GetStatus() const
{
    return m_status;
}

void Run::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Run::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Run::GetInput() const
{
    return m_input;
}

void Run::SetInput(const string& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool Run::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

RunOption Run::GetOption() const
{
    return m_option;
}

void Run::SetOption(const RunOption& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool Run::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}

ExecutionTime Run::GetExecutionTime() const
{
    return m_executionTime;
}

void Run::SetExecutionTime(const ExecutionTime& _executionTime)
{
    m_executionTime = _executionTime;
    m_executionTimeHasBeenSet = true;
}

bool Run::ExecutionTimeHasBeenSet() const
{
    return m_executionTimeHasBeenSet;
}

CacheInfo Run::GetCache() const
{
    return m_cache;
}

void Run::SetCache(const CacheInfo& _cache)
{
    m_cache = _cache;
    m_cacheHasBeenSet = true;
}

bool Run::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

string Run::GetErrorMessage() const
{
    return m_errorMessage;
}

void Run::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool Run::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string Run::GetCreateTime() const
{
    return m_createTime;
}

void Run::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Run::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Run::GetUpdateTime() const
{
    return m_updateTime;
}

void Run::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Run::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

