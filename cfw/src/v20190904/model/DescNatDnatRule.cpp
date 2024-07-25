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

#include <tencentcloud/cfw/v20190904/model/DescNatDnatRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescNatDnatRule::DescNatDnatRule() :
    m_idHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_publicPortHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_privatePortHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isReferencedHasBeenSet(false),
    m_fwInsIdHasBeenSet(false),
    m_natGwIdHasBeenSet(false)
{
}

CoreInternalOutcome DescNatDnatRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescNatDnatRule.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("IpProtocol") && !value["IpProtocol"].IsNull())
    {
        if (!value["IpProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescNatDnatRule.IpProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipProtocol = string(value["IpProtocol"].GetString());
        m_ipProtocolHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddress") && !value["PublicIpAddress"].IsNull())
    {
        if (!value["PublicIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescNatDnatRule.PublicIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpAddress = string(value["PublicIpAddress"].GetString());
        m_publicIpAddressHasBeenSet = true;
    }

    if (value.HasMember("PublicPort") && !value["PublicPort"].IsNull())
    {
        if (!value["PublicPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescNatDnatRule.PublicPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publicPort = value["PublicPort"].GetInt64();
        m_publicPortHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddress") && !value["PrivateIpAddress"].IsNull())
    {
        if (!value["PrivateIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescNatDnatRule.PrivateIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpAddress = string(value["PrivateIpAddress"].GetString());
        m_privateIpAddressHasBeenSet = true;
    }

    if (value.HasMember("PrivatePort") && !value["PrivatePort"].IsNull())
    {
        if (!value["PrivatePort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescNatDnatRule.PrivatePort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_privatePort = value["PrivatePort"].GetInt64();
        m_privatePortHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescNatDnatRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("IsReferenced") && !value["IsReferenced"].IsNull())
    {
        if (!value["IsReferenced"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescNatDnatRule.IsReferenced` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isReferenced = value["IsReferenced"].GetInt64();
        m_isReferencedHasBeenSet = true;
    }

    if (value.HasMember("FwInsId") && !value["FwInsId"].IsNull())
    {
        if (!value["FwInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescNatDnatRule.FwInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwInsId = string(value["FwInsId"].GetString());
        m_fwInsIdHasBeenSet = true;
    }

    if (value.HasMember("NatGwId") && !value["NatGwId"].IsNull())
    {
        if (!value["NatGwId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescNatDnatRule.NatGwId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natGwId = string(value["NatGwId"].GetString());
        m_natGwIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescNatDnatRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

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

    if (m_isReferencedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReferenced";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReferenced, allocator);
    }

    if (m_fwInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_natGwIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGwId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natGwId.c_str(), allocator).Move(), allocator);
    }

}


int64_t DescNatDnatRule::GetId() const
{
    return m_id;
}

void DescNatDnatRule::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescNatDnatRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescNatDnatRule::GetIpProtocol() const
{
    return m_ipProtocol;
}

void DescNatDnatRule::SetIpProtocol(const string& _ipProtocol)
{
    m_ipProtocol = _ipProtocol;
    m_ipProtocolHasBeenSet = true;
}

bool DescNatDnatRule::IpProtocolHasBeenSet() const
{
    return m_ipProtocolHasBeenSet;
}

string DescNatDnatRule::GetPublicIpAddress() const
{
    return m_publicIpAddress;
}

void DescNatDnatRule::SetPublicIpAddress(const string& _publicIpAddress)
{
    m_publicIpAddress = _publicIpAddress;
    m_publicIpAddressHasBeenSet = true;
}

bool DescNatDnatRule::PublicIpAddressHasBeenSet() const
{
    return m_publicIpAddressHasBeenSet;
}

int64_t DescNatDnatRule::GetPublicPort() const
{
    return m_publicPort;
}

void DescNatDnatRule::SetPublicPort(const int64_t& _publicPort)
{
    m_publicPort = _publicPort;
    m_publicPortHasBeenSet = true;
}

bool DescNatDnatRule::PublicPortHasBeenSet() const
{
    return m_publicPortHasBeenSet;
}

string DescNatDnatRule::GetPrivateIpAddress() const
{
    return m_privateIpAddress;
}

void DescNatDnatRule::SetPrivateIpAddress(const string& _privateIpAddress)
{
    m_privateIpAddress = _privateIpAddress;
    m_privateIpAddressHasBeenSet = true;
}

bool DescNatDnatRule::PrivateIpAddressHasBeenSet() const
{
    return m_privateIpAddressHasBeenSet;
}

int64_t DescNatDnatRule::GetPrivatePort() const
{
    return m_privatePort;
}

void DescNatDnatRule::SetPrivatePort(const int64_t& _privatePort)
{
    m_privatePort = _privatePort;
    m_privatePortHasBeenSet = true;
}

bool DescNatDnatRule::PrivatePortHasBeenSet() const
{
    return m_privatePortHasBeenSet;
}

string DescNatDnatRule::GetDescription() const
{
    return m_description;
}

void DescNatDnatRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescNatDnatRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t DescNatDnatRule::GetIsReferenced() const
{
    return m_isReferenced;
}

void DescNatDnatRule::SetIsReferenced(const int64_t& _isReferenced)
{
    m_isReferenced = _isReferenced;
    m_isReferencedHasBeenSet = true;
}

bool DescNatDnatRule::IsReferencedHasBeenSet() const
{
    return m_isReferencedHasBeenSet;
}

string DescNatDnatRule::GetFwInsId() const
{
    return m_fwInsId;
}

void DescNatDnatRule::SetFwInsId(const string& _fwInsId)
{
    m_fwInsId = _fwInsId;
    m_fwInsIdHasBeenSet = true;
}

bool DescNatDnatRule::FwInsIdHasBeenSet() const
{
    return m_fwInsIdHasBeenSet;
}

string DescNatDnatRule::GetNatGwId() const
{
    return m_natGwId;
}

void DescNatDnatRule::SetNatGwId(const string& _natGwId)
{
    m_natGwId = _natGwId;
    m_natGwIdHasBeenSet = true;
}

bool DescNatDnatRule::NatGwIdHasBeenSet() const
{
    return m_natGwIdHasBeenSet;
}

