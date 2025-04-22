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

#include <tencentcloud/vpc/v20170312/model/ModifyGlobalRouteECMPAlgorithmRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyGlobalRouteECMPAlgorithmRequest::ModifyGlobalRouteECMPAlgorithmRequest() :
    m_vpcIdHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_subnetRouteAlgorithmHasBeenSet(false),
    m_cdcIdHasBeenSet(false)
{
}

string ModifyGlobalRouteECMPAlgorithmRequest::ToJsonString() const
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

    if (m_destinationCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetRouteAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetRouteAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetRouteAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyGlobalRouteECMPAlgorithmRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyGlobalRouteECMPAlgorithmRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyGlobalRouteECMPAlgorithmRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModifyGlobalRouteECMPAlgorithmRequest::GetDestinationCidrBlock() const
{
    return m_destinationCidrBlock;
}

void ModifyGlobalRouteECMPAlgorithmRequest::SetDestinationCidrBlock(const string& _destinationCidrBlock)
{
    m_destinationCidrBlock = _destinationCidrBlock;
    m_destinationCidrBlockHasBeenSet = true;
}

bool ModifyGlobalRouteECMPAlgorithmRequest::DestinationCidrBlockHasBeenSet() const
{
    return m_destinationCidrBlockHasBeenSet;
}

string ModifyGlobalRouteECMPAlgorithmRequest::GetSubnetRouteAlgorithm() const
{
    return m_subnetRouteAlgorithm;
}

void ModifyGlobalRouteECMPAlgorithmRequest::SetSubnetRouteAlgorithm(const string& _subnetRouteAlgorithm)
{
    m_subnetRouteAlgorithm = _subnetRouteAlgorithm;
    m_subnetRouteAlgorithmHasBeenSet = true;
}

bool ModifyGlobalRouteECMPAlgorithmRequest::SubnetRouteAlgorithmHasBeenSet() const
{
    return m_subnetRouteAlgorithmHasBeenSet;
}

string ModifyGlobalRouteECMPAlgorithmRequest::GetCdcId() const
{
    return m_cdcId;
}

void ModifyGlobalRouteECMPAlgorithmRequest::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool ModifyGlobalRouteECMPAlgorithmRequest::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}


