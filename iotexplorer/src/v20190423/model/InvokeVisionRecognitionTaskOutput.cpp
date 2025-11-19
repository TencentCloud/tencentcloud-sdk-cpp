/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/iotexplorer/v20190423/model/InvokeVisionRecognitionTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

InvokeVisionRecognitionTaskOutput::InvokeVisionRecognitionTaskOutput() :
    m_completedHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome InvokeVisionRecognitionTaskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Completed") && !value["Completed"].IsNull())
    {
        if (!value["Completed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeVisionRecognitionTaskOutput.Completed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_completed = value["Completed"].GetBool();
        m_completedHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeVisionRecognitionTaskOutput.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeVisionRecognitionTaskOutput.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeVisionRecognitionTaskOutput.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeVisionRecognitionTaskOutput.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvokeVisionRecognitionTaskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_completedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Completed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completed, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool InvokeVisionRecognitionTaskOutput::GetCompleted() const
{
    return m_completed;
}

void InvokeVisionRecognitionTaskOutput::SetCompleted(const bool& _completed)
{
    m_completed = _completed;
    m_completedHasBeenSet = true;
}

bool InvokeVisionRecognitionTaskOutput::CompletedHasBeenSet() const
{
    return m_completedHasBeenSet;
}

string InvokeVisionRecognitionTaskOutput::GetTaskId() const
{
    return m_taskId;
}

void InvokeVisionRecognitionTaskOutput::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InvokeVisionRecognitionTaskOutput::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string InvokeVisionRecognitionTaskOutput::GetErrorCode() const
{
    return m_errorCode;
}

void InvokeVisionRecognitionTaskOutput::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool InvokeVisionRecognitionTaskOutput::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string InvokeVisionRecognitionTaskOutput::GetErrorMessage() const
{
    return m_errorMessage;
}

void InvokeVisionRecognitionTaskOutput::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool InvokeVisionRecognitionTaskOutput::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

VisionRecognitionResult InvokeVisionRecognitionTaskOutput::GetResult() const
{
    return m_result;
}

void InvokeVisionRecognitionTaskOutput::SetResult(const VisionRecognitionResult& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool InvokeVisionRecognitionTaskOutput::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

