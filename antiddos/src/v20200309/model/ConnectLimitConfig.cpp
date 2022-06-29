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

#include <tencentcloud/antiddos/v20200309/model/ConnectLimitConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

ConnectLimitConfig::ConnectLimitConfig() :
    m_sdNewLimitHasBeenSet(false),
    m_dstNewLimitHasBeenSet(false),
    m_sdConnLimitHasBeenSet(false),
    m_dstConnLimitHasBeenSet(false),
    m_badConnThresholdHasBeenSet(false),
    m_nullConnEnableHasBeenSet(false),
    m_connTimeoutHasBeenSet(false),
    m_synRateHasBeenSet(false),
    m_synLimitHasBeenSet(false)
{
}

CoreInternalOutcome ConnectLimitConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SdNewLimit") && !value["SdNewLimit"].IsNull())
    {
        if (!value["SdNewLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectLimitConfig.SdNewLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sdNewLimit = value["SdNewLimit"].GetUint64();
        m_sdNewLimitHasBeenSet = true;
    }

    if (value.HasMember("DstNewLimit") && !value["DstNewLimit"].IsNull())
    {
        if (!value["DstNewLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectLimitConfig.DstNewLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dstNewLimit = value["DstNewLimit"].GetUint64();
        m_dstNewLimitHasBeenSet = true;
    }

    if (value.HasMember("SdConnLimit") && !value["SdConnLimit"].IsNull())
    {
        if (!value["SdConnLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectLimitConfig.SdConnLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sdConnLimit = value["SdConnLimit"].GetUint64();
        m_sdConnLimitHasBeenSet = true;
    }

    if (value.HasMember("DstConnLimit") && !value["DstConnLimit"].IsNull())
    {
        if (!value["DstConnLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectLimitConfig.DstConnLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dstConnLimit = value["DstConnLimit"].GetUint64();
        m_dstConnLimitHasBeenSet = true;
    }

    if (value.HasMember("BadConnThreshold") && !value["BadConnThreshold"].IsNull())
    {
        if (!value["BadConnThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectLimitConfig.BadConnThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_badConnThreshold = value["BadConnThreshold"].GetUint64();
        m_badConnThresholdHasBeenSet = true;
    }

    if (value.HasMember("NullConnEnable") && !value["NullConnEnable"].IsNull())
    {
        if (!value["NullConnEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectLimitConfig.NullConnEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nullConnEnable = value["NullConnEnable"].GetUint64();
        m_nullConnEnableHasBeenSet = true;
    }

    if (value.HasMember("ConnTimeout") && !value["ConnTimeout"].IsNull())
    {
        if (!value["ConnTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectLimitConfig.ConnTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connTimeout = value["ConnTimeout"].GetUint64();
        m_connTimeoutHasBeenSet = true;
    }

    if (value.HasMember("SynRate") && !value["SynRate"].IsNull())
    {
        if (!value["SynRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectLimitConfig.SynRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_synRate = value["SynRate"].GetUint64();
        m_synRateHasBeenSet = true;
    }

    if (value.HasMember("SynLimit") && !value["SynLimit"].IsNull())
    {
        if (!value["SynLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectLimitConfig.SynLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_synLimit = value["SynLimit"].GetUint64();
        m_synLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConnectLimitConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sdNewLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdNewLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdNewLimit, allocator);
    }

    if (m_dstNewLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstNewLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstNewLimit, allocator);
    }

    if (m_sdConnLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdConnLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdConnLimit, allocator);
    }

    if (m_dstConnLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstConnLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstConnLimit, allocator);
    }

    if (m_badConnThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BadConnThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_badConnThreshold, allocator);
    }

    if (m_nullConnEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NullConnEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nullConnEnable, allocator);
    }

    if (m_connTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connTimeout, allocator);
    }

    if (m_synRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_synRate, allocator);
    }

    if (m_synLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_synLimit, allocator);
    }

}


uint64_t ConnectLimitConfig::GetSdNewLimit() const
{
    return m_sdNewLimit;
}

void ConnectLimitConfig::SetSdNewLimit(const uint64_t& _sdNewLimit)
{
    m_sdNewLimit = _sdNewLimit;
    m_sdNewLimitHasBeenSet = true;
}

bool ConnectLimitConfig::SdNewLimitHasBeenSet() const
{
    return m_sdNewLimitHasBeenSet;
}

uint64_t ConnectLimitConfig::GetDstNewLimit() const
{
    return m_dstNewLimit;
}

void ConnectLimitConfig::SetDstNewLimit(const uint64_t& _dstNewLimit)
{
    m_dstNewLimit = _dstNewLimit;
    m_dstNewLimitHasBeenSet = true;
}

bool ConnectLimitConfig::DstNewLimitHasBeenSet() const
{
    return m_dstNewLimitHasBeenSet;
}

uint64_t ConnectLimitConfig::GetSdConnLimit() const
{
    return m_sdConnLimit;
}

void ConnectLimitConfig::SetSdConnLimit(const uint64_t& _sdConnLimit)
{
    m_sdConnLimit = _sdConnLimit;
    m_sdConnLimitHasBeenSet = true;
}

bool ConnectLimitConfig::SdConnLimitHasBeenSet() const
{
    return m_sdConnLimitHasBeenSet;
}

uint64_t ConnectLimitConfig::GetDstConnLimit() const
{
    return m_dstConnLimit;
}

void ConnectLimitConfig::SetDstConnLimit(const uint64_t& _dstConnLimit)
{
    m_dstConnLimit = _dstConnLimit;
    m_dstConnLimitHasBeenSet = true;
}

bool ConnectLimitConfig::DstConnLimitHasBeenSet() const
{
    return m_dstConnLimitHasBeenSet;
}

uint64_t ConnectLimitConfig::GetBadConnThreshold() const
{
    return m_badConnThreshold;
}

void ConnectLimitConfig::SetBadConnThreshold(const uint64_t& _badConnThreshold)
{
    m_badConnThreshold = _badConnThreshold;
    m_badConnThresholdHasBeenSet = true;
}

bool ConnectLimitConfig::BadConnThresholdHasBeenSet() const
{
    return m_badConnThresholdHasBeenSet;
}

uint64_t ConnectLimitConfig::GetNullConnEnable() const
{
    return m_nullConnEnable;
}

void ConnectLimitConfig::SetNullConnEnable(const uint64_t& _nullConnEnable)
{
    m_nullConnEnable = _nullConnEnable;
    m_nullConnEnableHasBeenSet = true;
}

bool ConnectLimitConfig::NullConnEnableHasBeenSet() const
{
    return m_nullConnEnableHasBeenSet;
}

uint64_t ConnectLimitConfig::GetConnTimeout() const
{
    return m_connTimeout;
}

void ConnectLimitConfig::SetConnTimeout(const uint64_t& _connTimeout)
{
    m_connTimeout = _connTimeout;
    m_connTimeoutHasBeenSet = true;
}

bool ConnectLimitConfig::ConnTimeoutHasBeenSet() const
{
    return m_connTimeoutHasBeenSet;
}

uint64_t ConnectLimitConfig::GetSynRate() const
{
    return m_synRate;
}

void ConnectLimitConfig::SetSynRate(const uint64_t& _synRate)
{
    m_synRate = _synRate;
    m_synRateHasBeenSet = true;
}

bool ConnectLimitConfig::SynRateHasBeenSet() const
{
    return m_synRateHasBeenSet;
}

uint64_t ConnectLimitConfig::GetSynLimit() const
{
    return m_synLimit;
}

void ConnectLimitConfig::SetSynLimit(const uint64_t& _synLimit)
{
    m_synLimit = _synLimit;
    m_synLimitHasBeenSet = true;
}

bool ConnectLimitConfig::SynLimitHasBeenSet() const
{
    return m_synLimitHasBeenSet;
}

