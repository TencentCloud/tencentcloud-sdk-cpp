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

#include <tencentcloud/tcbr/v20220217/model/VpcConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

VpcConf::VpcConf() :
    m_vpcIdHasBeenSet(false),
    m_vpcCIDRHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetCIDRHasBeenSet(false)
{
}

CoreInternalOutcome VpcConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcConf.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcCIDR") && !value["VpcCIDR"].IsNull())
    {
        if (!value["VpcCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcConf.VpcCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCIDR = string(value["VpcCIDR"].GetString());
        m_vpcCIDRHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcConf.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetCIDR") && !value["SubnetCIDR"].IsNull())
    {
        if (!value["SubnetCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcConf.SubnetCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCIDR = string(value["SubnetCIDR"].GetString());
        m_subnetCIDRHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetCIDR.c_str(), allocator).Move(), allocator);
    }

}


string VpcConf::GetVpcId() const
{
    return m_vpcId;
}

void VpcConf::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VpcConf::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VpcConf::GetVpcCIDR() const
{
    return m_vpcCIDR;
}

void VpcConf::SetVpcCIDR(const string& _vpcCIDR)
{
    m_vpcCIDR = _vpcCIDR;
    m_vpcCIDRHasBeenSet = true;
}

bool VpcConf::VpcCIDRHasBeenSet() const
{
    return m_vpcCIDRHasBeenSet;
}

string VpcConf::GetSubnetId() const
{
    return m_subnetId;
}

void VpcConf::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool VpcConf::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string VpcConf::GetSubnetCIDR() const
{
    return m_subnetCIDR;
}

void VpcConf::SetSubnetCIDR(const string& _subnetCIDR)
{
    m_subnetCIDR = _subnetCIDR;
    m_subnetCIDRHasBeenSet = true;
}

bool VpcConf::SubnetCIDRHasBeenSet() const
{
    return m_subnetCIDRHasBeenSet;
}

