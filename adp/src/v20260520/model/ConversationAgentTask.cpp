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

#include <tencentcloud/adp/v20260520/model/ConversationAgentTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationAgentTask::ConversationAgentTask() :
    m_contentHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ConversationAgentTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationAgentTask.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationAgentTask.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationAgentTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationAgentTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string ConversationAgentTask::GetContent() const
{
    return m_content;
}

void ConversationAgentTask::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ConversationAgentTask::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ConversationAgentTask::GetIndex() const
{
    return m_index;
}

void ConversationAgentTask::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool ConversationAgentTask::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string ConversationAgentTask::GetStatus() const
{
    return m_status;
}

void ConversationAgentTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ConversationAgentTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

