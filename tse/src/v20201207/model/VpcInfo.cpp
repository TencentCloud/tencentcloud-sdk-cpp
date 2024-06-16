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

#include <tencentcloud/tse/v20201207/model/VpcInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

VpcInfo::VpcInfo() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_intranetAddressHasBeenSet(false),
    m_lbSubnetIdHasBeenSet(false)
{
}

CoreInternalOutcome VpcInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("IntranetAddress") && !value["IntranetAddress"].IsNull())
    {
        if (!value["IntranetAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcInfo.IntranetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intranetAddress = string(value["IntranetAddress"].GetString());
        m_intranetAddressHasBeenSet = true;
    }

    if (value.HasMember("LbSubnetId") && !value["LbSubnetId"].IsNull())
    {
        if (!value["LbSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcInfo.LbSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lbSubnetId = string(value["LbSubnetId"].GetString());
        m_lbSubnetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_intranetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intranetAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_lbSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LbSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lbSubnetId.c_str(), allocator).Move(), allocator);
    }

}


string VpcInfo::GetVpcId() const
{
    return m_vpcId;
}

void VpcInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VpcInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VpcInfo::GetSubnetId() const
{
    return m_subnetId;
}

void VpcInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool VpcInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string VpcInfo::GetIntranetAddress() const
{
    return m_intranetAddress;
}

void VpcInfo::SetIntranetAddress(const string& _intranetAddress)
{
    m_intranetAddress = _intranetAddress;
    m_intranetAddressHasBeenSet = true;
}

bool VpcInfo::IntranetAddressHasBeenSet() const
{
    return m_intranetAddressHasBeenSet;
}

string VpcInfo::GetLbSubnetId() const
{
    return m_lbSubnetId;
}

void VpcInfo::SetLbSubnetId(const string& _lbSubnetId)
{
    m_lbSubnetId = _lbSubnetId;
    m_lbSubnetIdHasBeenSet = true;
}

bool VpcInfo::LbSubnetIdHasBeenSet() const
{
    return m_lbSubnetIdHasBeenSet;
}

