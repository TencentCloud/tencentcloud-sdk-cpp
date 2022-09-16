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

#include <tencentcloud/vod/v20180717/model/ReduceMediaBitrateAdaptiveDynamicStreamingResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ReduceMediaBitrateAdaptiveDynamicStreamingResult::ReduceMediaBitrateAdaptiveDynamicStreamingResult() :
    m_statusHasBeenSet(false),
    m_errCodeExtHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false)
{
}

CoreInternalOutcome ReduceMediaBitrateAdaptiveDynamicStreamingResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateAdaptiveDynamicStreamingResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCodeExt") && !value["ErrCodeExt"].IsNull())
    {
        if (!value["ErrCodeExt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateAdaptiveDynamicStreamingResult.ErrCodeExt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCodeExt = string(value["ErrCodeExt"].GetString());
        m_errCodeExtHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateAdaptiveDynamicStreamingResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateAdaptiveDynamicStreamingResult.Input` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateAdaptiveDynamicStreamingResult.Output` is not object type").SetRequestId(requestId));
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

void ReduceMediaBitrateAdaptiveDynamicStreamingResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string ReduceMediaBitrateAdaptiveDynamicStreamingResult::GetStatus() const
{
    return m_status;
}

void ReduceMediaBitrateAdaptiveDynamicStreamingResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReduceMediaBitrateAdaptiveDynamicStreamingResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReduceMediaBitrateAdaptiveDynamicStreamingResult::GetErrCodeExt() const
{
    return m_errCodeExt;
}

void ReduceMediaBitrateAdaptiveDynamicStreamingResult::SetErrCodeExt(const string& _errCodeExt)
{
    m_errCodeExt = _errCodeExt;
    m_errCodeExtHasBeenSet = true;
}

bool ReduceMediaBitrateAdaptiveDynamicStreamingResult::ErrCodeExtHasBeenSet() const
{
    return m_errCodeExtHasBeenSet;
}

string ReduceMediaBitrateAdaptiveDynamicStreamingResult::GetMessage() const
{
    return m_message;
}

void ReduceMediaBitrateAdaptiveDynamicStreamingResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ReduceMediaBitrateAdaptiveDynamicStreamingResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

AdaptiveDynamicStreamingTaskInput ReduceMediaBitrateAdaptiveDynamicStreamingResult::GetInput() const
{
    return m_input;
}

void ReduceMediaBitrateAdaptiveDynamicStreamingResult::SetInput(const AdaptiveDynamicStreamingTaskInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool ReduceMediaBitrateAdaptiveDynamicStreamingResult::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

AdaptiveDynamicStreamingInfoItem ReduceMediaBitrateAdaptiveDynamicStreamingResult::GetOutput() const
{
    return m_output;
}

void ReduceMediaBitrateAdaptiveDynamicStreamingResult::SetOutput(const AdaptiveDynamicStreamingInfoItem& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool ReduceMediaBitrateAdaptiveDynamicStreamingResult::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

