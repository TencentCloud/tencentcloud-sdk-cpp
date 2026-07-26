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

#include <tencentcloud/adp/v20260520/model/TimerPushConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

TimerPushConfig::TimerPushConfig() :
    m_pushChannelHasBeenSet(false),
    m_pushTargetIdHasBeenSet(false),
    m_pushTargetTypeHasBeenSet(false),
    m_pushWebhookUrlHasBeenSet(false)
{
}

CoreInternalOutcome TimerPushConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PushChannel") && !value["PushChannel"].IsNull())
    {
        if (!value["PushChannel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerPushConfig.PushChannel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pushChannel = value["PushChannel"].GetInt64();
        m_pushChannelHasBeenSet = true;
    }

    if (value.HasMember("PushTargetId") && !value["PushTargetId"].IsNull())
    {
        if (!value["PushTargetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerPushConfig.PushTargetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushTargetId = string(value["PushTargetId"].GetString());
        m_pushTargetIdHasBeenSet = true;
    }

    if (value.HasMember("PushTargetType") && !value["PushTargetType"].IsNull())
    {
        if (!value["PushTargetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerPushConfig.PushTargetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pushTargetType = value["PushTargetType"].GetInt64();
        m_pushTargetTypeHasBeenSet = true;
    }

    if (value.HasMember("PushWebhookUrl") && !value["PushWebhookUrl"].IsNull())
    {
        if (!value["PushWebhookUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerPushConfig.PushWebhookUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushWebhookUrl = string(value["PushWebhookUrl"].GetString());
        m_pushWebhookUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimerPushConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pushChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pushChannel, allocator);
    }

    if (m_pushTargetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushTargetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushTargetId.c_str(), allocator).Move(), allocator);
    }

    if (m_pushTargetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushTargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pushTargetType, allocator);
    }

    if (m_pushWebhookUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushWebhookUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushWebhookUrl.c_str(), allocator).Move(), allocator);
    }

}


int64_t TimerPushConfig::GetPushChannel() const
{
    return m_pushChannel;
}

void TimerPushConfig::SetPushChannel(const int64_t& _pushChannel)
{
    m_pushChannel = _pushChannel;
    m_pushChannelHasBeenSet = true;
}

bool TimerPushConfig::PushChannelHasBeenSet() const
{
    return m_pushChannelHasBeenSet;
}

string TimerPushConfig::GetPushTargetId() const
{
    return m_pushTargetId;
}

void TimerPushConfig::SetPushTargetId(const string& _pushTargetId)
{
    m_pushTargetId = _pushTargetId;
    m_pushTargetIdHasBeenSet = true;
}

bool TimerPushConfig::PushTargetIdHasBeenSet() const
{
    return m_pushTargetIdHasBeenSet;
}

int64_t TimerPushConfig::GetPushTargetType() const
{
    return m_pushTargetType;
}

void TimerPushConfig::SetPushTargetType(const int64_t& _pushTargetType)
{
    m_pushTargetType = _pushTargetType;
    m_pushTargetTypeHasBeenSet = true;
}

bool TimerPushConfig::PushTargetTypeHasBeenSet() const
{
    return m_pushTargetTypeHasBeenSet;
}

string TimerPushConfig::GetPushWebhookUrl() const
{
    return m_pushWebhookUrl;
}

void TimerPushConfig::SetPushWebhookUrl(const string& _pushWebhookUrl)
{
    m_pushWebhookUrl = _pushWebhookUrl;
    m_pushWebhookUrlHasBeenSet = true;
}

bool TimerPushConfig::PushWebhookUrlHasBeenSet() const
{
    return m_pushWebhookUrlHasBeenSet;
}

