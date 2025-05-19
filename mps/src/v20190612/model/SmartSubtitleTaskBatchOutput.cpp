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

#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskBatchOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SmartSubtitleTaskBatchOutput::SmartSubtitleTaskBatchOutput() :
    m_progressHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errCodeExtHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_transTextTaskHasBeenSet(false),
    m_asrFullTextTaskHasBeenSet(false)
{
}

CoreInternalOutcome SmartSubtitleTaskBatchOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskBatchOutput.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskBatchOutput.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCodeExt") && !value["ErrCodeExt"].IsNull())
    {
        if (!value["ErrCodeExt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskBatchOutput.ErrCodeExt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCodeExt = string(value["ErrCodeExt"].GetString());
        m_errCodeExtHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskBatchOutput.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("TransTextTask") && !value["TransTextTask"].IsNull())
    {
        if (!value["TransTextTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskBatchOutput.TransTextTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transTextTask.Deserialize(value["TransTextTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transTextTaskHasBeenSet = true;
    }

    if (value.HasMember("AsrFullTextTask") && !value["AsrFullTextTask"].IsNull())
    {
        if (!value["AsrFullTextTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskBatchOutput.AsrFullTextTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asrFullTextTask.Deserialize(value["AsrFullTextTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrFullTextTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartSubtitleTaskBatchOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCodeExt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errCodeExt.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_transTextTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransTextTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transTextTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_asrFullTextTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrFullTextTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrFullTextTask.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t SmartSubtitleTaskBatchOutput::GetProgress() const
{
    return m_progress;
}

void SmartSubtitleTaskBatchOutput::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool SmartSubtitleTaskBatchOutput::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string SmartSubtitleTaskBatchOutput::GetStatus() const
{
    return m_status;
}

void SmartSubtitleTaskBatchOutput::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SmartSubtitleTaskBatchOutput::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SmartSubtitleTaskBatchOutput::GetErrCodeExt() const
{
    return m_errCodeExt;
}

void SmartSubtitleTaskBatchOutput::SetErrCodeExt(const string& _errCodeExt)
{
    m_errCodeExt = _errCodeExt;
    m_errCodeExtHasBeenSet = true;
}

bool SmartSubtitleTaskBatchOutput::ErrCodeExtHasBeenSet() const
{
    return m_errCodeExtHasBeenSet;
}

string SmartSubtitleTaskBatchOutput::GetMessage() const
{
    return m_message;
}

void SmartSubtitleTaskBatchOutput::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SmartSubtitleTaskBatchOutput::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

SmartSubtitleTaskTransTextResultOutput SmartSubtitleTaskBatchOutput::GetTransTextTask() const
{
    return m_transTextTask;
}

void SmartSubtitleTaskBatchOutput::SetTransTextTask(const SmartSubtitleTaskTransTextResultOutput& _transTextTask)
{
    m_transTextTask = _transTextTask;
    m_transTextTaskHasBeenSet = true;
}

bool SmartSubtitleTaskBatchOutput::TransTextTaskHasBeenSet() const
{
    return m_transTextTaskHasBeenSet;
}

SmartSubtitleTaskAsrFullTextResultOutput SmartSubtitleTaskBatchOutput::GetAsrFullTextTask() const
{
    return m_asrFullTextTask;
}

void SmartSubtitleTaskBatchOutput::SetAsrFullTextTask(const SmartSubtitleTaskAsrFullTextResultOutput& _asrFullTextTask)
{
    m_asrFullTextTask = _asrFullTextTask;
    m_asrFullTextTaskHasBeenSet = true;
}

bool SmartSubtitleTaskBatchOutput::AsrFullTextTaskHasBeenSet() const
{
    return m_asrFullTextTaskHasBeenSet;
}

