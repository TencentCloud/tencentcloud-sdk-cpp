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

#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrTranslateResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiRecognitionTaskAsrTranslateResult::AiRecognitionTaskAsrTranslateResult() :
    m_statusHasBeenSet(false),
    m_errCodeExtHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_beginProcessTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskAsrTranslateResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrTranslateResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCodeExt") && !value["ErrCodeExt"].IsNull())
    {
        if (!value["ErrCodeExt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrTranslateResult.ErrCodeExt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCodeExt = string(value["ErrCodeExt"].GetString());
        m_errCodeExtHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrTranslateResult.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrTranslateResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrTranslateResult.Input` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_input.Deserialize(value["Input"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrTranslateResult.Output` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_output.Deserialize(value["Output"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrTranslateResult.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("BeginProcessTime") && !value["BeginProcessTime"].IsNull())
    {
        if (!value["BeginProcessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrTranslateResult.BeginProcessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginProcessTime = string(value["BeginProcessTime"].GetString());
        m_beginProcessTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrTranslateResult.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskAsrTranslateResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_input.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_output.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_beginProcessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginProcessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginProcessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

}


string AiRecognitionTaskAsrTranslateResult::GetStatus() const
{
    return m_status;
}

void AiRecognitionTaskAsrTranslateResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AiRecognitionTaskAsrTranslateResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AiRecognitionTaskAsrTranslateResult::GetErrCodeExt() const
{
    return m_errCodeExt;
}

void AiRecognitionTaskAsrTranslateResult::SetErrCodeExt(const string& _errCodeExt)
{
    m_errCodeExt = _errCodeExt;
    m_errCodeExtHasBeenSet = true;
}

bool AiRecognitionTaskAsrTranslateResult::ErrCodeExtHasBeenSet() const
{
    return m_errCodeExtHasBeenSet;
}

int64_t AiRecognitionTaskAsrTranslateResult::GetErrCode() const
{
    return m_errCode;
}

void AiRecognitionTaskAsrTranslateResult::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool AiRecognitionTaskAsrTranslateResult::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string AiRecognitionTaskAsrTranslateResult::GetMessage() const
{
    return m_message;
}

void AiRecognitionTaskAsrTranslateResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool AiRecognitionTaskAsrTranslateResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

AiRecognitionTaskAsrTranslateResultInput AiRecognitionTaskAsrTranslateResult::GetInput() const
{
    return m_input;
}

void AiRecognitionTaskAsrTranslateResult::SetInput(const AiRecognitionTaskAsrTranslateResultInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool AiRecognitionTaskAsrTranslateResult::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

AiRecognitionTaskAsrTranslateResultOutput AiRecognitionTaskAsrTranslateResult::GetOutput() const
{
    return m_output;
}

void AiRecognitionTaskAsrTranslateResult::SetOutput(const AiRecognitionTaskAsrTranslateResultOutput& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool AiRecognitionTaskAsrTranslateResult::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

int64_t AiRecognitionTaskAsrTranslateResult::GetProgress() const
{
    return m_progress;
}

void AiRecognitionTaskAsrTranslateResult::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool AiRecognitionTaskAsrTranslateResult::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string AiRecognitionTaskAsrTranslateResult::GetBeginProcessTime() const
{
    return m_beginProcessTime;
}

void AiRecognitionTaskAsrTranslateResult::SetBeginProcessTime(const string& _beginProcessTime)
{
    m_beginProcessTime = _beginProcessTime;
    m_beginProcessTimeHasBeenSet = true;
}

bool AiRecognitionTaskAsrTranslateResult::BeginProcessTimeHasBeenSet() const
{
    return m_beginProcessTimeHasBeenSet;
}

string AiRecognitionTaskAsrTranslateResult::GetFinishTime() const
{
    return m_finishTime;
}

void AiRecognitionTaskAsrTranslateResult::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool AiRecognitionTaskAsrTranslateResult::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

