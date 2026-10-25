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

#include <tencentcloud/databuddy/v20260715/model/SearchAssetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

SearchAssetRequest::SearchAssetRequest() :
    m_workspaceIdHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_assetTypesHasBeenSet(false),
    m_pageTokenHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_tagIdsHasBeenSet(false),
    m_tagValueIdsHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_catalogNamesHasBeenSet(false),
    m_workspacePathsHasBeenSet(false),
    m_enableHybridSearchHasBeenSet(false),
    m_fieldTagIdsHasBeenSet(false),
    m_orderBysHasBeenSet(false)
{
}

string SearchAssetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetTypes.begin(); itr != m_assetTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pageTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageToken.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_owner.begin(); itr != m_owner.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIds.begin(); itr != m_tagIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_tagValueIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValueIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagValueIds.begin(); itr != m_tagValueIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_catalogNames.begin(); itr != m_catalogNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workspacePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspacePaths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workspacePaths.begin(); itr != m_workspacePaths.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableHybridSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHybridSearch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableHybridSearch, allocator);
    }

    if (m_fieldTagIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldTagIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fieldTagIds.begin(); itr != m_fieldTagIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_orderBysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orderBys.begin(); itr != m_orderBys.end(); ++itr, ++i)
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


string SearchAssetRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void SearchAssetRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool SearchAssetRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

int64_t SearchAssetRequest::GetMaxResults() const
{
    return m_maxResults;
}

void SearchAssetRequest::SetMaxResults(const int64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool SearchAssetRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string SearchAssetRequest::GetKeyword() const
{
    return m_keyword;
}

void SearchAssetRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool SearchAssetRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

vector<string> SearchAssetRequest::GetAssetTypes() const
{
    return m_assetTypes;
}

void SearchAssetRequest::SetAssetTypes(const vector<string>& _assetTypes)
{
    m_assetTypes = _assetTypes;
    m_assetTypesHasBeenSet = true;
}

bool SearchAssetRequest::AssetTypesHasBeenSet() const
{
    return m_assetTypesHasBeenSet;
}

string SearchAssetRequest::GetPageToken() const
{
    return m_pageToken;
}

void SearchAssetRequest::SetPageToken(const string& _pageToken)
{
    m_pageToken = _pageToken;
    m_pageTokenHasBeenSet = true;
}

bool SearchAssetRequest::PageTokenHasBeenSet() const
{
    return m_pageTokenHasBeenSet;
}

vector<string> SearchAssetRequest::GetOwner() const
{
    return m_owner;
}

void SearchAssetRequest::SetOwner(const vector<string>& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool SearchAssetRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

vector<int64_t> SearchAssetRequest::GetTagIds() const
{
    return m_tagIds;
}

void SearchAssetRequest::SetTagIds(const vector<int64_t>& _tagIds)
{
    m_tagIds = _tagIds;
    m_tagIdsHasBeenSet = true;
}

bool SearchAssetRequest::TagIdsHasBeenSet() const
{
    return m_tagIdsHasBeenSet;
}

vector<int64_t> SearchAssetRequest::GetTagValueIds() const
{
    return m_tagValueIds;
}

void SearchAssetRequest::SetTagValueIds(const vector<int64_t>& _tagValueIds)
{
    m_tagValueIds = _tagValueIds;
    m_tagValueIdsHasBeenSet = true;
}

bool SearchAssetRequest::TagValueIdsHasBeenSet() const
{
    return m_tagValueIdsHasBeenSet;
}

string SearchAssetRequest::GetModifiedTime() const
{
    return m_modifiedTime;
}

void SearchAssetRequest::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool SearchAssetRequest::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

vector<string> SearchAssetRequest::GetCatalogNames() const
{
    return m_catalogNames;
}

void SearchAssetRequest::SetCatalogNames(const vector<string>& _catalogNames)
{
    m_catalogNames = _catalogNames;
    m_catalogNamesHasBeenSet = true;
}

bool SearchAssetRequest::CatalogNamesHasBeenSet() const
{
    return m_catalogNamesHasBeenSet;
}

vector<string> SearchAssetRequest::GetWorkspacePaths() const
{
    return m_workspacePaths;
}

void SearchAssetRequest::SetWorkspacePaths(const vector<string>& _workspacePaths)
{
    m_workspacePaths = _workspacePaths;
    m_workspacePathsHasBeenSet = true;
}

bool SearchAssetRequest::WorkspacePathsHasBeenSet() const
{
    return m_workspacePathsHasBeenSet;
}

bool SearchAssetRequest::GetEnableHybridSearch() const
{
    return m_enableHybridSearch;
}

void SearchAssetRequest::SetEnableHybridSearch(const bool& _enableHybridSearch)
{
    m_enableHybridSearch = _enableHybridSearch;
    m_enableHybridSearchHasBeenSet = true;
}

bool SearchAssetRequest::EnableHybridSearchHasBeenSet() const
{
    return m_enableHybridSearchHasBeenSet;
}

vector<int64_t> SearchAssetRequest::GetFieldTagIds() const
{
    return m_fieldTagIds;
}

void SearchAssetRequest::SetFieldTagIds(const vector<int64_t>& _fieldTagIds)
{
    m_fieldTagIds = _fieldTagIds;
    m_fieldTagIdsHasBeenSet = true;
}

bool SearchAssetRequest::FieldTagIdsHasBeenSet() const
{
    return m_fieldTagIdsHasBeenSet;
}

vector<OrderBy> SearchAssetRequest::GetOrderBys() const
{
    return m_orderBys;
}

void SearchAssetRequest::SetOrderBys(const vector<OrderBy>& _orderBys)
{
    m_orderBys = _orderBys;
    m_orderBysHasBeenSet = true;
}

bool SearchAssetRequest::OrderBysHasBeenSet() const
{
    return m_orderBysHasBeenSet;
}


