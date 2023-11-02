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

#include <tencentcloud/csip/v20221121/model/TaskLogInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TaskLogInfo::TaskLogInfo() :
    m_taskLogNameHasBeenSet(false),
    m_taskLogIdHasBeenSet(false),
    m_assetsNumberHasBeenSet(false),
    m_riskNumberHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_taskCenterTaskIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uINHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_reportTypeHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

CoreInternalOutcome TaskLogInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskLogName") && !value["TaskLogName"].IsNull())
    {
        if (!value["TaskLogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogInfo.TaskLogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskLogName = string(value["TaskLogName"].GetString());
        m_taskLogNameHasBeenSet = true;
    }

    if (value.HasMember("TaskLogId") && !value["TaskLogId"].IsNull())
    {
        if (!value["TaskLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogInfo.TaskLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskLogId = string(value["TaskLogId"].GetString());
        m_taskLogIdHasBeenSet = true;
    }

    if (value.HasMember("AssetsNumber") && !value["AssetsNumber"].IsNull())
    {
        if (!value["AssetsNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogInfo.AssetsNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetsNumber = value["AssetsNumber"].GetInt64();
        m_assetsNumberHasBeenSet = true;
    }

    if (value.HasMember("RiskNumber") && !value["RiskNumber"].IsNull())
    {
        if (!value["RiskNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogInfo.RiskNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskNumber = value["RiskNumber"].GetInt64();
        m_riskNumberHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogInfo.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskCenterTaskId") && !value["TaskCenterTaskId"].IsNull())
    {
        if (!value["TaskCenterTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogInfo.TaskCenterTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskCenterTaskId = string(value["TaskCenterTaskId"].GetString());
        m_taskCenterTaskIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("UIN") && !value["UIN"].IsNull())
    {
        if (!value["UIN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogInfo.UIN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uIN = string(value["UIN"].GetString());
        m_uINHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("ReportType") && !value["ReportType"].IsNull())
    {
        if (!value["ReportType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogInfo.ReportType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportType = value["ReportType"].GetInt64();
        m_reportTypeHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskLogInfo.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskLogInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskLogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskLogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskLogName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetsNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetsNumber, allocator);
    }

    if (m_riskNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskNumber, allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskCenterTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCenterTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskCenterTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uINHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UIN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uIN.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportType, allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

}


string TaskLogInfo::GetTaskLogName() const
{
    return m_taskLogName;
}

void TaskLogInfo::SetTaskLogName(const string& _taskLogName)
{
    m_taskLogName = _taskLogName;
    m_taskLogNameHasBeenSet = true;
}

bool TaskLogInfo::TaskLogNameHasBeenSet() const
{
    return m_taskLogNameHasBeenSet;
}

string TaskLogInfo::GetTaskLogId() const
{
    return m_taskLogId;
}

void TaskLogInfo::SetTaskLogId(const string& _taskLogId)
{
    m_taskLogId = _taskLogId;
    m_taskLogIdHasBeenSet = true;
}

bool TaskLogInfo::TaskLogIdHasBeenSet() const
{
    return m_taskLogIdHasBeenSet;
}

int64_t TaskLogInfo::GetAssetsNumber() const
{
    return m_assetsNumber;
}

void TaskLogInfo::SetAssetsNumber(const int64_t& _assetsNumber)
{
    m_assetsNumber = _assetsNumber;
    m_assetsNumberHasBeenSet = true;
}

bool TaskLogInfo::AssetsNumberHasBeenSet() const
{
    return m_assetsNumberHasBeenSet;
}

int64_t TaskLogInfo::GetRiskNumber() const
{
    return m_riskNumber;
}

void TaskLogInfo::SetRiskNumber(const int64_t& _riskNumber)
{
    m_riskNumber = _riskNumber;
    m_riskNumberHasBeenSet = true;
}

bool TaskLogInfo::RiskNumberHasBeenSet() const
{
    return m_riskNumberHasBeenSet;
}

string TaskLogInfo::GetTime() const
{
    return m_time;
}

void TaskLogInfo::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TaskLogInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t TaskLogInfo::GetStatus() const
{
    return m_status;
}

void TaskLogInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TaskLogInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TaskLogInfo::GetTaskName() const
{
    return m_taskName;
}

void TaskLogInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskLogInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskLogInfo::GetStartTime() const
{
    return m_startTime;
}

void TaskLogInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TaskLogInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TaskLogInfo::GetTaskCenterTaskId() const
{
    return m_taskCenterTaskId;
}

void TaskLogInfo::SetTaskCenterTaskId(const string& _taskCenterTaskId)
{
    m_taskCenterTaskId = _taskCenterTaskId;
    m_taskCenterTaskIdHasBeenSet = true;
}

bool TaskLogInfo::TaskCenterTaskIdHasBeenSet() const
{
    return m_taskCenterTaskIdHasBeenSet;
}

string TaskLogInfo::GetAppId() const
{
    return m_appId;
}

void TaskLogInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TaskLogInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string TaskLogInfo::GetUIN() const
{
    return m_uIN;
}

void TaskLogInfo::SetUIN(const string& _uIN)
{
    m_uIN = _uIN;
    m_uINHasBeenSet = true;
}

bool TaskLogInfo::UINHasBeenSet() const
{
    return m_uINHasBeenSet;
}

string TaskLogInfo::GetUserName() const
{
    return m_userName;
}

void TaskLogInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool TaskLogInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

int64_t TaskLogInfo::GetReportType() const
{
    return m_reportType;
}

void TaskLogInfo::SetReportType(const int64_t& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool TaskLogInfo::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}

int64_t TaskLogInfo::GetTemplateId() const
{
    return m_templateId;
}

void TaskLogInfo::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool TaskLogInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

