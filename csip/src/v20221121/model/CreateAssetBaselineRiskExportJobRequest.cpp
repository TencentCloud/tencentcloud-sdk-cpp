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

#include <tencentcloud/csip/v20221121/model/CreateAssetBaselineRiskExportJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateAssetBaselineRiskExportJobRequest::CreateAssetBaselineRiskExportJobRequest() :
    m_assetUniqueIDHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_assetAppIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string CreateAssetBaselineRiskExportJobRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAssetBaselineRiskExportJobRequest::GetAssetUniqueID() const
{
    return m_assetUniqueID;
}

void CreateAssetBaselineRiskExportJobRequest::SetAssetUniqueID(const string& _assetUniqueID)
{
    m_assetUniqueID = _assetUniqueID;
    m_assetUniqueIDHasBeenSet = true;
}

bool CreateAssetBaselineRiskExportJobRequest::AssetUniqueIDHasBeenSet() const
{
    return m_assetUniqueIDHasBeenSet;
}

string CreateAssetBaselineRiskExportJobRequest::GetAssetType() const
{
    return m_assetType;
}

void CreateAssetBaselineRiskExportJobRequest::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool CreateAssetBaselineRiskExportJobRequest::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

uint64_t CreateAssetBaselineRiskExportJobRequest::GetAssetAppID() const
{
    return m_assetAppID;
}

void CreateAssetBaselineRiskExportJobRequest::SetAssetAppID(const uint64_t& _assetAppID)
{
    m_assetAppID = _assetAppID;
    m_assetAppIDHasBeenSet = true;
}

bool CreateAssetBaselineRiskExportJobRequest::AssetAppIDHasBeenSet() const
{
    return m_assetAppIDHasBeenSet;
}

string CreateAssetBaselineRiskExportJobRequest::GetName() const
{
    return m_name;
}

void CreateAssetBaselineRiskExportJobRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAssetBaselineRiskExportJobRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> CreateAssetBaselineRiskExportJobRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateAssetBaselineRiskExportJobRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateAssetBaselineRiskExportJobRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<Filters> CreateAssetBaselineRiskExportJobRequest::GetFilters() const
{
    return m_filters;
}

void CreateAssetBaselineRiskExportJobRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool CreateAssetBaselineRiskExportJobRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


