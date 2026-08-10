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

#include <tencentcloud/cds/v20180420/model/DescribeAssetsListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cds::V20180420::Model;
using namespace std;

DescribeAssetsListRequest::DescribeAssetsListRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_searchValuesHasBeenSet(false),
    m_assetsTypeHasBeenSet(false),
    m_assetsAddTypeHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_aliveStatusHasBeenSet(false),
    m_casbOnHasBeenSet(false),
    m_agentOnHasBeenSet(false),
    m_cdbOnHasBeenSet(false),
    m_extendCategoryHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_aidsHasBeenSet(false),
    m_bindingStateHasBeenSet(false),
    m_trafficMirrorOnHasBeenSet(false)
{
}

string DescribeAssetsListRequest::ToJsonString() const
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

    if (m_searchValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchValues";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_searchValues.begin(); itr != m_searchValues.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_assetsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetsType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetsAddTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsAddType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_assetsAddType, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_permission, allocator);
    }

    if (m_aliveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliveStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aliveStatus, allocator);
    }

    if (m_casbOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CasbOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_casbOn, allocator);
    }

    if (m_agentOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_agentOn, allocator);
    }

    if (m_cdbOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdbOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cdbOn, allocator);
    }

    if (m_extendCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extendCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_aidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aids.begin(); itr != m_aids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_bindingStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bindingState, allocator);
    }

    if (m_trafficMirrorOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trafficMirrorOn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAssetsListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAssetsListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAssetsListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeAssetsListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAssetsListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAssetsListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<NameValueString> DescribeAssetsListRequest::GetSearchValues() const
{
    return m_searchValues;
}

void DescribeAssetsListRequest::SetSearchValues(const vector<NameValueString>& _searchValues)
{
    m_searchValues = _searchValues;
    m_searchValuesHasBeenSet = true;
}

bool DescribeAssetsListRequest::SearchValuesHasBeenSet() const
{
    return m_searchValuesHasBeenSet;
}

string DescribeAssetsListRequest::GetAssetsType() const
{
    return m_assetsType;
}

void DescribeAssetsListRequest::SetAssetsType(const string& _assetsType)
{
    m_assetsType = _assetsType;
    m_assetsTypeHasBeenSet = true;
}

bool DescribeAssetsListRequest::AssetsTypeHasBeenSet() const
{
    return m_assetsTypeHasBeenSet;
}

int64_t DescribeAssetsListRequest::GetAssetsAddType() const
{
    return m_assetsAddType;
}

void DescribeAssetsListRequest::SetAssetsAddType(const int64_t& _assetsAddType)
{
    m_assetsAddType = _assetsAddType;
    m_assetsAddTypeHasBeenSet = true;
}

bool DescribeAssetsListRequest::AssetsAddTypeHasBeenSet() const
{
    return m_assetsAddTypeHasBeenSet;
}

string DescribeAssetsListRequest::GetRegionId() const
{
    return m_regionId;
}

void DescribeAssetsListRequest::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool DescribeAssetsListRequest::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t DescribeAssetsListRequest::GetPermission() const
{
    return m_permission;
}

void DescribeAssetsListRequest::SetPermission(const int64_t& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool DescribeAssetsListRequest::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

int64_t DescribeAssetsListRequest::GetAliveStatus() const
{
    return m_aliveStatus;
}

void DescribeAssetsListRequest::SetAliveStatus(const int64_t& _aliveStatus)
{
    m_aliveStatus = _aliveStatus;
    m_aliveStatusHasBeenSet = true;
}

bool DescribeAssetsListRequest::AliveStatusHasBeenSet() const
{
    return m_aliveStatusHasBeenSet;
}

int64_t DescribeAssetsListRequest::GetCasbOn() const
{
    return m_casbOn;
}

void DescribeAssetsListRequest::SetCasbOn(const int64_t& _casbOn)
{
    m_casbOn = _casbOn;
    m_casbOnHasBeenSet = true;
}

bool DescribeAssetsListRequest::CasbOnHasBeenSet() const
{
    return m_casbOnHasBeenSet;
}

int64_t DescribeAssetsListRequest::GetAgentOn() const
{
    return m_agentOn;
}

void DescribeAssetsListRequest::SetAgentOn(const int64_t& _agentOn)
{
    m_agentOn = _agentOn;
    m_agentOnHasBeenSet = true;
}

bool DescribeAssetsListRequest::AgentOnHasBeenSet() const
{
    return m_agentOnHasBeenSet;
}

int64_t DescribeAssetsListRequest::GetCdbOn() const
{
    return m_cdbOn;
}

void DescribeAssetsListRequest::SetCdbOn(const int64_t& _cdbOn)
{
    m_cdbOn = _cdbOn;
    m_cdbOnHasBeenSet = true;
}

bool DescribeAssetsListRequest::CdbOnHasBeenSet() const
{
    return m_cdbOnHasBeenSet;
}

string DescribeAssetsListRequest::GetExtendCategory() const
{
    return m_extendCategory;
}

void DescribeAssetsListRequest::SetExtendCategory(const string& _extendCategory)
{
    m_extendCategory = _extendCategory;
    m_extendCategoryHasBeenSet = true;
}

bool DescribeAssetsListRequest::ExtendCategoryHasBeenSet() const
{
    return m_extendCategoryHasBeenSet;
}

vector<uint64_t> DescribeAssetsListRequest::GetGroupIds() const
{
    return m_groupIds;
}

void DescribeAssetsListRequest::SetGroupIds(const vector<uint64_t>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool DescribeAssetsListRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

vector<uint64_t> DescribeAssetsListRequest::GetAids() const
{
    return m_aids;
}

void DescribeAssetsListRequest::SetAids(const vector<uint64_t>& _aids)
{
    m_aids = _aids;
    m_aidsHasBeenSet = true;
}

bool DescribeAssetsListRequest::AidsHasBeenSet() const
{
    return m_aidsHasBeenSet;
}

uint64_t DescribeAssetsListRequest::GetBindingState() const
{
    return m_bindingState;
}

void DescribeAssetsListRequest::SetBindingState(const uint64_t& _bindingState)
{
    m_bindingState = _bindingState;
    m_bindingStateHasBeenSet = true;
}

bool DescribeAssetsListRequest::BindingStateHasBeenSet() const
{
    return m_bindingStateHasBeenSet;
}

int64_t DescribeAssetsListRequest::GetTrafficMirrorOn() const
{
    return m_trafficMirrorOn;
}

void DescribeAssetsListRequest::SetTrafficMirrorOn(const int64_t& _trafficMirrorOn)
{
    m_trafficMirrorOn = _trafficMirrorOn;
    m_trafficMirrorOnHasBeenSet = true;
}

bool DescribeAssetsListRequest::TrafficMirrorOnHasBeenSet() const
{
    return m_trafficMirrorOnHasBeenSet;
}


