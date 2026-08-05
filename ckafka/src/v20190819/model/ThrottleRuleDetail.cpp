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

#include <tencentcloud/ckafka/v20190819/model/ThrottleRuleDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ThrottleRuleDetail::ThrottleRuleDetail() :
    m_throttleRuleIdHasBeenSet(false),
    m_throttleTypeHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_consumeThrottleHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_topicIdHasBeenSet(false)
{
}

CoreInternalOutcome ThrottleRuleDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ThrottleRuleId") && !value["ThrottleRuleId"].IsNull())
    {
        if (!value["ThrottleRuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ThrottleRuleDetail.ThrottleRuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_throttleRuleId = value["ThrottleRuleId"].GetUint64();
        m_throttleRuleIdHasBeenSet = true;
    }

    if (value.HasMember("ThrottleType") && !value["ThrottleType"].IsNull())
    {
        if (!value["ThrottleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ThrottleRuleDetail.ThrottleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_throttleType = value["ThrottleType"].GetInt64();
        m_throttleTypeHasBeenSet = true;
    }

    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThrottleRuleDetail.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThrottleRuleDetail.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("ConsumeThrottle") && !value["ConsumeThrottle"].IsNull())
    {
        if (!value["ConsumeThrottle"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ThrottleRuleDetail.ConsumeThrottle` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_consumeThrottle = value["ConsumeThrottle"].GetUint64();
        m_consumeThrottleHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThrottleRuleDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThrottleRuleDetail.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThrottleRuleDetail.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ThrottleRuleDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_throttleRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThrottleRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_throttleRuleId, allocator);
    }

    if (m_throttleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThrottleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_throttleType, allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_consumeThrottleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeThrottle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumeThrottle, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ThrottleRuleDetail::GetThrottleRuleId() const
{
    return m_throttleRuleId;
}

void ThrottleRuleDetail::SetThrottleRuleId(const uint64_t& _throttleRuleId)
{
    m_throttleRuleId = _throttleRuleId;
    m_throttleRuleIdHasBeenSet = true;
}

bool ThrottleRuleDetail::ThrottleRuleIdHasBeenSet() const
{
    return m_throttleRuleIdHasBeenSet;
}

int64_t ThrottleRuleDetail::GetThrottleType() const
{
    return m_throttleType;
}

void ThrottleRuleDetail::SetThrottleType(const int64_t& _throttleType)
{
    m_throttleType = _throttleType;
    m_throttleTypeHasBeenSet = true;
}

bool ThrottleRuleDetail::ThrottleTypeHasBeenSet() const
{
    return m_throttleTypeHasBeenSet;
}

string ThrottleRuleDetail::GetClientId() const
{
    return m_clientId;
}

void ThrottleRuleDetail::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool ThrottleRuleDetail::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string ThrottleRuleDetail::GetUserName() const
{
    return m_userName;
}

void ThrottleRuleDetail::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ThrottleRuleDetail::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

uint64_t ThrottleRuleDetail::GetConsumeThrottle() const
{
    return m_consumeThrottle;
}

void ThrottleRuleDetail::SetConsumeThrottle(const uint64_t& _consumeThrottle)
{
    m_consumeThrottle = _consumeThrottle;
    m_consumeThrottleHasBeenSet = true;
}

bool ThrottleRuleDetail::ConsumeThrottleHasBeenSet() const
{
    return m_consumeThrottleHasBeenSet;
}

string ThrottleRuleDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void ThrottleRuleDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ThrottleRuleDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ThrottleRuleDetail::GetTopicName() const
{
    return m_topicName;
}

void ThrottleRuleDetail::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ThrottleRuleDetail::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string ThrottleRuleDetail::GetTopicId() const
{
    return m_topicId;
}

void ThrottleRuleDetail::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ThrottleRuleDetail::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

