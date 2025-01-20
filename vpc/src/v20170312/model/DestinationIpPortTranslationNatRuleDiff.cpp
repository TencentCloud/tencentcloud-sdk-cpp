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

#include <tencentcloud/vpc/v20170312/model/DestinationIpPortTranslationNatRuleDiff.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DestinationIpPortTranslationNatRuleDiff::DestinationIpPortTranslationNatRuleDiff() :
    m_protocolHasBeenSet(false),
    m_originalPortHasBeenSet(false),
    m_originalIpHasBeenSet(false),
    m_translationPortHasBeenSet(false),
    m_translationIpHasBeenSet(false),
    m_oldProtocolHasBeenSet(false),
    m_oldOriginalPortHasBeenSet(false),
    m_oldOriginalIpHasBeenSet(false),
    m_oldTranslationPortHasBeenSet(false),
    m_oldTranslationIpHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome DestinationIpPortTranslationNatRuleDiff::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationIpPortTranslationNatRuleDiff.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("OriginalPort") && !value["OriginalPort"].IsNull())
    {
        if (!value["OriginalPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationIpPortTranslationNatRuleDiff.OriginalPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originalPort = value["OriginalPort"].GetInt64();
        m_originalPortHasBeenSet = true;
    }

    if (value.HasMember("OriginalIp") && !value["OriginalIp"].IsNull())
    {
        if (!value["OriginalIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationIpPortTranslationNatRuleDiff.OriginalIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalIp = string(value["OriginalIp"].GetString());
        m_originalIpHasBeenSet = true;
    }

    if (value.HasMember("TranslationPort") && !value["TranslationPort"].IsNull())
    {
        if (!value["TranslationPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationIpPortTranslationNatRuleDiff.TranslationPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_translationPort = value["TranslationPort"].GetInt64();
        m_translationPortHasBeenSet = true;
    }

    if (value.HasMember("TranslationIp") && !value["TranslationIp"].IsNull())
    {
        if (!value["TranslationIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationIpPortTranslationNatRuleDiff.TranslationIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translationIp = string(value["TranslationIp"].GetString());
        m_translationIpHasBeenSet = true;
    }

    if (value.HasMember("OldProtocol") && !value["OldProtocol"].IsNull())
    {
        if (!value["OldProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationIpPortTranslationNatRuleDiff.OldProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldProtocol = string(value["OldProtocol"].GetString());
        m_oldProtocolHasBeenSet = true;
    }

    if (value.HasMember("OldOriginalPort") && !value["OldOriginalPort"].IsNull())
    {
        if (!value["OldOriginalPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationIpPortTranslationNatRuleDiff.OldOriginalPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oldOriginalPort = value["OldOriginalPort"].GetInt64();
        m_oldOriginalPortHasBeenSet = true;
    }

    if (value.HasMember("OldOriginalIp") && !value["OldOriginalIp"].IsNull())
    {
        if (!value["OldOriginalIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationIpPortTranslationNatRuleDiff.OldOriginalIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldOriginalIp = string(value["OldOriginalIp"].GetString());
        m_oldOriginalIpHasBeenSet = true;
    }

    if (value.HasMember("OldTranslationPort") && !value["OldTranslationPort"].IsNull())
    {
        if (!value["OldTranslationPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationIpPortTranslationNatRuleDiff.OldTranslationPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oldTranslationPort = value["OldTranslationPort"].GetInt64();
        m_oldTranslationPortHasBeenSet = true;
    }

    if (value.HasMember("OldTranslationIp") && !value["OldTranslationIp"].IsNull())
    {
        if (!value["OldTranslationIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationIpPortTranslationNatRuleDiff.OldTranslationIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldTranslationIp = string(value["OldTranslationIp"].GetString());
        m_oldTranslationIpHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationIpPortTranslationNatRuleDiff.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DestinationIpPortTranslationNatRuleDiff::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_originalPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPort, allocator);
    }

    if (m_originalIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalIp.c_str(), allocator).Move(), allocator);
    }

    if (m_translationPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_translationPort, allocator);
    }

    if (m_translationIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translationIp.c_str(), allocator).Move(), allocator);
    }

    if (m_oldProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_oldOriginalPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldOriginalPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oldOriginalPort, allocator);
    }

    if (m_oldOriginalIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldOriginalIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldOriginalIp.c_str(), allocator).Move(), allocator);
    }

    if (m_oldTranslationPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldTranslationPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oldTranslationPort, allocator);
    }

    if (m_oldTranslationIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldTranslationIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldTranslationIp.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string DestinationIpPortTranslationNatRuleDiff::GetProtocol() const
{
    return m_protocol;
}

void DestinationIpPortTranslationNatRuleDiff::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DestinationIpPortTranslationNatRuleDiff::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t DestinationIpPortTranslationNatRuleDiff::GetOriginalPort() const
{
    return m_originalPort;
}

void DestinationIpPortTranslationNatRuleDiff::SetOriginalPort(const int64_t& _originalPort)
{
    m_originalPort = _originalPort;
    m_originalPortHasBeenSet = true;
}

bool DestinationIpPortTranslationNatRuleDiff::OriginalPortHasBeenSet() const
{
    return m_originalPortHasBeenSet;
}

string DestinationIpPortTranslationNatRuleDiff::GetOriginalIp() const
{
    return m_originalIp;
}

void DestinationIpPortTranslationNatRuleDiff::SetOriginalIp(const string& _originalIp)
{
    m_originalIp = _originalIp;
    m_originalIpHasBeenSet = true;
}

bool DestinationIpPortTranslationNatRuleDiff::OriginalIpHasBeenSet() const
{
    return m_originalIpHasBeenSet;
}

int64_t DestinationIpPortTranslationNatRuleDiff::GetTranslationPort() const
{
    return m_translationPort;
}

void DestinationIpPortTranslationNatRuleDiff::SetTranslationPort(const int64_t& _translationPort)
{
    m_translationPort = _translationPort;
    m_translationPortHasBeenSet = true;
}

bool DestinationIpPortTranslationNatRuleDiff::TranslationPortHasBeenSet() const
{
    return m_translationPortHasBeenSet;
}

string DestinationIpPortTranslationNatRuleDiff::GetTranslationIp() const
{
    return m_translationIp;
}

void DestinationIpPortTranslationNatRuleDiff::SetTranslationIp(const string& _translationIp)
{
    m_translationIp = _translationIp;
    m_translationIpHasBeenSet = true;
}

bool DestinationIpPortTranslationNatRuleDiff::TranslationIpHasBeenSet() const
{
    return m_translationIpHasBeenSet;
}

string DestinationIpPortTranslationNatRuleDiff::GetOldProtocol() const
{
    return m_oldProtocol;
}

void DestinationIpPortTranslationNatRuleDiff::SetOldProtocol(const string& _oldProtocol)
{
    m_oldProtocol = _oldProtocol;
    m_oldProtocolHasBeenSet = true;
}

bool DestinationIpPortTranslationNatRuleDiff::OldProtocolHasBeenSet() const
{
    return m_oldProtocolHasBeenSet;
}

int64_t DestinationIpPortTranslationNatRuleDiff::GetOldOriginalPort() const
{
    return m_oldOriginalPort;
}

void DestinationIpPortTranslationNatRuleDiff::SetOldOriginalPort(const int64_t& _oldOriginalPort)
{
    m_oldOriginalPort = _oldOriginalPort;
    m_oldOriginalPortHasBeenSet = true;
}

bool DestinationIpPortTranslationNatRuleDiff::OldOriginalPortHasBeenSet() const
{
    return m_oldOriginalPortHasBeenSet;
}

string DestinationIpPortTranslationNatRuleDiff::GetOldOriginalIp() const
{
    return m_oldOriginalIp;
}

void DestinationIpPortTranslationNatRuleDiff::SetOldOriginalIp(const string& _oldOriginalIp)
{
    m_oldOriginalIp = _oldOriginalIp;
    m_oldOriginalIpHasBeenSet = true;
}

bool DestinationIpPortTranslationNatRuleDiff::OldOriginalIpHasBeenSet() const
{
    return m_oldOriginalIpHasBeenSet;
}

int64_t DestinationIpPortTranslationNatRuleDiff::GetOldTranslationPort() const
{
    return m_oldTranslationPort;
}

void DestinationIpPortTranslationNatRuleDiff::SetOldTranslationPort(const int64_t& _oldTranslationPort)
{
    m_oldTranslationPort = _oldTranslationPort;
    m_oldTranslationPortHasBeenSet = true;
}

bool DestinationIpPortTranslationNatRuleDiff::OldTranslationPortHasBeenSet() const
{
    return m_oldTranslationPortHasBeenSet;
}

string DestinationIpPortTranslationNatRuleDiff::GetOldTranslationIp() const
{
    return m_oldTranslationIp;
}

void DestinationIpPortTranslationNatRuleDiff::SetOldTranslationIp(const string& _oldTranslationIp)
{
    m_oldTranslationIp = _oldTranslationIp;
    m_oldTranslationIpHasBeenSet = true;
}

bool DestinationIpPortTranslationNatRuleDiff::OldTranslationIpHasBeenSet() const
{
    return m_oldTranslationIpHasBeenSet;
}

string DestinationIpPortTranslationNatRuleDiff::GetDescription() const
{
    return m_description;
}

void DestinationIpPortTranslationNatRuleDiff::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DestinationIpPortTranslationNatRuleDiff::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

