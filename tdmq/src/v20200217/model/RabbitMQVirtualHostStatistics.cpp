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

#include <tencentcloud/tdmq/v20200217/model/RabbitMQVirtualHostStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RabbitMQVirtualHostStatistics::RabbitMQVirtualHostStatistics() :
    m_currentQueuesHasBeenSet(false),
    m_currentExchangesHasBeenSet(false),
    m_currentConnectionsHasBeenSet(false),
    m_currentChannelsHasBeenSet(false),
    m_currentUsersHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQVirtualHostStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CurrentQueues") && !value["CurrentQueues"].IsNull())
    {
        if (!value["CurrentQueues"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostStatistics.CurrentQueues` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentQueues = value["CurrentQueues"].GetInt64();
        m_currentQueuesHasBeenSet = true;
    }

    if (value.HasMember("CurrentExchanges") && !value["CurrentExchanges"].IsNull())
    {
        if (!value["CurrentExchanges"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostStatistics.CurrentExchanges` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentExchanges = value["CurrentExchanges"].GetInt64();
        m_currentExchangesHasBeenSet = true;
    }

    if (value.HasMember("CurrentConnections") && !value["CurrentConnections"].IsNull())
    {
        if (!value["CurrentConnections"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostStatistics.CurrentConnections` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentConnections = value["CurrentConnections"].GetInt64();
        m_currentConnectionsHasBeenSet = true;
    }

    if (value.HasMember("CurrentChannels") && !value["CurrentChannels"].IsNull())
    {
        if (!value["CurrentChannels"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostStatistics.CurrentChannels` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentChannels = value["CurrentChannels"].GetInt64();
        m_currentChannelsHasBeenSet = true;
    }

    if (value.HasMember("CurrentUsers") && !value["CurrentUsers"].IsNull())
    {
        if (!value["CurrentUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVirtualHostStatistics.CurrentUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentUsers = value["CurrentUsers"].GetInt64();
        m_currentUsersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQVirtualHostStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_currentQueuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentQueues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentQueues, allocator);
    }

    if (m_currentExchangesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentExchanges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentExchanges, allocator);
    }

    if (m_currentConnectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentConnections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentConnections, allocator);
    }

    if (m_currentChannelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentChannels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentChannels, allocator);
    }

    if (m_currentUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentUsers, allocator);
    }

}


int64_t RabbitMQVirtualHostStatistics::GetCurrentQueues() const
{
    return m_currentQueues;
}

void RabbitMQVirtualHostStatistics::SetCurrentQueues(const int64_t& _currentQueues)
{
    m_currentQueues = _currentQueues;
    m_currentQueuesHasBeenSet = true;
}

bool RabbitMQVirtualHostStatistics::CurrentQueuesHasBeenSet() const
{
    return m_currentQueuesHasBeenSet;
}

int64_t RabbitMQVirtualHostStatistics::GetCurrentExchanges() const
{
    return m_currentExchanges;
}

void RabbitMQVirtualHostStatistics::SetCurrentExchanges(const int64_t& _currentExchanges)
{
    m_currentExchanges = _currentExchanges;
    m_currentExchangesHasBeenSet = true;
}

bool RabbitMQVirtualHostStatistics::CurrentExchangesHasBeenSet() const
{
    return m_currentExchangesHasBeenSet;
}

int64_t RabbitMQVirtualHostStatistics::GetCurrentConnections() const
{
    return m_currentConnections;
}

void RabbitMQVirtualHostStatistics::SetCurrentConnections(const int64_t& _currentConnections)
{
    m_currentConnections = _currentConnections;
    m_currentConnectionsHasBeenSet = true;
}

bool RabbitMQVirtualHostStatistics::CurrentConnectionsHasBeenSet() const
{
    return m_currentConnectionsHasBeenSet;
}

int64_t RabbitMQVirtualHostStatistics::GetCurrentChannels() const
{
    return m_currentChannels;
}

void RabbitMQVirtualHostStatistics::SetCurrentChannels(const int64_t& _currentChannels)
{
    m_currentChannels = _currentChannels;
    m_currentChannelsHasBeenSet = true;
}

bool RabbitMQVirtualHostStatistics::CurrentChannelsHasBeenSet() const
{
    return m_currentChannelsHasBeenSet;
}

int64_t RabbitMQVirtualHostStatistics::GetCurrentUsers() const
{
    return m_currentUsers;
}

void RabbitMQVirtualHostStatistics::SetCurrentUsers(const int64_t& _currentUsers)
{
    m_currentUsers = _currentUsers;
    m_currentUsersHasBeenSet = true;
}

bool RabbitMQVirtualHostStatistics::CurrentUsersHasBeenSet() const
{
    return m_currentUsersHasBeenSet;
}

