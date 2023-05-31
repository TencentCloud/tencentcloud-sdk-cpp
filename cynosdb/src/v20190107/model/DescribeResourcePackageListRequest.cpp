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

#include <tencentcloud/cynosdb/v20190107/model/DescribeResourcePackageListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeResourcePackageListRequest::DescribeResourcePackageListRequest() :
    m_packageIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_packageRegionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderDirectionHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeResourcePackageListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_packageId.begin(); itr != m_packageId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_packageName.begin(); itr != m_packageName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_packageType.begin(); itr != m_packageType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_packageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_packageRegion.begin(); itr != m_packageRegion.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_orderBy.begin(); itr != m_orderBy.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDirection.c_str(), allocator).Move(), allocator);
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


vector<string> DescribeResourcePackageListRequest::GetPackageId() const
{
    return m_packageId;
}

void DescribeResourcePackageListRequest::SetPackageId(const vector<string>& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool DescribeResourcePackageListRequest::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

vector<string> DescribeResourcePackageListRequest::GetPackageName() const
{
    return m_packageName;
}

void DescribeResourcePackageListRequest::SetPackageName(const vector<string>& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool DescribeResourcePackageListRequest::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

vector<string> DescribeResourcePackageListRequest::GetPackageType() const
{
    return m_packageType;
}

void DescribeResourcePackageListRequest::SetPackageType(const vector<string>& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool DescribeResourcePackageListRequest::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

vector<string> DescribeResourcePackageListRequest::GetPackageRegion() const
{
    return m_packageRegion;
}

void DescribeResourcePackageListRequest::SetPackageRegion(const vector<string>& _packageRegion)
{
    m_packageRegion = _packageRegion;
    m_packageRegionHasBeenSet = true;
}

bool DescribeResourcePackageListRequest::PackageRegionHasBeenSet() const
{
    return m_packageRegionHasBeenSet;
}

vector<string> DescribeResourcePackageListRequest::GetStatus() const
{
    return m_status;
}

void DescribeResourcePackageListRequest::SetStatus(const vector<string>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeResourcePackageListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeResourcePackageListRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeResourcePackageListRequest::SetOrderBy(const vector<string>& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeResourcePackageListRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeResourcePackageListRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeResourcePackageListRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeResourcePackageListRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}

int64_t DescribeResourcePackageListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeResourcePackageListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeResourcePackageListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeResourcePackageListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeResourcePackageListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeResourcePackageListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


