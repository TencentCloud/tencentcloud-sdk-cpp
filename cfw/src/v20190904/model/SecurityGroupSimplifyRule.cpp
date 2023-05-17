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

#include <tencentcloud/cfw/v20190904/model/SecurityGroupSimplifyRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

SecurityGroupSimplifyRule::SecurityGroupSimplifyRule() :
    m_sourceContentHasBeenSet(false),
    m_destContentHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ruleUuidHasBeenSet(false),
    m_sequenceHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupSimplifyRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceContent") && !value["SourceContent"].IsNull())
    {
        if (!value["SourceContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupSimplifyRule.SourceContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContent = string(value["SourceContent"].GetString());
        m_sourceContentHasBeenSet = true;
    }

    if (value.HasMember("DestContent") && !value["DestContent"].IsNull())
    {
        if (!value["DestContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupSimplifyRule.DestContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destContent = string(value["DestContent"].GetString());
        m_destContentHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupSimplifyRule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupSimplifyRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RuleUuid") && !value["RuleUuid"].IsNull())
    {
        if (!value["RuleUuid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupSimplifyRule.RuleUuid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleUuid = value["RuleUuid"].GetInt64();
        m_ruleUuidHasBeenSet = true;
    }

    if (value.HasMember("Sequence") && !value["Sequence"].IsNull())
    {
        if (!value["Sequence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupSimplifyRule.Sequence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sequence = value["Sequence"].GetInt64();
        m_sequenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupSimplifyRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceContent.c_str(), allocator).Move(), allocator);
    }

    if (m_destContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destContent.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleUuid, allocator);
    }

    if (m_sequenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sequence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sequence, allocator);
    }

}


string SecurityGroupSimplifyRule::GetSourceContent() const
{
    return m_sourceContent;
}

void SecurityGroupSimplifyRule::SetSourceContent(const string& _sourceContent)
{
    m_sourceContent = _sourceContent;
    m_sourceContentHasBeenSet = true;
}

bool SecurityGroupSimplifyRule::SourceContentHasBeenSet() const
{
    return m_sourceContentHasBeenSet;
}

string SecurityGroupSimplifyRule::GetDestContent() const
{
    return m_destContent;
}

void SecurityGroupSimplifyRule::SetDestContent(const string& _destContent)
{
    m_destContent = _destContent;
    m_destContentHasBeenSet = true;
}

bool SecurityGroupSimplifyRule::DestContentHasBeenSet() const
{
    return m_destContentHasBeenSet;
}

string SecurityGroupSimplifyRule::GetProtocol() const
{
    return m_protocol;
}

void SecurityGroupSimplifyRule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SecurityGroupSimplifyRule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string SecurityGroupSimplifyRule::GetDescription() const
{
    return m_description;
}

void SecurityGroupSimplifyRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SecurityGroupSimplifyRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t SecurityGroupSimplifyRule::GetRuleUuid() const
{
    return m_ruleUuid;
}

void SecurityGroupSimplifyRule::SetRuleUuid(const int64_t& _ruleUuid)
{
    m_ruleUuid = _ruleUuid;
    m_ruleUuidHasBeenSet = true;
}

bool SecurityGroupSimplifyRule::RuleUuidHasBeenSet() const
{
    return m_ruleUuidHasBeenSet;
}

int64_t SecurityGroupSimplifyRule::GetSequence() const
{
    return m_sequence;
}

void SecurityGroupSimplifyRule::SetSequence(const int64_t& _sequence)
{
    m_sequence = _sequence;
    m_sequenceHasBeenSet = true;
}

bool SecurityGroupSimplifyRule::SequenceHasBeenSet() const
{
    return m_sequenceHasBeenSet;
}

