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

#include <tencentcloud/wedata/v20210820/model/SearchConditionNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SearchConditionNew::SearchConditionNew() :
    m_instanceHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_sortColHasBeenSet(false)
{
}

CoreInternalOutcome SearchConditionNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Instance") && !value["Instance"].IsNull())
    {
        if (!value["Instance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConditionNew.Instance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instance.Deserialize(value["Instance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceHasBeenSet = true;
    }

    if (value.HasMember("Keyword") && !value["Keyword"].IsNull())
    {
        if (!value["Keyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConditionNew.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConditionNew.Sort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sort = string(value["Sort"].GetString());
        m_sortHasBeenSet = true;
    }

    if (value.HasMember("SortCol") && !value["SortCol"].IsNull())
    {
        if (!value["SortCol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchConditionNew.SortCol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sortCol = string(value["SortCol"].GetString());
        m_sortColHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchConditionNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_sortColHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortCol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sortCol.c_str(), allocator).Move(), allocator);
    }

}


SearchConditionInstanceNew SearchConditionNew::GetInstance() const
{
    return m_instance;
}

void SearchConditionNew::SetInstance(const SearchConditionInstanceNew& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool SearchConditionNew::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

string SearchConditionNew::GetKeyword() const
{
    return m_keyword;
}

void SearchConditionNew::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool SearchConditionNew::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string SearchConditionNew::GetSort() const
{
    return m_sort;
}

void SearchConditionNew::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool SearchConditionNew::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string SearchConditionNew::GetSortCol() const
{
    return m_sortCol;
}

void SearchConditionNew::SetSortCol(const string& _sortCol)
{
    m_sortCol = _sortCol;
    m_sortColHasBeenSet = true;
}

bool SearchConditionNew::SortColHasBeenSet() const
{
    return m_sortColHasBeenSet;
}

