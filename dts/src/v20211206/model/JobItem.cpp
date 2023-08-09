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

#include <tencentcloud/dts/v20211206/model/JobItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

JobItem::JobItem() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_briefMsgHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_runModeHasBeenSet(false),
    m_expectRunTimeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_stepInfoHasBeenSet(false),
    m_srcInfoHasBeenSet(false),
    m_dstInfoHasBeenSet(false),
    m_compareTaskHasBeenSet(false),
    m_tradeInfoHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoRetryTimeRangeMinutesHasBeenSet(false),
    m_dumperResumeCtrlHasBeenSet(false)
{
}

CoreInternalOutcome JobItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("BriefMsg") && !value["BriefMsg"].IsNull())
    {
        if (!value["BriefMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.BriefMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_briefMsg = string(value["BriefMsg"].GetString());
        m_briefMsgHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RunMode") && !value["RunMode"].IsNull())
    {
        if (!value["RunMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.RunMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runMode = string(value["RunMode"].GetString());
        m_runModeHasBeenSet = true;
    }

    if (value.HasMember("ExpectRunTime") && !value["ExpectRunTime"].IsNull())
    {
        if (!value["ExpectRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.ExpectRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expectRunTime = string(value["ExpectRunTime"].GetString());
        m_expectRunTimeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.Action` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_action.Deserialize(value["Action"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionHasBeenSet = true;
    }

    if (value.HasMember("StepInfo") && !value["StepInfo"].IsNull())
    {
        if (!value["StepInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.StepInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_stepInfo.Deserialize(value["StepInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stepInfoHasBeenSet = true;
    }

    if (value.HasMember("SrcInfo") && !value["SrcInfo"].IsNull())
    {
        if (!value["SrcInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.SrcInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_srcInfo.Deserialize(value["SrcInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_srcInfoHasBeenSet = true;
    }

    if (value.HasMember("DstInfo") && !value["DstInfo"].IsNull())
    {
        if (!value["DstInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.DstInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dstInfo.Deserialize(value["DstInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dstInfoHasBeenSet = true;
    }

    if (value.HasMember("CompareTask") && !value["CompareTask"].IsNull())
    {
        if (!value["CompareTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.CompareTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compareTask.Deserialize(value["CompareTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compareTaskHasBeenSet = true;
    }

    if (value.HasMember("TradeInfo") && !value["TradeInfo"].IsNull())
    {
        if (!value["TradeInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.TradeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tradeInfo.Deserialize(value["TradeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tradeInfoHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobItem.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("AutoRetryTimeRangeMinutes") && !value["AutoRetryTimeRangeMinutes"].IsNull())
    {
        if (!value["AutoRetryTimeRangeMinutes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.AutoRetryTimeRangeMinutes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRetryTimeRangeMinutes = value["AutoRetryTimeRangeMinutes"].GetInt64();
        m_autoRetryTimeRangeMinutesHasBeenSet = true;
    }

    if (value.HasMember("DumperResumeCtrl") && !value["DumperResumeCtrl"].IsNull())
    {
        if (!value["DumperResumeCtrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobItem.DumperResumeCtrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dumperResumeCtrl = string(value["DumperResumeCtrl"].GetString());
        m_dumperResumeCtrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_briefMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BriefMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_briefMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_runModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runMode.c_str(), allocator).Move(), allocator);
    }

    if (m_expectRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectRunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expectRunTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_action.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stepInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stepInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_srcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dstInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compareTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compareTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tradeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tradeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_autoRetryTimeRangeMinutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRetryTimeRangeMinutes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRetryTimeRangeMinutes, allocator);
    }

    if (m_dumperResumeCtrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DumperResumeCtrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dumperResumeCtrl.c_str(), allocator).Move(), allocator);
    }

}


string JobItem::GetJobId() const
{
    return m_jobId;
}

void JobItem::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool JobItem::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string JobItem::GetJobName() const
{
    return m_jobName;
}

void JobItem::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool JobItem::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string JobItem::GetCreateTime() const
{
    return m_createTime;
}

void JobItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JobItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string JobItem::GetUpdateTime() const
{
    return m_updateTime;
}

void JobItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool JobItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string JobItem::GetStartTime() const
{
    return m_startTime;
}

void JobItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool JobItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string JobItem::GetEndTime() const
{
    return m_endTime;
}

void JobItem::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool JobItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string JobItem::GetBriefMsg() const
{
    return m_briefMsg;
}

void JobItem::SetBriefMsg(const string& _briefMsg)
{
    m_briefMsg = _briefMsg;
    m_briefMsgHasBeenSet = true;
}

bool JobItem::BriefMsgHasBeenSet() const
{
    return m_briefMsgHasBeenSet;
}

string JobItem::GetStatus() const
{
    return m_status;
}

void JobItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool JobItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string JobItem::GetRunMode() const
{
    return m_runMode;
}

void JobItem::SetRunMode(const string& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool JobItem::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

string JobItem::GetExpectRunTime() const
{
    return m_expectRunTime;
}

void JobItem::SetExpectRunTime(const string& _expectRunTime)
{
    m_expectRunTime = _expectRunTime;
    m_expectRunTimeHasBeenSet = true;
}

bool JobItem::ExpectRunTimeHasBeenSet() const
{
    return m_expectRunTimeHasBeenSet;
}

MigrateAction JobItem::GetAction() const
{
    return m_action;
}

void JobItem::SetAction(const MigrateAction& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool JobItem::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

MigrateDetailInfo JobItem::GetStepInfo() const
{
    return m_stepInfo;
}

void JobItem::SetStepInfo(const MigrateDetailInfo& _stepInfo)
{
    m_stepInfo = _stepInfo;
    m_stepInfoHasBeenSet = true;
}

bool JobItem::StepInfoHasBeenSet() const
{
    return m_stepInfoHasBeenSet;
}

DBEndpointInfo JobItem::GetSrcInfo() const
{
    return m_srcInfo;
}

void JobItem::SetSrcInfo(const DBEndpointInfo& _srcInfo)
{
    m_srcInfo = _srcInfo;
    m_srcInfoHasBeenSet = true;
}

bool JobItem::SrcInfoHasBeenSet() const
{
    return m_srcInfoHasBeenSet;
}

DBEndpointInfo JobItem::GetDstInfo() const
{
    return m_dstInfo;
}

void JobItem::SetDstInfo(const DBEndpointInfo& _dstInfo)
{
    m_dstInfo = _dstInfo;
    m_dstInfoHasBeenSet = true;
}

bool JobItem::DstInfoHasBeenSet() const
{
    return m_dstInfoHasBeenSet;
}

CompareTaskInfo JobItem::GetCompareTask() const
{
    return m_compareTask;
}

void JobItem::SetCompareTask(const CompareTaskInfo& _compareTask)
{
    m_compareTask = _compareTask;
    m_compareTaskHasBeenSet = true;
}

bool JobItem::CompareTaskHasBeenSet() const
{
    return m_compareTaskHasBeenSet;
}

TradeInfo JobItem::GetTradeInfo() const
{
    return m_tradeInfo;
}

void JobItem::SetTradeInfo(const TradeInfo& _tradeInfo)
{
    m_tradeInfo = _tradeInfo;
    m_tradeInfoHasBeenSet = true;
}

bool JobItem::TradeInfoHasBeenSet() const
{
    return m_tradeInfoHasBeenSet;
}

vector<TagItem> JobItem::GetTags() const
{
    return m_tags;
}

void JobItem::SetTags(const vector<TagItem>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool JobItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t JobItem::GetAutoRetryTimeRangeMinutes() const
{
    return m_autoRetryTimeRangeMinutes;
}

void JobItem::SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes)
{
    m_autoRetryTimeRangeMinutes = _autoRetryTimeRangeMinutes;
    m_autoRetryTimeRangeMinutesHasBeenSet = true;
}

bool JobItem::AutoRetryTimeRangeMinutesHasBeenSet() const
{
    return m_autoRetryTimeRangeMinutesHasBeenSet;
}

string JobItem::GetDumperResumeCtrl() const
{
    return m_dumperResumeCtrl;
}

void JobItem::SetDumperResumeCtrl(const string& _dumperResumeCtrl)
{
    m_dumperResumeCtrl = _dumperResumeCtrl;
    m_dumperResumeCtrlHasBeenSet = true;
}

bool JobItem::DumperResumeCtrlHasBeenSet() const
{
    return m_dumperResumeCtrlHasBeenSet;
}

