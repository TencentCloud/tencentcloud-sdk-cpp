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

#include <tencentcloud/tcss/v20201101/model/DescribeComplianceAssetPolicyItemListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeComplianceAssetPolicyItemListRequest::DescribeComplianceAssetPolicyItemListRequest() :
    m_customerAssetIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_assetTypeHasBeenSet(false)
{
}

string DescribeComplianceAssetPolicyItemListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerAssetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAssetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerAssetId, allocator);
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

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeComplianceAssetPolicyItemListRequest::GetCustomerAssetId() const
{
    return m_customerAssetId;
}

void DescribeComplianceAssetPolicyItemListRequest::SetCustomerAssetId(const uint64_t& _customerAssetId)
{
    m_customerAssetId = _customerAssetId;
    m_customerAssetIdHasBeenSet = true;
}

bool DescribeComplianceAssetPolicyItemListRequest::CustomerAssetIdHasBeenSet() const
{
    return m_customerAssetIdHasBeenSet;
}

uint64_t DescribeComplianceAssetPolicyItemListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeComplianceAssetPolicyItemListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeComplianceAssetPolicyItemListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeComplianceAssetPolicyItemListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeComplianceAssetPolicyItemListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeComplianceAssetPolicyItemListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<ComplianceFilters> DescribeComplianceAssetPolicyItemListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeComplianceAssetPolicyItemListRequest::SetFilters(const vector<ComplianceFilters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeComplianceAssetPolicyItemListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeComplianceAssetPolicyItemListRequest::GetAssetType() const
{
    return m_assetType;
}

void DescribeComplianceAssetPolicyItemListRequest::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DescribeComplianceAssetPolicyItemListRequest::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}


