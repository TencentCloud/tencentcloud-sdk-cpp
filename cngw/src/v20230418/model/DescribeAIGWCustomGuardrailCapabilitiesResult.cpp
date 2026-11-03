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

#include <tencentcloud/cngw/v20230418/model/DescribeAIGWCustomGuardrailCapabilitiesResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

DescribeAIGWCustomGuardrailCapabilitiesResult::DescribeAIGWCustomGuardrailCapabilitiesResult() :
    m_minGatewayVersionHasBeenSet(false),
    m_supportedResourceTypesHasBeenSet(false),
    m_supportedProtocolsHasBeenSet(false),
    m_supportedDirectionsHasBeenSet(false),
    m_supportsStreamingHasBeenSet(false),
    m_supportsFieldMappingHasBeenSet(false),
    m_defaultBlockMessageHasBeenSet(false),
    m_maxBlockMessageLengthHasBeenSet(false),
    m_limitsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAIGWCustomGuardrailCapabilitiesResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinGatewayVersion") && !value["MinGatewayVersion"].IsNull())
    {
        if (!value["MinGatewayVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAIGWCustomGuardrailCapabilitiesResult.MinGatewayVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minGatewayVersion = string(value["MinGatewayVersion"].GetString());
        m_minGatewayVersionHasBeenSet = true;
    }

    if (value.HasMember("SupportedResourceTypes") && !value["SupportedResourceTypes"].IsNull())
    {
        if (!value["SupportedResourceTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAIGWCustomGuardrailCapabilitiesResult.SupportedResourceTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedResourceTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedResourceTypes.push_back((*itr).GetString());
        }
        m_supportedResourceTypesHasBeenSet = true;
    }

    if (value.HasMember("SupportedProtocols") && !value["SupportedProtocols"].IsNull())
    {
        if (!value["SupportedProtocols"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAIGWCustomGuardrailCapabilitiesResult.SupportedProtocols` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedProtocols"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedProtocols.push_back((*itr).GetString());
        }
        m_supportedProtocolsHasBeenSet = true;
    }

    if (value.HasMember("SupportedDirections") && !value["SupportedDirections"].IsNull())
    {
        if (!value["SupportedDirections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAIGWCustomGuardrailCapabilitiesResult.SupportedDirections` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedDirections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedDirections.push_back((*itr).GetString());
        }
        m_supportedDirectionsHasBeenSet = true;
    }

    if (value.HasMember("SupportsStreaming") && !value["SupportsStreaming"].IsNull())
    {
        if (!value["SupportsStreaming"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAIGWCustomGuardrailCapabilitiesResult.SupportsStreaming` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportsStreaming = value["SupportsStreaming"].GetBool();
        m_supportsStreamingHasBeenSet = true;
    }

    if (value.HasMember("SupportsFieldMapping") && !value["SupportsFieldMapping"].IsNull())
    {
        if (!value["SupportsFieldMapping"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAIGWCustomGuardrailCapabilitiesResult.SupportsFieldMapping` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportsFieldMapping = value["SupportsFieldMapping"].GetBool();
        m_supportsFieldMappingHasBeenSet = true;
    }

    if (value.HasMember("DefaultBlockMessage") && !value["DefaultBlockMessage"].IsNull())
    {
        if (!value["DefaultBlockMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAIGWCustomGuardrailCapabilitiesResult.DefaultBlockMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultBlockMessage = string(value["DefaultBlockMessage"].GetString());
        m_defaultBlockMessageHasBeenSet = true;
    }

    if (value.HasMember("MaxBlockMessageLength") && !value["MaxBlockMessageLength"].IsNull())
    {
        if (!value["MaxBlockMessageLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAIGWCustomGuardrailCapabilitiesResult.MaxBlockMessageLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBlockMessageLength = value["MaxBlockMessageLength"].GetInt64();
        m_maxBlockMessageLengthHasBeenSet = true;
    }

    if (value.HasMember("Limits") && !value["Limits"].IsNull())
    {
        if (!value["Limits"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAIGWCustomGuardrailCapabilitiesResult.Limits` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_limits.Deserialize(value["Limits"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_limitsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAIGWCustomGuardrailCapabilitiesResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minGatewayVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinGatewayVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minGatewayVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_supportedResourceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedResourceTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportedResourceTypes.begin(); itr != m_supportedResourceTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_supportedProtocolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedProtocols";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportedProtocols.begin(); itr != m_supportedProtocols.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_supportedDirectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedDirections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportedDirections.begin(); itr != m_supportedDirections.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_supportsStreamingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportsStreaming";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportsStreaming, allocator);
    }

    if (m_supportsFieldMappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportsFieldMapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportsFieldMapping, allocator);
    }

    if (m_defaultBlockMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultBlockMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultBlockMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_maxBlockMessageLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBlockMessageLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBlockMessageLength, allocator);
    }

    if (m_limitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limits.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DescribeAIGWCustomGuardrailCapabilitiesResult::GetMinGatewayVersion() const
{
    return m_minGatewayVersion;
}

void DescribeAIGWCustomGuardrailCapabilitiesResult::SetMinGatewayVersion(const string& _minGatewayVersion)
{
    m_minGatewayVersion = _minGatewayVersion;
    m_minGatewayVersionHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailCapabilitiesResult::MinGatewayVersionHasBeenSet() const
{
    return m_minGatewayVersionHasBeenSet;
}

vector<string> DescribeAIGWCustomGuardrailCapabilitiesResult::GetSupportedResourceTypes() const
{
    return m_supportedResourceTypes;
}

void DescribeAIGWCustomGuardrailCapabilitiesResult::SetSupportedResourceTypes(const vector<string>& _supportedResourceTypes)
{
    m_supportedResourceTypes = _supportedResourceTypes;
    m_supportedResourceTypesHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailCapabilitiesResult::SupportedResourceTypesHasBeenSet() const
{
    return m_supportedResourceTypesHasBeenSet;
}

vector<string> DescribeAIGWCustomGuardrailCapabilitiesResult::GetSupportedProtocols() const
{
    return m_supportedProtocols;
}

void DescribeAIGWCustomGuardrailCapabilitiesResult::SetSupportedProtocols(const vector<string>& _supportedProtocols)
{
    m_supportedProtocols = _supportedProtocols;
    m_supportedProtocolsHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailCapabilitiesResult::SupportedProtocolsHasBeenSet() const
{
    return m_supportedProtocolsHasBeenSet;
}

vector<string> DescribeAIGWCustomGuardrailCapabilitiesResult::GetSupportedDirections() const
{
    return m_supportedDirections;
}

void DescribeAIGWCustomGuardrailCapabilitiesResult::SetSupportedDirections(const vector<string>& _supportedDirections)
{
    m_supportedDirections = _supportedDirections;
    m_supportedDirectionsHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailCapabilitiesResult::SupportedDirectionsHasBeenSet() const
{
    return m_supportedDirectionsHasBeenSet;
}

bool DescribeAIGWCustomGuardrailCapabilitiesResult::GetSupportsStreaming() const
{
    return m_supportsStreaming;
}

void DescribeAIGWCustomGuardrailCapabilitiesResult::SetSupportsStreaming(const bool& _supportsStreaming)
{
    m_supportsStreaming = _supportsStreaming;
    m_supportsStreamingHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailCapabilitiesResult::SupportsStreamingHasBeenSet() const
{
    return m_supportsStreamingHasBeenSet;
}

bool DescribeAIGWCustomGuardrailCapabilitiesResult::GetSupportsFieldMapping() const
{
    return m_supportsFieldMapping;
}

void DescribeAIGWCustomGuardrailCapabilitiesResult::SetSupportsFieldMapping(const bool& _supportsFieldMapping)
{
    m_supportsFieldMapping = _supportsFieldMapping;
    m_supportsFieldMappingHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailCapabilitiesResult::SupportsFieldMappingHasBeenSet() const
{
    return m_supportsFieldMappingHasBeenSet;
}

string DescribeAIGWCustomGuardrailCapabilitiesResult::GetDefaultBlockMessage() const
{
    return m_defaultBlockMessage;
}

void DescribeAIGWCustomGuardrailCapabilitiesResult::SetDefaultBlockMessage(const string& _defaultBlockMessage)
{
    m_defaultBlockMessage = _defaultBlockMessage;
    m_defaultBlockMessageHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailCapabilitiesResult::DefaultBlockMessageHasBeenSet() const
{
    return m_defaultBlockMessageHasBeenSet;
}

int64_t DescribeAIGWCustomGuardrailCapabilitiesResult::GetMaxBlockMessageLength() const
{
    return m_maxBlockMessageLength;
}

void DescribeAIGWCustomGuardrailCapabilitiesResult::SetMaxBlockMessageLength(const int64_t& _maxBlockMessageLength)
{
    m_maxBlockMessageLength = _maxBlockMessageLength;
    m_maxBlockMessageLengthHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailCapabilitiesResult::MaxBlockMessageLengthHasBeenSet() const
{
    return m_maxBlockMessageLengthHasBeenSet;
}

CustomGuardrailCapabilityLimits DescribeAIGWCustomGuardrailCapabilitiesResult::GetLimits() const
{
    return m_limits;
}

void DescribeAIGWCustomGuardrailCapabilitiesResult::SetLimits(const CustomGuardrailCapabilityLimits& _limits)
{
    m_limits = _limits;
    m_limitsHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailCapabilitiesResult::LimitsHasBeenSet() const
{
    return m_limitsHasBeenSet;
}

