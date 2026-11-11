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

#include <tencentcloud/csip/v20221121/model/DescribeAssetBaselineRiskListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAssetBaselineRiskListRequest::DescribeAssetBaselineRiskListRequest() :
    m_assetUniqueIDHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_assetAppIDHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeAssetBaselineRiskListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetUniqueID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetUniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetAppID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_assetAppID, allocator);
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

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAssetBaselineRiskListRequest::GetAssetUniqueID() const
{
    return m_assetUniqueID;
}

void DescribeAssetBaselineRiskListRequest::SetAssetUniqueID(const string& _assetUniqueID)
{
    m_assetUniqueID = _assetUniqueID;
    m_assetUniqueIDHasBeenSet = true;
}

bool DescribeAssetBaselineRiskListRequest::AssetUniqueIDHasBeenSet() const
{
    return m_assetUniqueIDHasBeenSet;
}

string DescribeAssetBaselineRiskListRequest::GetAssetType() const
{
    return m_assetType;
}

void DescribeAssetBaselineRiskListRequest::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DescribeAssetBaselineRiskListRequest::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

uint64_t DescribeAssetBaselineRiskListRequest::GetAssetAppID() const
{
    return m_assetAppID;
}

void DescribeAssetBaselineRiskListRequest::SetAssetAppID(const uint64_t& _assetAppID)
{
    m_assetAppID = _assetAppID;
    m_assetAppIDHasBeenSet = true;
}

bool DescribeAssetBaselineRiskListRequest::AssetAppIDHasBeenSet() const
{
    return m_assetAppIDHasBeenSet;
}

vector<string> DescribeAssetBaselineRiskListRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeAssetBaselineRiskListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeAssetBaselineRiskListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<Filters> DescribeAssetBaselineRiskListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeAssetBaselineRiskListRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeAssetBaselineRiskListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeAssetBaselineRiskListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAssetBaselineRiskListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAssetBaselineRiskListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeAssetBaselineRiskListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAssetBaselineRiskListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAssetBaselineRiskListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


