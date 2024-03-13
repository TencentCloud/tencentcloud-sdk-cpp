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

#include <tencentcloud/es/v20180416/model/VpcInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

VpcInfo::VpcInfo() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcUidHasBeenSet(false),
    m_subnetUidHasBeenSet(false),
    m_availableIpAddressCountHasBeenSet(false)
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

    if (value.HasMember("VpcUid") && !value["VpcUid"].IsNull())
    {
        if (!value["VpcUid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcInfo.VpcUid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcUid = value["VpcUid"].GetUint64();
        m_vpcUidHasBeenSet = true;
    }

    if (value.HasMember("SubnetUid") && !value["SubnetUid"].IsNull())
    {
        if (!value["SubnetUid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcInfo.SubnetUid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetUid = value["SubnetUid"].GetUint64();
        m_subnetUidHasBeenSet = true;
    }

    if (value.HasMember("AvailableIpAddressCount") && !value["AvailableIpAddressCount"].IsNull())
    {
        if (!value["AvailableIpAddressCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcInfo.AvailableIpAddressCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableIpAddressCount = value["AvailableIpAddressCount"].GetInt64();
        m_availableIpAddressCountHasBeenSet = true;
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

    if (m_vpcUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcUid, allocator);
    }

    if (m_subnetUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetUid, allocator);
    }

    if (m_availableIpAddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableIpAddressCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableIpAddressCount, allocator);
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

uint64_t VpcInfo::GetVpcUid() const
{
    return m_vpcUid;
}

void VpcInfo::SetVpcUid(const uint64_t& _vpcUid)
{
    m_vpcUid = _vpcUid;
    m_vpcUidHasBeenSet = true;
}

bool VpcInfo::VpcUidHasBeenSet() const
{
    return m_vpcUidHasBeenSet;
}

uint64_t VpcInfo::GetSubnetUid() const
{
    return m_subnetUid;
}

void VpcInfo::SetSubnetUid(const uint64_t& _subnetUid)
{
    m_subnetUid = _subnetUid;
    m_subnetUidHasBeenSet = true;
}

bool VpcInfo::SubnetUidHasBeenSet() const
{
    return m_subnetUidHasBeenSet;
}

int64_t VpcInfo::GetAvailableIpAddressCount() const
{
    return m_availableIpAddressCount;
}

void VpcInfo::SetAvailableIpAddressCount(const int64_t& _availableIpAddressCount)
{
    m_availableIpAddressCount = _availableIpAddressCount;
    m_availableIpAddressCountHasBeenSet = true;
}

bool VpcInfo::AvailableIpAddressCountHasBeenSet() const
{
    return m_availableIpAddressCountHasBeenSet;
}

