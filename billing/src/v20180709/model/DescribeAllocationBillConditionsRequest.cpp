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

#include <tencentcloud/billing/v20180709/model/DescribeAllocationBillConditionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeAllocationBillConditionsRequest::DescribeAllocationBillConditionsRequest() :
    m_monthHasBeenSet(false),
    m_treeNodeUniqKeysHasBeenSet(false),
    m_billDatesHasBeenSet(false),
    m_businessCodesHasBeenSet(false),
    m_ownerUinsHasBeenSet(false),
    m_operateUinsHasBeenSet(false),
    m_payModesHasBeenSet(false),
    m_actionTypesHasBeenSet(false),
    m_productCodesHasBeenSet(false),
    m_regionIdsHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_componentCodesHasBeenSet(false),
    m_itemCodesHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_allocationTypeHasBeenSet(false)
{
}

string DescribeAllocationBillConditionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_treeNodeUniqKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreeNodeUniqKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_treeNodeUniqKeys.begin(); itr != m_treeNodeUniqKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_billDatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillDates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_billDates.begin(); itr != m_billDates.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_regionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionIds.begin(); itr != m_regionIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zoneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneIds.begin(); itr != m_zoneIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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

    if (m_componentCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_componentCodes.begin(); itr != m_componentCodes.end(); ++itr)
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

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_allocationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allocationType.begin(); itr != m_allocationType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAllocationBillConditionsRequest::GetMonth() const
{
    return m_month;
}

void DescribeAllocationBillConditionsRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

vector<string> DescribeAllocationBillConditionsRequest::GetTreeNodeUniqKeys() const
{
    return m_treeNodeUniqKeys;
}

void DescribeAllocationBillConditionsRequest::SetTreeNodeUniqKeys(const vector<string>& _treeNodeUniqKeys)
{
    m_treeNodeUniqKeys = _treeNodeUniqKeys;
    m_treeNodeUniqKeysHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::TreeNodeUniqKeysHasBeenSet() const
{
    return m_treeNodeUniqKeysHasBeenSet;
}

vector<string> DescribeAllocationBillConditionsRequest::GetBillDates() const
{
    return m_billDates;
}

void DescribeAllocationBillConditionsRequest::SetBillDates(const vector<string>& _billDates)
{
    m_billDates = _billDates;
    m_billDatesHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::BillDatesHasBeenSet() const
{
    return m_billDatesHasBeenSet;
}

vector<string> DescribeAllocationBillConditionsRequest::GetBusinessCodes() const
{
    return m_businessCodes;
}

void DescribeAllocationBillConditionsRequest::SetBusinessCodes(const vector<string>& _businessCodes)
{
    m_businessCodes = _businessCodes;
    m_businessCodesHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::BusinessCodesHasBeenSet() const
{
    return m_businessCodesHasBeenSet;
}

vector<string> DescribeAllocationBillConditionsRequest::GetOwnerUins() const
{
    return m_ownerUins;
}

void DescribeAllocationBillConditionsRequest::SetOwnerUins(const vector<string>& _ownerUins)
{
    m_ownerUins = _ownerUins;
    m_ownerUinsHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::OwnerUinsHasBeenSet() const
{
    return m_ownerUinsHasBeenSet;
}

vector<string> DescribeAllocationBillConditionsRequest::GetOperateUins() const
{
    return m_operateUins;
}

void DescribeAllocationBillConditionsRequest::SetOperateUins(const vector<string>& _operateUins)
{
    m_operateUins = _operateUins;
    m_operateUinsHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::OperateUinsHasBeenSet() const
{
    return m_operateUinsHasBeenSet;
}

vector<string> DescribeAllocationBillConditionsRequest::GetPayModes() const
{
    return m_payModes;
}

void DescribeAllocationBillConditionsRequest::SetPayModes(const vector<string>& _payModes)
{
    m_payModes = _payModes;
    m_payModesHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::PayModesHasBeenSet() const
{
    return m_payModesHasBeenSet;
}

vector<string> DescribeAllocationBillConditionsRequest::GetActionTypes() const
{
    return m_actionTypes;
}

void DescribeAllocationBillConditionsRequest::SetActionTypes(const vector<string>& _actionTypes)
{
    m_actionTypes = _actionTypes;
    m_actionTypesHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::ActionTypesHasBeenSet() const
{
    return m_actionTypesHasBeenSet;
}

vector<string> DescribeAllocationBillConditionsRequest::GetProductCodes() const
{
    return m_productCodes;
}

void DescribeAllocationBillConditionsRequest::SetProductCodes(const vector<string>& _productCodes)
{
    m_productCodes = _productCodes;
    m_productCodesHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::ProductCodesHasBeenSet() const
{
    return m_productCodesHasBeenSet;
}

vector<string> DescribeAllocationBillConditionsRequest::GetRegionIds() const
{
    return m_regionIds;
}

void DescribeAllocationBillConditionsRequest::SetRegionIds(const vector<string>& _regionIds)
{
    m_regionIds = _regionIds;
    m_regionIdsHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::RegionIdsHasBeenSet() const
{
    return m_regionIdsHasBeenSet;
}

vector<string> DescribeAllocationBillConditionsRequest::GetZoneIds() const
{
    return m_zoneIds;
}

void DescribeAllocationBillConditionsRequest::SetZoneIds(const vector<string>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

vector<string> DescribeAllocationBillConditionsRequest::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void DescribeAllocationBillConditionsRequest::SetInstanceTypes(const vector<string>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

vector<string> DescribeAllocationBillConditionsRequest::GetTag() const
{
    return m_tag;
}

void DescribeAllocationBillConditionsRequest::SetTag(const vector<string>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

vector<string> DescribeAllocationBillConditionsRequest::GetComponentCodes() const
{
    return m_componentCodes;
}

void DescribeAllocationBillConditionsRequest::SetComponentCodes(const vector<string>& _componentCodes)
{
    m_componentCodes = _componentCodes;
    m_componentCodesHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::ComponentCodesHasBeenSet() const
{
    return m_componentCodesHasBeenSet;
}

vector<string> DescribeAllocationBillConditionsRequest::GetItemCodes() const
{
    return m_itemCodes;
}

void DescribeAllocationBillConditionsRequest::SetItemCodes(const vector<string>& _itemCodes)
{
    m_itemCodes = _itemCodes;
    m_itemCodesHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::ItemCodesHasBeenSet() const
{
    return m_itemCodesHasBeenSet;
}

string DescribeAllocationBillConditionsRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeAllocationBillConditionsRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

vector<uint64_t> DescribeAllocationBillConditionsRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeAllocationBillConditionsRequest::SetProjectIds(const vector<uint64_t>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<int64_t> DescribeAllocationBillConditionsRequest::GetAllocationType() const
{
    return m_allocationType;
}

void DescribeAllocationBillConditionsRequest::SetAllocationType(const vector<int64_t>& _allocationType)
{
    m_allocationType = _allocationType;
    m_allocationTypeHasBeenSet = true;
}

bool DescribeAllocationBillConditionsRequest::AllocationTypeHasBeenSet() const
{
    return m_allocationTypeHasBeenSet;
}


