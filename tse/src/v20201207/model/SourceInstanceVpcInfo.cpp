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

#include <tencentcloud/tse/v20201207/model/SourceInstanceVpcInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

SourceInstanceVpcInfo::SourceInstanceVpcInfo() :
    m_vpcIDHasBeenSet(false),
    m_subnetIDHasBeenSet(false)
{
}

CoreInternalOutcome SourceInstanceVpcInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcID") && !value["VpcID"].IsNull())
    {
        if (!value["VpcID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceInstanceVpcInfo.VpcID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcID = string(value["VpcID"].GetString());
        m_vpcIDHasBeenSet = true;
    }

    if (value.HasMember("SubnetID") && !value["SubnetID"].IsNull())
    {
        if (!value["SubnetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceInstanceVpcInfo.SubnetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetID = string(value["SubnetID"].GetString());
        m_subnetIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceInstanceVpcInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcID.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetID.c_str(), allocator).Move(), allocator);
    }

}


string SourceInstanceVpcInfo::GetVpcID() const
{
    return m_vpcID;
}

void SourceInstanceVpcInfo::SetVpcID(const string& _vpcID)
{
    m_vpcID = _vpcID;
    m_vpcIDHasBeenSet = true;
}

bool SourceInstanceVpcInfo::VpcIDHasBeenSet() const
{
    return m_vpcIDHasBeenSet;
}

string SourceInstanceVpcInfo::GetSubnetID() const
{
    return m_subnetID;
}

void SourceInstanceVpcInfo::SetSubnetID(const string& _subnetID)
{
    m_subnetID = _subnetID;
    m_subnetIDHasBeenSet = true;
}

bool SourceInstanceVpcInfo::SubnetIDHasBeenSet() const
{
    return m_subnetIDHasBeenSet;
}

