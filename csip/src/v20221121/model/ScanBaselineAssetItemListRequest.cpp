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

#include <tencentcloud/csip/v20221121/model/ScanBaselineAssetItemListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ScanBaselineAssetItemListRequest::ScanBaselineAssetItemListRequest() :
    m_policyTypeHasBeenSet(false),
    m_policyIDHasBeenSet(false),
    m_parentCategoryIDHasBeenSet(false),
    m_itemIDListHasBeenSet(false),
    m_assetIDHasBeenSet(false),
    m_categoryIDHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_assetTypeHasBeenSet(false)
{
}

string ScanBaselineAssetItemListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyID, allocator);
    }

    if (m_parentCategoryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCategoryID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parentCategoryID, allocator);
    }

    if (m_itemIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_itemIDList.begin(); itr != m_itemIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_assetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetID.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_categoryID, allocator);
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


string ScanBaselineAssetItemListRequest::GetPolicyType() const
{
    return m_policyType;
}

void ScanBaselineAssetItemListRequest::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool ScanBaselineAssetItemListRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

uint64_t ScanBaselineAssetItemListRequest::GetPolicyID() const
{
    return m_policyID;
}

void ScanBaselineAssetItemListRequest::SetPolicyID(const uint64_t& _policyID)
{
    m_policyID = _policyID;
    m_policyIDHasBeenSet = true;
}

bool ScanBaselineAssetItemListRequest::PolicyIDHasBeenSet() const
{
    return m_policyIDHasBeenSet;
}

uint64_t ScanBaselineAssetItemListRequest::GetParentCategoryID() const
{
    return m_parentCategoryID;
}

void ScanBaselineAssetItemListRequest::SetParentCategoryID(const uint64_t& _parentCategoryID)
{
    m_parentCategoryID = _parentCategoryID;
    m_parentCategoryIDHasBeenSet = true;
}

bool ScanBaselineAssetItemListRequest::ParentCategoryIDHasBeenSet() const
{
    return m_parentCategoryIDHasBeenSet;
}

vector<uint64_t> ScanBaselineAssetItemListRequest::GetItemIDList() const
{
    return m_itemIDList;
}

void ScanBaselineAssetItemListRequest::SetItemIDList(const vector<uint64_t>& _itemIDList)
{
    m_itemIDList = _itemIDList;
    m_itemIDListHasBeenSet = true;
}

bool ScanBaselineAssetItemListRequest::ItemIDListHasBeenSet() const
{
    return m_itemIDListHasBeenSet;
}

string ScanBaselineAssetItemListRequest::GetAssetID() const
{
    return m_assetID;
}

void ScanBaselineAssetItemListRequest::SetAssetID(const string& _assetID)
{
    m_assetID = _assetID;
    m_assetIDHasBeenSet = true;
}

bool ScanBaselineAssetItemListRequest::AssetIDHasBeenSet() const
{
    return m_assetIDHasBeenSet;
}

uint64_t ScanBaselineAssetItemListRequest::GetCategoryID() const
{
    return m_categoryID;
}

void ScanBaselineAssetItemListRequest::SetCategoryID(const uint64_t& _categoryID)
{
    m_categoryID = _categoryID;
    m_categoryIDHasBeenSet = true;
}

bool ScanBaselineAssetItemListRequest::CategoryIDHasBeenSet() const
{
    return m_categoryIDHasBeenSet;
}

vector<string> ScanBaselineAssetItemListRequest::GetMemberId() const
{
    return m_memberId;
}

void ScanBaselineAssetItemListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ScanBaselineAssetItemListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string ScanBaselineAssetItemListRequest::GetAssetType() const
{
    return m_assetType;
}

void ScanBaselineAssetItemListRequest::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool ScanBaselineAssetItemListRequest::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}


