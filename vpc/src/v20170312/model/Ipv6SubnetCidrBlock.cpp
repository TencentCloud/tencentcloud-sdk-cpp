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

#include <tencentcloud/vpc/v20170312/model/Ipv6SubnetCidrBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

Ipv6SubnetCidrBlock::Ipv6SubnetCidrBlock() :
    m_subnetIdHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false)
{
}

CoreInternalOutcome Ipv6SubnetCidrBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv6SubnetCidrBlock.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Ipv6CidrBlock") && !value["Ipv6CidrBlock"].IsNull())
    {
        if (!value["Ipv6CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv6SubnetCidrBlock.Ipv6CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6CidrBlock = string(value["Ipv6CidrBlock"].GetString());
        m_ipv6CidrBlockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Ipv6SubnetCidrBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6CidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6CidrBlock.c_str(), allocator).Move(), allocator);
    }

}


string Ipv6SubnetCidrBlock::GetSubnetId() const
{
    return m_subnetId;
}

void Ipv6SubnetCidrBlock::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool Ipv6SubnetCidrBlock::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string Ipv6SubnetCidrBlock::GetIpv6CidrBlock() const
{
    return m_ipv6CidrBlock;
}

void Ipv6SubnetCidrBlock::SetIpv6CidrBlock(const string& _ipv6CidrBlock)
{
    m_ipv6CidrBlock = _ipv6CidrBlock;
    m_ipv6CidrBlockHasBeenSet = true;
}

bool Ipv6SubnetCidrBlock::Ipv6CidrBlockHasBeenSet() const
{
    return m_ipv6CidrBlockHasBeenSet;
}

