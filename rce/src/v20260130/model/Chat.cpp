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

#include <tencentcloud/rce/v20260130/model/Chat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Chat::Chat() :
    m_chatTextHasBeenSet(false),
    m_channelTypeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupAdministratorHasBeenSet(false)
{
}

CoreInternalOutcome Chat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChatText") && !value["ChatText"].IsNull())
    {
        if (!value["ChatText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Chat.ChatText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chatText = string(value["ChatText"].GetString());
        m_chatTextHasBeenSet = true;
    }

    if (value.HasMember("ChannelType") && !value["ChannelType"].IsNull())
    {
        if (!value["ChannelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Chat.ChannelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelType = string(value["ChannelType"].GetString());
        m_channelTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Chat.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Chat.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupAdministrator") && !value["GroupAdministrator"].IsNull())
    {
        if (!value["GroupAdministrator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Chat.GroupAdministrator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupAdministrator = string(value["GroupAdministrator"].GetString());
        m_groupAdministratorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Chat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chatTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChatText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chatText.c_str(), allocator).Move(), allocator);
    }

    if (m_channelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupAdministratorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupAdministrator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupAdministrator.c_str(), allocator).Move(), allocator);
    }

}


string Chat::GetChatText() const
{
    return m_chatText;
}

void Chat::SetChatText(const string& _chatText)
{
    m_chatText = _chatText;
    m_chatTextHasBeenSet = true;
}

bool Chat::ChatTextHasBeenSet() const
{
    return m_chatTextHasBeenSet;
}

string Chat::GetChannelType() const
{
    return m_channelType;
}

void Chat::SetChannelType(const string& _channelType)
{
    m_channelType = _channelType;
    m_channelTypeHasBeenSet = true;
}

bool Chat::ChannelTypeHasBeenSet() const
{
    return m_channelTypeHasBeenSet;
}

string Chat::GetGroupId() const
{
    return m_groupId;
}

void Chat::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool Chat::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string Chat::GetGroupName() const
{
    return m_groupName;
}

void Chat::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool Chat::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string Chat::GetGroupAdministrator() const
{
    return m_groupAdministrator;
}

void Chat::SetGroupAdministrator(const string& _groupAdministrator)
{
    m_groupAdministrator = _groupAdministrator;
    m_groupAdministratorHasBeenSet = true;
}

bool Chat::GroupAdministratorHasBeenSet() const
{
    return m_groupAdministratorHasBeenSet;
}

