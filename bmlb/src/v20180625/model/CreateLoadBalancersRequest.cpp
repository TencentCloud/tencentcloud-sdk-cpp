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

#include <tencentcloud/bmlb/v20180625/model/CreateLoadBalancersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

CreateLoadBalancersRequest::CreateLoadBalancersRequest() :
    m_vpcIdHasBeenSet(false),
    m_loadBalancerTypeHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_tgwSetTypeHasBeenSet(false),
    m_exclusiveHasBeenSet(false),
    m_specifiedVipsHasBeenSet(false),
    m_bzConfHasBeenSet(false),
    m_ipProtocolTypeHasBeenSet(false)
{
}

string CreateLoadBalancersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_tgwSetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TgwSetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tgwSetType.c_str(), allocator).Move(), allocator);
    }

    if (m_exclusiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exclusive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exclusive, allocator);
    }

    if (m_specifiedVipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecifiedVips";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_specifiedVips.begin(); itr != m_specifiedVips.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bzConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BzConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bzConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipProtocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpProtocolType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipProtocolType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLoadBalancersRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateLoadBalancersRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateLoadBalancersRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateLoadBalancersRequest::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void CreateLoadBalancersRequest::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool CreateLoadBalancersRequest::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

string CreateLoadBalancersRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateLoadBalancersRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateLoadBalancersRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t CreateLoadBalancersRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateLoadBalancersRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateLoadBalancersRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateLoadBalancersRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateLoadBalancersRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateLoadBalancersRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string CreateLoadBalancersRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateLoadBalancersRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateLoadBalancersRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string CreateLoadBalancersRequest::GetTgwSetType() const
{
    return m_tgwSetType;
}

void CreateLoadBalancersRequest::SetTgwSetType(const string& _tgwSetType)
{
    m_tgwSetType = _tgwSetType;
    m_tgwSetTypeHasBeenSet = true;
}

bool CreateLoadBalancersRequest::TgwSetTypeHasBeenSet() const
{
    return m_tgwSetTypeHasBeenSet;
}

int64_t CreateLoadBalancersRequest::GetExclusive() const
{
    return m_exclusive;
}

void CreateLoadBalancersRequest::SetExclusive(const int64_t& _exclusive)
{
    m_exclusive = _exclusive;
    m_exclusiveHasBeenSet = true;
}

bool CreateLoadBalancersRequest::ExclusiveHasBeenSet() const
{
    return m_exclusiveHasBeenSet;
}

vector<string> CreateLoadBalancersRequest::GetSpecifiedVips() const
{
    return m_specifiedVips;
}

void CreateLoadBalancersRequest::SetSpecifiedVips(const vector<string>& _specifiedVips)
{
    m_specifiedVips = _specifiedVips;
    m_specifiedVipsHasBeenSet = true;
}

bool CreateLoadBalancersRequest::SpecifiedVipsHasBeenSet() const
{
    return m_specifiedVipsHasBeenSet;
}

CreateLoadBalancerBzConf CreateLoadBalancersRequest::GetBzConf() const
{
    return m_bzConf;
}

void CreateLoadBalancersRequest::SetBzConf(const CreateLoadBalancerBzConf& _bzConf)
{
    m_bzConf = _bzConf;
    m_bzConfHasBeenSet = true;
}

bool CreateLoadBalancersRequest::BzConfHasBeenSet() const
{
    return m_bzConfHasBeenSet;
}

string CreateLoadBalancersRequest::GetIpProtocolType() const
{
    return m_ipProtocolType;
}

void CreateLoadBalancersRequest::SetIpProtocolType(const string& _ipProtocolType)
{
    m_ipProtocolType = _ipProtocolType;
    m_ipProtocolTypeHasBeenSet = true;
}

bool CreateLoadBalancersRequest::IpProtocolTypeHasBeenSet() const
{
    return m_ipProtocolTypeHasBeenSet;
}


