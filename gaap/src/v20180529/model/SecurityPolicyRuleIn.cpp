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

#include <tencentcloud/gaap/v20180529/model/SecurityPolicyRuleIn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

SecurityPolicyRuleIn::SecurityPolicyRuleIn() :
    m_sourceCidrHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_destPortRangeHasBeenSet(false)
{
}

CoreInternalOutcome SecurityPolicyRuleIn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceCidr") && !value["SourceCidr"].IsNull())
    {
        if (!value["SourceCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyRuleIn.SourceCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCidr = string(value["SourceCidr"].GetString());
        m_sourceCidrHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyRuleIn.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyRuleIn.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyRuleIn.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("DestPortRange") && !value["DestPortRange"].IsNull())
    {
        if (!value["DestPortRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyRuleIn.DestPortRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destPortRange = string(value["DestPortRange"].GetString());
        m_destPortRangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityPolicyRuleIn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_destPortRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestPortRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destPortRange.c_str(), allocator).Move(), allocator);
    }

}


string SecurityPolicyRuleIn::GetSourceCidr() const
{
    return m_sourceCidr;
}

void SecurityPolicyRuleIn::SetSourceCidr(const string& _sourceCidr)
{
    m_sourceCidr = _sourceCidr;
    m_sourceCidrHasBeenSet = true;
}

bool SecurityPolicyRuleIn::SourceCidrHasBeenSet() const
{
    return m_sourceCidrHasBeenSet;
}

string SecurityPolicyRuleIn::GetAction() const
{
    return m_action;
}

void SecurityPolicyRuleIn::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SecurityPolicyRuleIn::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string SecurityPolicyRuleIn::GetAliasName() const
{
    return m_aliasName;
}

void SecurityPolicyRuleIn::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool SecurityPolicyRuleIn::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

string SecurityPolicyRuleIn::GetProtocol() const
{
    return m_protocol;
}

void SecurityPolicyRuleIn::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SecurityPolicyRuleIn::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string SecurityPolicyRuleIn::GetDestPortRange() const
{
    return m_destPortRange;
}

void SecurityPolicyRuleIn::SetDestPortRange(const string& _destPortRange)
{
    m_destPortRange = _destPortRange;
    m_destPortRangeHasBeenSet = true;
}

bool SecurityPolicyRuleIn::DestPortRangeHasBeenSet() const
{
    return m_destPortRangeHasBeenSet;
}

