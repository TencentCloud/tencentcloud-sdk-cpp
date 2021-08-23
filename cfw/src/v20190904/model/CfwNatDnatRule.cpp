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

#include <tencentcloud/cfw/v20190904/model/CfwNatDnatRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CfwNatDnatRule::CfwNatDnatRule() :
    m_ipProtocolHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_publicPortHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_privatePortHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome CfwNatDnatRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IpProtocol") && !value["IpProtocol"].IsNull())
    {
        if (!value["IpProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfwNatDnatRule.IpProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipProtocol = string(value["IpProtocol"].GetString());
        m_ipProtocolHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddress") && !value["PublicIpAddress"].IsNull())
    {
        if (!value["PublicIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfwNatDnatRule.PublicIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpAddress = string(value["PublicIpAddress"].GetString());
        m_publicIpAddressHasBeenSet = true;
    }

    if (value.HasMember("PublicPort") && !value["PublicPort"].IsNull())
    {
        if (!value["PublicPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CfwNatDnatRule.PublicPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publicPort = value["PublicPort"].GetInt64();
        m_publicPortHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddress") && !value["PrivateIpAddress"].IsNull())
    {
        if (!value["PrivateIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfwNatDnatRule.PrivateIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpAddress = string(value["PrivateIpAddress"].GetString());
        m_privateIpAddressHasBeenSet = true;
    }

    if (value.HasMember("PrivatePort") && !value["PrivatePort"].IsNull())
    {
        if (!value["PrivatePort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CfwNatDnatRule.PrivatePort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_privatePort = value["PrivatePort"].GetInt64();
        m_privatePortHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfwNatDnatRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CfwNatDnatRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_publicPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicPort, allocator);
    }

    if (m_privateIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_privatePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivatePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_privatePort, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string CfwNatDnatRule::GetIpProtocol() const
{
    return m_ipProtocol;
}

void CfwNatDnatRule::SetIpProtocol(const string& _ipProtocol)
{
    m_ipProtocol = _ipProtocol;
    m_ipProtocolHasBeenSet = true;
}

bool CfwNatDnatRule::IpProtocolHasBeenSet() const
{
    return m_ipProtocolHasBeenSet;
}

string CfwNatDnatRule::GetPublicIpAddress() const
{
    return m_publicIpAddress;
}

void CfwNatDnatRule::SetPublicIpAddress(const string& _publicIpAddress)
{
    m_publicIpAddress = _publicIpAddress;
    m_publicIpAddressHasBeenSet = true;
}

bool CfwNatDnatRule::PublicIpAddressHasBeenSet() const
{
    return m_publicIpAddressHasBeenSet;
}

int64_t CfwNatDnatRule::GetPublicPort() const
{
    return m_publicPort;
}

void CfwNatDnatRule::SetPublicPort(const int64_t& _publicPort)
{
    m_publicPort = _publicPort;
    m_publicPortHasBeenSet = true;
}

bool CfwNatDnatRule::PublicPortHasBeenSet() const
{
    return m_publicPortHasBeenSet;
}

string CfwNatDnatRule::GetPrivateIpAddress() const
{
    return m_privateIpAddress;
}

void CfwNatDnatRule::SetPrivateIpAddress(const string& _privateIpAddress)
{
    m_privateIpAddress = _privateIpAddress;
    m_privateIpAddressHasBeenSet = true;
}

bool CfwNatDnatRule::PrivateIpAddressHasBeenSet() const
{
    return m_privateIpAddressHasBeenSet;
}

int64_t CfwNatDnatRule::GetPrivatePort() const
{
    return m_privatePort;
}

void CfwNatDnatRule::SetPrivatePort(const int64_t& _privatePort)
{
    m_privatePort = _privatePort;
    m_privatePortHasBeenSet = true;
}

bool CfwNatDnatRule::PrivatePortHasBeenSet() const
{
    return m_privatePortHasBeenSet;
}

string CfwNatDnatRule::GetDescription() const
{
    return m_description;
}

void CfwNatDnatRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CfwNatDnatRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

