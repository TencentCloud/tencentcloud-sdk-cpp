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

#include <tencentcloud/vpc/v20170312/model/PrivateNatDestinationIpPortTranslationNatRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

PrivateNatDestinationIpPortTranslationNatRule::PrivateNatDestinationIpPortTranslationNatRule() :
    m_protocolHasBeenSet(false),
    m_originalPortHasBeenSet(false),
    m_originalIpHasBeenSet(false),
    m_translationPortHasBeenSet(false),
    m_translationIpHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome PrivateNatDestinationIpPortTranslationNatRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatDestinationIpPortTranslationNatRule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("OriginalPort") && !value["OriginalPort"].IsNull())
    {
        if (!value["OriginalPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatDestinationIpPortTranslationNatRule.OriginalPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originalPort = value["OriginalPort"].GetInt64();
        m_originalPortHasBeenSet = true;
    }

    if (value.HasMember("OriginalIp") && !value["OriginalIp"].IsNull())
    {
        if (!value["OriginalIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatDestinationIpPortTranslationNatRule.OriginalIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalIp = string(value["OriginalIp"].GetString());
        m_originalIpHasBeenSet = true;
    }

    if (value.HasMember("TranslationPort") && !value["TranslationPort"].IsNull())
    {
        if (!value["TranslationPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatDestinationIpPortTranslationNatRule.TranslationPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_translationPort = value["TranslationPort"].GetInt64();
        m_translationPortHasBeenSet = true;
    }

    if (value.HasMember("TranslationIp") && !value["TranslationIp"].IsNull())
    {
        if (!value["TranslationIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatDestinationIpPortTranslationNatRule.TranslationIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translationIp = string(value["TranslationIp"].GetString());
        m_translationIpHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatDestinationIpPortTranslationNatRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatDestinationIpPortTranslationNatRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatDestinationIpPortTranslationNatRule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivateNatDestinationIpPortTranslationNatRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string PrivateNatDestinationIpPortTranslationNatRule::GetProtocol() const
{
    return m_protocol;
}

void PrivateNatDestinationIpPortTranslationNatRule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool PrivateNatDestinationIpPortTranslationNatRule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t PrivateNatDestinationIpPortTranslationNatRule::GetOriginalPort() const
{
    return m_originalPort;
}

void PrivateNatDestinationIpPortTranslationNatRule::SetOriginalPort(const int64_t& _originalPort)
{
    m_originalPort = _originalPort;
    m_originalPortHasBeenSet = true;
}

bool PrivateNatDestinationIpPortTranslationNatRule::OriginalPortHasBeenSet() const
{
    return m_originalPortHasBeenSet;
}

string PrivateNatDestinationIpPortTranslationNatRule::GetOriginalIp() const
{
    return m_originalIp;
}

void PrivateNatDestinationIpPortTranslationNatRule::SetOriginalIp(const string& _originalIp)
{
    m_originalIp = _originalIp;
    m_originalIpHasBeenSet = true;
}

bool PrivateNatDestinationIpPortTranslationNatRule::OriginalIpHasBeenSet() const
{
    return m_originalIpHasBeenSet;
}

int64_t PrivateNatDestinationIpPortTranslationNatRule::GetTranslationPort() const
{
    return m_translationPort;
}

void PrivateNatDestinationIpPortTranslationNatRule::SetTranslationPort(const int64_t& _translationPort)
{
    m_translationPort = _translationPort;
    m_translationPortHasBeenSet = true;
}

bool PrivateNatDestinationIpPortTranslationNatRule::TranslationPortHasBeenSet() const
{
    return m_translationPortHasBeenSet;
}

string PrivateNatDestinationIpPortTranslationNatRule::GetTranslationIp() const
{
    return m_translationIp;
}

void PrivateNatDestinationIpPortTranslationNatRule::SetTranslationIp(const string& _translationIp)
{
    m_translationIp = _translationIp;
    m_translationIpHasBeenSet = true;
}

bool PrivateNatDestinationIpPortTranslationNatRule::TranslationIpHasBeenSet() const
{
    return m_translationIpHasBeenSet;
}

string PrivateNatDestinationIpPortTranslationNatRule::GetDescription() const
{
    return m_description;
}

void PrivateNatDestinationIpPortTranslationNatRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PrivateNatDestinationIpPortTranslationNatRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string PrivateNatDestinationIpPortTranslationNatRule::GetCreateTime() const
{
    return m_createTime;
}

void PrivateNatDestinationIpPortTranslationNatRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PrivateNatDestinationIpPortTranslationNatRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PrivateNatDestinationIpPortTranslationNatRule::GetUpdateTime() const
{
    return m_updateTime;
}

void PrivateNatDestinationIpPortTranslationNatRule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PrivateNatDestinationIpPortTranslationNatRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

