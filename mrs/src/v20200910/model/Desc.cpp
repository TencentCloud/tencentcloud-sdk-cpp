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

#include <tencentcloud/mrs/v20200910/model/Desc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Desc::Desc() :
    m_textHasBeenSet(false),
    m_organHasBeenSet(false),
    m_tuberHasBeenSet(false),
    m_coordsHasBeenSet(false)
{
}

CoreInternalOutcome Desc::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Desc.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Organ") && !value["Organ"].IsNull())
    {
        if (!value["Organ"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Desc.Organ` is not array type"));

        const rapidjson::Value &tmpValue = value["Organ"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Organ item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_organ.push_back(item);
        }
        m_organHasBeenSet = true;
    }

    if (value.HasMember("Tuber") && !value["Tuber"].IsNull())
    {
        if (!value["Tuber"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Desc.Tuber` is not array type"));

        const rapidjson::Value &tmpValue = value["Tuber"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TuberInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tuber.push_back(item);
        }
        m_tuberHasBeenSet = true;
    }

    if (value.HasMember("Coords") && !value["Coords"].IsNull())
    {
        if (!value["Coords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Desc.Coords` is not array type"));

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

void Desc::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_organHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organ";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_organ.begin(); itr != m_organ.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tuberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tuber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tuber.begin(); itr != m_tuber.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string Desc::GetText() const
{
    return m_text;
}

void Desc::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Desc::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<Organ> Desc::GetOrgan() const
{
    return m_organ;
}

void Desc::SetOrgan(const vector<Organ>& _organ)
{
    m_organ = _organ;
    m_organHasBeenSet = true;
}

bool Desc::OrganHasBeenSet() const
{
    return m_organHasBeenSet;
}

vector<TuberInfo> Desc::GetTuber() const
{
    return m_tuber;
}

void Desc::SetTuber(const vector<TuberInfo>& _tuber)
{
    m_tuber = _tuber;
    m_tuberHasBeenSet = true;
}

bool Desc::TuberHasBeenSet() const
{
    return m_tuberHasBeenSet;
}

vector<Coord> Desc::GetCoords() const
{
    return m_coords;
}

void Desc::SetCoords(const vector<Coord>& _coords)
{
    m_coords = _coords;
    m_coordsHasBeenSet = true;
}

bool Desc::CoordsHasBeenSet() const
{
    return m_coordsHasBeenSet;
}

