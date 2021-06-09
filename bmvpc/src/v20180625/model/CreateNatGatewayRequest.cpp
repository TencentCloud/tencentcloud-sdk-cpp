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

#include <tencentcloud/bmvpc/v20180625/model/CreateNatGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

CreateNatGatewayRequest::CreateNatGatewayRequest() :
    m_forwardModeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_natNameHasBeenSet(false),
    m_maxConcurrentHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_ipInfoSetHasBeenSet(false),
    m_assignedEipsHasBeenSet(false),
    m_autoAllocEipNumHasBeenSet(false),
    m_exclusiveHasBeenSet(false)
{
}

string CreateNatGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_forwardModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardMode.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_natNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxConcurrentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConcurrent, allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpInfoSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipInfoSet.begin(); itr != m_ipInfoSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_assignedEipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssignedEips";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assignedEips.begin(); itr != m_assignedEips.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoAllocEipNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAllocEipNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoAllocEipNum, allocator);
    }

    if (m_exclusiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exclusive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exclusive, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateNatGatewayRequest::GetForwardMode() const
{
    return m_forwardMode;
}

void CreateNatGatewayRequest::SetForwardMode(const string& _forwardMode)
{
    m_forwardMode = _forwardMode;
    m_forwardModeHasBeenSet = true;
}

bool CreateNatGatewayRequest::ForwardModeHasBeenSet() const
{
    return m_forwardModeHasBeenSet;
}

string CreateNatGatewayRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateNatGatewayRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateNatGatewayRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateNatGatewayRequest::GetNatName() const
{
    return m_natName;
}

void CreateNatGatewayRequest::SetNatName(const string& _natName)
{
    m_natName = _natName;
    m_natNameHasBeenSet = true;
}

bool CreateNatGatewayRequest::NatNameHasBeenSet() const
{
    return m_natNameHasBeenSet;
}

uint64_t CreateNatGatewayRequest::GetMaxConcurrent() const
{
    return m_maxConcurrent;
}

void CreateNatGatewayRequest::SetMaxConcurrent(const uint64_t& _maxConcurrent)
{
    m_maxConcurrent = _maxConcurrent;
    m_maxConcurrentHasBeenSet = true;
}

bool CreateNatGatewayRequest::MaxConcurrentHasBeenSet() const
{
    return m_maxConcurrentHasBeenSet;
}

vector<string> CreateNatGatewayRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void CreateNatGatewayRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool CreateNatGatewayRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

vector<IpInfo> CreateNatGatewayRequest::GetIpInfoSet() const
{
    return m_ipInfoSet;
}

void CreateNatGatewayRequest::SetIpInfoSet(const vector<IpInfo>& _ipInfoSet)
{
    m_ipInfoSet = _ipInfoSet;
    m_ipInfoSetHasBeenSet = true;
}

bool CreateNatGatewayRequest::IpInfoSetHasBeenSet() const
{
    return m_ipInfoSetHasBeenSet;
}

vector<string> CreateNatGatewayRequest::GetAssignedEips() const
{
    return m_assignedEips;
}

void CreateNatGatewayRequest::SetAssignedEips(const vector<string>& _assignedEips)
{
    m_assignedEips = _assignedEips;
    m_assignedEipsHasBeenSet = true;
}

bool CreateNatGatewayRequest::AssignedEipsHasBeenSet() const
{
    return m_assignedEipsHasBeenSet;
}

uint64_t CreateNatGatewayRequest::GetAutoAllocEipNum() const
{
    return m_autoAllocEipNum;
}

void CreateNatGatewayRequest::SetAutoAllocEipNum(const uint64_t& _autoAllocEipNum)
{
    m_autoAllocEipNum = _autoAllocEipNum;
    m_autoAllocEipNumHasBeenSet = true;
}

bool CreateNatGatewayRequest::AutoAllocEipNumHasBeenSet() const
{
    return m_autoAllocEipNumHasBeenSet;
}

uint64_t CreateNatGatewayRequest::GetExclusive() const
{
    return m_exclusive;
}

void CreateNatGatewayRequest::SetExclusive(const uint64_t& _exclusive)
{
    m_exclusive = _exclusive;
    m_exclusiveHasBeenSet = true;
}

bool CreateNatGatewayRequest::ExclusiveHasBeenSet() const
{
    return m_exclusiveHasBeenSet;
}


