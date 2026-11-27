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

#include <tencentcloud/antiddos/v20250903/model/AbnormalConnectCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

AbnormalConnectCondition::AbnormalConnectCondition() :
    m_synRatioThresholdHasBeenSet(false),
    m_synCountThresholdHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_emptyConnectionHasBeenSet(false)
{
}

CoreInternalOutcome AbnormalConnectCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SynRatioThreshold") && !value["SynRatioThreshold"].IsNull())
    {
        if (!value["SynRatioThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalConnectCondition.SynRatioThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_synRatioThreshold = value["SynRatioThreshold"].GetUint64();
        m_synRatioThresholdHasBeenSet = true;
    }

    if (value.HasMember("SynCountThreshold") && !value["SynCountThreshold"].IsNull())
    {
        if (!value["SynCountThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalConnectCondition.SynCountThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_synCountThreshold = value["SynCountThreshold"].GetUint64();
        m_synCountThresholdHasBeenSet = true;
    }

    if (value.HasMember("ConnectTimeout") && !value["ConnectTimeout"].IsNull())
    {
        if (!value["ConnectTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalConnectCondition.ConnectTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connectTimeout = value["ConnectTimeout"].GetUint64();
        m_connectTimeoutHasBeenSet = true;
    }

    if (value.HasMember("EmptyConnection") && !value["EmptyConnection"].IsNull())
    {
        if (!value["EmptyConnection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalConnectCondition.EmptyConnection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emptyConnection = string(value["EmptyConnection"].GetString());
        m_emptyConnectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbnormalConnectCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_synRatioThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynRatioThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_synRatioThreshold, allocator);
    }

    if (m_synCountThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SynCountThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_synCountThreshold, allocator);
    }

    if (m_connectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectTimeout, allocator);
    }

    if (m_emptyConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmptyConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emptyConnection.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AbnormalConnectCondition::GetSynRatioThreshold() const
{
    return m_synRatioThreshold;
}

void AbnormalConnectCondition::SetSynRatioThreshold(const uint64_t& _synRatioThreshold)
{
    m_synRatioThreshold = _synRatioThreshold;
    m_synRatioThresholdHasBeenSet = true;
}

bool AbnormalConnectCondition::SynRatioThresholdHasBeenSet() const
{
    return m_synRatioThresholdHasBeenSet;
}

uint64_t AbnormalConnectCondition::GetSynCountThreshold() const
{
    return m_synCountThreshold;
}

void AbnormalConnectCondition::SetSynCountThreshold(const uint64_t& _synCountThreshold)
{
    m_synCountThreshold = _synCountThreshold;
    m_synCountThresholdHasBeenSet = true;
}

bool AbnormalConnectCondition::SynCountThresholdHasBeenSet() const
{
    return m_synCountThresholdHasBeenSet;
}

uint64_t AbnormalConnectCondition::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void AbnormalConnectCondition::SetConnectTimeout(const uint64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool AbnormalConnectCondition::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

string AbnormalConnectCondition::GetEmptyConnection() const
{
    return m_emptyConnection;
}

void AbnormalConnectCondition::SetEmptyConnection(const string& _emptyConnection)
{
    m_emptyConnection = _emptyConnection;
    m_emptyConnectionHasBeenSet = true;
}

bool AbnormalConnectCondition::EmptyConnectionHasBeenSet() const
{
    return m_emptyConnectionHasBeenSet;
}

