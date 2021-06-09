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

#include <tencentcloud/yunsou/v20180504/model/DataSearchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yunsou::V20180504::Model;
using namespace std;

DataSearchRequest::DataSearchRequest() :
    m_resourceIdHasBeenSet(false),
    m_searchQueryHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_numPerPageHasBeenSet(false),
    m_searchIdHasBeenSet(false),
    m_queryEncodeHasBeenSet(false),
    m_rankTypeHasBeenSet(false),
    m_numFilterHasBeenSet(false),
    m_clFilterHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_secondSearchHasBeenSet(false),
    m_maxDocReturnHasBeenSet(false),
    m_isSmartboxHasBeenSet(false),
    m_enableAbsHighlightHasBeenSet(false),
    m_qcBidHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_distinctHasBeenSet(false),
    m_l4RankExpressionHasBeenSet(false),
    m_matchValueHasBeenSet(false),
    m_longitudeHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_multiFilterHasBeenSet(false)
{
}

string DataSearchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceId, allocator);
    }

    if (m_searchQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchQuery";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchQuery.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageId, allocator);
    }

    if (m_numPerPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumPerPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_numPerPage, allocator);
    }

    if (m_searchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryEncodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryEncode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryEncode, allocator);
    }

    if (m_rankTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RankType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rankType, allocator);
    }

    if (m_numFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_numFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_clFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceId, allocator);
    }

    if (m_secondSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondSearch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_secondSearch, allocator);
    }

    if (m_maxDocReturnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDocReturn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDocReturn, allocator);
    }

    if (m_isSmartboxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSmartbox";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSmartbox, allocator);
    }

    if (m_enableAbsHighlightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAbsHighlight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAbsHighlight, allocator);
    }

    if (m_qcBidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QcBid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qcBid, allocator);
    }

    if (m_groupByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupBy.c_str(), allocator).Move(), allocator);
    }

    if (m_distinctHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Distinct";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_distinct.c_str(), allocator).Move(), allocator);
    }

    if (m_l4RankExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L4RankExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_l4RankExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_matchValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_matchValue.c_str(), allocator).Move(), allocator);
    }

    if (m_longitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Longitude";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_longitude, allocator);
    }

    if (m_latitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latitude";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_latitude, allocator);
    }

    if (m_multiFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_multiFilter.begin(); itr != m_multiFilter.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DataSearchRequest::GetResourceId() const
{
    return m_resourceId;
}

void DataSearchRequest::SetResourceId(const uint64_t& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DataSearchRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DataSearchRequest::GetSearchQuery() const
{
    return m_searchQuery;
}

void DataSearchRequest::SetSearchQuery(const string& _searchQuery)
{
    m_searchQuery = _searchQuery;
    m_searchQueryHasBeenSet = true;
}

bool DataSearchRequest::SearchQueryHasBeenSet() const
{
    return m_searchQueryHasBeenSet;
}

uint64_t DataSearchRequest::GetPageId() const
{
    return m_pageId;
}

void DataSearchRequest::SetPageId(const uint64_t& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool DataSearchRequest::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

uint64_t DataSearchRequest::GetNumPerPage() const
{
    return m_numPerPage;
}

void DataSearchRequest::SetNumPerPage(const uint64_t& _numPerPage)
{
    m_numPerPage = _numPerPage;
    m_numPerPageHasBeenSet = true;
}

bool DataSearchRequest::NumPerPageHasBeenSet() const
{
    return m_numPerPageHasBeenSet;
}

string DataSearchRequest::GetSearchId() const
{
    return m_searchId;
}

void DataSearchRequest::SetSearchId(const string& _searchId)
{
    m_searchId = _searchId;
    m_searchIdHasBeenSet = true;
}

bool DataSearchRequest::SearchIdHasBeenSet() const
{
    return m_searchIdHasBeenSet;
}

uint64_t DataSearchRequest::GetQueryEncode() const
{
    return m_queryEncode;
}

void DataSearchRequest::SetQueryEncode(const uint64_t& _queryEncode)
{
    m_queryEncode = _queryEncode;
    m_queryEncodeHasBeenSet = true;
}

bool DataSearchRequest::QueryEncodeHasBeenSet() const
{
    return m_queryEncodeHasBeenSet;
}

uint64_t DataSearchRequest::GetRankType() const
{
    return m_rankType;
}

void DataSearchRequest::SetRankType(const uint64_t& _rankType)
{
    m_rankType = _rankType;
    m_rankTypeHasBeenSet = true;
}

bool DataSearchRequest::RankTypeHasBeenSet() const
{
    return m_rankTypeHasBeenSet;
}

string DataSearchRequest::GetNumFilter() const
{
    return m_numFilter;
}

void DataSearchRequest::SetNumFilter(const string& _numFilter)
{
    m_numFilter = _numFilter;
    m_numFilterHasBeenSet = true;
}

bool DataSearchRequest::NumFilterHasBeenSet() const
{
    return m_numFilterHasBeenSet;
}

string DataSearchRequest::GetClFilter() const
{
    return m_clFilter;
}

void DataSearchRequest::SetClFilter(const string& _clFilter)
{
    m_clFilter = _clFilter;
    m_clFilterHasBeenSet = true;
}

bool DataSearchRequest::ClFilterHasBeenSet() const
{
    return m_clFilterHasBeenSet;
}

string DataSearchRequest::GetExtra() const
{
    return m_extra;
}

void DataSearchRequest::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool DataSearchRequest::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

uint64_t DataSearchRequest::GetSourceId() const
{
    return m_sourceId;
}

void DataSearchRequest::SetSourceId(const uint64_t& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool DataSearchRequest::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

uint64_t DataSearchRequest::GetSecondSearch() const
{
    return m_secondSearch;
}

void DataSearchRequest::SetSecondSearch(const uint64_t& _secondSearch)
{
    m_secondSearch = _secondSearch;
    m_secondSearchHasBeenSet = true;
}

bool DataSearchRequest::SecondSearchHasBeenSet() const
{
    return m_secondSearchHasBeenSet;
}

uint64_t DataSearchRequest::GetMaxDocReturn() const
{
    return m_maxDocReturn;
}

void DataSearchRequest::SetMaxDocReturn(const uint64_t& _maxDocReturn)
{
    m_maxDocReturn = _maxDocReturn;
    m_maxDocReturnHasBeenSet = true;
}

bool DataSearchRequest::MaxDocReturnHasBeenSet() const
{
    return m_maxDocReturnHasBeenSet;
}

uint64_t DataSearchRequest::GetIsSmartbox() const
{
    return m_isSmartbox;
}

void DataSearchRequest::SetIsSmartbox(const uint64_t& _isSmartbox)
{
    m_isSmartbox = _isSmartbox;
    m_isSmartboxHasBeenSet = true;
}

bool DataSearchRequest::IsSmartboxHasBeenSet() const
{
    return m_isSmartboxHasBeenSet;
}

uint64_t DataSearchRequest::GetEnableAbsHighlight() const
{
    return m_enableAbsHighlight;
}

void DataSearchRequest::SetEnableAbsHighlight(const uint64_t& _enableAbsHighlight)
{
    m_enableAbsHighlight = _enableAbsHighlight;
    m_enableAbsHighlightHasBeenSet = true;
}

bool DataSearchRequest::EnableAbsHighlightHasBeenSet() const
{
    return m_enableAbsHighlightHasBeenSet;
}

uint64_t DataSearchRequest::GetQcBid() const
{
    return m_qcBid;
}

void DataSearchRequest::SetQcBid(const uint64_t& _qcBid)
{
    m_qcBid = _qcBid;
    m_qcBidHasBeenSet = true;
}

bool DataSearchRequest::QcBidHasBeenSet() const
{
    return m_qcBidHasBeenSet;
}

string DataSearchRequest::GetGroupBy() const
{
    return m_groupBy;
}

void DataSearchRequest::SetGroupBy(const string& _groupBy)
{
    m_groupBy = _groupBy;
    m_groupByHasBeenSet = true;
}

bool DataSearchRequest::GroupByHasBeenSet() const
{
    return m_groupByHasBeenSet;
}

string DataSearchRequest::GetDistinct() const
{
    return m_distinct;
}

void DataSearchRequest::SetDistinct(const string& _distinct)
{
    m_distinct = _distinct;
    m_distinctHasBeenSet = true;
}

bool DataSearchRequest::DistinctHasBeenSet() const
{
    return m_distinctHasBeenSet;
}

string DataSearchRequest::GetL4RankExpression() const
{
    return m_l4RankExpression;
}

void DataSearchRequest::SetL4RankExpression(const string& _l4RankExpression)
{
    m_l4RankExpression = _l4RankExpression;
    m_l4RankExpressionHasBeenSet = true;
}

bool DataSearchRequest::L4RankExpressionHasBeenSet() const
{
    return m_l4RankExpressionHasBeenSet;
}

string DataSearchRequest::GetMatchValue() const
{
    return m_matchValue;
}

void DataSearchRequest::SetMatchValue(const string& _matchValue)
{
    m_matchValue = _matchValue;
    m_matchValueHasBeenSet = true;
}

bool DataSearchRequest::MatchValueHasBeenSet() const
{
    return m_matchValueHasBeenSet;
}

double DataSearchRequest::GetLongitude() const
{
    return m_longitude;
}

void DataSearchRequest::SetLongitude(const double& _longitude)
{
    m_longitude = _longitude;
    m_longitudeHasBeenSet = true;
}

bool DataSearchRequest::LongitudeHasBeenSet() const
{
    return m_longitudeHasBeenSet;
}

double DataSearchRequest::GetLatitude() const
{
    return m_latitude;
}

void DataSearchRequest::SetLatitude(const double& _latitude)
{
    m_latitude = _latitude;
    m_latitudeHasBeenSet = true;
}

bool DataSearchRequest::LatitudeHasBeenSet() const
{
    return m_latitudeHasBeenSet;
}

vector<string> DataSearchRequest::GetMultiFilter() const
{
    return m_multiFilter;
}

void DataSearchRequest::SetMultiFilter(const vector<string>& _multiFilter)
{
    m_multiFilter = _multiFilter;
    m_multiFilterHasBeenSet = true;
}

bool DataSearchRequest::MultiFilterHasBeenSet() const
{
    return m_multiFilterHasBeenSet;
}


