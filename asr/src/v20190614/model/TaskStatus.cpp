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

#include <tencentcloud/asr/v20190614/model/TaskStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

TaskStatus::TaskStatus() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusStrHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_resultDetailHasBeenSet(false),
    m_audioDurationHasBeenSet(false)
{
}

CoreInternalOutcome TaskStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusStr") && !value["StatusStr"].IsNull())
    {
        if (!value["StatusStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus.StatusStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusStr = string(value["StatusStr"].GetString());
        m_statusStrHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (value.HasMember("ResultDetail") && !value["ResultDetail"].IsNull())
    {
        if (!value["ResultDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskStatus.ResultDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["ResultDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SentenceDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resultDetail.push_back(item);
        }
        m_resultDetailHasBeenSet = true;
    }

    if (value.HasMember("AudioDuration") && !value["AudioDuration"].IsNull())
    {
        if (!value["AudioDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus.AudioDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_audioDuration = value["AudioDuration"].GetDouble();
        m_audioDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusStr.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_resultDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resultDetail.begin(); itr != m_resultDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_audioDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioDuration, allocator);
    }

}


uint64_t TaskStatus::GetTaskId() const
{
    return m_taskId;
}

void TaskStatus::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskStatus::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t TaskStatus::GetStatus() const
{
    return m_status;
}

void TaskStatus::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TaskStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TaskStatus::GetStatusStr() const
{
    return m_statusStr;
}

void TaskStatus::SetStatusStr(const string& _statusStr)
{
    m_statusStr = _statusStr;
    m_statusStrHasBeenSet = true;
}

bool TaskStatus::StatusStrHasBeenSet() const
{
    return m_statusStrHasBeenSet;
}

string TaskStatus::GetResult() const
{
    return m_result;
}

void TaskStatus::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool TaskStatus::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string TaskStatus::GetErrorMsg() const
{
    return m_errorMsg;
}

void TaskStatus::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool TaskStatus::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

vector<SentenceDetail> TaskStatus::GetResultDetail() const
{
    return m_resultDetail;
}

void TaskStatus::SetResultDetail(const vector<SentenceDetail>& _resultDetail)
{
    m_resultDetail = _resultDetail;
    m_resultDetailHasBeenSet = true;
}

bool TaskStatus::ResultDetailHasBeenSet() const
{
    return m_resultDetailHasBeenSet;
}

double TaskStatus::GetAudioDuration() const
{
    return m_audioDuration;
}

void TaskStatus::SetAudioDuration(const double& _audioDuration)
{
    m_audioDuration = _audioDuration;
    m_audioDurationHasBeenSet = true;
}

bool TaskStatus::AudioDurationHasBeenSet() const
{
    return m_audioDurationHasBeenSet;
}

