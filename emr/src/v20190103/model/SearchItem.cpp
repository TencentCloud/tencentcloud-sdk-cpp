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

#include <tencentcloud/emr/v20190103/model/SearchItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

SearchItem::SearchItem() :
    m_searchTypeHasBeenSet(false),
    m_searchValueHasBeenSet(false)
{
}

CoreInternalOutcome SearchItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SearchType") && !value["SearchType"].IsNull())
    {
        if (!value["SearchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchItem.SearchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchType = string(value["SearchType"].GetString());
        m_searchTypeHasBeenSet = true;
    }

    if (value.HasMember("SearchValue") && !value["SearchValue"].IsNull())
    {
        if (!value["SearchValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchItem.SearchValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchValue = string(value["SearchValue"].GetString());
        m_searchValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_searchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_searchType.c_str(), allocator).Move(), allocator);
    }

    if (m_searchValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_searchValue.c_str(), allocator).Move(), allocator);
    }

}


string SearchItem::GetSearchType() const
{
    return m_searchType;
}

void SearchItem::SetSearchType(const string& _searchType)
{
    m_searchType = _searchType;
    m_searchTypeHasBeenSet = true;
}

bool SearchItem::SearchTypeHasBeenSet() const
{
    return m_searchTypeHasBeenSet;
}

string SearchItem::GetSearchValue() const
{
    return m_searchValue;
}

void SearchItem::SetSearchValue(const string& _searchValue)
{
    m_searchValue = _searchValue;
    m_searchValueHasBeenSet = true;
}

bool SearchItem::SearchValueHasBeenSet() const
{
    return m_searchValueHasBeenSet;
}

