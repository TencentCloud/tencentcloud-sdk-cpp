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

#include <tencentcloud/csip/v20221121/model/DescribeVulHostRelateComponentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeVulHostRelateComponentRequest::DescribeVulHostRelateComponentRequest() :
    m_vulIDHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string DescribeVulHostRelateComponentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vulIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vulID, allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeVulHostRelateComponentRequest::GetVulID() const
{
    return m_vulID;
}

void DescribeVulHostRelateComponentRequest::SetVulID(const uint64_t& _vulID)
{
    m_vulID = _vulID;
    m_vulIDHasBeenSet = true;
}

bool DescribeVulHostRelateComponentRequest::VulIDHasBeenSet() const
{
    return m_vulIDHasBeenSet;
}

string DescribeVulHostRelateComponentRequest::GetInstanceID() const
{
    return m_instanceID;
}

void DescribeVulHostRelateComponentRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribeVulHostRelateComponentRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

vector<string> DescribeVulHostRelateComponentRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeVulHostRelateComponentRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeVulHostRelateComponentRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


