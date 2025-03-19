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

#include <tencentcloud/mps/v20190612/model/WorkflowTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

WorkflowTask::WorkflowTask() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_inputInfoHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_mediaProcessResultSetHasBeenSet(false),
    m_aiContentReviewResultSetHasBeenSet(false),
    m_aiAnalysisResultSetHasBeenSet(false),
    m_aiRecognitionResultSetHasBeenSet(false),
    m_aiQualityControlTaskResultHasBeenSet(false),
    m_smartSubtitlesTaskResultHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("InputInfo") && !value["InputInfo"].IsNull())
    {
        if (!value["InputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.InputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputInfo.Deserialize(value["InputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputInfoHasBeenSet = true;
    }

    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(value["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }

    if (value.HasMember("MediaProcessResultSet") && !value["MediaProcessResultSet"].IsNull())
    {
        if (!value["MediaProcessResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.MediaProcessResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MediaProcessResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaProcessTaskResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mediaProcessResultSet.push_back(item);
        }
        m_mediaProcessResultSetHasBeenSet = true;
    }

    if (value.HasMember("AiContentReviewResultSet") && !value["AiContentReviewResultSet"].IsNull())
    {
        if (!value["AiContentReviewResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.AiContentReviewResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AiContentReviewResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiContentReviewResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aiContentReviewResultSet.push_back(item);
        }
        m_aiContentReviewResultSetHasBeenSet = true;
    }

    if (value.HasMember("AiAnalysisResultSet") && !value["AiAnalysisResultSet"].IsNull())
    {
        if (!value["AiAnalysisResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.AiAnalysisResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AiAnalysisResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiAnalysisResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aiAnalysisResultSet.push_back(item);
        }
        m_aiAnalysisResultSetHasBeenSet = true;
    }

    if (value.HasMember("AiRecognitionResultSet") && !value["AiRecognitionResultSet"].IsNull())
    {
        if (!value["AiRecognitionResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.AiRecognitionResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AiRecognitionResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiRecognitionResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aiRecognitionResultSet.push_back(item);
        }
        m_aiRecognitionResultSetHasBeenSet = true;
    }

    if (value.HasMember("AiQualityControlTaskResult") && !value["AiQualityControlTaskResult"].IsNull())
    {
        if (!value["AiQualityControlTaskResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.AiQualityControlTaskResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiQualityControlTaskResult.Deserialize(value["AiQualityControlTaskResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiQualityControlTaskResultHasBeenSet = true;
    }

    if (value.HasMember("SmartSubtitlesTaskResult") && !value["SmartSubtitlesTaskResult"].IsNull())
    {
        if (!value["SmartSubtitlesTaskResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.SmartSubtitlesTaskResult` is not array type"));

        const rapidjson::Value &tmpValue = value["SmartSubtitlesTaskResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SmartSubtitlesResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_smartSubtitlesTaskResult.push_back(item);
        }
        m_smartSubtitlesTaskResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mediaProcessResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaProcessResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mediaProcessResultSet.begin(); itr != m_mediaProcessResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aiContentReviewResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiContentReviewResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aiContentReviewResultSet.begin(); itr != m_aiContentReviewResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aiAnalysisResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiAnalysisResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aiAnalysisResultSet.begin(); itr != m_aiAnalysisResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aiRecognitionResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiRecognitionResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aiRecognitionResultSet.begin(); itr != m_aiRecognitionResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aiQualityControlTaskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiQualityControlTaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiQualityControlTaskResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_smartSubtitlesTaskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartSubtitlesTaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_smartSubtitlesTaskResult.begin(); itr != m_smartSubtitlesTaskResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string WorkflowTask::GetTaskId() const
{
    return m_taskId;
}

void WorkflowTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool WorkflowTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string WorkflowTask::GetStatus() const
{
    return m_status;
}

void WorkflowTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WorkflowTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t WorkflowTask::GetErrCode() const
{
    return m_errCode;
}

void WorkflowTask::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool WorkflowTask::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string WorkflowTask::GetMessage() const
{
    return m_message;
}

void WorkflowTask::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool WorkflowTask::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

MediaInputInfo WorkflowTask::GetInputInfo() const
{
    return m_inputInfo;
}

void WorkflowTask::SetInputInfo(const MediaInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool WorkflowTask::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

MediaMetaData WorkflowTask::GetMetaData() const
{
    return m_metaData;
}

void WorkflowTask::SetMetaData(const MediaMetaData& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool WorkflowTask::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

vector<MediaProcessTaskResult> WorkflowTask::GetMediaProcessResultSet() const
{
    return m_mediaProcessResultSet;
}

void WorkflowTask::SetMediaProcessResultSet(const vector<MediaProcessTaskResult>& _mediaProcessResultSet)
{
    m_mediaProcessResultSet = _mediaProcessResultSet;
    m_mediaProcessResultSetHasBeenSet = true;
}

bool WorkflowTask::MediaProcessResultSetHasBeenSet() const
{
    return m_mediaProcessResultSetHasBeenSet;
}

vector<AiContentReviewResult> WorkflowTask::GetAiContentReviewResultSet() const
{
    return m_aiContentReviewResultSet;
}

void WorkflowTask::SetAiContentReviewResultSet(const vector<AiContentReviewResult>& _aiContentReviewResultSet)
{
    m_aiContentReviewResultSet = _aiContentReviewResultSet;
    m_aiContentReviewResultSetHasBeenSet = true;
}

bool WorkflowTask::AiContentReviewResultSetHasBeenSet() const
{
    return m_aiContentReviewResultSetHasBeenSet;
}

vector<AiAnalysisResult> WorkflowTask::GetAiAnalysisResultSet() const
{
    return m_aiAnalysisResultSet;
}

void WorkflowTask::SetAiAnalysisResultSet(const vector<AiAnalysisResult>& _aiAnalysisResultSet)
{
    m_aiAnalysisResultSet = _aiAnalysisResultSet;
    m_aiAnalysisResultSetHasBeenSet = true;
}

bool WorkflowTask::AiAnalysisResultSetHasBeenSet() const
{
    return m_aiAnalysisResultSetHasBeenSet;
}

vector<AiRecognitionResult> WorkflowTask::GetAiRecognitionResultSet() const
{
    return m_aiRecognitionResultSet;
}

void WorkflowTask::SetAiRecognitionResultSet(const vector<AiRecognitionResult>& _aiRecognitionResultSet)
{
    m_aiRecognitionResultSet = _aiRecognitionResultSet;
    m_aiRecognitionResultSetHasBeenSet = true;
}

bool WorkflowTask::AiRecognitionResultSetHasBeenSet() const
{
    return m_aiRecognitionResultSetHasBeenSet;
}

ScheduleQualityControlTaskResult WorkflowTask::GetAiQualityControlTaskResult() const
{
    return m_aiQualityControlTaskResult;
}

void WorkflowTask::SetAiQualityControlTaskResult(const ScheduleQualityControlTaskResult& _aiQualityControlTaskResult)
{
    m_aiQualityControlTaskResult = _aiQualityControlTaskResult;
    m_aiQualityControlTaskResultHasBeenSet = true;
}

bool WorkflowTask::AiQualityControlTaskResultHasBeenSet() const
{
    return m_aiQualityControlTaskResultHasBeenSet;
}

vector<SmartSubtitlesResult> WorkflowTask::GetSmartSubtitlesTaskResult() const
{
    return m_smartSubtitlesTaskResult;
}

void WorkflowTask::SetSmartSubtitlesTaskResult(const vector<SmartSubtitlesResult>& _smartSubtitlesTaskResult)
{
    m_smartSubtitlesTaskResult = _smartSubtitlesTaskResult;
    m_smartSubtitlesTaskResultHasBeenSet = true;
}

bool WorkflowTask::SmartSubtitlesTaskResultHasBeenSet() const
{
    return m_smartSubtitlesTaskResultHasBeenSet;
}

