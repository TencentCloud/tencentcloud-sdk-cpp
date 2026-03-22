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

#include <tencentcloud/bh/v20230418/model/DescribeDeviceCountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

DescribeDeviceCountRequest::DescribeDeviceCountRequest() :
    m_apCodeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_bindResourceHasBeenSet(false)
{
}

string DescribeDeviceCountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apCode.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kind, allocator);
    }

    if (m_bindResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bindResource, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDeviceCountRequest::GetApCode() const
{
    return m_apCode;
}

void DescribeDeviceCountRequest::SetApCode(const string& _apCode)
{
    m_apCode = _apCode;
    m_apCodeHasBeenSet = true;
}

bool DescribeDeviceCountRequest::ApCodeHasBeenSet() const
{
    return m_apCodeHasBeenSet;
}

string DescribeDeviceCountRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeDeviceCountRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeDeviceCountRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeDeviceCountRequest::GetResourceId() const
{
    return m_resourceId;
}

void DescribeDeviceCountRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeDeviceCountRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t DescribeDeviceCountRequest::GetKind() const
{
    return m_kind;
}

void DescribeDeviceCountRequest::SetKind(const uint64_t& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool DescribeDeviceCountRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

uint64_t DescribeDeviceCountRequest::GetBindResource() const
{
    return m_bindResource;
}

void DescribeDeviceCountRequest::SetBindResource(const uint64_t& _bindResource)
{
    m_bindResource = _bindResource;
    m_bindResourceHasBeenSet = true;
}

bool DescribeDeviceCountRequest::BindResourceHasBeenSet() const
{
    return m_bindResourceHasBeenSet;
}


