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

#include <tencentcloud/adp/v20260520/model/WorkflowRunOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

WorkflowRunOutput::WorkflowRunOutput() :
    m_outputHasBeenSet(false),
    m_latestMessageHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowRunOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunOutput.Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(value["Output"].GetString());
        m_outputHasBeenSet = true;
    }

    if (value.HasMember("LatestMessage") && !value["LatestMessage"].IsNull())
    {
        if (!value["LatestMessage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunOutput.LatestMessage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_latestMessage.Deserialize(value["LatestMessage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_latestMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowRunOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_output.c_str(), allocator).Move(), allocator);
    }

    if (m_latestMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_latestMessage.ToJsonObject(value[key.c_str()], allocator);
    }

}


string WorkflowRunOutput::GetOutput() const
{
    return m_output;
}

void WorkflowRunOutput::SetOutput(const string& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool WorkflowRunOutput::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

ReplyMessage WorkflowRunOutput::GetLatestMessage() const
{
    return m_latestMessage;
}

void WorkflowRunOutput::SetLatestMessage(const ReplyMessage& _latestMessage)
{
    m_latestMessage = _latestMessage;
    m_latestMessageHasBeenSet = true;
}

bool WorkflowRunOutput::LatestMessageHasBeenSet() const
{
    return m_latestMessageHasBeenSet;
}

