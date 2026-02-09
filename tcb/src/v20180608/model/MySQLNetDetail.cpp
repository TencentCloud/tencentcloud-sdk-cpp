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

#include <tencentcloud/tcb/v20180608/model/MySQLNetDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

MySQLNetDetail::MySQLNetDetail() :
    m_privateNetAddressHasBeenSet(false),
    m_pubNetAddressHasBeenSet(false),
    m_netHasBeenSet(false),
    m_pubNetAccessEnabledHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false)
{
}

CoreInternalOutcome MySQLNetDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrivateNetAddress") && !value["PrivateNetAddress"].IsNull())
    {
        if (!value["PrivateNetAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLNetDetail.PrivateNetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateNetAddress = string(value["PrivateNetAddress"].GetString());
        m_privateNetAddressHasBeenSet = true;
    }

    if (value.HasMember("PubNetAddress") && !value["PubNetAddress"].IsNull())
    {
        if (!value["PubNetAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLNetDetail.PubNetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pubNetAddress = string(value["PubNetAddress"].GetString());
        m_pubNetAddressHasBeenSet = true;
    }

    if (value.HasMember("Net") && !value["Net"].IsNull())
    {
        if (!value["Net"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLNetDetail.Net` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_net = string(value["Net"].GetString());
        m_netHasBeenSet = true;
    }

    if (value.HasMember("PubNetAccessEnabled") && !value["PubNetAccessEnabled"].IsNull())
    {
        if (!value["PubNetAccessEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLNetDetail.PubNetAccessEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_pubNetAccessEnabled = value["PubNetAccessEnabled"].GetBool();
        m_pubNetAccessEnabledHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLNetDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLNetDetail.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLNetDetail.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLNetDetail.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MySQLNetDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_privateNetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateNetAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateNetAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_pubNetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PubNetAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pubNetAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_netHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Net";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_net.c_str(), allocator).Move(), allocator);
    }

    if (m_pubNetAccessEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PubNetAccessEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pubNetAccessEnabled, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
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

}


string MySQLNetDetail::GetPrivateNetAddress() const
{
    return m_privateNetAddress;
}

void MySQLNetDetail::SetPrivateNetAddress(const string& _privateNetAddress)
{
    m_privateNetAddress = _privateNetAddress;
    m_privateNetAddressHasBeenSet = true;
}

bool MySQLNetDetail::PrivateNetAddressHasBeenSet() const
{
    return m_privateNetAddressHasBeenSet;
}

string MySQLNetDetail::GetPubNetAddress() const
{
    return m_pubNetAddress;
}

void MySQLNetDetail::SetPubNetAddress(const string& _pubNetAddress)
{
    m_pubNetAddress = _pubNetAddress;
    m_pubNetAddressHasBeenSet = true;
}

bool MySQLNetDetail::PubNetAddressHasBeenSet() const
{
    return m_pubNetAddressHasBeenSet;
}

string MySQLNetDetail::GetNet() const
{
    return m_net;
}

void MySQLNetDetail::SetNet(const string& _net)
{
    m_net = _net;
    m_netHasBeenSet = true;
}

bool MySQLNetDetail::NetHasBeenSet() const
{
    return m_netHasBeenSet;
}

bool MySQLNetDetail::GetPubNetAccessEnabled() const
{
    return m_pubNetAccessEnabled;
}

void MySQLNetDetail::SetPubNetAccessEnabled(const bool& _pubNetAccessEnabled)
{
    m_pubNetAccessEnabled = _pubNetAccessEnabled;
    m_pubNetAccessEnabledHasBeenSet = true;
}

bool MySQLNetDetail::PubNetAccessEnabledHasBeenSet() const
{
    return m_pubNetAccessEnabledHasBeenSet;
}

string MySQLNetDetail::GetVpcId() const
{
    return m_vpcId;
}

void MySQLNetDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool MySQLNetDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string MySQLNetDetail::GetVpcName() const
{
    return m_vpcName;
}

void MySQLNetDetail::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool MySQLNetDetail::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string MySQLNetDetail::GetSubnetId() const
{
    return m_subnetId;
}

void MySQLNetDetail::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool MySQLNetDetail::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string MySQLNetDetail::GetSubnetName() const
{
    return m_subnetName;
}

void MySQLNetDetail::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool MySQLNetDetail::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

