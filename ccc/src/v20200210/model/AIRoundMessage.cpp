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

#include <tencentcloud/ccc/v20200210/model/AIRoundMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AIRoundMessage::AIRoundMessage() :
    m_timestampHasBeenSet(false),
    m_userReplyHasBeenSet(false),
    m_aISpeakHasBeenSet(false)
{
}

CoreInternalOutcome AIRoundMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIRoundMessage.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("UserReply") && !value["UserReply"].IsNull())
    {
        if (!value["UserReply"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIRoundMessage.UserReply` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userReply.Deserialize(value["UserReply"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userReplyHasBeenSet = true;
    }

    if (value.HasMember("AISpeak") && !value["AISpeak"].IsNull())
    {
        if (!value["AISpeak"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIRoundMessage.AISpeak` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aISpeak.Deserialize(value["AISpeak"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aISpeakHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIRoundMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_userReplyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserReply";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userReply.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aISpeakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AISpeak";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aISpeak.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t AIRoundMessage::GetTimestamp() const
{
    return m_timestamp;
}

void AIRoundMessage::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool AIRoundMessage::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

UserReplyEvent AIRoundMessage::GetUserReply() const
{
    return m_userReply;
}

void AIRoundMessage::SetUserReply(const UserReplyEvent& _userReply)
{
    m_userReply = _userReply;
    m_userReplyHasBeenSet = true;
}

bool AIRoundMessage::UserReplyHasBeenSet() const
{
    return m_userReplyHasBeenSet;
}

AISpeakEvent AIRoundMessage::GetAISpeak() const
{
    return m_aISpeak;
}

void AIRoundMessage::SetAISpeak(const AISpeakEvent& _aISpeak)
{
    m_aISpeak = _aISpeak;
    m_aISpeakHasBeenSet = true;
}

bool AIRoundMessage::AISpeakHasBeenSet() const
{
    return m_aISpeakHasBeenSet;
}

