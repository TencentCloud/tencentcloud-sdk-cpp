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

#include <tencentcloud/wedata/v20210820/model/InstanceSearchCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceSearchCondition::InstanceSearchCondition() :
    m_cycleListHasBeenSet(false),
    m_dateFromHasBeenSet(false),
    m_dateToHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_sortColHasBeenSet(false),
    m_stateListHasBeenSet(false)
{
}

CoreInternalOutcome InstanceSearchCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CycleList") && !value["CycleList"].IsNull())
    {
        if (!value["CycleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceSearchCondition.CycleList` is not array type"));

        const rapidjson::Value &tmpValue = value["CycleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cycleList.push_back((*itr).GetString());
        }
        m_cycleListHasBeenSet = true;
    }

    if (value.HasMember("DateFrom") && !value["DateFrom"].IsNull())
    {
        if (!value["DateFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSearchCondition.DateFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateFrom = string(value["DateFrom"].GetString());
        m_dateFromHasBeenSet = true;
    }

    if (value.HasMember("DateTo") && !value["DateTo"].IsNull())
    {
        if (!value["DateTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSearchCondition.DateTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateTo = string(value["DateTo"].GetString());
        m_dateToHasBeenSet = true;
    }

    if (value.HasMember("Instance") && !value["Instance"].IsNull())
    {
        if (!value["Instance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSearchCondition.Instance` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `InstanceSearchCondition.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSearchCondition.Sort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sort = string(value["Sort"].GetString());
        m_sortHasBeenSet = true;
    }

    if (value.HasMember("SortCol") && !value["SortCol"].IsNull())
    {
        if (!value["SortCol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSearchCondition.SortCol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sortCol = string(value["SortCol"].GetString());
        m_sortColHasBeenSet = true;
    }

    if (value.HasMember("StateList") && !value["StateList"].IsNull())
    {
        if (!value["StateList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceSearchCondition.StateList` is not array type"));

        const rapidjson::Value &tmpValue = value["StateList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_stateList.push_back((*itr).GetString());
        }
        m_stateListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceSearchCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cycleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cycleList.begin(); itr != m_cycleList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dateFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_dateToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateTo.c_str(), allocator).Move(), allocator);
    }

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

    if (m_stateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_stateList.begin(); itr != m_stateList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> InstanceSearchCondition::GetCycleList() const
{
    return m_cycleList;
}

void InstanceSearchCondition::SetCycleList(const vector<string>& _cycleList)
{
    m_cycleList = _cycleList;
    m_cycleListHasBeenSet = true;
}

bool InstanceSearchCondition::CycleListHasBeenSet() const
{
    return m_cycleListHasBeenSet;
}

string InstanceSearchCondition::GetDateFrom() const
{
    return m_dateFrom;
}

void InstanceSearchCondition::SetDateFrom(const string& _dateFrom)
{
    m_dateFrom = _dateFrom;
    m_dateFromHasBeenSet = true;
}

bool InstanceSearchCondition::DateFromHasBeenSet() const
{
    return m_dateFromHasBeenSet;
}

string InstanceSearchCondition::GetDateTo() const
{
    return m_dateTo;
}

void InstanceSearchCondition::SetDateTo(const string& _dateTo)
{
    m_dateTo = _dateTo;
    m_dateToHasBeenSet = true;
}

bool InstanceSearchCondition::DateToHasBeenSet() const
{
    return m_dateToHasBeenSet;
}

InstanceCondition InstanceSearchCondition::GetInstance() const
{
    return m_instance;
}

void InstanceSearchCondition::SetInstance(const InstanceCondition& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool InstanceSearchCondition::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

string InstanceSearchCondition::GetKeyword() const
{
    return m_keyword;
}

void InstanceSearchCondition::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool InstanceSearchCondition::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string InstanceSearchCondition::GetSort() const
{
    return m_sort;
}

void InstanceSearchCondition::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool InstanceSearchCondition::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string InstanceSearchCondition::GetSortCol() const
{
    return m_sortCol;
}

void InstanceSearchCondition::SetSortCol(const string& _sortCol)
{
    m_sortCol = _sortCol;
    m_sortColHasBeenSet = true;
}

bool InstanceSearchCondition::SortColHasBeenSet() const
{
    return m_sortColHasBeenSet;
}

vector<string> InstanceSearchCondition::GetStateList() const
{
    return m_stateList;
}

void InstanceSearchCondition::SetStateList(const vector<string>& _stateList)
{
    m_stateList = _stateList;
    m_stateListHasBeenSet = true;
}

bool InstanceSearchCondition::StateListHasBeenSet() const
{
    return m_stateListHasBeenSet;
}

