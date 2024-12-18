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

#include <tencentcloud/wedata/v20210820/model/TaskImportInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskImportInfo::TaskImportInfo() :
    m_isImportHasBeenSet(false),
    m_isNewWorkFlowHasBeenSet(false),
    m_workFlowFolderIdHasBeenSet(false),
    m_workFlowFolderNameHasBeenSet(false),
    m_workFlowIdHasBeenSet(false),
    m_workFlowNameHasBeenSet(false),
    m_taskNameExistModeHasBeenSet(false)
{
}

CoreInternalOutcome TaskImportInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsImport") && !value["IsImport"].IsNull())
    {
        if (!value["IsImport"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskImportInfo.IsImport` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isImport = value["IsImport"].GetBool();
        m_isImportHasBeenSet = true;
    }

    if (value.HasMember("IsNewWorkFlow") && !value["IsNewWorkFlow"].IsNull())
    {
        if (!value["IsNewWorkFlow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskImportInfo.IsNewWorkFlow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNewWorkFlow = value["IsNewWorkFlow"].GetBool();
        m_isNewWorkFlowHasBeenSet = true;
    }

    if (value.HasMember("WorkFlowFolderId") && !value["WorkFlowFolderId"].IsNull())
    {
        if (!value["WorkFlowFolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskImportInfo.WorkFlowFolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workFlowFolderId = string(value["WorkFlowFolderId"].GetString());
        m_workFlowFolderIdHasBeenSet = true;
    }

    if (value.HasMember("WorkFlowFolderName") && !value["WorkFlowFolderName"].IsNull())
    {
        if (!value["WorkFlowFolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskImportInfo.WorkFlowFolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workFlowFolderName = string(value["WorkFlowFolderName"].GetString());
        m_workFlowFolderNameHasBeenSet = true;
    }

    if (value.HasMember("WorkFlowId") && !value["WorkFlowId"].IsNull())
    {
        if (!value["WorkFlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskImportInfo.WorkFlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workFlowId = string(value["WorkFlowId"].GetString());
        m_workFlowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkFlowName") && !value["WorkFlowName"].IsNull())
    {
        if (!value["WorkFlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskImportInfo.WorkFlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workFlowName = string(value["WorkFlowName"].GetString());
        m_workFlowNameHasBeenSet = true;
    }

    if (value.HasMember("TaskNameExistMode") && !value["TaskNameExistMode"].IsNull())
    {
        if (!value["TaskNameExistMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskImportInfo.TaskNameExistMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskNameExistMode = value["TaskNameExistMode"].GetUint64();
        m_taskNameExistModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskImportInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isImportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsImport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isImport, allocator);
    }

    if (m_isNewWorkFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewWorkFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewWorkFlow, allocator);
    }

    if (m_workFlowFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowFolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workFlowFolderId.c_str(), allocator).Move(), allocator);
    }

    if (m_workFlowFolderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowFolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workFlowFolderName.c_str(), allocator).Move(), allocator);
    }

    if (m_workFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workFlowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workFlowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workFlowName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameExistModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNameExistMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskNameExistMode, allocator);
    }

}


bool TaskImportInfo::GetIsImport() const
{
    return m_isImport;
}

void TaskImportInfo::SetIsImport(const bool& _isImport)
{
    m_isImport = _isImport;
    m_isImportHasBeenSet = true;
}

bool TaskImportInfo::IsImportHasBeenSet() const
{
    return m_isImportHasBeenSet;
}

bool TaskImportInfo::GetIsNewWorkFlow() const
{
    return m_isNewWorkFlow;
}

void TaskImportInfo::SetIsNewWorkFlow(const bool& _isNewWorkFlow)
{
    m_isNewWorkFlow = _isNewWorkFlow;
    m_isNewWorkFlowHasBeenSet = true;
}

bool TaskImportInfo::IsNewWorkFlowHasBeenSet() const
{
    return m_isNewWorkFlowHasBeenSet;
}

string TaskImportInfo::GetWorkFlowFolderId() const
{
    return m_workFlowFolderId;
}

void TaskImportInfo::SetWorkFlowFolderId(const string& _workFlowFolderId)
{
    m_workFlowFolderId = _workFlowFolderId;
    m_workFlowFolderIdHasBeenSet = true;
}

bool TaskImportInfo::WorkFlowFolderIdHasBeenSet() const
{
    return m_workFlowFolderIdHasBeenSet;
}

string TaskImportInfo::GetWorkFlowFolderName() const
{
    return m_workFlowFolderName;
}

void TaskImportInfo::SetWorkFlowFolderName(const string& _workFlowFolderName)
{
    m_workFlowFolderName = _workFlowFolderName;
    m_workFlowFolderNameHasBeenSet = true;
}

bool TaskImportInfo::WorkFlowFolderNameHasBeenSet() const
{
    return m_workFlowFolderNameHasBeenSet;
}

string TaskImportInfo::GetWorkFlowId() const
{
    return m_workFlowId;
}

void TaskImportInfo::SetWorkFlowId(const string& _workFlowId)
{
    m_workFlowId = _workFlowId;
    m_workFlowIdHasBeenSet = true;
}

bool TaskImportInfo::WorkFlowIdHasBeenSet() const
{
    return m_workFlowIdHasBeenSet;
}

string TaskImportInfo::GetWorkFlowName() const
{
    return m_workFlowName;
}

void TaskImportInfo::SetWorkFlowName(const string& _workFlowName)
{
    m_workFlowName = _workFlowName;
    m_workFlowNameHasBeenSet = true;
}

bool TaskImportInfo::WorkFlowNameHasBeenSet() const
{
    return m_workFlowNameHasBeenSet;
}

uint64_t TaskImportInfo::GetTaskNameExistMode() const
{
    return m_taskNameExistMode;
}

void TaskImportInfo::SetTaskNameExistMode(const uint64_t& _taskNameExistMode)
{
    m_taskNameExistMode = _taskNameExistMode;
    m_taskNameExistModeHasBeenSet = true;
}

bool TaskImportInfo::TaskNameExistModeHasBeenSet() const
{
    return m_taskNameExistModeHasBeenSet;
}

