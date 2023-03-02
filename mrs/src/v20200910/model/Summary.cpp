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

#include <tencentcloud/mrs/v20200910/model/Summary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Summary::Summary() :
    m_symptomHasBeenSet(false),
    m_textHasBeenSet(false),
    m_coordsHasBeenSet(false)
{
}

CoreInternalOutcome Summary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Symptom") && !value["Symptom"].IsNull())
    {
        if (!value["Symptom"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Summary.Symptom` is not array type"));

        const rapidjson::Value &tmpValue = value["Symptom"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SymptomInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_symptom.push_back(item);
        }
        m_symptomHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Summary.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Coords") && !value["Coords"].IsNull())
    {
        if (!value["Coords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Summary.Coords` is not array type"));

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

void Summary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_symptomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Symptom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_symptom.begin(); itr != m_symptom.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


vector<SymptomInfo> Summary::GetSymptom() const
{
    return m_symptom;
}

void Summary::SetSymptom(const vector<SymptomInfo>& _symptom)
{
    m_symptom = _symptom;
    m_symptomHasBeenSet = true;
}

bool Summary::SymptomHasBeenSet() const
{
    return m_symptomHasBeenSet;
}

string Summary::GetText() const
{
    return m_text;
}

void Summary::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Summary::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<Coord> Summary::GetCoords() const
{
    return m_coords;
}

void Summary::SetCoords(const vector<Coord>& _coords)
{
    m_coords = _coords;
    m_coordsHasBeenSet = true;
}

bool Summary::CoordsHasBeenSet() const
{
    return m_coordsHasBeenSet;
}

