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

#include <tencentcloud/cloudhsm/v20191112/model/Subnet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace std;

Subnet::Subnet() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_availableIpAddressCountHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_totalIpAddressCountHasBeenSet(false),
    m_isDefaultHasBeenSet(false)
{
}

CoreInternalOutcome Subnet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("AvailableIpAddressCount") && !value["AvailableIpAddressCount"].IsNull())
    {
        if (!value["AvailableIpAddressCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.AvailableIpAddressCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableIpAddressCount = value["AvailableIpAddressCount"].GetInt64();
        m_availableIpAddressCountHasBeenSet = true;
    }

    if (value.HasMember("Ipv6CidrBlock") && !value["Ipv6CidrBlock"].IsNull())
    {
        if (!value["Ipv6CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.Ipv6CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6CidrBlock = string(value["Ipv6CidrBlock"].GetString());
        m_ipv6CidrBlockHasBeenSet = true;
    }

    if (value.HasMember("TotalIpAddressCount") && !value["TotalIpAddressCount"].IsNull())
    {
        if (!value["TotalIpAddressCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.TotalIpAddressCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalIpAddressCount = value["TotalIpAddressCount"].GetInt64();
        m_totalIpAddressCountHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Subnet.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Subnet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_availableIpAddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableIpAddressCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableIpAddressCount, allocator);
    }

    if (m_ipv6CidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6CidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_totalIpAddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalIpAddressCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalIpAddressCount, allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

}


string Subnet::GetVpcId() const
{
    return m_vpcId;
}

void Subnet::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool Subnet::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string Subnet::GetSubnetId() const
{
    return m_subnetId;
}

void Subnet::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool Subnet::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string Subnet::GetSubnetName() const
{
    return m_subnetName;
}

void Subnet::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool Subnet::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string Subnet::GetCidrBlock() const
{
    return m_cidrBlock;
}

void Subnet::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool Subnet::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string Subnet::GetCreatedTime() const
{
    return m_createdTime;
}

void Subnet::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Subnet::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t Subnet::GetAvailableIpAddressCount() const
{
    return m_availableIpAddressCount;
}

void Subnet::SetAvailableIpAddressCount(const int64_t& _availableIpAddressCount)
{
    m_availableIpAddressCount = _availableIpAddressCount;
    m_availableIpAddressCountHasBeenSet = true;
}

bool Subnet::AvailableIpAddressCountHasBeenSet() const
{
    return m_availableIpAddressCountHasBeenSet;
}

string Subnet::GetIpv6CidrBlock() const
{
    return m_ipv6CidrBlock;
}

void Subnet::SetIpv6CidrBlock(const string& _ipv6CidrBlock)
{
    m_ipv6CidrBlock = _ipv6CidrBlock;
    m_ipv6CidrBlockHasBeenSet = true;
}

bool Subnet::Ipv6CidrBlockHasBeenSet() const
{
    return m_ipv6CidrBlockHasBeenSet;
}

int64_t Subnet::GetTotalIpAddressCount() const
{
    return m_totalIpAddressCount;
}

void Subnet::SetTotalIpAddressCount(const int64_t& _totalIpAddressCount)
{
    m_totalIpAddressCount = _totalIpAddressCount;
    m_totalIpAddressCountHasBeenSet = true;
}

bool Subnet::TotalIpAddressCountHasBeenSet() const
{
    return m_totalIpAddressCountHasBeenSet;
}

bool Subnet::GetIsDefault() const
{
    return m_isDefault;
}

void Subnet::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool Subnet::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

