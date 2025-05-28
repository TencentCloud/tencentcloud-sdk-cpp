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

#include <tencentcloud/trabbit/v20230418/model/RabbitMQClusterSpecInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

RabbitMQClusterSpecInfo::RabbitMQClusterSpecInfo() :
    m_specNameHasBeenSet(false),
    m_maxTpsHasBeenSet(false),
    m_maxQueueNumHasBeenSet(false),
    m_maxExchangeNumHasBeenSet(false),
    m_maxVhostNumHasBeenSet(false),
    m_maxConnNumHasBeenSet(false),
    m_maxUserNumHasBeenSet(false),
    m_maxBandWidthHasBeenSet(false),
    m_publicNetworkTpsHasBeenSet(false),
    m_featuresHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQClusterSpecInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("MaxTps") && !value["MaxTps"].IsNull())
    {
        if (!value["MaxTps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.MaxTps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTps = value["MaxTps"].GetUint64();
        m_maxTpsHasBeenSet = true;
    }

    if (value.HasMember("MaxQueueNum") && !value["MaxQueueNum"].IsNull())
    {
        if (!value["MaxQueueNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.MaxQueueNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQueueNum = value["MaxQueueNum"].GetUint64();
        m_maxQueueNumHasBeenSet = true;
    }

    if (value.HasMember("MaxExchangeNum") && !value["MaxExchangeNum"].IsNull())
    {
        if (!value["MaxExchangeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.MaxExchangeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxExchangeNum = value["MaxExchangeNum"].GetUint64();
        m_maxExchangeNumHasBeenSet = true;
    }

    if (value.HasMember("MaxVhostNum") && !value["MaxVhostNum"].IsNull())
    {
        if (!value["MaxVhostNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.MaxVhostNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxVhostNum = value["MaxVhostNum"].GetUint64();
        m_maxVhostNumHasBeenSet = true;
    }

    if (value.HasMember("MaxConnNum") && !value["MaxConnNum"].IsNull())
    {
        if (!value["MaxConnNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.MaxConnNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConnNum = value["MaxConnNum"].GetUint64();
        m_maxConnNumHasBeenSet = true;
    }

    if (value.HasMember("MaxUserNum") && !value["MaxUserNum"].IsNull())
    {
        if (!value["MaxUserNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.MaxUserNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxUserNum = value["MaxUserNum"].GetUint64();
        m_maxUserNumHasBeenSet = true;
    }

    if (value.HasMember("MaxBandWidth") && !value["MaxBandWidth"].IsNull())
    {
        if (!value["MaxBandWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.MaxBandWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandWidth = value["MaxBandWidth"].GetUint64();
        m_maxBandWidthHasBeenSet = true;
    }

    if (value.HasMember("PublicNetworkTps") && !value["PublicNetworkTps"].IsNull())
    {
        if (!value["PublicNetworkTps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.PublicNetworkTps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_publicNetworkTps = value["PublicNetworkTps"].GetUint64();
        m_publicNetworkTpsHasBeenSet = true;
    }

    if (value.HasMember("Features") && !value["Features"].IsNull())
    {
        if (!value["Features"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterSpecInfo.Features` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_features = string(value["Features"].GetString());
        m_featuresHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQClusterSpecInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxTpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTps, allocator);
    }

    if (m_maxQueueNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQueueNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQueueNum, allocator);
    }

    if (m_maxExchangeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxExchangeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxExchangeNum, allocator);
    }

    if (m_maxVhostNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxVhostNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxVhostNum, allocator);
    }

    if (m_maxConnNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConnNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConnNum, allocator);
    }

    if (m_maxUserNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUserNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxUserNum, allocator);
    }

    if (m_maxBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandWidth, allocator);
    }

    if (m_publicNetworkTpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetworkTps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicNetworkTps, allocator);
    }

    if (m_featuresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Features";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_features.c_str(), allocator).Move(), allocator);
    }

}


string RabbitMQClusterSpecInfo::GetSpecName() const
{
    return m_specName;
}

void RabbitMQClusterSpecInfo::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

uint64_t RabbitMQClusterSpecInfo::GetMaxTps() const
{
    return m_maxTps;
}

void RabbitMQClusterSpecInfo::SetMaxTps(const uint64_t& _maxTps)
{
    m_maxTps = _maxTps;
    m_maxTpsHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::MaxTpsHasBeenSet() const
{
    return m_maxTpsHasBeenSet;
}

uint64_t RabbitMQClusterSpecInfo::GetMaxQueueNum() const
{
    return m_maxQueueNum;
}

void RabbitMQClusterSpecInfo::SetMaxQueueNum(const uint64_t& _maxQueueNum)
{
    m_maxQueueNum = _maxQueueNum;
    m_maxQueueNumHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::MaxQueueNumHasBeenSet() const
{
    return m_maxQueueNumHasBeenSet;
}

uint64_t RabbitMQClusterSpecInfo::GetMaxExchangeNum() const
{
    return m_maxExchangeNum;
}

void RabbitMQClusterSpecInfo::SetMaxExchangeNum(const uint64_t& _maxExchangeNum)
{
    m_maxExchangeNum = _maxExchangeNum;
    m_maxExchangeNumHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::MaxExchangeNumHasBeenSet() const
{
    return m_maxExchangeNumHasBeenSet;
}

uint64_t RabbitMQClusterSpecInfo::GetMaxVhostNum() const
{
    return m_maxVhostNum;
}

void RabbitMQClusterSpecInfo::SetMaxVhostNum(const uint64_t& _maxVhostNum)
{
    m_maxVhostNum = _maxVhostNum;
    m_maxVhostNumHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::MaxVhostNumHasBeenSet() const
{
    return m_maxVhostNumHasBeenSet;
}

uint64_t RabbitMQClusterSpecInfo::GetMaxConnNum() const
{
    return m_maxConnNum;
}

void RabbitMQClusterSpecInfo::SetMaxConnNum(const uint64_t& _maxConnNum)
{
    m_maxConnNum = _maxConnNum;
    m_maxConnNumHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::MaxConnNumHasBeenSet() const
{
    return m_maxConnNumHasBeenSet;
}

uint64_t RabbitMQClusterSpecInfo::GetMaxUserNum() const
{
    return m_maxUserNum;
}

void RabbitMQClusterSpecInfo::SetMaxUserNum(const uint64_t& _maxUserNum)
{
    m_maxUserNum = _maxUserNum;
    m_maxUserNumHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::MaxUserNumHasBeenSet() const
{
    return m_maxUserNumHasBeenSet;
}

uint64_t RabbitMQClusterSpecInfo::GetMaxBandWidth() const
{
    return m_maxBandWidth;
}

void RabbitMQClusterSpecInfo::SetMaxBandWidth(const uint64_t& _maxBandWidth)
{
    m_maxBandWidth = _maxBandWidth;
    m_maxBandWidthHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::MaxBandWidthHasBeenSet() const
{
    return m_maxBandWidthHasBeenSet;
}

uint64_t RabbitMQClusterSpecInfo::GetPublicNetworkTps() const
{
    return m_publicNetworkTps;
}

void RabbitMQClusterSpecInfo::SetPublicNetworkTps(const uint64_t& _publicNetworkTps)
{
    m_publicNetworkTps = _publicNetworkTps;
    m_publicNetworkTpsHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::PublicNetworkTpsHasBeenSet() const
{
    return m_publicNetworkTpsHasBeenSet;
}

string RabbitMQClusterSpecInfo::GetFeatures() const
{
    return m_features;
}

void RabbitMQClusterSpecInfo::SetFeatures(const string& _features)
{
    m_features = _features;
    m_featuresHasBeenSet = true;
}

bool RabbitMQClusterSpecInfo::FeaturesHasBeenSet() const
{
    return m_featuresHasBeenSet;
}

