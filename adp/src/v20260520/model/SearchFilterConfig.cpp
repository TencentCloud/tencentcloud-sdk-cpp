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

#include <tencentcloud/adp/v20260520/model/SearchFilterConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SearchFilterConfig::SearchFilterConfig() :
    m_onlyRetrievalSelectedLabelHasBeenSet(false),
    m_searchFilterHasBeenSet(false)
{
}

CoreInternalOutcome SearchFilterConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OnlyRetrievalSelectedLabel") && !value["OnlyRetrievalSelectedLabel"].IsNull())
    {
        if (!value["OnlyRetrievalSelectedLabel"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFilterConfig.OnlyRetrievalSelectedLabel` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_onlyRetrievalSelectedLabel = value["OnlyRetrievalSelectedLabel"].GetBool();
        m_onlyRetrievalSelectedLabelHasBeenSet = true;
    }

    if (value.HasMember("SearchFilter") && !value["SearchFilter"].IsNull())
    {
        if (!value["SearchFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFilterConfig.SearchFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_searchFilter.Deserialize(value["SearchFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_searchFilterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchFilterConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_onlyRetrievalSelectedLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyRetrievalSelectedLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlyRetrievalSelectedLabel, allocator);
    }

    if (m_searchFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchFilter.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool SearchFilterConfig::GetOnlyRetrievalSelectedLabel() const
{
    return m_onlyRetrievalSelectedLabel;
}

void SearchFilterConfig::SetOnlyRetrievalSelectedLabel(const bool& _onlyRetrievalSelectedLabel)
{
    m_onlyRetrievalSelectedLabel = _onlyRetrievalSelectedLabel;
    m_onlyRetrievalSelectedLabelHasBeenSet = true;
}

bool SearchFilterConfig::OnlyRetrievalSelectedLabelHasBeenSet() const
{
    return m_onlyRetrievalSelectedLabelHasBeenSet;
}

SearchFilter SearchFilterConfig::GetSearchFilter() const
{
    return m_searchFilter;
}

void SearchFilterConfig::SetSearchFilter(const SearchFilter& _searchFilter)
{
    m_searchFilter = _searchFilter;
    m_searchFilterHasBeenSet = true;
}

bool SearchFilterConfig::SearchFilterHasBeenSet() const
{
    return m_searchFilterHasBeenSet;
}

