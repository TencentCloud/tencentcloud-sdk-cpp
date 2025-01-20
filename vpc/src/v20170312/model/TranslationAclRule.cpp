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

#include <tencentcloud/vpc/v20170312/model/TranslationAclRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

TranslationAclRule::TranslationAclRule() :
    m_protocolHasBeenSet(false),
    m_sourcePortHasBeenSet(false),
    m_sourceCidrHasBeenSet(false),
    m_destinationPortHasBeenSet(false),
    m_destinationCidrHasBeenSet(false),
    m_aclRuleIdHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome TranslationAclRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationAclRule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("SourcePort") && !value["SourcePort"].IsNull())
    {
        if (!value["SourcePort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationAclRule.SourcePort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourcePort = string(value["SourcePort"].GetString());
        m_sourcePortHasBeenSet = true;
    }

    if (value.HasMember("SourceCidr") && !value["SourceCidr"].IsNull())
    {
        if (!value["SourceCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationAclRule.SourceCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCidr = string(value["SourceCidr"].GetString());
        m_sourceCidrHasBeenSet = true;
    }

    if (value.HasMember("DestinationPort") && !value["DestinationPort"].IsNull())
    {
        if (!value["DestinationPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationAclRule.DestinationPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationPort = string(value["DestinationPort"].GetString());
        m_destinationPortHasBeenSet = true;
    }

    if (value.HasMember("DestinationCidr") && !value["DestinationCidr"].IsNull())
    {
        if (!value["DestinationCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationAclRule.DestinationCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCidr = string(value["DestinationCidr"].GetString());
        m_destinationCidrHasBeenSet = true;
    }

    if (value.HasMember("AclRuleId") && !value["AclRuleId"].IsNull())
    {
        if (!value["AclRuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationAclRule.AclRuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aclRuleId = value["AclRuleId"].GetUint64();
        m_aclRuleIdHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationAclRule.Action` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetUint64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationAclRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranslationAclRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_sourcePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourcePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourcePort.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationPort.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_aclRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aclRuleId, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string TranslationAclRule::GetProtocol() const
{
    return m_protocol;
}

void TranslationAclRule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool TranslationAclRule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string TranslationAclRule::GetSourcePort() const
{
    return m_sourcePort;
}

void TranslationAclRule::SetSourcePort(const string& _sourcePort)
{
    m_sourcePort = _sourcePort;
    m_sourcePortHasBeenSet = true;
}

bool TranslationAclRule::SourcePortHasBeenSet() const
{
    return m_sourcePortHasBeenSet;
}

string TranslationAclRule::GetSourceCidr() const
{
    return m_sourceCidr;
}

void TranslationAclRule::SetSourceCidr(const string& _sourceCidr)
{
    m_sourceCidr = _sourceCidr;
    m_sourceCidrHasBeenSet = true;
}

bool TranslationAclRule::SourceCidrHasBeenSet() const
{
    return m_sourceCidrHasBeenSet;
}

string TranslationAclRule::GetDestinationPort() const
{
    return m_destinationPort;
}

void TranslationAclRule::SetDestinationPort(const string& _destinationPort)
{
    m_destinationPort = _destinationPort;
    m_destinationPortHasBeenSet = true;
}

bool TranslationAclRule::DestinationPortHasBeenSet() const
{
    return m_destinationPortHasBeenSet;
}

string TranslationAclRule::GetDestinationCidr() const
{
    return m_destinationCidr;
}

void TranslationAclRule::SetDestinationCidr(const string& _destinationCidr)
{
    m_destinationCidr = _destinationCidr;
    m_destinationCidrHasBeenSet = true;
}

bool TranslationAclRule::DestinationCidrHasBeenSet() const
{
    return m_destinationCidrHasBeenSet;
}

uint64_t TranslationAclRule::GetAclRuleId() const
{
    return m_aclRuleId;
}

void TranslationAclRule::SetAclRuleId(const uint64_t& _aclRuleId)
{
    m_aclRuleId = _aclRuleId;
    m_aclRuleIdHasBeenSet = true;
}

bool TranslationAclRule::AclRuleIdHasBeenSet() const
{
    return m_aclRuleIdHasBeenSet;
}

uint64_t TranslationAclRule::GetAction() const
{
    return m_action;
}

void TranslationAclRule::SetAction(const uint64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool TranslationAclRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string TranslationAclRule::GetDescription() const
{
    return m_description;
}

void TranslationAclRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TranslationAclRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

