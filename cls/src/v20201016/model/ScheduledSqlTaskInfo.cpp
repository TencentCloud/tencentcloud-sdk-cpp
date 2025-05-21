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

#include <tencentcloud/cls/v20201016/model/ScheduledSqlTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ScheduledSqlTaskInfo::ScheduledSqlTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_srcTopicIdHasBeenSet(false),
    m_srcTopicNameHasBeenSet(false),
    m_dstResourceHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_enableFlagHasBeenSet(false),
    m_scheduledSqlContentHasBeenSet(false),
    m_processStartTimeHasBeenSet(false),
    m_processTypeHasBeenSet(false),
    m_processEndTimeHasBeenSet(false),
    m_processPeriodHasBeenSet(false),
    m_processTimeWindowHasBeenSet(false),
    m_processDelayHasBeenSet(false),
    m_srcTopicRegionHasBeenSet(false),
    m_syntaxRuleHasBeenSet(false),
    m_hasServicesLogHasBeenSet(false),
    m_fullQueryHasBeenSet(false)
{
}

CoreInternalOutcome ScheduledSqlTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SrcTopicId") && !value["SrcTopicId"].IsNull())
    {
        if (!value["SrcTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.SrcTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcTopicId = string(value["SrcTopicId"].GetString());
        m_srcTopicIdHasBeenSet = true;
    }

    if (value.HasMember("SrcTopicName") && !value["SrcTopicName"].IsNull())
    {
        if (!value["SrcTopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.SrcTopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcTopicName = string(value["SrcTopicName"].GetString());
        m_srcTopicNameHasBeenSet = true;
    }

    if (value.HasMember("DstResource") && !value["DstResource"].IsNull())
    {
        if (!value["DstResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.DstResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dstResource.Deserialize(value["DstResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dstResourceHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EnableFlag") && !value["EnableFlag"].IsNull())
    {
        if (!value["EnableFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.EnableFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableFlag = value["EnableFlag"].GetInt64();
        m_enableFlagHasBeenSet = true;
    }

    if (value.HasMember("ScheduledSqlContent") && !value["ScheduledSqlContent"].IsNull())
    {
        if (!value["ScheduledSqlContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.ScheduledSqlContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduledSqlContent = string(value["ScheduledSqlContent"].GetString());
        m_scheduledSqlContentHasBeenSet = true;
    }

    if (value.HasMember("ProcessStartTime") && !value["ProcessStartTime"].IsNull())
    {
        if (!value["ProcessStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.ProcessStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processStartTime = string(value["ProcessStartTime"].GetString());
        m_processStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ProcessType") && !value["ProcessType"].IsNull())
    {
        if (!value["ProcessType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.ProcessType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processType = value["ProcessType"].GetInt64();
        m_processTypeHasBeenSet = true;
    }

    if (value.HasMember("ProcessEndTime") && !value["ProcessEndTime"].IsNull())
    {
        if (!value["ProcessEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.ProcessEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processEndTime = string(value["ProcessEndTime"].GetString());
        m_processEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ProcessPeriod") && !value["ProcessPeriod"].IsNull())
    {
        if (!value["ProcessPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.ProcessPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processPeriod = value["ProcessPeriod"].GetInt64();
        m_processPeriodHasBeenSet = true;
    }

    if (value.HasMember("ProcessTimeWindow") && !value["ProcessTimeWindow"].IsNull())
    {
        if (!value["ProcessTimeWindow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.ProcessTimeWindow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processTimeWindow = string(value["ProcessTimeWindow"].GetString());
        m_processTimeWindowHasBeenSet = true;
    }

    if (value.HasMember("ProcessDelay") && !value["ProcessDelay"].IsNull())
    {
        if (!value["ProcessDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.ProcessDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processDelay = value["ProcessDelay"].GetInt64();
        m_processDelayHasBeenSet = true;
    }

    if (value.HasMember("SrcTopicRegion") && !value["SrcTopicRegion"].IsNull())
    {
        if (!value["SrcTopicRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.SrcTopicRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcTopicRegion = string(value["SrcTopicRegion"].GetString());
        m_srcTopicRegionHasBeenSet = true;
    }

    if (value.HasMember("SyntaxRule") && !value["SyntaxRule"].IsNull())
    {
        if (!value["SyntaxRule"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.SyntaxRule` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_syntaxRule = value["SyntaxRule"].GetUint64();
        m_syntaxRuleHasBeenSet = true;
    }

    if (value.HasMember("HasServicesLog") && !value["HasServicesLog"].IsNull())
    {
        if (!value["HasServicesLog"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.HasServicesLog` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hasServicesLog = value["HasServicesLog"].GetUint64();
        m_hasServicesLogHasBeenSet = true;
    }

    if (value.HasMember("FullQuery") && !value["FullQuery"].IsNull())
    {
        if (!value["FullQuery"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledSqlTaskInfo.FullQuery` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fullQuery = value["FullQuery"].GetUint64();
        m_fullQueryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScheduledSqlTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_srcTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcTopicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcTopicName.c_str(), allocator).Move(), allocator);
    }

    if (m_dstResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstResource.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_enableFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFlag, allocator);
    }

    if (m_scheduledSqlContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledSqlContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduledSqlContent.c_str(), allocator).Move(), allocator);
    }

    if (m_processStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_processTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processType, allocator);
    }

    if (m_processEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_processPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processPeriod, allocator);
    }

    if (m_processTimeWindowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessTimeWindow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processTimeWindow.c_str(), allocator).Move(), allocator);
    }

    if (m_processDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processDelay, allocator);
    }

    if (m_srcTopicRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTopicRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcTopicRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_syntaxRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyntaxRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syntaxRule, allocator);
    }

    if (m_hasServicesLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasServicesLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasServicesLog, allocator);
    }

    if (m_fullQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullQuery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fullQuery, allocator);
    }

}


string ScheduledSqlTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void ScheduledSqlTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ScheduledSqlTaskInfo::GetName() const
{
    return m_name;
}

void ScheduledSqlTaskInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ScheduledSqlTaskInfo::GetSrcTopicId() const
{
    return m_srcTopicId;
}

void ScheduledSqlTaskInfo::SetSrcTopicId(const string& _srcTopicId)
{
    m_srcTopicId = _srcTopicId;
    m_srcTopicIdHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::SrcTopicIdHasBeenSet() const
{
    return m_srcTopicIdHasBeenSet;
}

string ScheduledSqlTaskInfo::GetSrcTopicName() const
{
    return m_srcTopicName;
}

void ScheduledSqlTaskInfo::SetSrcTopicName(const string& _srcTopicName)
{
    m_srcTopicName = _srcTopicName;
    m_srcTopicNameHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::SrcTopicNameHasBeenSet() const
{
    return m_srcTopicNameHasBeenSet;
}

ScheduledSqlResouceInfo ScheduledSqlTaskInfo::GetDstResource() const
{
    return m_dstResource;
}

void ScheduledSqlTaskInfo::SetDstResource(const ScheduledSqlResouceInfo& _dstResource)
{
    m_dstResource = _dstResource;
    m_dstResourceHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::DstResourceHasBeenSet() const
{
    return m_dstResourceHasBeenSet;
}

string ScheduledSqlTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void ScheduledSqlTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ScheduledSqlTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ScheduledSqlTaskInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t ScheduledSqlTaskInfo::GetStatus() const
{
    return m_status;
}

void ScheduledSqlTaskInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ScheduledSqlTaskInfo::GetEnableFlag() const
{
    return m_enableFlag;
}

void ScheduledSqlTaskInfo::SetEnableFlag(const int64_t& _enableFlag)
{
    m_enableFlag = _enableFlag;
    m_enableFlagHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::EnableFlagHasBeenSet() const
{
    return m_enableFlagHasBeenSet;
}

string ScheduledSqlTaskInfo::GetScheduledSqlContent() const
{
    return m_scheduledSqlContent;
}

void ScheduledSqlTaskInfo::SetScheduledSqlContent(const string& _scheduledSqlContent)
{
    m_scheduledSqlContent = _scheduledSqlContent;
    m_scheduledSqlContentHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::ScheduledSqlContentHasBeenSet() const
{
    return m_scheduledSqlContentHasBeenSet;
}

string ScheduledSqlTaskInfo::GetProcessStartTime() const
{
    return m_processStartTime;
}

void ScheduledSqlTaskInfo::SetProcessStartTime(const string& _processStartTime)
{
    m_processStartTime = _processStartTime;
    m_processStartTimeHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::ProcessStartTimeHasBeenSet() const
{
    return m_processStartTimeHasBeenSet;
}

int64_t ScheduledSqlTaskInfo::GetProcessType() const
{
    return m_processType;
}

void ScheduledSqlTaskInfo::SetProcessType(const int64_t& _processType)
{
    m_processType = _processType;
    m_processTypeHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::ProcessTypeHasBeenSet() const
{
    return m_processTypeHasBeenSet;
}

string ScheduledSqlTaskInfo::GetProcessEndTime() const
{
    return m_processEndTime;
}

void ScheduledSqlTaskInfo::SetProcessEndTime(const string& _processEndTime)
{
    m_processEndTime = _processEndTime;
    m_processEndTimeHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::ProcessEndTimeHasBeenSet() const
{
    return m_processEndTimeHasBeenSet;
}

int64_t ScheduledSqlTaskInfo::GetProcessPeriod() const
{
    return m_processPeriod;
}

void ScheduledSqlTaskInfo::SetProcessPeriod(const int64_t& _processPeriod)
{
    m_processPeriod = _processPeriod;
    m_processPeriodHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::ProcessPeriodHasBeenSet() const
{
    return m_processPeriodHasBeenSet;
}

string ScheduledSqlTaskInfo::GetProcessTimeWindow() const
{
    return m_processTimeWindow;
}

void ScheduledSqlTaskInfo::SetProcessTimeWindow(const string& _processTimeWindow)
{
    m_processTimeWindow = _processTimeWindow;
    m_processTimeWindowHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::ProcessTimeWindowHasBeenSet() const
{
    return m_processTimeWindowHasBeenSet;
}

int64_t ScheduledSqlTaskInfo::GetProcessDelay() const
{
    return m_processDelay;
}

void ScheduledSqlTaskInfo::SetProcessDelay(const int64_t& _processDelay)
{
    m_processDelay = _processDelay;
    m_processDelayHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::ProcessDelayHasBeenSet() const
{
    return m_processDelayHasBeenSet;
}

string ScheduledSqlTaskInfo::GetSrcTopicRegion() const
{
    return m_srcTopicRegion;
}

void ScheduledSqlTaskInfo::SetSrcTopicRegion(const string& _srcTopicRegion)
{
    m_srcTopicRegion = _srcTopicRegion;
    m_srcTopicRegionHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::SrcTopicRegionHasBeenSet() const
{
    return m_srcTopicRegionHasBeenSet;
}

uint64_t ScheduledSqlTaskInfo::GetSyntaxRule() const
{
    return m_syntaxRule;
}

void ScheduledSqlTaskInfo::SetSyntaxRule(const uint64_t& _syntaxRule)
{
    m_syntaxRule = _syntaxRule;
    m_syntaxRuleHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::SyntaxRuleHasBeenSet() const
{
    return m_syntaxRuleHasBeenSet;
}

uint64_t ScheduledSqlTaskInfo::GetHasServicesLog() const
{
    return m_hasServicesLog;
}

void ScheduledSqlTaskInfo::SetHasServicesLog(const uint64_t& _hasServicesLog)
{
    m_hasServicesLog = _hasServicesLog;
    m_hasServicesLogHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::HasServicesLogHasBeenSet() const
{
    return m_hasServicesLogHasBeenSet;
}

uint64_t ScheduledSqlTaskInfo::GetFullQuery() const
{
    return m_fullQuery;
}

void ScheduledSqlTaskInfo::SetFullQuery(const uint64_t& _fullQuery)
{
    m_fullQuery = _fullQuery;
    m_fullQueryHasBeenSet = true;
}

bool ScheduledSqlTaskInfo::FullQueryHasBeenSet() const
{
    return m_fullQueryHasBeenSet;
}

