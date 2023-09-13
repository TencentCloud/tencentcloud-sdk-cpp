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

#include <tencentcloud/ecc/v20181213/model/CompositionContext.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecc::V20181213::Model;
using namespace std;

CompositionContext::CompositionContext() :
    m_contentHasBeenSet(false),
    m_correctDataHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

CoreInternalOutcome CompositionContext::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompositionContext.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("CorrectData") && !value["CorrectData"].IsNull())
    {
        if (!value["CorrectData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompositionContext.CorrectData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_correctData.Deserialize(value["CorrectData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_correctDataHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompositionContext.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompositionContext.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompositionContext::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_correctDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorrectData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_correctData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

}


string CompositionContext::GetContent() const
{
    return m_content;
}

void CompositionContext::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CompositionContext::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

CorrectData CompositionContext::GetCorrectData() const
{
    return m_correctData;
}

void CompositionContext::SetCorrectData(const CorrectData& _correctData)
{
    m_correctData = _correctData;
    m_correctDataHasBeenSet = true;
}

bool CompositionContext::CorrectDataHasBeenSet() const
{
    return m_correctDataHasBeenSet;
}

string CompositionContext::GetTaskId() const
{
    return m_taskId;
}

void CompositionContext::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CompositionContext::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CompositionContext::GetSessionId() const
{
    return m_sessionId;
}

void CompositionContext::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CompositionContext::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

