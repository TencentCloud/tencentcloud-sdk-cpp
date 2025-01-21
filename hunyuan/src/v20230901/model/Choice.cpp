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

#include <tencentcloud/hunyuan/v20230901/model/Choice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Choice::Choice() :
    m_finishReasonHasBeenSet(false),
    m_deltaHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_moderationLevelHasBeenSet(false)
{
}

CoreInternalOutcome Choice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FinishReason") && !value["FinishReason"].IsNull())
    {
        if (!value["FinishReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Choice.FinishReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishReason = string(value["FinishReason"].GetString());
        m_finishReasonHasBeenSet = true;
    }

    if (value.HasMember("Delta") && !value["Delta"].IsNull())
    {
        if (!value["Delta"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Choice.Delta` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_delta.Deserialize(value["Delta"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deltaHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Choice.Message` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_message.Deserialize(value["Message"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Choice.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("ModerationLevel") && !value["ModerationLevel"].IsNull())
    {
        if (!value["ModerationLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Choice.ModerationLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moderationLevel = string(value["ModerationLevel"].GetString());
        m_moderationLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Choice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_finishReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishReason.c_str(), allocator).Move(), allocator);
    }

    if (m_deltaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_delta.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_message.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_moderationLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModerationLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moderationLevel.c_str(), allocator).Move(), allocator);
    }

}


string Choice::GetFinishReason() const
{
    return m_finishReason;
}

void Choice::SetFinishReason(const string& _finishReason)
{
    m_finishReason = _finishReason;
    m_finishReasonHasBeenSet = true;
}

bool Choice::FinishReasonHasBeenSet() const
{
    return m_finishReasonHasBeenSet;
}

Delta Choice::GetDelta() const
{
    return m_delta;
}

void Choice::SetDelta(const Delta& _delta)
{
    m_delta = _delta;
    m_deltaHasBeenSet = true;
}

bool Choice::DeltaHasBeenSet() const
{
    return m_deltaHasBeenSet;
}

Message Choice::GetMessage() const
{
    return m_message;
}

void Choice::SetMessage(const Message& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool Choice::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t Choice::GetIndex() const
{
    return m_index;
}

void Choice::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool Choice::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string Choice::GetModerationLevel() const
{
    return m_moderationLevel;
}

void Choice::SetModerationLevel(const string& _moderationLevel)
{
    m_moderationLevel = _moderationLevel;
    m_moderationLevelHasBeenSet = true;
}

bool Choice::ModerationLevelHasBeenSet() const
{
    return m_moderationLevelHasBeenSet;
}

