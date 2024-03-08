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

#include <tencentcloud/billing/v20180709/model/DescribeGatherResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeGatherResourceRequest::DescribeGatherResourceRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_monthHasBeenSet(false),
    m_treeNodeUniqKeyHasBeenSet(false),
    m_gatherTypeHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_businessCodesHasBeenSet(false),
    m_productCodesHasBeenSet(false),
    m_itemCodesHasBeenSet(false),
    m_regionIdsHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_payModesHasBeenSet(false),
    m_operateUinsHasBeenSet(false),
    m_ownerUinsHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_actionTypesHasBeenSet(false)
{
}

string DescribeGatherResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_treeNodeUniqKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreeNodeUniqKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_treeNodeUniqKey.c_str(), allocator).Move(), allocator);
    }

    if (m_gatherTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatherType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatherType.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
    }

    if (m_businessCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_businessCodes.begin(); itr != m_businessCodes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_productCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productCodes.begin(); itr != m_productCodes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_itemCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_itemCodes.begin(); itr != m_itemCodes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionIds.begin(); itr != m_regionIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_instanceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceTypes.begin(); itr != m_instanceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_payModesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_payModes.begin(); itr != m_payModes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operateUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operateUins.begin(); itr != m_operateUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerUins.begin(); itr != m_ownerUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_actionTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actionTypes.begin(); itr != m_actionTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeGatherResourceRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGatherResourceRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGatherResourceRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeGatherResourceRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGatherResourceRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGatherResourceRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeGatherResourceRequest::GetMonth() const
{
    return m_month;
}

void DescribeGatherResourceRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool DescribeGatherResourceRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

string DescribeGatherResourceRequest::GetTreeNodeUniqKey() const
{
    return m_treeNodeUniqKey;
}

void DescribeGatherResourceRequest::SetTreeNodeUniqKey(const string& _treeNodeUniqKey)
{
    m_treeNodeUniqKey = _treeNodeUniqKey;
    m_treeNodeUniqKeyHasBeenSet = true;
}

bool DescribeGatherResourceRequest::TreeNodeUniqKeyHasBeenSet() const
{
    return m_treeNodeUniqKeyHasBeenSet;
}

string DescribeGatherResourceRequest::GetGatherType() const
{
    return m_gatherType;
}

void DescribeGatherResourceRequest::SetGatherType(const string& _gatherType)
{
    m_gatherType = _gatherType;
    m_gatherTypeHasBeenSet = true;
}

bool DescribeGatherResourceRequest::GatherTypeHasBeenSet() const
{
    return m_gatherTypeHasBeenSet;
}

string DescribeGatherResourceRequest::GetSort() const
{
    return m_sort;
}

void DescribeGatherResourceRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeGatherResourceRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string DescribeGatherResourceRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeGatherResourceRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeGatherResourceRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

vector<string> DescribeGatherResourceRequest::GetBusinessCodes() const
{
    return m_businessCodes;
}

void DescribeGatherResourceRequest::SetBusinessCodes(const vector<string>& _businessCodes)
{
    m_businessCodes = _businessCodes;
    m_businessCodesHasBeenSet = true;
}

bool DescribeGatherResourceRequest::BusinessCodesHasBeenSet() const
{
    return m_businessCodesHasBeenSet;
}

vector<string> DescribeGatherResourceRequest::GetProductCodes() const
{
    return m_productCodes;
}

void DescribeGatherResourceRequest::SetProductCodes(const vector<string>& _productCodes)
{
    m_productCodes = _productCodes;
    m_productCodesHasBeenSet = true;
}

bool DescribeGatherResourceRequest::ProductCodesHasBeenSet() const
{
    return m_productCodesHasBeenSet;
}

vector<string> DescribeGatherResourceRequest::GetItemCodes() const
{
    return m_itemCodes;
}

void DescribeGatherResourceRequest::SetItemCodes(const vector<string>& _itemCodes)
{
    m_itemCodes = _itemCodes;
    m_itemCodesHasBeenSet = true;
}

bool DescribeGatherResourceRequest::ItemCodesHasBeenSet() const
{
    return m_itemCodesHasBeenSet;
}

vector<uint64_t> DescribeGatherResourceRequest::GetRegionIds() const
{
    return m_regionIds;
}

void DescribeGatherResourceRequest::SetRegionIds(const vector<uint64_t>& _regionIds)
{
    m_regionIds = _regionIds;
    m_regionIdsHasBeenSet = true;
}

bool DescribeGatherResourceRequest::RegionIdsHasBeenSet() const
{
    return m_regionIdsHasBeenSet;
}

vector<string> DescribeGatherResourceRequest::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void DescribeGatherResourceRequest::SetInstanceTypes(const vector<string>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool DescribeGatherResourceRequest::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

vector<string> DescribeGatherResourceRequest::GetPayModes() const
{
    return m_payModes;
}

void DescribeGatherResourceRequest::SetPayModes(const vector<string>& _payModes)
{
    m_payModes = _payModes;
    m_payModesHasBeenSet = true;
}

bool DescribeGatherResourceRequest::PayModesHasBeenSet() const
{
    return m_payModesHasBeenSet;
}

vector<string> DescribeGatherResourceRequest::GetOperateUins() const
{
    return m_operateUins;
}

void DescribeGatherResourceRequest::SetOperateUins(const vector<string>& _operateUins)
{
    m_operateUins = _operateUins;
    m_operateUinsHasBeenSet = true;
}

bool DescribeGatherResourceRequest::OperateUinsHasBeenSet() const
{
    return m_operateUinsHasBeenSet;
}

vector<string> DescribeGatherResourceRequest::GetOwnerUins() const
{
    return m_ownerUins;
}

void DescribeGatherResourceRequest::SetOwnerUins(const vector<string>& _ownerUins)
{
    m_ownerUins = _ownerUins;
    m_ownerUinsHasBeenSet = true;
}

bool DescribeGatherResourceRequest::OwnerUinsHasBeenSet() const
{
    return m_ownerUinsHasBeenSet;
}

string DescribeGatherResourceRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeGatherResourceRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeGatherResourceRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

vector<string> DescribeGatherResourceRequest::GetTag() const
{
    return m_tag;
}

void DescribeGatherResourceRequest::SetTag(const vector<string>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool DescribeGatherResourceRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

vector<string> DescribeGatherResourceRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeGatherResourceRequest::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeGatherResourceRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<string> DescribeGatherResourceRequest::GetActionTypes() const
{
    return m_actionTypes;
}

void DescribeGatherResourceRequest::SetActionTypes(const vector<string>& _actionTypes)
{
    m_actionTypes = _actionTypes;
    m_actionTypesHasBeenSet = true;
}

bool DescribeGatherResourceRequest::ActionTypesHasBeenSet() const
{
    return m_actionTypesHasBeenSet;
}


