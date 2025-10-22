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

#include <tencentcloud/tke/v20180525/model/DescribeRouteTableConflictsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeRouteTableConflictsRequest::DescribeRouteTableConflictsRequest() :
    m_routeTableCidrBlockHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

string DescribeRouteTableConflictsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_routeTableCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routeTableCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRouteTableConflictsRequest::GetRouteTableCidrBlock() const
{
    return m_routeTableCidrBlock;
}

void DescribeRouteTableConflictsRequest::SetRouteTableCidrBlock(const string& _routeTableCidrBlock)
{
    m_routeTableCidrBlock = _routeTableCidrBlock;
    m_routeTableCidrBlockHasBeenSet = true;
}

bool DescribeRouteTableConflictsRequest::RouteTableCidrBlockHasBeenSet() const
{
    return m_routeTableCidrBlockHasBeenSet;
}

string DescribeRouteTableConflictsRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeRouteTableConflictsRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeRouteTableConflictsRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}


