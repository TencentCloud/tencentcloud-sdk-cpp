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

#include <tencentcloud/ckafka/v20190819/model/CreateThrottleRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreateThrottleRuleRequest::CreateThrottleRuleRequest() :
    m_instanceIdHasBeenSet(false),
    m_throttleTypeHasBeenSet(false),
    m_groupNameListHasBeenSet(false),
    m_consumeThrottleHasBeenSet(false),
    m_produceThrottleHasBeenSet(false),
    m_clientIdListHasBeenSet(false),
    m_userNameListHasBeenSet(false),
    m_topicNameListHasBeenSet(false)
{
}

string CreateThrottleRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_throttleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThrottleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_throttleType, allocator);
    }

    if (m_groupNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupNameList.begin(); itr != m_groupNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_consumeThrottleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeThrottle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_consumeThrottle, allocator);
    }

    if (m_produceThrottleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProduceThrottle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_produceThrottle, allocator);
    }

    if (m_clientIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clientIdList.begin(); itr != m_clientIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userNameList.begin(); itr != m_userNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_topicNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_topicNameList.begin(); itr != m_topicNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateThrottleRuleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateThrottleRuleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateThrottleRuleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t CreateThrottleRuleRequest::GetThrottleType() const
{
    return m_throttleType;
}

void CreateThrottleRuleRequest::SetThrottleType(const int64_t& _throttleType)
{
    m_throttleType = _throttleType;
    m_throttleTypeHasBeenSet = true;
}

bool CreateThrottleRuleRequest::ThrottleTypeHasBeenSet() const
{
    return m_throttleTypeHasBeenSet;
}

vector<string> CreateThrottleRuleRequest::GetGroupNameList() const
{
    return m_groupNameList;
}

void CreateThrottleRuleRequest::SetGroupNameList(const vector<string>& _groupNameList)
{
    m_groupNameList = _groupNameList;
    m_groupNameListHasBeenSet = true;
}

bool CreateThrottleRuleRequest::GroupNameListHasBeenSet() const
{
    return m_groupNameListHasBeenSet;
}

uint64_t CreateThrottleRuleRequest::GetConsumeThrottle() const
{
    return m_consumeThrottle;
}

void CreateThrottleRuleRequest::SetConsumeThrottle(const uint64_t& _consumeThrottle)
{
    m_consumeThrottle = _consumeThrottle;
    m_consumeThrottleHasBeenSet = true;
}

bool CreateThrottleRuleRequest::ConsumeThrottleHasBeenSet() const
{
    return m_consumeThrottleHasBeenSet;
}

uint64_t CreateThrottleRuleRequest::GetProduceThrottle() const
{
    return m_produceThrottle;
}

void CreateThrottleRuleRequest::SetProduceThrottle(const uint64_t& _produceThrottle)
{
    m_produceThrottle = _produceThrottle;
    m_produceThrottleHasBeenSet = true;
}

bool CreateThrottleRuleRequest::ProduceThrottleHasBeenSet() const
{
    return m_produceThrottleHasBeenSet;
}

vector<string> CreateThrottleRuleRequest::GetClientIdList() const
{
    return m_clientIdList;
}

void CreateThrottleRuleRequest::SetClientIdList(const vector<string>& _clientIdList)
{
    m_clientIdList = _clientIdList;
    m_clientIdListHasBeenSet = true;
}

bool CreateThrottleRuleRequest::ClientIdListHasBeenSet() const
{
    return m_clientIdListHasBeenSet;
}

vector<string> CreateThrottleRuleRequest::GetUserNameList() const
{
    return m_userNameList;
}

void CreateThrottleRuleRequest::SetUserNameList(const vector<string>& _userNameList)
{
    m_userNameList = _userNameList;
    m_userNameListHasBeenSet = true;
}

bool CreateThrottleRuleRequest::UserNameListHasBeenSet() const
{
    return m_userNameListHasBeenSet;
}

vector<string> CreateThrottleRuleRequest::GetTopicNameList() const
{
    return m_topicNameList;
}

void CreateThrottleRuleRequest::SetTopicNameList(const vector<string>& _topicNameList)
{
    m_topicNameList = _topicNameList;
    m_topicNameListHasBeenSet = true;
}

bool CreateThrottleRuleRequest::TopicNameListHasBeenSet() const
{
    return m_topicNameListHasBeenSet;
}


