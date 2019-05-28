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

#include <tencentcloud/vpc/v20170312/model/DefaultVpcSubnet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

DefaultVpcSubnet::DefaultVpcSubnet() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

CoreInternalOutcome DefaultVpcSubnet::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DefaultVpcSubnet.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DefaultVpcSubnet.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DefaultVpcSubnet::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

}


string DefaultVpcSubnet::GetVpcId() const
{
    return m_vpcId;
}

void DefaultVpcSubnet::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DefaultVpcSubnet::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DefaultVpcSubnet::GetSubnetId() const
{
    return m_subnetId;
}

void DefaultVpcSubnet::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DefaultVpcSubnet::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

