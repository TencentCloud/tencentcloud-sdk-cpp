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

#include <tencentcloud/tdai/v20250717/model/ChatBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

ChatBrief::ChatBrief() :
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_chatIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastStreamingIdHasBeenSet(false),
    m_lastStreamingTokenIdHasBeenSet(false)
{
}

CoreInternalOutcome ChatBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChatBrief.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatBrief.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatBrief.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatBrief.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ChatId") && !value["ChatId"].IsNull())
    {
        if (!value["ChatId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatBrief.ChatId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chatId = string(value["ChatId"].GetString());
        m_chatIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChatBrief.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatBrief.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatBrief.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LastStreamingId") && !value["LastStreamingId"].IsNull())
    {
        if (!value["LastStreamingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatBrief.LastStreamingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastStreamingId = string(value["LastStreamingId"].GetString());
        m_lastStreamingIdHasBeenSet = true;
    }

    if (value.HasMember("LastStreamingTokenId") && !value["LastStreamingTokenId"].IsNull())
    {
        if (!value["LastStreamingTokenId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChatBrief.LastStreamingTokenId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastStreamingTokenId = value["LastStreamingTokenId"].GetInt64();
        m_lastStreamingTokenIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChatBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_chatIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChatId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chatId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_lastStreamingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastStreamingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastStreamingId.c_str(), allocator).Move(), allocator);
    }

    if (m_lastStreamingTokenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastStreamingTokenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastStreamingTokenId, allocator);
    }

}


int64_t ChatBrief::GetAppId() const
{
    return m_appId;
}

void ChatBrief::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ChatBrief::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ChatBrief::GetUin() const
{
    return m_uin;
}

void ChatBrief::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ChatBrief::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string ChatBrief::GetOwnerUin() const
{
    return m_ownerUin;
}

void ChatBrief::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ChatBrief::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ChatBrief::GetInstanceId() const
{
    return m_instanceId;
}

void ChatBrief::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ChatBrief::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ChatBrief::GetChatId() const
{
    return m_chatId;
}

void ChatBrief::SetChatId(const string& _chatId)
{
    m_chatId = _chatId;
    m_chatIdHasBeenSet = true;
}

bool ChatBrief::ChatIdHasBeenSet() const
{
    return m_chatIdHasBeenSet;
}

int64_t ChatBrief::GetCreateTime() const
{
    return m_createTime;
}

void ChatBrief::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ChatBrief::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ChatBrief::GetTitle() const
{
    return m_title;
}

void ChatBrief::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ChatBrief::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string ChatBrief::GetStatus() const
{
    return m_status;
}

void ChatBrief::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ChatBrief::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ChatBrief::GetLastStreamingId() const
{
    return m_lastStreamingId;
}

void ChatBrief::SetLastStreamingId(const string& _lastStreamingId)
{
    m_lastStreamingId = _lastStreamingId;
    m_lastStreamingIdHasBeenSet = true;
}

bool ChatBrief::LastStreamingIdHasBeenSet() const
{
    return m_lastStreamingIdHasBeenSet;
}

int64_t ChatBrief::GetLastStreamingTokenId() const
{
    return m_lastStreamingTokenId;
}

void ChatBrief::SetLastStreamingTokenId(const int64_t& _lastStreamingTokenId)
{
    m_lastStreamingTokenId = _lastStreamingTokenId;
    m_lastStreamingTokenIdHasBeenSet = true;
}

bool ChatBrief::LastStreamingTokenIdHasBeenSet() const
{
    return m_lastStreamingTokenIdHasBeenSet;
}

