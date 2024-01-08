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

#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskAsrFullTextResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiRecognitionTaskAsrFullTextResult::AiRecognitionTaskAsrFullTextResult() :
    m_statusHasBeenSet(false),
    m_errCodeExtHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_progressHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskAsrFullTextResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCodeExt") && !value["ErrCodeExt"].IsNull())
    {
        if (!value["ErrCodeExt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResult.ErrCodeExt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCodeExt = string(value["ErrCodeExt"].GetString());
        m_errCodeExtHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResult.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResult.Input` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResult.Output` is not object type").SetRequestId(requestId));
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
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResult.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskAsrFullTextResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string AiRecognitionTaskAsrFullTextResult::GetStatus() const
{
    return m_status;
}

void AiRecognitionTaskAsrFullTextResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AiRecognitionTaskAsrFullTextResult::GetErrCodeExt() const
{
    return m_errCodeExt;
}

void AiRecognitionTaskAsrFullTextResult::SetErrCodeExt(const string& _errCodeExt)
{
    m_errCodeExt = _errCodeExt;
    m_errCodeExtHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResult::ErrCodeExtHasBeenSet() const
{
    return m_errCodeExtHasBeenSet;
}

int64_t AiRecognitionTaskAsrFullTextResult::GetErrCode() const
{
    return m_errCode;
}

void AiRecognitionTaskAsrFullTextResult::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResult::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string AiRecognitionTaskAsrFullTextResult::GetMessage() const
{
    return m_message;
}

void AiRecognitionTaskAsrFullTextResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

AiRecognitionTaskAsrFullTextResultInput AiRecognitionTaskAsrFullTextResult::GetInput() const
{
    return m_input;
}

void AiRecognitionTaskAsrFullTextResult::SetInput(const AiRecognitionTaskAsrFullTextResultInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResult::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

AiRecognitionTaskAsrFullTextResultOutput AiRecognitionTaskAsrFullTextResult::GetOutput() const
{
    return m_output;
}

void AiRecognitionTaskAsrFullTextResult::SetOutput(const AiRecognitionTaskAsrFullTextResultOutput& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResult::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

uint64_t AiRecognitionTaskAsrFullTextResult::GetProgress() const
{
    return m_progress;
}

void AiRecognitionTaskAsrFullTextResult::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResult::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

