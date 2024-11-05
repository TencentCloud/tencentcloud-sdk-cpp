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

#include <tencentcloud/hunyuan/v20230901/model/ThreadAdditionalMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

ThreadAdditionalMessage::ThreadAdditionalMessage() :
    m_roleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_attachmentsHasBeenSet(false)
{
}

CoreInternalOutcome ThreadAdditionalMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadAdditionalMessage.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadAdditionalMessage.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Attachments") && !value["Attachments"].IsNull())
    {
        if (!value["Attachments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ThreadAdditionalMessage.Attachments` is not array type"));

        const rapidjson::Value &tmpValue = value["Attachments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ThreadMessageAttachmentObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attachments.push_back(item);
        }
        m_attachmentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ThreadAdditionalMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_attachmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attachments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachments.begin(); itr != m_attachments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ThreadAdditionalMessage::GetRole() const
{
    return m_role;
}

void ThreadAdditionalMessage::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool ThreadAdditionalMessage::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string ThreadAdditionalMessage::GetContent() const
{
    return m_content;
}

void ThreadAdditionalMessage::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ThreadAdditionalMessage::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<ThreadMessageAttachmentObject> ThreadAdditionalMessage::GetAttachments() const
{
    return m_attachments;
}

void ThreadAdditionalMessage::SetAttachments(const vector<ThreadMessageAttachmentObject>& _attachments)
{
    m_attachments = _attachments;
    m_attachmentsHasBeenSet = true;
}

bool ThreadAdditionalMessage::AttachmentsHasBeenSet() const
{
    return m_attachmentsHasBeenSet;
}

