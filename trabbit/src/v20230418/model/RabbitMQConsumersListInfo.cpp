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

#include <tencentcloud/trabbit/v20230418/model/RabbitMQConsumersListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

RabbitMQConsumersListInfo::RabbitMQConsumersListInfo() :
    m_clientIpHasBeenSet(false),
    m_consumerTagHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQConsumersListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConsumersListInfo.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("ConsumerTag") && !value["ConsumerTag"].IsNull())
    {
        if (!value["ConsumerTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConsumersListInfo.ConsumerTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerTag = string(value["ConsumerTag"].GetString());
        m_consumerTagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQConsumersListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerTag.c_str(), allocator).Move(), allocator);
    }

}


string RabbitMQConsumersListInfo::GetClientIp() const
{
    return m_clientIp;
}

void RabbitMQConsumersListInfo::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool RabbitMQConsumersListInfo::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string RabbitMQConsumersListInfo::GetConsumerTag() const
{
    return m_consumerTag;
}

void RabbitMQConsumersListInfo::SetConsumerTag(const string& _consumerTag)
{
    m_consumerTag = _consumerTag;
    m_consumerTagHasBeenSet = true;
}

bool RabbitMQConsumersListInfo::ConsumerTagHasBeenSet() const
{
    return m_consumerTagHasBeenSet;
}

