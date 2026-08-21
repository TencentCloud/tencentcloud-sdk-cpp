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

#include <tencentcloud/cloudrc/v20240606/model/DescribeResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudrc::V20240606::Model;
using namespace std;

DescribeResourceRequest::DescribeResourceRequest() :
    m_resourceTypeHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_viewIdHasBeenSet(false)
{
}

string DescribeResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_viewIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_viewId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeResourceRequest::GetResourceType() const
{
    return m_resourceType;
}

void DescribeResourceRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DescribeResourceRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string DescribeResourceRequest::GetRegionCode() const
{
    return m_regionCode;
}

void DescribeResourceRequest::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool DescribeResourceRequest::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string DescribeResourceRequest::GetResourceId() const
{
    return m_resourceId;
}

void DescribeResourceRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeResourceRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeResourceRequest::GetViewId() const
{
    return m_viewId;
}

void DescribeResourceRequest::SetViewId(const string& _viewId)
{
    m_viewId = _viewId;
    m_viewIdHasBeenSet = true;
}

bool DescribeResourceRequest::ViewIdHasBeenSet() const
{
    return m_viewIdHasBeenSet;
}


