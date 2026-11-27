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

#include <tencentcloud/antiddos/v20250903/model/ConnectionProtectionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

ConnectionProtectionConfig::ConnectionProtectionConfig() :
    m_sourceIPNewConnectionLimitHasBeenSet(false),
    m_sourceIPConcurrentConnectionLimitHasBeenSet(false),
    m_destinationIPNewConnectionLimitHasBeenSet(false),
    m_destinationIPConcurrentConnectionLimitHasBeenSet(false),
    m_abnormalConnectionLimitHasBeenSet(false)
{
}

CoreInternalOutcome ConnectionProtectionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceIPNewConnectionLimit") && !value["SourceIPNewConnectionLimit"].IsNull())
    {
        if (!value["SourceIPNewConnectionLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionProtectionConfig.SourceIPNewConnectionLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIPNewConnectionLimit = value["SourceIPNewConnectionLimit"].GetUint64();
        m_sourceIPNewConnectionLimitHasBeenSet = true;
    }

    if (value.HasMember("SourceIPConcurrentConnectionLimit") && !value["SourceIPConcurrentConnectionLimit"].IsNull())
    {
        if (!value["SourceIPConcurrentConnectionLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionProtectionConfig.SourceIPConcurrentConnectionLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIPConcurrentConnectionLimit = value["SourceIPConcurrentConnectionLimit"].GetUint64();
        m_sourceIPConcurrentConnectionLimitHasBeenSet = true;
    }

    if (value.HasMember("DestinationIPNewConnectionLimit") && !value["DestinationIPNewConnectionLimit"].IsNull())
    {
        if (!value["DestinationIPNewConnectionLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionProtectionConfig.DestinationIPNewConnectionLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_destinationIPNewConnectionLimit = value["DestinationIPNewConnectionLimit"].GetUint64();
        m_destinationIPNewConnectionLimitHasBeenSet = true;
    }

    if (value.HasMember("DestinationIPConcurrentConnectionLimit") && !value["DestinationIPConcurrentConnectionLimit"].IsNull())
    {
        if (!value["DestinationIPConcurrentConnectionLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionProtectionConfig.DestinationIPConcurrentConnectionLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_destinationIPConcurrentConnectionLimit = value["DestinationIPConcurrentConnectionLimit"].GetUint64();
        m_destinationIPConcurrentConnectionLimitHasBeenSet = true;
    }

    if (value.HasMember("AbnormalConnectionLimit") && !value["AbnormalConnectionLimit"].IsNull())
    {
        if (!value["AbnormalConnectionLimit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionProtectionConfig.AbnormalConnectionLimit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_abnormalConnectionLimit.Deserialize(value["AbnormalConnectionLimit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_abnormalConnectionLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConnectionProtectionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceIPNewConnectionLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIPNewConnectionLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceIPNewConnectionLimit, allocator);
    }

    if (m_sourceIPConcurrentConnectionLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIPConcurrentConnectionLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceIPConcurrentConnectionLimit, allocator);
    }

    if (m_destinationIPNewConnectionLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationIPNewConnectionLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destinationIPNewConnectionLimit, allocator);
    }

    if (m_destinationIPConcurrentConnectionLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationIPConcurrentConnectionLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destinationIPConcurrentConnectionLimit, allocator);
    }

    if (m_abnormalConnectionLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalConnectionLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_abnormalConnectionLimit.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t ConnectionProtectionConfig::GetSourceIPNewConnectionLimit() const
{
    return m_sourceIPNewConnectionLimit;
}

void ConnectionProtectionConfig::SetSourceIPNewConnectionLimit(const uint64_t& _sourceIPNewConnectionLimit)
{
    m_sourceIPNewConnectionLimit = _sourceIPNewConnectionLimit;
    m_sourceIPNewConnectionLimitHasBeenSet = true;
}

bool ConnectionProtectionConfig::SourceIPNewConnectionLimitHasBeenSet() const
{
    return m_sourceIPNewConnectionLimitHasBeenSet;
}

uint64_t ConnectionProtectionConfig::GetSourceIPConcurrentConnectionLimit() const
{
    return m_sourceIPConcurrentConnectionLimit;
}

void ConnectionProtectionConfig::SetSourceIPConcurrentConnectionLimit(const uint64_t& _sourceIPConcurrentConnectionLimit)
{
    m_sourceIPConcurrentConnectionLimit = _sourceIPConcurrentConnectionLimit;
    m_sourceIPConcurrentConnectionLimitHasBeenSet = true;
}

bool ConnectionProtectionConfig::SourceIPConcurrentConnectionLimitHasBeenSet() const
{
    return m_sourceIPConcurrentConnectionLimitHasBeenSet;
}

uint64_t ConnectionProtectionConfig::GetDestinationIPNewConnectionLimit() const
{
    return m_destinationIPNewConnectionLimit;
}

void ConnectionProtectionConfig::SetDestinationIPNewConnectionLimit(const uint64_t& _destinationIPNewConnectionLimit)
{
    m_destinationIPNewConnectionLimit = _destinationIPNewConnectionLimit;
    m_destinationIPNewConnectionLimitHasBeenSet = true;
}

bool ConnectionProtectionConfig::DestinationIPNewConnectionLimitHasBeenSet() const
{
    return m_destinationIPNewConnectionLimitHasBeenSet;
}

uint64_t ConnectionProtectionConfig::GetDestinationIPConcurrentConnectionLimit() const
{
    return m_destinationIPConcurrentConnectionLimit;
}

void ConnectionProtectionConfig::SetDestinationIPConcurrentConnectionLimit(const uint64_t& _destinationIPConcurrentConnectionLimit)
{
    m_destinationIPConcurrentConnectionLimit = _destinationIPConcurrentConnectionLimit;
    m_destinationIPConcurrentConnectionLimitHasBeenSet = true;
}

bool ConnectionProtectionConfig::DestinationIPConcurrentConnectionLimitHasBeenSet() const
{
    return m_destinationIPConcurrentConnectionLimitHasBeenSet;
}

AbnormalConnectionLimit ConnectionProtectionConfig::GetAbnormalConnectionLimit() const
{
    return m_abnormalConnectionLimit;
}

void ConnectionProtectionConfig::SetAbnormalConnectionLimit(const AbnormalConnectionLimit& _abnormalConnectionLimit)
{
    m_abnormalConnectionLimit = _abnormalConnectionLimit;
    m_abnormalConnectionLimitHasBeenSet = true;
}

bool ConnectionProtectionConfig::AbnormalConnectionLimitHasBeenSet() const
{
    return m_abnormalConnectionLimitHasBeenSet;
}

