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

#include <tencentcloud/hunyuan/v20230901/model/Message.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Message::Message() :
    m_roleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentsHasBeenSet(false),
    m_toolCallIdHasBeenSet(false),
    m_toolCallsHasBeenSet(false)
{
}

CoreInternalOutcome Message::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Message.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Message.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Contents") && !value["Contents"].IsNull())
    {
        if (!value["Contents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Message.Contents` is not array type"));

        const rapidjson::Value &tmpValue = value["Contents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Content item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_contents.push_back(item);
        }
        m_contentsHasBeenSet = true;
    }

    if (value.HasMember("ToolCallId") && !value["ToolCallId"].IsNull())
    {
        if (!value["ToolCallId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Message.ToolCallId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolCallId = string(value["ToolCallId"].GetString());
        m_toolCallIdHasBeenSet = true;
    }

    if (value.HasMember("ToolCalls") && !value["ToolCalls"].IsNull())
    {
        if (!value["ToolCalls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Message.ToolCalls` is not array type"));

        const rapidjson::Value &tmpValue = value["ToolCalls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ToolCall item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_toolCalls.push_back(item);
        }
        m_toolCallsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Message::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_contentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contents.begin(); itr != m_contents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_toolCallIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolCallId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolCallId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolCallsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolCalls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_toolCalls.begin(); itr != m_toolCalls.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Message::GetRole() const
{
    return m_role;
}

void Message::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool Message::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string Message::GetContent() const
{
    return m_content;
}

void Message::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool Message::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<Content> Message::GetContents() const
{
    return m_contents;
}

void Message::SetContents(const vector<Content>& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool Message::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}

string Message::GetToolCallId() const
{
    return m_toolCallId;
}

void Message::SetToolCallId(const string& _toolCallId)
{
    m_toolCallId = _toolCallId;
    m_toolCallIdHasBeenSet = true;
}

bool Message::ToolCallIdHasBeenSet() const
{
    return m_toolCallIdHasBeenSet;
}

vector<ToolCall> Message::GetToolCalls() const
{
    return m_toolCalls;
}

void Message::SetToolCalls(const vector<ToolCall>& _toolCalls)
{
    m_toolCalls = _toolCalls;
    m_toolCallsHasBeenSet = true;
}

bool Message::ToolCallsHasBeenSet() const
{
    return m_toolCallsHasBeenSet;
}

