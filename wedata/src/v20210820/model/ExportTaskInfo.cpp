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

#include <tencentcloud/wedata/v20210820/model/ExportTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ExportTaskInfo::ExportTaskInfo() :
    m_exportTaskIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_operatorIdHasBeenSet(false),
    m_operatorNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_schedulerTaskIdHasBeenSet(false),
    m_schedulerCurRunDateHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_expireHasBeenSet(false),
    m_datasourceNameHasBeenSet(false),
    m_dbTableNameHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleExecIdHasBeenSet(false)
{
}

CoreInternalOutcome ExportTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExportTaskId") && !value["ExportTaskId"].IsNull())
    {
        if (!value["ExportTaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportTaskInfo.ExportTaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exportTaskId = value["ExportTaskId"].GetUint64();
        m_exportTaskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportTaskInfo.TaskType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetUint64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("OperatorId") && !value["OperatorId"].IsNull())
    {
        if (!value["OperatorId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportTaskInfo.OperatorId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operatorId = value["OperatorId"].GetUint64();
        m_operatorIdHasBeenSet = true;
    }

    if (value.HasMember("OperatorName") && !value["OperatorName"].IsNull())
    {
        if (!value["OperatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportTaskInfo.OperatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorName = string(value["OperatorName"].GetString());
        m_operatorNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportTaskInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SchedulerTaskId") && !value["SchedulerTaskId"].IsNull())
    {
        if (!value["SchedulerTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportTaskInfo.SchedulerTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerTaskId = string(value["SchedulerTaskId"].GetString());
        m_schedulerTaskIdHasBeenSet = true;
    }

    if (value.HasMember("SchedulerCurRunDate") && !value["SchedulerCurRunDate"].IsNull())
    {
        if (!value["SchedulerCurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportTaskInfo.SchedulerCurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerCurRunDate = string(value["SchedulerCurRunDate"].GetString());
        m_schedulerCurRunDateHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportTaskInfo.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("Expire") && !value["Expire"].IsNull())
    {
        if (!value["Expire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportTaskInfo.Expire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expire = value["Expire"].GetInt64();
        m_expireHasBeenSet = true;
    }

    if (value.HasMember("DatasourceName") && !value["DatasourceName"].IsNull())
    {
        if (!value["DatasourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportTaskInfo.DatasourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceName = string(value["DatasourceName"].GetString());
        m_datasourceNameHasBeenSet = true;
    }

    if (value.HasMember("DbTableName") && !value["DbTableName"].IsNull())
    {
        if (!value["DbTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportTaskInfo.DbTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbTableName = string(value["DbTableName"].GetString());
        m_dbTableNameHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportTaskInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleExecId") && !value["RuleExecId"].IsNull())
    {
        if (!value["RuleExecId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportTaskInfo.RuleExecId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleExecId = value["RuleExecId"].GetUint64();
        m_ruleExecIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExportTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_exportTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exportTaskId, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_operatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operatorId, allocator);
    }

    if (m_operatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_schedulerTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerCurRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerCurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerCurRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_expireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expire, allocator);
    }

    if (m_datasourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleExecIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleExecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleExecId, allocator);
    }

}


uint64_t ExportTaskInfo::GetExportTaskId() const
{
    return m_exportTaskId;
}

void ExportTaskInfo::SetExportTaskId(const uint64_t& _exportTaskId)
{
    m_exportTaskId = _exportTaskId;
    m_exportTaskIdHasBeenSet = true;
}

bool ExportTaskInfo::ExportTaskIdHasBeenSet() const
{
    return m_exportTaskIdHasBeenSet;
}

uint64_t ExportTaskInfo::GetTaskType() const
{
    return m_taskType;
}

void ExportTaskInfo::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool ExportTaskInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

uint64_t ExportTaskInfo::GetOperatorId() const
{
    return m_operatorId;
}

void ExportTaskInfo::SetOperatorId(const uint64_t& _operatorId)
{
    m_operatorId = _operatorId;
    m_operatorIdHasBeenSet = true;
}

bool ExportTaskInfo::OperatorIdHasBeenSet() const
{
    return m_operatorIdHasBeenSet;
}

string ExportTaskInfo::GetOperatorName() const
{
    return m_operatorName;
}

void ExportTaskInfo::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool ExportTaskInfo::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

string ExportTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void ExportTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ExportTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ExportTaskInfo::GetStatus() const
{
    return m_status;
}

void ExportTaskInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ExportTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ExportTaskInfo::GetSchedulerTaskId() const
{
    return m_schedulerTaskId;
}

void ExportTaskInfo::SetSchedulerTaskId(const string& _schedulerTaskId)
{
    m_schedulerTaskId = _schedulerTaskId;
    m_schedulerTaskIdHasBeenSet = true;
}

bool ExportTaskInfo::SchedulerTaskIdHasBeenSet() const
{
    return m_schedulerTaskIdHasBeenSet;
}

string ExportTaskInfo::GetSchedulerCurRunDate() const
{
    return m_schedulerCurRunDate;
}

void ExportTaskInfo::SetSchedulerCurRunDate(const string& _schedulerCurRunDate)
{
    m_schedulerCurRunDate = _schedulerCurRunDate;
    m_schedulerCurRunDateHasBeenSet = true;
}

bool ExportTaskInfo::SchedulerCurRunDateHasBeenSet() const
{
    return m_schedulerCurRunDateHasBeenSet;
}

string ExportTaskInfo::GetFilePath() const
{
    return m_filePath;
}

void ExportTaskInfo::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool ExportTaskInfo::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

int64_t ExportTaskInfo::GetExpire() const
{
    return m_expire;
}

void ExportTaskInfo::SetExpire(const int64_t& _expire)
{
    m_expire = _expire;
    m_expireHasBeenSet = true;
}

bool ExportTaskInfo::ExpireHasBeenSet() const
{
    return m_expireHasBeenSet;
}

string ExportTaskInfo::GetDatasourceName() const
{
    return m_datasourceName;
}

void ExportTaskInfo::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool ExportTaskInfo::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}

string ExportTaskInfo::GetDbTableName() const
{
    return m_dbTableName;
}

void ExportTaskInfo::SetDbTableName(const string& _dbTableName)
{
    m_dbTableName = _dbTableName;
    m_dbTableNameHasBeenSet = true;
}

bool ExportTaskInfo::DbTableNameHasBeenSet() const
{
    return m_dbTableNameHasBeenSet;
}

string ExportTaskInfo::GetRuleName() const
{
    return m_ruleName;
}

void ExportTaskInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ExportTaskInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t ExportTaskInfo::GetRuleExecId() const
{
    return m_ruleExecId;
}

void ExportTaskInfo::SetRuleExecId(const uint64_t& _ruleExecId)
{
    m_ruleExecId = _ruleExecId;
    m_ruleExecIdHasBeenSet = true;
}

bool ExportTaskInfo::RuleExecIdHasBeenSet() const
{
    return m_ruleExecIdHasBeenSet;
}

