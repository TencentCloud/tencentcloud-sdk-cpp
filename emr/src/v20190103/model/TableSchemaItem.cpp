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

#include <tencentcloud/emr/v20190103/model/TableSchemaItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

TableSchemaItem::TableSchemaItem() :
    m_nameHasBeenSet(false),
    m_sortableHasBeenSet(false),
    m_withFilterHasBeenSet(false),
    m_candidatesHasBeenSet(false),
    m_clickableHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

CoreInternalOutcome TableSchemaItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableSchemaItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Sortable") && !value["Sortable"].IsNull())
    {
        if (!value["Sortable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TableSchemaItem.Sortable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sortable = value["Sortable"].GetBool();
        m_sortableHasBeenSet = true;
    }

    if (value.HasMember("WithFilter") && !value["WithFilter"].IsNull())
    {
        if (!value["WithFilter"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TableSchemaItem.WithFilter` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_withFilter = value["WithFilter"].GetBool();
        m_withFilterHasBeenSet = true;
    }

    if (value.HasMember("Candidates") && !value["Candidates"].IsNull())
    {
        if (!value["Candidates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableSchemaItem.Candidates` is not array type"));

        const rapidjson::Value &tmpValue = value["Candidates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_candidates.push_back((*itr).GetString());
        }
        m_candidatesHasBeenSet = true;
    }

    if (value.HasMember("Clickable") && !value["Clickable"].IsNull())
    {
        if (!value["Clickable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TableSchemaItem.Clickable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_clickable = value["Clickable"].GetBool();
        m_clickableHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableSchemaItem.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableSchemaItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sortableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sortable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sortable, allocator);
    }

    if (m_withFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_withFilter, allocator);
    }

    if (m_candidatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Candidates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_candidates.begin(); itr != m_candidates.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clickableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clickable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clickable, allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

}


string TableSchemaItem::GetName() const
{
    return m_name;
}

void TableSchemaItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TableSchemaItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool TableSchemaItem::GetSortable() const
{
    return m_sortable;
}

void TableSchemaItem::SetSortable(const bool& _sortable)
{
    m_sortable = _sortable;
    m_sortableHasBeenSet = true;
}

bool TableSchemaItem::SortableHasBeenSet() const
{
    return m_sortableHasBeenSet;
}

bool TableSchemaItem::GetWithFilter() const
{
    return m_withFilter;
}

void TableSchemaItem::SetWithFilter(const bool& _withFilter)
{
    m_withFilter = _withFilter;
    m_withFilterHasBeenSet = true;
}

bool TableSchemaItem::WithFilterHasBeenSet() const
{
    return m_withFilterHasBeenSet;
}

vector<string> TableSchemaItem::GetCandidates() const
{
    return m_candidates;
}

void TableSchemaItem::SetCandidates(const vector<string>& _candidates)
{
    m_candidates = _candidates;
    m_candidatesHasBeenSet = true;
}

bool TableSchemaItem::CandidatesHasBeenSet() const
{
    return m_candidatesHasBeenSet;
}

bool TableSchemaItem::GetClickable() const
{
    return m_clickable;
}

void TableSchemaItem::SetClickable(const bool& _clickable)
{
    m_clickable = _clickable;
    m_clickableHasBeenSet = true;
}

bool TableSchemaItem::ClickableHasBeenSet() const
{
    return m_clickableHasBeenSet;
}

string TableSchemaItem::GetTitle() const
{
    return m_title;
}

void TableSchemaItem::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool TableSchemaItem::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

