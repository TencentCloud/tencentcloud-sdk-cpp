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

#include <tencentcloud/lkeap/v20240522/model/Delta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

Delta::Delta() :
    m_roleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_reasoningContentHasBeenSet(false)
{
}

CoreInternalOutcome Delta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Delta.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Delta.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ReasoningContent") && !value["ReasoningContent"].IsNull())
    {
        if (!value["ReasoningContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Delta.ReasoningContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reasoningContent = string(value["ReasoningContent"].GetString());
        m_reasoningContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Delta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_reasoningContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasoningContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reasoningContent.c_str(), allocator).Move(), allocator);
    }

}


string Delta::GetRole() const
{
    return m_role;
}

void Delta::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool Delta::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string Delta::GetContent() const
{
    return m_content;
}

void Delta::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool Delta::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string Delta::GetReasoningContent() const
{
    return m_reasoningContent;
}

void Delta::SetReasoningContent(const string& _reasoningContent)
{
    m_reasoningContent = _reasoningContent;
    m_reasoningContentHasBeenSet = true;
}

bool Delta::ReasoningContentHasBeenSet() const
{
    return m_reasoningContentHasBeenSet;
}

