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

#include <tencentcloud/vod/v20180717/model/MediaProcessTaskAnimatedGraphicResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

MediaProcessTaskAnimatedGraphicResult::MediaProcessTaskAnimatedGraphicResult() :
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false)
{
}

CoreInternalOutcome MediaProcessTaskAnimatedGraphicResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaProcessTaskAnimatedGraphicResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MediaProcessTaskAnimatedGraphicResult.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaProcessTaskAnimatedGraphicResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MediaProcessTaskAnimatedGraphicResult.Input` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `MediaProcessTaskAnimatedGraphicResult.Output` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_output.Deserialize(value["Output"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaProcessTaskAnimatedGraphicResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_messageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_inputHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_input.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_output.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MediaProcessTaskAnimatedGraphicResult::GetStatus() const
{
    return m_status;
}

void MediaProcessTaskAnimatedGraphicResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MediaProcessTaskAnimatedGraphicResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t MediaProcessTaskAnimatedGraphicResult::GetErrCode() const
{
    return m_errCode;
}

void MediaProcessTaskAnimatedGraphicResult::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool MediaProcessTaskAnimatedGraphicResult::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string MediaProcessTaskAnimatedGraphicResult::GetMessage() const
{
    return m_message;
}

void MediaProcessTaskAnimatedGraphicResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool MediaProcessTaskAnimatedGraphicResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

AnimatedGraphicTaskInput MediaProcessTaskAnimatedGraphicResult::GetInput() const
{
    return m_input;
}

void MediaProcessTaskAnimatedGraphicResult::SetInput(const AnimatedGraphicTaskInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool MediaProcessTaskAnimatedGraphicResult::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

MediaAnimatedGraphicsItem MediaProcessTaskAnimatedGraphicResult::GetOutput() const
{
    return m_output;
}

void MediaProcessTaskAnimatedGraphicResult::SetOutput(const MediaAnimatedGraphicsItem& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool MediaProcessTaskAnimatedGraphicResult::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

