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

#include <tencentcloud/csip/v20221121/model/CreateBaselineAggregatedItemExportJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateBaselineAggregatedItemExportJobRequest::CreateBaselineAggregatedItemExportJobRequest() :
    m_policyIDHasBeenSet(false),
    m_parentCategoryIDHasBeenSet(false),
    m_categoryIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_exportTypeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_checkAssetTypeHasBeenSet(false)
{
}

string CreateBaselineAggregatedItemExportJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyID.begin(); itr != m_policyID.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_parentCategoryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCategoryID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parentCategoryID, allocator);
    }

    if (m_categoryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_categoryID, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_exportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exportType.c_str(), allocator).Move(), allocator);
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

    if (m_checkAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkAssetType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> CreateBaselineAggregatedItemExportJobRequest::GetPolicyID() const
{
    return m_policyID;
}

void CreateBaselineAggregatedItemExportJobRequest::SetPolicyID(const vector<uint64_t>& _policyID)
{
    m_policyID = _policyID;
    m_policyIDHasBeenSet = true;
}

bool CreateBaselineAggregatedItemExportJobRequest::PolicyIDHasBeenSet() const
{
    return m_policyIDHasBeenSet;
}

uint64_t CreateBaselineAggregatedItemExportJobRequest::GetParentCategoryID() const
{
    return m_parentCategoryID;
}

void CreateBaselineAggregatedItemExportJobRequest::SetParentCategoryID(const uint64_t& _parentCategoryID)
{
    m_parentCategoryID = _parentCategoryID;
    m_parentCategoryIDHasBeenSet = true;
}

bool CreateBaselineAggregatedItemExportJobRequest::ParentCategoryIDHasBeenSet() const
{
    return m_parentCategoryIDHasBeenSet;
}

uint64_t CreateBaselineAggregatedItemExportJobRequest::GetCategoryID() const
{
    return m_categoryID;
}

void CreateBaselineAggregatedItemExportJobRequest::SetCategoryID(const uint64_t& _categoryID)
{
    m_categoryID = _categoryID;
    m_categoryIDHasBeenSet = true;
}

bool CreateBaselineAggregatedItemExportJobRequest::CategoryIDHasBeenSet() const
{
    return m_categoryIDHasBeenSet;
}

string CreateBaselineAggregatedItemExportJobRequest::GetName() const
{
    return m_name;
}

void CreateBaselineAggregatedItemExportJobRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateBaselineAggregatedItemExportJobRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateBaselineAggregatedItemExportJobRequest::GetExportType() const
{
    return m_exportType;
}

void CreateBaselineAggregatedItemExportJobRequest::SetExportType(const string& _exportType)
{
    m_exportType = _exportType;
    m_exportTypeHasBeenSet = true;
}

bool CreateBaselineAggregatedItemExportJobRequest::ExportTypeHasBeenSet() const
{
    return m_exportTypeHasBeenSet;
}

vector<string> CreateBaselineAggregatedItemExportJobRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateBaselineAggregatedItemExportJobRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateBaselineAggregatedItemExportJobRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<Filters> CreateBaselineAggregatedItemExportJobRequest::GetFilters() const
{
    return m_filters;
}

void CreateBaselineAggregatedItemExportJobRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool CreateBaselineAggregatedItemExportJobRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string CreateBaselineAggregatedItemExportJobRequest::GetCheckAssetType() const
{
    return m_checkAssetType;
}

void CreateBaselineAggregatedItemExportJobRequest::SetCheckAssetType(const string& _checkAssetType)
{
    m_checkAssetType = _checkAssetType;
    m_checkAssetTypeHasBeenSet = true;
}

bool CreateBaselineAggregatedItemExportJobRequest::CheckAssetTypeHasBeenSet() const
{
    return m_checkAssetTypeHasBeenSet;
}


