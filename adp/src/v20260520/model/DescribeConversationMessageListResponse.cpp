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

#include <tencentcloud/adp/v20260520/model/DescribeConversationMessageListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeConversationMessageListResponse::DescribeConversationMessageListResponse() :
    m_firstRecordIdHasBeenSet(false),
    m_hasMoreAfterHasBeenSet(false),
    m_hasMoreBeforeHasBeenSet(false),
    m_lastRecordIdHasBeenSet(false),
    m_messageListHasBeenSet(false),
    m_messagesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConversationMessageListResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("FirstRecordId") && !rsp["FirstRecordId"].IsNull())
    {
        if (!rsp["FirstRecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirstRecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstRecordId = string(rsp["FirstRecordId"].GetString());
        m_firstRecordIdHasBeenSet = true;
    }

    if (rsp.HasMember("HasMoreAfter") && !rsp["HasMoreAfter"].IsNull())
    {
        if (!rsp["HasMoreAfter"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HasMoreAfter` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasMoreAfter = rsp["HasMoreAfter"].GetBool();
        m_hasMoreAfterHasBeenSet = true;
    }

    if (rsp.HasMember("HasMoreBefore") && !rsp["HasMoreBefore"].IsNull())
    {
        if (!rsp["HasMoreBefore"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HasMoreBefore` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasMoreBefore = rsp["HasMoreBefore"].GetBool();
        m_hasMoreBeforeHasBeenSet = true;
    }

    if (rsp.HasMember("LastRecordId") && !rsp["LastRecordId"].IsNull())
    {
        if (!rsp["LastRecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastRecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRecordId = string(rsp["LastRecordId"].GetString());
        m_lastRecordIdHasBeenSet = true;
    }

    if (rsp.HasMember("MessageList") && !rsp["MessageList"].IsNull())
    {
        if (!rsp["MessageList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MessageList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MessageList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationMessage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_messageList.push_back(item);
        }
        m_messageListHasBeenSet = true;
    }

    if (rsp.HasMember("Messages") && !rsp["Messages"].IsNull())
    {
        if (!rsp["Messages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Messages` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Messages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationMessage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_messages.push_back(item);
        }
        m_messagesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeConversationMessageListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_firstRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstRecordId.c_str(), allocator).Move(), allocator);
    }

    if (m_hasMoreAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasMoreAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasMoreAfter, allocator);
    }

    if (m_hasMoreBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasMoreBefore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasMoreBefore, allocator);
    }

    if (m_lastRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRecordId.c_str(), allocator).Move(), allocator);
    }

    if (m_messageListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_messageList.begin(); itr != m_messageList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_messagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Messages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_messages.begin(); itr != m_messages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeConversationMessageListResponse::GetFirstRecordId() const
{
    return m_firstRecordId;
}

bool DescribeConversationMessageListResponse::FirstRecordIdHasBeenSet() const
{
    return m_firstRecordIdHasBeenSet;
}

bool DescribeConversationMessageListResponse::GetHasMoreAfter() const
{
    return m_hasMoreAfter;
}

bool DescribeConversationMessageListResponse::HasMoreAfterHasBeenSet() const
{
    return m_hasMoreAfterHasBeenSet;
}

bool DescribeConversationMessageListResponse::GetHasMoreBefore() const
{
    return m_hasMoreBefore;
}

bool DescribeConversationMessageListResponse::HasMoreBeforeHasBeenSet() const
{
    return m_hasMoreBeforeHasBeenSet;
}

string DescribeConversationMessageListResponse::GetLastRecordId() const
{
    return m_lastRecordId;
}

bool DescribeConversationMessageListResponse::LastRecordIdHasBeenSet() const
{
    return m_lastRecordIdHasBeenSet;
}

vector<ConversationMessage> DescribeConversationMessageListResponse::GetMessageList() const
{
    return m_messageList;
}

bool DescribeConversationMessageListResponse::MessageListHasBeenSet() const
{
    return m_messageListHasBeenSet;
}

vector<ConversationMessage> DescribeConversationMessageListResponse::GetMessages() const
{
    return m_messages;
}

bool DescribeConversationMessageListResponse::MessagesHasBeenSet() const
{
    return m_messagesHasBeenSet;
}


