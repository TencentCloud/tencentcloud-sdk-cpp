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

#include <tencentcloud/tdmq/v20200217/model/RabbitMQVHostBaseQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RabbitMQVHostBaseQuota::RabbitMQVHostBaseQuota() :
    m_maxConnectionPerVhostHasBeenSet(false),
    m_maxExchangePerVhostHasBeenSet(false),
    m_maxQueuePerVhostHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQVHostBaseQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxConnectionPerVhost") && !value["MaxConnectionPerVhost"].IsNull())
    {
        if (!value["MaxConnectionPerVhost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVHostBaseQuota.MaxConnectionPerVhost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConnectionPerVhost = value["MaxConnectionPerVhost"].GetInt64();
        m_maxConnectionPerVhostHasBeenSet = true;
    }

    if (value.HasMember("MaxExchangePerVhost") && !value["MaxExchangePerVhost"].IsNull())
    {
        if (!value["MaxExchangePerVhost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVHostBaseQuota.MaxExchangePerVhost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxExchangePerVhost = value["MaxExchangePerVhost"].GetInt64();
        m_maxExchangePerVhostHasBeenSet = true;
    }

    if (value.HasMember("MaxQueuePerVhost") && !value["MaxQueuePerVhost"].IsNull())
    {
        if (!value["MaxQueuePerVhost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVHostBaseQuota.MaxQueuePerVhost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQueuePerVhost = value["MaxQueuePerVhost"].GetInt64();
        m_maxQueuePerVhostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQVHostBaseQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxConnectionPerVhostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConnectionPerVhost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConnectionPerVhost, allocator);
    }

    if (m_maxExchangePerVhostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxExchangePerVhost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxExchangePerVhost, allocator);
    }

    if (m_maxQueuePerVhostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQueuePerVhost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQueuePerVhost, allocator);
    }

}


int64_t RabbitMQVHostBaseQuota::GetMaxConnectionPerVhost() const
{
    return m_maxConnectionPerVhost;
}

void RabbitMQVHostBaseQuota::SetMaxConnectionPerVhost(const int64_t& _maxConnectionPerVhost)
{
    m_maxConnectionPerVhost = _maxConnectionPerVhost;
    m_maxConnectionPerVhostHasBeenSet = true;
}

bool RabbitMQVHostBaseQuota::MaxConnectionPerVhostHasBeenSet() const
{
    return m_maxConnectionPerVhostHasBeenSet;
}

int64_t RabbitMQVHostBaseQuota::GetMaxExchangePerVhost() const
{
    return m_maxExchangePerVhost;
}

void RabbitMQVHostBaseQuota::SetMaxExchangePerVhost(const int64_t& _maxExchangePerVhost)
{
    m_maxExchangePerVhost = _maxExchangePerVhost;
    m_maxExchangePerVhostHasBeenSet = true;
}

bool RabbitMQVHostBaseQuota::MaxExchangePerVhostHasBeenSet() const
{
    return m_maxExchangePerVhostHasBeenSet;
}

int64_t RabbitMQVHostBaseQuota::GetMaxQueuePerVhost() const
{
    return m_maxQueuePerVhost;
}

void RabbitMQVHostBaseQuota::SetMaxQueuePerVhost(const int64_t& _maxQueuePerVhost)
{
    m_maxQueuePerVhost = _maxQueuePerVhost;
    m_maxQueuePerVhostHasBeenSet = true;
}

bool RabbitMQVHostBaseQuota::MaxQueuePerVhostHasBeenSet() const
{
    return m_maxQueuePerVhostHasBeenSet;
}

