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

#include <tencentcloud/bmvpc/v20180625/model/UnbindIpsFromNatGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

UnbindIpsFromNatGatewayRequest::UnbindIpsFromNatGatewayRequest() :
    m_natIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ipInfoSetHasBeenSet(false)
{
}

string UnbindIpsFromNatGatewayRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnbindIpsFromNatGatewayRequest::GetNatId() const
{
    return m_natId;
}

void UnbindIpsFromNatGatewayRequest::SetNatId(const string& _natId)
{
    m_natId = _natId;
    m_natIdHasBeenSet = true;
}

bool UnbindIpsFromNatGatewayRequest::NatIdHasBeenSet() const
{
    return m_natIdHasBeenSet;
}

string UnbindIpsFromNatGatewayRequest::GetVpcId() const
{
    return m_vpcId;
}

void UnbindIpsFromNatGatewayRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool UnbindIpsFromNatGatewayRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<IpInfo> UnbindIpsFromNatGatewayRequest::GetIpInfoSet() const
{
    return m_ipInfoSet;
}

void UnbindIpsFromNatGatewayRequest::SetIpInfoSet(const vector<IpInfo>& _ipInfoSet)
{
    m_ipInfoSet = _ipInfoSet;
    m_ipInfoSetHasBeenSet = true;
}

bool UnbindIpsFromNatGatewayRequest::IpInfoSetHasBeenSet() const
{
    return m_ipInfoSetHasBeenSet;
}


