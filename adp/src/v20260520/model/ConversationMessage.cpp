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

#include <tencentcloud/adp/v20260520/model/ConversationMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationMessage::ConversationMessage() :
    m_conversationIdHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_contentListHasBeenSet(false),
    m_contentsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome ConversationMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConversationId") && !value["ConversationId"].IsNull())
    {
        if (!value["ConversationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessage.ConversationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conversationId = string(value["ConversationId"].GetString());
        m_conversationIdHasBeenSet = true;
    }

    if (value.HasMember("Icon") && !value["Icon"].IsNull())
    {
        if (!value["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessage.Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(value["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (value.HasMember("MessageId") && !value["MessageId"].IsNull())
    {
        if (!value["MessageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessage.MessageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageId = string(value["MessageId"].GetString());
        m_messageIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessage.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessage.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessage.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessage.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessage.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessage.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("ContentList") && !value["ContentList"].IsNull())
    {
        if (!value["ContentList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationMessage.ContentList` is not array type"));

        const rapidjson::Value &tmpValue = value["ContentList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationContent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_contentList.push_back(item);
        }
        m_contentListHasBeenSet = true;
    }

    if (value.HasMember("Contents") && !value["Contents"].IsNull())
    {
        if (!value["Contents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationMessage.Contents` is not array type"));

        const rapidjson::Value &tmpValue = value["Contents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationContent item;
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

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessage.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_conversationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conversationId.c_str(), allocator).Move(), allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_messageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_contentListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contentList.begin(); itr != m_contentList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string ConversationMessage::GetConversationId() const
{
    return m_conversationId;
}

void ConversationMessage::SetConversationId(const string& _conversationId)
{
    m_conversationId = _conversationId;
    m_conversationIdHasBeenSet = true;
}

bool ConversationMessage::ConversationIdHasBeenSet() const
{
    return m_conversationIdHasBeenSet;
}

string ConversationMessage::GetIcon() const
{
    return m_icon;
}

void ConversationMessage::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool ConversationMessage::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

string ConversationMessage::GetMessageId() const
{
    return m_messageId;
}

void ConversationMessage::SetMessageId(const string& _messageId)
{
    m_messageId = _messageId;
    m_messageIdHasBeenSet = true;
}

bool ConversationMessage::MessageIdHasBeenSet() const
{
    return m_messageIdHasBeenSet;
}

string ConversationMessage::GetName() const
{
    return m_name;
}

void ConversationMessage::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConversationMessage::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ConversationMessage::GetRecordId() const
{
    return m_recordId;
}

void ConversationMessage::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool ConversationMessage::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string ConversationMessage::GetRole() const
{
    return m_role;
}

void ConversationMessage::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool ConversationMessage::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string ConversationMessage::GetStatus() const
{
    return m_status;
}

void ConversationMessage::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ConversationMessage::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ConversationMessage::GetStatusDesc() const
{
    return m_statusDesc;
}

void ConversationMessage::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool ConversationMessage::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string ConversationMessage::GetTitle() const
{
    return m_title;
}

void ConversationMessage::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ConversationMessage::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

vector<ConversationContent> ConversationMessage::GetContentList() const
{
    return m_contentList;
}

void ConversationMessage::SetContentList(const vector<ConversationContent>& _contentList)
{
    m_contentList = _contentList;
    m_contentListHasBeenSet = true;
}

bool ConversationMessage::ContentListHasBeenSet() const
{
    return m_contentListHasBeenSet;
}

vector<ConversationContent> ConversationMessage::GetContents() const
{
    return m_contents;
}

void ConversationMessage::SetContents(const vector<ConversationContent>& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool ConversationMessage::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}

string ConversationMessage::GetType() const
{
    return m_type;
}

void ConversationMessage::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ConversationMessage::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

