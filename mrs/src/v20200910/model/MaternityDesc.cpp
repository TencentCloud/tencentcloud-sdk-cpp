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

#include <tencentcloud/mrs/v20200910/model/MaternityDesc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

MaternityDesc::MaternityDesc() :
    m_fetusHasBeenSet(false),
    m_fetusNumHasBeenSet(false),
    m_textHasBeenSet(false),
    m_coordsHasBeenSet(false)
{
}

CoreInternalOutcome MaternityDesc::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Fetus") && !value["Fetus"].IsNull())
    {
        if (!value["Fetus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaternityDesc.Fetus` is not array type"));

        const rapidjson::Value &tmpValue = value["Fetus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Fetus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fetus.push_back(item);
        }
        m_fetusHasBeenSet = true;
    }

    if (value.HasMember("FetusNum") && !value["FetusNum"].IsNull())
    {
        if (!value["FetusNum"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaternityDesc.FetusNum` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fetusNum.Deserialize(value["FetusNum"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fetusNumHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaternityDesc.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Coords") && !value["Coords"].IsNull())
    {
        if (!value["Coords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaternityDesc.Coords` is not array type"));

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

void MaternityDesc::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fetusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fetus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fetus.begin(); itr != m_fetus.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fetusNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetusNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fetusNum.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
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


vector<Fetus> MaternityDesc::GetFetus() const
{
    return m_fetus;
}

void MaternityDesc::SetFetus(const vector<Fetus>& _fetus)
{
    m_fetus = _fetus;
    m_fetusHasBeenSet = true;
}

bool MaternityDesc::FetusHasBeenSet() const
{
    return m_fetusHasBeenSet;
}

FieldInfo MaternityDesc::GetFetusNum() const
{
    return m_fetusNum;
}

void MaternityDesc::SetFetusNum(const FieldInfo& _fetusNum)
{
    m_fetusNum = _fetusNum;
    m_fetusNumHasBeenSet = true;
}

bool MaternityDesc::FetusNumHasBeenSet() const
{
    return m_fetusNumHasBeenSet;
}

string MaternityDesc::GetText() const
{
    return m_text;
}

void MaternityDesc::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool MaternityDesc::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<Coord> MaternityDesc::GetCoords() const
{
    return m_coords;
}

void MaternityDesc::SetCoords(const vector<Coord>& _coords)
{
    m_coords = _coords;
    m_coordsHasBeenSet = true;
}

bool MaternityDesc::CoordsHasBeenSet() const
{
    return m_coordsHasBeenSet;
}

