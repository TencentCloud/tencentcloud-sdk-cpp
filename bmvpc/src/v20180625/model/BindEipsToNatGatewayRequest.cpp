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

#include <tencentcloud/bmvpc/v20180625/model/BindEipsToNatGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

BindEipsToNatGatewayRequest::BindEipsToNatGatewayRequest() :
    m_natIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_assignedEipsHasBeenSet(false),
    m_autoAllocEipNumHasBeenSet(false)
{
}

string BindEipsToNatGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindEipsToNatGatewayRequest::GetNatId() const
{
    return m_natId;
}

void BindEipsToNatGatewayRequest::SetNatId(const string& _natId)
{
    m_natId = _natId;
    m_natIdHasBeenSet = true;
}

bool BindEipsToNatGatewayRequest::NatIdHasBeenSet() const
{
    return m_natIdHasBeenSet;
}

string BindEipsToNatGatewayRequest::GetVpcId() const
{
    return m_vpcId;
}

void BindEipsToNatGatewayRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool BindEipsToNatGatewayRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> BindEipsToNatGatewayRequest::GetAssignedEips() const
{
    return m_assignedEips;
}

void BindEipsToNatGatewayRequest::SetAssignedEips(const vector<string>& _assignedEips)
{
    m_assignedEips = _assignedEips;
    m_assignedEipsHasBeenSet = true;
}

bool BindEipsToNatGatewayRequest::AssignedEipsHasBeenSet() const
{
    return m_assignedEipsHasBeenSet;
}

uint64_t BindEipsToNatGatewayRequest::GetAutoAllocEipNum() const
{
    return m_autoAllocEipNum;
}

void BindEipsToNatGatewayRequest::SetAutoAllocEipNum(const uint64_t& _autoAllocEipNum)
{
    m_autoAllocEipNum = _autoAllocEipNum;
    m_autoAllocEipNumHasBeenSet = true;
}

bool BindEipsToNatGatewayRequest::AutoAllocEipNumHasBeenSet() const
{
    return m_autoAllocEipNumHasBeenSet;
}


