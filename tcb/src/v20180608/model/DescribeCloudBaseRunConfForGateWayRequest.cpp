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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunConfForGateWayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudBaseRunConfForGateWayRequest::DescribeCloudBaseRunConfForGateWayRequest() :
    m_envIDHasBeenSet(false),
    m_vpcIDHasBeenSet(false)
{
}

string DescribeCloudBaseRunConfForGateWayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envID.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudBaseRunConfForGateWayRequest::GetEnvID() const
{
    return m_envID;
}

void DescribeCloudBaseRunConfForGateWayRequest::SetEnvID(const string& _envID)
{
    m_envID = _envID;
    m_envIDHasBeenSet = true;
}

bool DescribeCloudBaseRunConfForGateWayRequest::EnvIDHasBeenSet() const
{
    return m_envIDHasBeenSet;
}

string DescribeCloudBaseRunConfForGateWayRequest::GetVpcID() const
{
    return m_vpcID;
}

void DescribeCloudBaseRunConfForGateWayRequest::SetVpcID(const string& _vpcID)
{
    m_vpcID = _vpcID;
    m_vpcIDHasBeenSet = true;
}

bool DescribeCloudBaseRunConfForGateWayRequest::VpcIDHasBeenSet() const
{
    return m_vpcIDHasBeenSet;
}


