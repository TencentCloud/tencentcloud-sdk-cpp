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

#include <tencentcloud/mps/v20190612/model/ExtractBlindWatermarkTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ExtractBlindWatermarkTask::ExtractBlindWatermarkTask() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_inputInfoHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_isDetectedHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_extractBlindWatermarkConfigHasBeenSet(false)
{
}

CoreInternalOutcome ExtractBlindWatermarkTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractBlindWatermarkTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractBlindWatermarkTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractBlindWatermarkTask.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractBlindWatermarkTask.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("InputInfo") && !value["InputInfo"].IsNull())
    {
        if (!value["InputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractBlindWatermarkTask.InputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputInfo.Deserialize(value["InputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputInfoHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractBlindWatermarkTask.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("IsDetected") && !value["IsDetected"].IsNull())
    {
        if (!value["IsDetected"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractBlindWatermarkTask.IsDetected` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDetected = value["IsDetected"].GetBool();
        m_isDetectedHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractBlindWatermarkTask.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("ExtractBlindWatermarkConfig") && !value["ExtractBlindWatermarkConfig"].IsNull())
    {
        if (!value["ExtractBlindWatermarkConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractBlindWatermarkTask.ExtractBlindWatermarkConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extractBlindWatermarkConfig.Deserialize(value["ExtractBlindWatermarkConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extractBlindWatermarkConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtractBlindWatermarkTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_isDetectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDetected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDetected, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_extractBlindWatermarkConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractBlindWatermarkConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extractBlindWatermarkConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ExtractBlindWatermarkTask::GetTaskId() const
{
    return m_taskId;
}

void ExtractBlindWatermarkTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ExtractBlindWatermarkTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ExtractBlindWatermarkTask::GetStatus() const
{
    return m_status;
}

void ExtractBlindWatermarkTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ExtractBlindWatermarkTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ExtractBlindWatermarkTask::GetErrCode() const
{
    return m_errCode;
}

void ExtractBlindWatermarkTask::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool ExtractBlindWatermarkTask::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string ExtractBlindWatermarkTask::GetMessage() const
{
    return m_message;
}

void ExtractBlindWatermarkTask::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ExtractBlindWatermarkTask::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

MediaInputInfo ExtractBlindWatermarkTask::GetInputInfo() const
{
    return m_inputInfo;
}

void ExtractBlindWatermarkTask::SetInputInfo(const MediaInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool ExtractBlindWatermarkTask::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

string ExtractBlindWatermarkTask::GetType() const
{
    return m_type;
}

void ExtractBlindWatermarkTask::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ExtractBlindWatermarkTask::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool ExtractBlindWatermarkTask::GetIsDetected() const
{
    return m_isDetected;
}

void ExtractBlindWatermarkTask::SetIsDetected(const bool& _isDetected)
{
    m_isDetected = _isDetected;
    m_isDetectedHasBeenSet = true;
}

bool ExtractBlindWatermarkTask::IsDetectedHasBeenSet() const
{
    return m_isDetectedHasBeenSet;
}

string ExtractBlindWatermarkTask::GetResult() const
{
    return m_result;
}

void ExtractBlindWatermarkTask::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool ExtractBlindWatermarkTask::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

ExtractBlindWatermarkTaskConfig ExtractBlindWatermarkTask::GetExtractBlindWatermarkConfig() const
{
    return m_extractBlindWatermarkConfig;
}

void ExtractBlindWatermarkTask::SetExtractBlindWatermarkConfig(const ExtractBlindWatermarkTaskConfig& _extractBlindWatermarkConfig)
{
    m_extractBlindWatermarkConfig = _extractBlindWatermarkConfig;
    m_extractBlindWatermarkConfigHasBeenSet = true;
}

bool ExtractBlindWatermarkTask::ExtractBlindWatermarkConfigHasBeenSet() const
{
    return m_extractBlindWatermarkConfigHasBeenSet;
}

