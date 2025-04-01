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

#include <tencentcloud/ocr/v20181119/model/WordItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

WordItem::WordItem() :
    m_detectedTextHasBeenSet(false),
    m_coordHasBeenSet(false),
    m_advancedInfoHasBeenSet(false),
    m_wordCoordHasBeenSet(false)
{
}

CoreInternalOutcome WordItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectedText") && !value["DetectedText"].IsNull())
    {
        if (!value["DetectedText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WordItem.DetectedText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectedText = string(value["DetectedText"].GetString());
        m_detectedTextHasBeenSet = true;
    }

    if (value.HasMember("Coord") && !value["Coord"].IsNull())
    {
        if (!value["Coord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WordItem.Coord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coord.Deserialize(value["Coord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coordHasBeenSet = true;
    }

    if (value.HasMember("AdvancedInfo") && !value["AdvancedInfo"].IsNull())
    {
        if (!value["AdvancedInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WordItem.AdvancedInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedInfo = string(value["AdvancedInfo"].GetString());
        m_advancedInfoHasBeenSet = true;
    }

    if (value.HasMember("WordCoord") && !value["WordCoord"].IsNull())
    {
        if (!value["WordCoord"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WordItem.WordCoord` is not array type"));

        const rapidjson::Value &tmpValue = value["WordCoord"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WordPolygon item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_wordCoord.push_back(item);
        }
        m_wordCoordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WordItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detectedTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectedText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectedText.c_str(), allocator).Move(), allocator);
    }

    if (m_coordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coord.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_advancedInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_wordCoordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordCoord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wordCoord.begin(); itr != m_wordCoord.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string WordItem::GetDetectedText() const
{
    return m_detectedText;
}

void WordItem::SetDetectedText(const string& _detectedText)
{
    m_detectedText = _detectedText;
    m_detectedTextHasBeenSet = true;
}

bool WordItem::DetectedTextHasBeenSet() const
{
    return m_detectedTextHasBeenSet;
}

Polygon WordItem::GetCoord() const
{
    return m_coord;
}

void WordItem::SetCoord(const Polygon& _coord)
{
    m_coord = _coord;
    m_coordHasBeenSet = true;
}

bool WordItem::CoordHasBeenSet() const
{
    return m_coordHasBeenSet;
}

string WordItem::GetAdvancedInfo() const
{
    return m_advancedInfo;
}

void WordItem::SetAdvancedInfo(const string& _advancedInfo)
{
    m_advancedInfo = _advancedInfo;
    m_advancedInfoHasBeenSet = true;
}

bool WordItem::AdvancedInfoHasBeenSet() const
{
    return m_advancedInfoHasBeenSet;
}

vector<WordPolygon> WordItem::GetWordCoord() const
{
    return m_wordCoord;
}

void WordItem::SetWordCoord(const vector<WordPolygon>& _wordCoord)
{
    m_wordCoord = _wordCoord;
    m_wordCoordHasBeenSet = true;
}

bool WordItem::WordCoordHasBeenSet() const
{
    return m_wordCoordHasBeenSet;
}

