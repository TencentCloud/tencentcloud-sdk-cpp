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

#include <tencentcloud/mqtt/v20240516/model/SharedSubscriptionClient.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

SharedSubscriptionClient::SharedSubscriptionClient() :
    m_clientIdHasBeenSet(false),
    m_sharedNameHasBeenSet(false),
    m_topicFilterHasBeenSet(false),
    m_onlineHasBeenSet(false)
{
}

CoreInternalOutcome SharedSubscriptionClient::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SharedSubscriptionClient.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("SharedName") && !value["SharedName"].IsNull())
    {
        if (!value["SharedName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SharedSubscriptionClient.SharedName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharedName = string(value["SharedName"].GetString());
        m_sharedNameHasBeenSet = true;
    }

    if (value.HasMember("TopicFilter") && !value["TopicFilter"].IsNull())
    {
        if (!value["TopicFilter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SharedSubscriptionClient.TopicFilter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicFilter = string(value["TopicFilter"].GetString());
        m_topicFilterHasBeenSet = true;
    }

    if (value.HasMember("Online") && !value["Online"].IsNull())
    {
        if (!value["Online"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SharedSubscriptionClient.Online` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_online = value["Online"].GetBool();
        m_onlineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SharedSubscriptionClient::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_sharedNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharedName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_onlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Online";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_online, allocator);
    }

}


string SharedSubscriptionClient::GetClientId() const
{
    return m_clientId;
}

void SharedSubscriptionClient::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool SharedSubscriptionClient::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string SharedSubscriptionClient::GetSharedName() const
{
    return m_sharedName;
}

void SharedSubscriptionClient::SetSharedName(const string& _sharedName)
{
    m_sharedName = _sharedName;
    m_sharedNameHasBeenSet = true;
}

bool SharedSubscriptionClient::SharedNameHasBeenSet() const
{
    return m_sharedNameHasBeenSet;
}

string SharedSubscriptionClient::GetTopicFilter() const
{
    return m_topicFilter;
}

void SharedSubscriptionClient::SetTopicFilter(const string& _topicFilter)
{
    m_topicFilter = _topicFilter;
    m_topicFilterHasBeenSet = true;
}

bool SharedSubscriptionClient::TopicFilterHasBeenSet() const
{
    return m_topicFilterHasBeenSet;
}

bool SharedSubscriptionClient::GetOnline() const
{
    return m_online;
}

void SharedSubscriptionClient::SetOnline(const bool& _online)
{
    m_online = _online;
    m_onlineHasBeenSet = true;
}

bool SharedSubscriptionClient::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}

