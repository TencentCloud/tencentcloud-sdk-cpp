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

#include <tencentcloud/waf/v20180125/model/SSEClientMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

SSEClientMessage::SSEClientMessage() :
    m_roleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

CoreInternalOutcome SSEClientMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSEClientMessage.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSEClientMessage.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SSEClientMessage.ContentType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = value["ContentType"].GetInt64();
        m_contentTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SSEClientMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentType, allocator);
    }

}


string SSEClientMessage::GetRole() const
{
    return m_role;
}

void SSEClientMessage::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool SSEClientMessage::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string SSEClientMessage::GetContent() const
{
    return m_content;
}

void SSEClientMessage::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool SSEClientMessage::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t SSEClientMessage::GetContentType() const
{
    return m_contentType;
}

void SSEClientMessage::SetContentType(const int64_t& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool SSEClientMessage::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

