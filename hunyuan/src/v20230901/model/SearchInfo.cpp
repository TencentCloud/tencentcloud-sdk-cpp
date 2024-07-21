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
    m_searchResultsHasBeenSet(false)
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

