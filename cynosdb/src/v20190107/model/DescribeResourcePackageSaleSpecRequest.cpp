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

#include <tencentcloud/cynosdb/v20190107/model/DescribeResourcePackageSaleSpecRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeResourcePackageSaleSpecRequest::DescribeResourcePackageSaleSpecRequest() :
    m_instanceTypeHasBeenSet(false),
    m_packageRegionHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeResourcePackageSaleSpecRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_packageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeResourcePackageSaleSpecRequest::GetInstanceType() const
{
    return m_instanceType;
}

void DescribeResourcePackageSaleSpecRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DescribeResourcePackageSaleSpecRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string DescribeResourcePackageSaleSpecRequest::GetPackageRegion() const
{
    return m_packageRegion;
}

void DescribeResourcePackageSaleSpecRequest::SetPackageRegion(const string& _packageRegion)
{
    m_packageRegion = _packageRegion;
    m_packageRegionHasBeenSet = true;
}

bool DescribeResourcePackageSaleSpecRequest::PackageRegionHasBeenSet() const
{
    return m_packageRegionHasBeenSet;
}

string DescribeResourcePackageSaleSpecRequest::GetPackageType() const
{
    return m_packageType;
}

void DescribeResourcePackageSaleSpecRequest::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool DescribeResourcePackageSaleSpecRequest::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

int64_t DescribeResourcePackageSaleSpecRequest::GetOffset() const
{
    return m_offset;
}

void DescribeResourcePackageSaleSpecRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeResourcePackageSaleSpecRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeResourcePackageSaleSpecRequest::GetLimit() const
{
    return m_limit;
}

void DescribeResourcePackageSaleSpecRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeResourcePackageSaleSpecRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


