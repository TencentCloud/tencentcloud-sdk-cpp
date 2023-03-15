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

#include <tencentcloud/tdmq/v20200217/model/VpcEndpointInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

VpcEndpointInfo::VpcEndpointInfo() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcEndpointHasBeenSet(false),
    m_vpcDataStreamEndpointStatusHasBeenSet(false)
{
}

CoreInternalOutcome VpcEndpointInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcEndpointInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcEndpointInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("VpcEndpoint") && !value["VpcEndpoint"].IsNull())
    {
        if (!value["VpcEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcEndpointInfo.VpcEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcEndpoint = string(value["VpcEndpoint"].GetString());
        m_vpcEndpointHasBeenSet = true;
    }

    if (value.HasMember("VpcDataStreamEndpointStatus") && !value["VpcDataStreamEndpointStatus"].IsNull())
    {
        if (!value["VpcDataStreamEndpointStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcEndpointInfo.VpcDataStreamEndpointStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcDataStreamEndpointStatus = string(value["VpcDataStreamEndpointStatus"].GetString());
        m_vpcDataStreamEndpointStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcEndpointInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_vpcEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcDataStreamEndpointStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcDataStreamEndpointStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcDataStreamEndpointStatus.c_str(), allocator).Move(), allocator);
    }

}


string VpcEndpointInfo::GetVpcId() const
{
    return m_vpcId;
}

void VpcEndpointInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VpcEndpointInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VpcEndpointInfo::GetSubnetId() const
{
    return m_subnetId;
}

void VpcEndpointInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool VpcEndpointInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string VpcEndpointInfo::GetVpcEndpoint() const
{
    return m_vpcEndpoint;
}

void VpcEndpointInfo::SetVpcEndpoint(const string& _vpcEndpoint)
{
    m_vpcEndpoint = _vpcEndpoint;
    m_vpcEndpointHasBeenSet = true;
}

bool VpcEndpointInfo::VpcEndpointHasBeenSet() const
{
    return m_vpcEndpointHasBeenSet;
}

string VpcEndpointInfo::GetVpcDataStreamEndpointStatus() const
{
    return m_vpcDataStreamEndpointStatus;
}

void VpcEndpointInfo::SetVpcDataStreamEndpointStatus(const string& _vpcDataStreamEndpointStatus)
{
    m_vpcDataStreamEndpointStatus = _vpcDataStreamEndpointStatus;
    m_vpcDataStreamEndpointStatusHasBeenSet = true;
}

bool VpcEndpointInfo::VpcDataStreamEndpointStatusHasBeenSet() const
{
    return m_vpcDataStreamEndpointStatusHasBeenSet;
}

