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

#include <tencentcloud/bmvpc/v20180625/model/CreateVpcRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

CreateVpcRequest::CreateVpcRequest() :
    m_vpcNameHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_subnetSetHasBeenSet(false),
    m_enableMonitoringHasBeenSet(false)
{
}

string CreateVpcRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subnetSet.begin(); itr != m_subnetSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_enableMonitoringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMonitoring";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableMonitoring, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVpcRequest::GetVpcName() const
{
    return m_vpcName;
}

void CreateVpcRequest::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool CreateVpcRequest::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string CreateVpcRequest::GetCidrBlock() const
{
    return m_cidrBlock;
}

void CreateVpcRequest::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool CreateVpcRequest::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string CreateVpcRequest::GetZone() const
{
    return m_zone;
}

void CreateVpcRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateVpcRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<VpcSubnetCreateInfo> CreateVpcRequest::GetSubnetSet() const
{
    return m_subnetSet;
}

void CreateVpcRequest::SetSubnetSet(const vector<VpcSubnetCreateInfo>& _subnetSet)
{
    m_subnetSet = _subnetSet;
    m_subnetSetHasBeenSet = true;
}

bool CreateVpcRequest::SubnetSetHasBeenSet() const
{
    return m_subnetSetHasBeenSet;
}

bool CreateVpcRequest::GetEnableMonitoring() const
{
    return m_enableMonitoring;
}

void CreateVpcRequest::SetEnableMonitoring(const bool& _enableMonitoring)
{
    m_enableMonitoring = _enableMonitoring;
    m_enableMonitoringHasBeenSet = true;
}

bool CreateVpcRequest::EnableMonitoringHasBeenSet() const
{
    return m_enableMonitoringHasBeenSet;
}


