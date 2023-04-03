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

#include <tencentcloud/smop/v20201203/model/TaskEventData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Smop::V20201203::Model;
using namespace std;

TaskEventData::TaskEventData() :
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskOrderIdHasBeenSet(false),
    m_taskCodeHasBeenSet(false),
    m_taskCoinNumberHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_totalCoinHasBeenSet(false),
    m_attachHasBeenSet(false),
    m_doneTimesHasBeenSet(false),
    m_totalTimesHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_growScoreHasBeenSet(false)
{
}

CoreInternalOutcome TaskEventData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskEventData.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskEventData.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskEventData.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskOrderId") && !value["TaskOrderId"].IsNull())
    {
        if (!value["TaskOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskEventData.TaskOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskOrderId = string(value["TaskOrderId"].GetString());
        m_taskOrderIdHasBeenSet = true;
    }

    if (value.HasMember("TaskCode") && !value["TaskCode"].IsNull())
    {
        if (!value["TaskCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskEventData.TaskCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCode = value["TaskCode"].GetInt64();
        m_taskCodeHasBeenSet = true;
    }

    if (value.HasMember("TaskCoinNumber") && !value["TaskCoinNumber"].IsNull())
    {
        if (!value["TaskCoinNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskEventData.TaskCoinNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCoinNumber = value["TaskCoinNumber"].GetInt64();
        m_taskCoinNumberHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskEventData.TaskType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetInt64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalCoin") && !value["TotalCoin"].IsNull())
    {
        if (!value["TotalCoin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskEventData.TotalCoin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCoin = value["TotalCoin"].GetInt64();
        m_totalCoinHasBeenSet = true;
    }

    if (value.HasMember("Attach") && !value["Attach"].IsNull())
    {
        if (!value["Attach"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskEventData.Attach` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attach = string(value["Attach"].GetString());
        m_attachHasBeenSet = true;
    }

    if (value.HasMember("DoneTimes") && !value["DoneTimes"].IsNull())
    {
        if (!value["DoneTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskEventData.DoneTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_doneTimes = value["DoneTimes"].GetInt64();
        m_doneTimesHasBeenSet = true;
    }

    if (value.HasMember("TotalTimes") && !value["TotalTimes"].IsNull())
    {
        if (!value["TotalTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskEventData.TotalTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTimes = value["TotalTimes"].GetInt64();
        m_totalTimesHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskEventData.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("GrowScore") && !value["GrowScore"].IsNull())
    {
        if (!value["GrowScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskEventData.GrowScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_growScore = value["GrowScore"].GetInt64();
        m_growScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskEventData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCode, allocator);
    }

    if (m_taskCoinNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCoinNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCoinNumber, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_totalCoinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCoin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCoin, allocator);
    }

    if (m_attachHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attach";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attach.c_str(), allocator).Move(), allocator);
    }

    if (m_doneTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoneTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_doneTimes, allocator);
    }

    if (m_totalTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTimes, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_growScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrowScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_growScore, allocator);
    }

}


int64_t TaskEventData::GetCode() const
{
    return m_code;
}

void TaskEventData::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool TaskEventData::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string TaskEventData::GetMessage() const
{
    return m_message;
}

void TaskEventData::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool TaskEventData::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t TaskEventData::GetTaskId() const
{
    return m_taskId;
}

void TaskEventData::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskEventData::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskEventData::GetTaskOrderId() const
{
    return m_taskOrderId;
}

void TaskEventData::SetTaskOrderId(const string& _taskOrderId)
{
    m_taskOrderId = _taskOrderId;
    m_taskOrderIdHasBeenSet = true;
}

bool TaskEventData::TaskOrderIdHasBeenSet() const
{
    return m_taskOrderIdHasBeenSet;
}

int64_t TaskEventData::GetTaskCode() const
{
    return m_taskCode;
}

void TaskEventData::SetTaskCode(const int64_t& _taskCode)
{
    m_taskCode = _taskCode;
    m_taskCodeHasBeenSet = true;
}

bool TaskEventData::TaskCodeHasBeenSet() const
{
    return m_taskCodeHasBeenSet;
}

int64_t TaskEventData::GetTaskCoinNumber() const
{
    return m_taskCoinNumber;
}

void TaskEventData::SetTaskCoinNumber(const int64_t& _taskCoinNumber)
{
    m_taskCoinNumber = _taskCoinNumber;
    m_taskCoinNumberHasBeenSet = true;
}

bool TaskEventData::TaskCoinNumberHasBeenSet() const
{
    return m_taskCoinNumberHasBeenSet;
}

int64_t TaskEventData::GetTaskType() const
{
    return m_taskType;
}

void TaskEventData::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TaskEventData::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t TaskEventData::GetTotalCoin() const
{
    return m_totalCoin;
}

void TaskEventData::SetTotalCoin(const int64_t& _totalCoin)
{
    m_totalCoin = _totalCoin;
    m_totalCoinHasBeenSet = true;
}

bool TaskEventData::TotalCoinHasBeenSet() const
{
    return m_totalCoinHasBeenSet;
}

string TaskEventData::GetAttach() const
{
    return m_attach;
}

void TaskEventData::SetAttach(const string& _attach)
{
    m_attach = _attach;
    m_attachHasBeenSet = true;
}

bool TaskEventData::AttachHasBeenSet() const
{
    return m_attachHasBeenSet;
}

int64_t TaskEventData::GetDoneTimes() const
{
    return m_doneTimes;
}

void TaskEventData::SetDoneTimes(const int64_t& _doneTimes)
{
    m_doneTimes = _doneTimes;
    m_doneTimesHasBeenSet = true;
}

bool TaskEventData::DoneTimesHasBeenSet() const
{
    return m_doneTimesHasBeenSet;
}

int64_t TaskEventData::GetTotalTimes() const
{
    return m_totalTimes;
}

void TaskEventData::SetTotalTimes(const int64_t& _totalTimes)
{
    m_totalTimes = _totalTimes;
    m_totalTimesHasBeenSet = true;
}

bool TaskEventData::TotalTimesHasBeenSet() const
{
    return m_totalTimesHasBeenSet;
}

string TaskEventData::GetTaskName() const
{
    return m_taskName;
}

void TaskEventData::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskEventData::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t TaskEventData::GetGrowScore() const
{
    return m_growScore;
}

void TaskEventData::SetGrowScore(const int64_t& _growScore)
{
    m_growScore = _growScore;
    m_growScoreHasBeenSet = true;
}

bool TaskEventData::GrowScoreHasBeenSet() const
{
    return m_growScoreHasBeenSet;
}

