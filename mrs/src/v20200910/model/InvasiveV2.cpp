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

#include <tencentcloud/mrs/v20200910/model/InvasiveV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

InvasiveV2::InvasiveV2() :
    m_indexHasBeenSet(false),
    m_partHasBeenSet(false),
    m_positiveHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_coordsHasBeenSet(false)
{
}

CoreInternalOutcome InvasiveV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvasiveV2.Index` is not array type"));

        const rapidjson::Value &tmpValue = value["Index"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_index.push_back((*itr).GetInt64());
        }
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InvasiveV2.Part` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_part.Deserialize(value["Part"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_partHasBeenSet = true;
    }

    if (value.HasMember("Positive") && !value["Positive"].IsNull())
    {
        if (!value["Positive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvasiveV2.Positive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_positive = string(value["Positive"].GetString());
        m_positiveHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvasiveV2.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Coords") && !value["Coords"].IsNull())
    {
        if (!value["Coords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvasiveV2.Coords` is not array type"));

        const rapidjson::Value &tmpValue = value["Coords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_coords.push_back(item);
        }
        m_coordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvasiveV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_index.begin(); itr != m_index.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_part.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_positiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Positive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_positive.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_coordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coords.begin(); itr != m_coords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<int64_t> InvasiveV2::GetIndex() const
{
    return m_index;
}

void InvasiveV2::SetIndex(const vector<int64_t>& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool InvasiveV2::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

Part InvasiveV2::GetPart() const
{
    return m_part;
}

void InvasiveV2::SetPart(const Part& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool InvasiveV2::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

string InvasiveV2::GetPositive() const
{
    return m_positive;
}

void InvasiveV2::SetPositive(const string& _positive)
{
    m_positive = _positive;
    m_positiveHasBeenSet = true;
}

bool InvasiveV2::PositiveHasBeenSet() const
{
    return m_positiveHasBeenSet;
}

string InvasiveV2::GetSrc() const
{
    return m_src;
}

void InvasiveV2::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool InvasiveV2::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

vector<Coord> InvasiveV2::GetCoords() const
{
    return m_coords;
}

void InvasiveV2::SetCoords(const vector<Coord>& _coords)
{
    m_coords = _coords;
    m_coordsHasBeenSet = true;
}

bool InvasiveV2::CoordsHasBeenSet() const
{
    return m_coordsHasBeenSet;
}

