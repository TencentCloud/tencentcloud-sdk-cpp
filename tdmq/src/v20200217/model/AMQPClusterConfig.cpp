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

#include <tencentcloud/tdmq/v20200217/model/AMQPClusterConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

AMQPClusterConfig::AMQPClusterConfig() :
    m_maxTpsPerVHostHasBeenSet(false),
    m_maxConnNumPerVHostHasBeenSet(false),
    m_maxVHostNumHasBeenSet(false),
    m_maxExchangeNumHasBeenSet(false),
    m_maxQueueNumHasBeenSet(false),
    m_maxRetentionTimeHasBeenSet(false),
    m_usedVHostNumHasBeenSet(false),
    m_usedExchangeNumHasBeenSet(false),
    m_usedQueueNumHasBeenSet(false)
{
}

CoreInternalOutcome AMQPClusterConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxTpsPerVHost") && !value["MaxTpsPerVHost"].IsNull())
    {
        if (!value["MaxTpsPerVHost"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterConfig.MaxTpsPerVHost` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTpsPerVHost = value["MaxTpsPerVHost"].GetUint64();
        m_maxTpsPerVHostHasBeenSet = true;
    }

    if (value.HasMember("MaxConnNumPerVHost") && !value["MaxConnNumPerVHost"].IsNull())
    {
        if (!value["MaxConnNumPerVHost"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterConfig.MaxConnNumPerVHost` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConnNumPerVHost = value["MaxConnNumPerVHost"].GetUint64();
        m_maxConnNumPerVHostHasBeenSet = true;
    }

    if (value.HasMember("MaxVHostNum") && !value["MaxVHostNum"].IsNull())
    {
        if (!value["MaxVHostNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterConfig.MaxVHostNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxVHostNum = value["MaxVHostNum"].GetUint64();
        m_maxVHostNumHasBeenSet = true;
    }

    if (value.HasMember("MaxExchangeNum") && !value["MaxExchangeNum"].IsNull())
    {
        if (!value["MaxExchangeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterConfig.MaxExchangeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxExchangeNum = value["MaxExchangeNum"].GetUint64();
        m_maxExchangeNumHasBeenSet = true;
    }

    if (value.HasMember("MaxQueueNum") && !value["MaxQueueNum"].IsNull())
    {
        if (!value["MaxQueueNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterConfig.MaxQueueNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQueueNum = value["MaxQueueNum"].GetUint64();
        m_maxQueueNumHasBeenSet = true;
    }

    if (value.HasMember("MaxRetentionTime") && !value["MaxRetentionTime"].IsNull())
    {
        if (!value["MaxRetentionTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterConfig.MaxRetentionTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetentionTime = value["MaxRetentionTime"].GetUint64();
        m_maxRetentionTimeHasBeenSet = true;
    }

    if (value.HasMember("UsedVHostNum") && !value["UsedVHostNum"].IsNull())
    {
        if (!value["UsedVHostNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterConfig.UsedVHostNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedVHostNum = value["UsedVHostNum"].GetUint64();
        m_usedVHostNumHasBeenSet = true;
    }

    if (value.HasMember("UsedExchangeNum") && !value["UsedExchangeNum"].IsNull())
    {
        if (!value["UsedExchangeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterConfig.UsedExchangeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedExchangeNum = value["UsedExchangeNum"].GetUint64();
        m_usedExchangeNumHasBeenSet = true;
    }

    if (value.HasMember("UsedQueueNum") && !value["UsedQueueNum"].IsNull())
    {
        if (!value["UsedQueueNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPClusterConfig.UsedQueueNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedQueueNum = value["UsedQueueNum"].GetUint64();
        m_usedQueueNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AMQPClusterConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxTpsPerVHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTpsPerVHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTpsPerVHost, allocator);
    }

    if (m_maxConnNumPerVHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConnNumPerVHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConnNumPerVHost, allocator);
    }

    if (m_maxVHostNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxVHostNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxVHostNum, allocator);
    }

    if (m_maxExchangeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxExchangeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxExchangeNum, allocator);
    }

    if (m_maxQueueNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQueueNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQueueNum, allocator);
    }

    if (m_maxRetentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetentionTime, allocator);
    }

    if (m_usedVHostNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedVHostNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedVHostNum, allocator);
    }

    if (m_usedExchangeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedExchangeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedExchangeNum, allocator);
    }

    if (m_usedQueueNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedQueueNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedQueueNum, allocator);
    }

}


uint64_t AMQPClusterConfig::GetMaxTpsPerVHost() const
{
    return m_maxTpsPerVHost;
}

void AMQPClusterConfig::SetMaxTpsPerVHost(const uint64_t& _maxTpsPerVHost)
{
    m_maxTpsPerVHost = _maxTpsPerVHost;
    m_maxTpsPerVHostHasBeenSet = true;
}

bool AMQPClusterConfig::MaxTpsPerVHostHasBeenSet() const
{
    return m_maxTpsPerVHostHasBeenSet;
}

uint64_t AMQPClusterConfig::GetMaxConnNumPerVHost() const
{
    return m_maxConnNumPerVHost;
}

void AMQPClusterConfig::SetMaxConnNumPerVHost(const uint64_t& _maxConnNumPerVHost)
{
    m_maxConnNumPerVHost = _maxConnNumPerVHost;
    m_maxConnNumPerVHostHasBeenSet = true;
}

bool AMQPClusterConfig::MaxConnNumPerVHostHasBeenSet() const
{
    return m_maxConnNumPerVHostHasBeenSet;
}

uint64_t AMQPClusterConfig::GetMaxVHostNum() const
{
    return m_maxVHostNum;
}

void AMQPClusterConfig::SetMaxVHostNum(const uint64_t& _maxVHostNum)
{
    m_maxVHostNum = _maxVHostNum;
    m_maxVHostNumHasBeenSet = true;
}

bool AMQPClusterConfig::MaxVHostNumHasBeenSet() const
{
    return m_maxVHostNumHasBeenSet;
}

uint64_t AMQPClusterConfig::GetMaxExchangeNum() const
{
    return m_maxExchangeNum;
}

void AMQPClusterConfig::SetMaxExchangeNum(const uint64_t& _maxExchangeNum)
{
    m_maxExchangeNum = _maxExchangeNum;
    m_maxExchangeNumHasBeenSet = true;
}

bool AMQPClusterConfig::MaxExchangeNumHasBeenSet() const
{
    return m_maxExchangeNumHasBeenSet;
}

uint64_t AMQPClusterConfig::GetMaxQueueNum() const
{
    return m_maxQueueNum;
}

void AMQPClusterConfig::SetMaxQueueNum(const uint64_t& _maxQueueNum)
{
    m_maxQueueNum = _maxQueueNum;
    m_maxQueueNumHasBeenSet = true;
}

bool AMQPClusterConfig::MaxQueueNumHasBeenSet() const
{
    return m_maxQueueNumHasBeenSet;
}

uint64_t AMQPClusterConfig::GetMaxRetentionTime() const
{
    return m_maxRetentionTime;
}

void AMQPClusterConfig::SetMaxRetentionTime(const uint64_t& _maxRetentionTime)
{
    m_maxRetentionTime = _maxRetentionTime;
    m_maxRetentionTimeHasBeenSet = true;
}

bool AMQPClusterConfig::MaxRetentionTimeHasBeenSet() const
{
    return m_maxRetentionTimeHasBeenSet;
}

uint64_t AMQPClusterConfig::GetUsedVHostNum() const
{
    return m_usedVHostNum;
}

void AMQPClusterConfig::SetUsedVHostNum(const uint64_t& _usedVHostNum)
{
    m_usedVHostNum = _usedVHostNum;
    m_usedVHostNumHasBeenSet = true;
}

bool AMQPClusterConfig::UsedVHostNumHasBeenSet() const
{
    return m_usedVHostNumHasBeenSet;
}

uint64_t AMQPClusterConfig::GetUsedExchangeNum() const
{
    return m_usedExchangeNum;
}

void AMQPClusterConfig::SetUsedExchangeNum(const uint64_t& _usedExchangeNum)
{
    m_usedExchangeNum = _usedExchangeNum;
    m_usedExchangeNumHasBeenSet = true;
}

bool AMQPClusterConfig::UsedExchangeNumHasBeenSet() const
{
    return m_usedExchangeNumHasBeenSet;
}

uint64_t AMQPClusterConfig::GetUsedQueueNum() const
{
    return m_usedQueueNum;
}

void AMQPClusterConfig::SetUsedQueueNum(const uint64_t& _usedQueueNum)
{
    m_usedQueueNum = _usedQueueNum;
    m_usedQueueNumHasBeenSet = true;
}

bool AMQPClusterConfig::UsedQueueNumHasBeenSet() const
{
    return m_usedQueueNumHasBeenSet;
}

