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

#include <tencentcloud/ga2/v20250115/model/AclEntries.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

AclEntries::AclEntries() :
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_sourceCidrBlockHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome AclEntries::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclEntries.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclEntries.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("SourceCidrBlock") && !value["SourceCidrBlock"].IsNull())
    {
        if (!value["SourceCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclEntries.SourceCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCidrBlock = string(value["SourceCidrBlock"].GetString());
        m_sourceCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclEntries.Policy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policy = string(value["Policy"].GetString());
        m_policyHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclEntries.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AclEntries::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policy.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string AclEntries::GetProtocol() const
{
    return m_protocol;
}

void AclEntries::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool AclEntries::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string AclEntries::GetPort() const
{
    return m_port;
}

void AclEntries::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AclEntries::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string AclEntries::GetSourceCidrBlock() const
{
    return m_sourceCidrBlock;
}

void AclEntries::SetSourceCidrBlock(const string& _sourceCidrBlock)
{
    m_sourceCidrBlock = _sourceCidrBlock;
    m_sourceCidrBlockHasBeenSet = true;
}

bool AclEntries::SourceCidrBlockHasBeenSet() const
{
    return m_sourceCidrBlockHasBeenSet;
}

string AclEntries::GetPolicy() const
{
    return m_policy;
}

void AclEntries::SetPolicy(const string& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool AclEntries::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

string AclEntries::GetDescription() const
{
    return m_description;
}

void AclEntries::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AclEntries::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

