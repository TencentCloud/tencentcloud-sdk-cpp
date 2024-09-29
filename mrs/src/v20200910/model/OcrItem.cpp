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

#include <tencentcloud/mrs/v20200910/model/OcrItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

OcrItem::OcrItem() :
    m_wordsHasBeenSet(false),
    m_coordsHasBeenSet(false),
    m_wordCoordsHasBeenSet(false)
{
}

CoreInternalOutcome OcrItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Words") && !value["Words"].IsNull())
    {
        if (!value["Words"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OcrItem.Words` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_words = string(value["Words"].GetString());
        m_wordsHasBeenSet = true;
    }

    if (value.HasMember("Coords") && !value["Coords"].IsNull())
    {
        if (!value["Coords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OcrItem.Coords` is not array type"));

        const rapidjson::Value &tmpValue = value["Coords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coordinate item;
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

    if (value.HasMember("WordCoords") && !value["WordCoords"].IsNull())
    {
        if (!value["WordCoords"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OcrItem.WordCoords` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wordCoords.Deserialize(value["WordCoords"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wordCoordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OcrItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Words";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_words.c_str(), allocator).Move(), allocator);
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

    if (m_wordCoordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordCoords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wordCoords.ToJsonObject(value[key.c_str()], allocator);
    }

}


string OcrItem::GetWords() const
{
    return m_words;
}

void OcrItem::SetWords(const string& _words)
{
    m_words = _words;
    m_wordsHasBeenSet = true;
}

bool OcrItem::WordsHasBeenSet() const
{
    return m_wordsHasBeenSet;
}

vector<Coordinate> OcrItem::GetCoords() const
{
    return m_coords;
}

void OcrItem::SetCoords(const vector<Coordinate>& _coords)
{
    m_coords = _coords;
    m_coordsHasBeenSet = true;
}

bool OcrItem::CoordsHasBeenSet() const
{
    return m_coordsHasBeenSet;
}

Coordinate OcrItem::GetWordCoords() const
{
    return m_wordCoords;
}

void OcrItem::SetWordCoords(const Coordinate& _wordCoords)
{
    m_wordCoords = _wordCoords;
    m_wordCoordsHasBeenSet = true;
}

bool OcrItem::WordCoordsHasBeenSet() const
{
    return m_wordCoordsHasBeenSet;
}

