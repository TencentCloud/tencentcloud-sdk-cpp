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

#include <tencentcloud/iotexplorer/v20190423/model/CreateVisionRecognitionTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateVisionRecognitionTaskOutput::CreateVisionRecognitionTaskOutput() :
    m_createdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome CreateVisionRecognitionTaskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Created") && !value["Created"].IsNull())
    {
        if (!value["Created"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskOutput.Created` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_created = value["Created"].GetBool();
        m_createdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskOutput.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskOutput.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskOutput.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateVisionRecognitionTaskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Created";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_created, allocator);
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

}


bool CreateVisionRecognitionTaskOutput::GetCreated() const
{
    return m_created;
}

void CreateVisionRecognitionTaskOutput::SetCreated(const bool& _created)
{
    m_created = _created;
    m_createdHasBeenSet = true;
}

bool CreateVisionRecognitionTaskOutput::CreatedHasBeenSet() const
{
    return m_createdHasBeenSet;
}

string CreateVisionRecognitionTaskOutput::GetTaskId() const
{
    return m_taskId;
}

void CreateVisionRecognitionTaskOutput::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateVisionRecognitionTaskOutput::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CreateVisionRecognitionTaskOutput::GetErrorCode() const
{
    return m_errorCode;
}

void CreateVisionRecognitionTaskOutput::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool CreateVisionRecognitionTaskOutput::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string CreateVisionRecognitionTaskOutput::GetErrorMessage() const
{
    return m_errorMessage;
}

void CreateVisionRecognitionTaskOutput::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool CreateVisionRecognitionTaskOutput::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

