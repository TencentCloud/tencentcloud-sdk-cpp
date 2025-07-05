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

#include <tencentcloud/gaap/v20180529/model/DescribeAccessRegionsByDestRegionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

DescribeAccessRegionsByDestRegionRequest::DescribeAccessRegionsByDestRegionRequest() :
    m_destRegionHasBeenSet(false),
    m_iPAddressVersionHasBeenSet(false),
    m_packageTypeHasBeenSet(false)
{
}

string DescribeAccessRegionsByDestRegionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_destRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_iPAddressVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPAddressVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iPAddressVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAccessRegionsByDestRegionRequest::GetDestRegion() const
{
    return m_destRegion;
}

void DescribeAccessRegionsByDestRegionRequest::SetDestRegion(const string& _destRegion)
{
    m_destRegion = _destRegion;
    m_destRegionHasBeenSet = true;
}

bool DescribeAccessRegionsByDestRegionRequest::DestRegionHasBeenSet() const
{
    return m_destRegionHasBeenSet;
}

string DescribeAccessRegionsByDestRegionRequest::GetIPAddressVersion() const
{
    return m_iPAddressVersion;
}

void DescribeAccessRegionsByDestRegionRequest::SetIPAddressVersion(const string& _iPAddressVersion)
{
    m_iPAddressVersion = _iPAddressVersion;
    m_iPAddressVersionHasBeenSet = true;
}

bool DescribeAccessRegionsByDestRegionRequest::IPAddressVersionHasBeenSet() const
{
    return m_iPAddressVersionHasBeenSet;
}

string DescribeAccessRegionsByDestRegionRequest::GetPackageType() const
{
    return m_packageType;
}

void DescribeAccessRegionsByDestRegionRequest::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool DescribeAccessRegionsByDestRegionRequest::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}


