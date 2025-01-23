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

#include <tencentcloud/ocr/v20181119/model/Element.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

Element::Element() :
    m_textHasBeenSet(false),
    m_coordHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_resultListHasBeenSet(false),
    m_indexHasBeenSet(false)
{
}

CoreInternalOutcome Element::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Element.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Coord") && !value["Coord"].IsNull())
    {
        if (!value["Coord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Element.Coord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coord.Deserialize(value["Coord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coordHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Element.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("ResultList") && !value["ResultList"].IsNull())
    {
        if (!value["ResultList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Element.ResultList` is not array type"));

        const rapidjson::Value &tmpValue = value["ResultList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResultList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resultList.push_back(item);
        }
        m_resultListHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Element.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Element::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_coordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coord.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

    if (m_resultListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resultList.begin(); itr != m_resultList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

}


string Element::GetText() const
{
    return m_text;
}

void Element::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Element::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

Polygon Element::GetCoord() const
{
    return m_coord;
}

void Element::SetCoord(const Polygon& _coord)
{
    m_coord = _coord;
    m_coordHasBeenSet = true;
}

bool Element::CoordHasBeenSet() const
{
    return m_coordHasBeenSet;
}

string Element::GetGroupType() const
{
    return m_groupType;
}

void Element::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool Element::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

vector<ResultList> Element::GetResultList() const
{
    return m_resultList;
}

void Element::SetResultList(const vector<ResultList>& _resultList)
{
    m_resultList = _resultList;
    m_resultListHasBeenSet = true;
}

bool Element::ResultListHasBeenSet() const
{
    return m_resultListHasBeenSet;
}

int64_t Element::GetIndex() const
{
    return m_index;
}

void Element::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool Element::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

