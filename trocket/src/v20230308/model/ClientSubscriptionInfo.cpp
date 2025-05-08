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

#include <tencentcloud/trocket/v20230308/model/ClientSubscriptionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ClientSubscriptionInfo::ClientSubscriptionInfo() :
    m_clientIdHasBeenSet(false),
    m_clientAddrHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_subStringHasBeenSet(false),
    m_expressionTypeHasBeenSet(false)
{
}

CoreInternalOutcome ClientSubscriptionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSubscriptionInfo.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("ClientAddr") && !value["ClientAddr"].IsNull())
    {
        if (!value["ClientAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSubscriptionInfo.ClientAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientAddr = string(value["ClientAddr"].GetString());
        m_clientAddrHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSubscriptionInfo.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("SubString") && !value["SubString"].IsNull())
    {
        if (!value["SubString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSubscriptionInfo.SubString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subString = string(value["SubString"].GetString());
        m_subStringHasBeenSet = true;
    }

    if (value.HasMember("ExpressionType") && !value["ExpressionType"].IsNull())
    {
        if (!value["ExpressionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientSubscriptionInfo.ExpressionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expressionType = string(value["ExpressionType"].GetString());
        m_expressionTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientSubscriptionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_subStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subString.c_str(), allocator).Move(), allocator);
    }

    if (m_expressionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpressionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expressionType.c_str(), allocator).Move(), allocator);
    }

}


string ClientSubscriptionInfo::GetClientId() const
{
    return m_clientId;
}

void ClientSubscriptionInfo::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool ClientSubscriptionInfo::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string ClientSubscriptionInfo::GetClientAddr() const
{
    return m_clientAddr;
}

void ClientSubscriptionInfo::SetClientAddr(const string& _clientAddr)
{
    m_clientAddr = _clientAddr;
    m_clientAddrHasBeenSet = true;
}

bool ClientSubscriptionInfo::ClientAddrHasBeenSet() const
{
    return m_clientAddrHasBeenSet;
}

string ClientSubscriptionInfo::GetTopic() const
{
    return m_topic;
}

void ClientSubscriptionInfo::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool ClientSubscriptionInfo::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string ClientSubscriptionInfo::GetSubString() const
{
    return m_subString;
}

void ClientSubscriptionInfo::SetSubString(const string& _subString)
{
    m_subString = _subString;
    m_subStringHasBeenSet = true;
}

bool ClientSubscriptionInfo::SubStringHasBeenSet() const
{
    return m_subStringHasBeenSet;
}

string ClientSubscriptionInfo::GetExpressionType() const
{
    return m_expressionType;
}

void ClientSubscriptionInfo::SetExpressionType(const string& _expressionType)
{
    m_expressionType = _expressionType;
    m_expressionTypeHasBeenSet = true;
}

bool ClientSubscriptionInfo::ExpressionTypeHasBeenSet() const
{
    return m_expressionTypeHasBeenSet;
}

