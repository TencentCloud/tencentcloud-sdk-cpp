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

#include <tencentcloud/bmeip/v20180625/model/CreateEipRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace rapidjson;
using namespace std;

CreateEipRequest::CreateEipRequest() :
    m_goodsNumHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_setTypeHasBeenSet(false),
    m_exclusiveHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ipListHasBeenSet(false)
{
}

string CreateEipRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_goodsNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_setTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_setType.c_str(), allocator).Move(), allocator);
    }

    if (m_exclusiveHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Exclusive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exclusive, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateEipRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateEipRequest::SetGoodsNum(const uint64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateEipRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string CreateEipRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateEipRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateEipRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t CreateEipRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void CreateEipRequest::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CreateEipRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string CreateEipRequest::GetSetType() const
{
    return m_setType;
}

void CreateEipRequest::SetSetType(const string& _setType)
{
    m_setType = _setType;
    m_setTypeHasBeenSet = true;
}

bool CreateEipRequest::SetTypeHasBeenSet() const
{
    return m_setTypeHasBeenSet;
}

uint64_t CreateEipRequest::GetExclusive() const
{
    return m_exclusive;
}

void CreateEipRequest::SetExclusive(const uint64_t& _exclusive)
{
    m_exclusive = _exclusive;
    m_exclusiveHasBeenSet = true;
}

bool CreateEipRequest::ExclusiveHasBeenSet() const
{
    return m_exclusiveHasBeenSet;
}

string CreateEipRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateEipRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateEipRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> CreateEipRequest::GetIpList() const
{
    return m_ipList;
}

void CreateEipRequest::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool CreateEipRequest::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}


