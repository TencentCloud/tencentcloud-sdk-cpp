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

#include <tencentcloud/goosefs/v20220519/model/SubnetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

SubnetInfo::SubnetInfo() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_usedClusterHasBeenSet(false),
    m_cIDRHasBeenSet(false),
    m_isDirectConnectHasBeenSet(false)
{
}

CoreInternalOutcome SubnetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("UsedCluster") && !value["UsedCluster"].IsNull())
    {
        if (!value["UsedCluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.UsedCluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedCluster = string(value["UsedCluster"].GetString());
        m_usedClusterHasBeenSet = true;
    }

    if (value.HasMember("CIDR") && !value["CIDR"].IsNull())
    {
        if (!value["CIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.CIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cIDR = string(value["CIDR"].GetString());
        m_cIDRHasBeenSet = true;
    }

    if (value.HasMember("IsDirectConnect") && !value["IsDirectConnect"].IsNull())
    {
        if (!value["IsDirectConnect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfo.IsDirectConnect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDirectConnect = value["IsDirectConnect"].GetBool();
        m_isDirectConnectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubnetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_usedClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usedCluster.c_str(), allocator).Move(), allocator);
    }

    if (m_cIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_isDirectConnectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDirectConnect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDirectConnect, allocator);
    }

}


string SubnetInfo::GetVpcId() const
{
    return m_vpcId;
}

void SubnetInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool SubnetInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string SubnetInfo::GetSubnetId() const
{
    return m_subnetId;
}

void SubnetInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool SubnetInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string SubnetInfo::GetUsedCluster() const
{
    return m_usedCluster;
}

void SubnetInfo::SetUsedCluster(const string& _usedCluster)
{
    m_usedCluster = _usedCluster;
    m_usedClusterHasBeenSet = true;
}

bool SubnetInfo::UsedClusterHasBeenSet() const
{
    return m_usedClusterHasBeenSet;
}

string SubnetInfo::GetCIDR() const
{
    return m_cIDR;
}

void SubnetInfo::SetCIDR(const string& _cIDR)
{
    m_cIDR = _cIDR;
    m_cIDRHasBeenSet = true;
}

bool SubnetInfo::CIDRHasBeenSet() const
{
    return m_cIDRHasBeenSet;
}

bool SubnetInfo::GetIsDirectConnect() const
{
    return m_isDirectConnect;
}

void SubnetInfo::SetIsDirectConnect(const bool& _isDirectConnect)
{
    m_isDirectConnect = _isDirectConnect;
    m_isDirectConnectHasBeenSet = true;
}

bool SubnetInfo::IsDirectConnectHasBeenSet() const
{
    return m_isDirectConnectHasBeenSet;
}

