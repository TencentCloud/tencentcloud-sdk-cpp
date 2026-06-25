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

#include <tencentcloud/cngw/v20230418/model/AIGWTopConsumersItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWTopConsumersItem::AIGWTopConsumersItem() :
    m_consumerIdHasBeenSet(false),
    m_consumerNameHasBeenSet(false),
    m_totalTokensHasBeenSet(false)
{
}

CoreInternalOutcome AIGWTopConsumersItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsumerId") && !value["ConsumerId"].IsNull())
    {
        if (!value["ConsumerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWTopConsumersItem.ConsumerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerId = string(value["ConsumerId"].GetString());
        m_consumerIdHasBeenSet = true;
    }

    if (value.HasMember("ConsumerName") && !value["ConsumerName"].IsNull())
    {
        if (!value["ConsumerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWTopConsumersItem.ConsumerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerName = string(value["ConsumerName"].GetString());
        m_consumerNameHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWTopConsumersItem.TotalTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetInt64();
        m_totalTokensHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWTopConsumersItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consumerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerId.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokens, allocator);
    }

}


string AIGWTopConsumersItem::GetConsumerId() const
{
    return m_consumerId;
}

void AIGWTopConsumersItem::SetConsumerId(const string& _consumerId)
{
    m_consumerId = _consumerId;
    m_consumerIdHasBeenSet = true;
}

bool AIGWTopConsumersItem::ConsumerIdHasBeenSet() const
{
    return m_consumerIdHasBeenSet;
}

string AIGWTopConsumersItem::GetConsumerName() const
{
    return m_consumerName;
}

void AIGWTopConsumersItem::SetConsumerName(const string& _consumerName)
{
    m_consumerName = _consumerName;
    m_consumerNameHasBeenSet = true;
}

bool AIGWTopConsumersItem::ConsumerNameHasBeenSet() const
{
    return m_consumerNameHasBeenSet;
}

int64_t AIGWTopConsumersItem::GetTotalTokens() const
{
    return m_totalTokens;
}

void AIGWTopConsumersItem::SetTotalTokens(const int64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool AIGWTopConsumersItem::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

