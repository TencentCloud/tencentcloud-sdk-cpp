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

#include <tencentcloud/cynosdb/v20190107/model/DescribeZonesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeZonesRequest::DescribeZonesRequest() :
    m_includeVirtualZonesHasBeenSet(false),
    m_showPermissionHasBeenSet(false)
{
}

string DescribeZonesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_includeVirtualZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeVirtualZones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeVirtualZones, allocator);
    }

    if (m_showPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowPermission";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_showPermission, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool DescribeZonesRequest::GetIncludeVirtualZones() const
{
    return m_includeVirtualZones;
}

void DescribeZonesRequest::SetIncludeVirtualZones(const bool& _includeVirtualZones)
{
    m_includeVirtualZones = _includeVirtualZones;
    m_includeVirtualZonesHasBeenSet = true;
}

bool DescribeZonesRequest::IncludeVirtualZonesHasBeenSet() const
{
    return m_includeVirtualZonesHasBeenSet;
}

bool DescribeZonesRequest::GetShowPermission() const
{
    return m_showPermission;
}

void DescribeZonesRequest::SetShowPermission(const bool& _showPermission)
{
    m_showPermission = _showPermission;
    m_showPermissionHasBeenSet = true;
}

bool DescribeZonesRequest::ShowPermissionHasBeenSet() const
{
    return m_showPermissionHasBeenSet;
}


