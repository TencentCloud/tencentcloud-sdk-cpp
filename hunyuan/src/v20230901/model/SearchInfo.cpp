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

#include <tencentcloud/hunyuan/v20230901/model/SearchInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

SearchInfo::SearchInfo() :
    m_searchResultsHasBeenSet(false),
    m_mindmapHasBeenSet(false),
    m_relevantEventsHasBeenSet(false),
    m_relevantEntitiesHasBeenSet(false),
    m_timelineHasBeenSet(false),
    m_supportDeepSearchHasBeenSet(false),
    m_outlineHasBeenSet(false)
{
}

CoreInternalOutcome SearchInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SearchResults") && !value["SearchResults"].IsNull())
    {
        if (!value["SearchResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchInfo.SearchResults` is not array type"));

        const rapidjson::Value &tmpValue = value["SearchResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SearchResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_searchResults.push_back(item);
        }
        m_searchResultsHasBeenSet = true;
    }

    if (value.HasMember("Mindmap") && !value["Mindmap"].IsNull())
    {
        if (!value["Mindmap"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SearchInfo.Mindmap` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mindmap.Deserialize(value["Mindmap"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mindmapHasBeenSet = true;
    }

    if (value.HasMember("RelevantEvents") && !value["RelevantEvents"].IsNull())
    {
        if (!value["RelevantEvents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchInfo.RelevantEvents` is not array type"));

        const rapidjson::Value &tmpValue = value["RelevantEvents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RelevantEvent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relevantEvents.push_back(item);
        }
        m_relevantEventsHasBeenSet = true;
    }

    if (value.HasMember("RelevantEntities") && !value["RelevantEntities"].IsNull())
    {
        if (!value["RelevantEntities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchInfo.RelevantEntities` is not array type"));

        const rapidjson::Value &tmpValue = value["RelevantEntities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RelevantEntity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relevantEntities.push_back(item);
        }
        m_relevantEntitiesHasBeenSet = true;
    }

    if (value.HasMember("Timeline") && !value["Timeline"].IsNull())
    {
        if (!value["Timeline"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchInfo.Timeline` is not array type"));

        const rapidjson::Value &tmpValue = value["Timeline"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Timeline item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timeline.push_back(item);
        }
        m_timelineHasBeenSet = true;
    }

    if (value.HasMember("SupportDeepSearch") && !value["SupportDeepSearch"].IsNull())
    {
        if (!value["SupportDeepSearch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SearchInfo.SupportDeepSearch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportDeepSearch = value["SupportDeepSearch"].GetBool();
        m_supportDeepSearchHasBeenSet = true;
    }

    if (value.HasMember("Outline") && !value["Outline"].IsNull())
    {
        if (!value["Outline"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchInfo.Outline` is not array type"));

        const rapidjson::Value &tmpValue = value["Outline"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_outline.push_back((*itr).GetString());
        }
        m_outlineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_searchResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_searchResults.begin(); itr != m_searchResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mindmapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mindmap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mindmap.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_relevantEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelevantEvents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relevantEvents.begin(); itr != m_relevantEvents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_relevantEntitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelevantEntities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relevantEntities.begin(); itr != m_relevantEntities.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_timelineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeline.begin(); itr != m_timeline.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_supportDeepSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDeepSearch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDeepSearch, allocator);
    }

    if (m_outlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_outline.begin(); itr != m_outline.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<SearchResult> SearchInfo::GetSearchResults() const
{
    return m_searchResults;
}

void SearchInfo::SetSearchResults(const vector<SearchResult>& _searchResults)
{
    m_searchResults = _searchResults;
    m_searchResultsHasBeenSet = true;
}

bool SearchInfo::SearchResultsHasBeenSet() const
{
    return m_searchResultsHasBeenSet;
}

Mindmap SearchInfo::GetMindmap() const
{
    return m_mindmap;
}

void SearchInfo::SetMindmap(const Mindmap& _mindmap)
{
    m_mindmap = _mindmap;
    m_mindmapHasBeenSet = true;
}

bool SearchInfo::MindmapHasBeenSet() const
{
    return m_mindmapHasBeenSet;
}

vector<RelevantEvent> SearchInfo::GetRelevantEvents() const
{
    return m_relevantEvents;
}

void SearchInfo::SetRelevantEvents(const vector<RelevantEvent>& _relevantEvents)
{
    m_relevantEvents = _relevantEvents;
    m_relevantEventsHasBeenSet = true;
}

bool SearchInfo::RelevantEventsHasBeenSet() const
{
    return m_relevantEventsHasBeenSet;
}

vector<RelevantEntity> SearchInfo::GetRelevantEntities() const
{
    return m_relevantEntities;
}

void SearchInfo::SetRelevantEntities(const vector<RelevantEntity>& _relevantEntities)
{
    m_relevantEntities = _relevantEntities;
    m_relevantEntitiesHasBeenSet = true;
}

bool SearchInfo::RelevantEntitiesHasBeenSet() const
{
    return m_relevantEntitiesHasBeenSet;
}

vector<Timeline> SearchInfo::GetTimeline() const
{
    return m_timeline;
}

void SearchInfo::SetTimeline(const vector<Timeline>& _timeline)
{
    m_timeline = _timeline;
    m_timelineHasBeenSet = true;
}

bool SearchInfo::TimelineHasBeenSet() const
{
    return m_timelineHasBeenSet;
}

bool SearchInfo::GetSupportDeepSearch() const
{
    return m_supportDeepSearch;
}

void SearchInfo::SetSupportDeepSearch(const bool& _supportDeepSearch)
{
    m_supportDeepSearch = _supportDeepSearch;
    m_supportDeepSearchHasBeenSet = true;
}

bool SearchInfo::SupportDeepSearchHasBeenSet() const
{
    return m_supportDeepSearchHasBeenSet;
}

vector<string> SearchInfo::GetOutline() const
{
    return m_outline;
}

void SearchInfo::SetOutline(const vector<string>& _outline)
{
    m_outline = _outline;
    m_outlineHasBeenSet = true;
}

bool SearchInfo::OutlineHasBeenSet() const
{
    return m_outlineHasBeenSet;
}

