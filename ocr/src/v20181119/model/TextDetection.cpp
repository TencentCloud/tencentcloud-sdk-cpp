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

#include <tencentcloud/ocr/v20181119/model/TextDetection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

TextDetection::TextDetection() :
    m_detectedTextHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_polygonHasBeenSet(false),
    m_advancedInfoHasBeenSet(false),
    m_itemPolygonHasBeenSet(false)
{
}

CoreInternalOutcome TextDetection::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectedText") && !value["DetectedText"].IsNull())
    {
        if (!value["DetectedText"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextDetection.DetectedText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectedText = string(value["DetectedText"].GetString());
        m_detectedTextHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TextDetection.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Polygon") && !value["Polygon"].IsNull())
    {
        if (!value["Polygon"].IsArray())
            return CoreInternalOutcome(Error("response `TextDetection.Polygon` is not array type"));

        const Value &tmpValue = value["Polygon"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_polygon.push_back(item);
        }
        m_polygonHasBeenSet = true;
    }

    if (value.HasMember("AdvancedInfo") && !value["AdvancedInfo"].IsNull())
    {
        if (!value["AdvancedInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextDetection.AdvancedInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedInfo = string(value["AdvancedInfo"].GetString());
        m_advancedInfoHasBeenSet = true;
    }

    if (value.HasMember("ItemPolygon") && !value["ItemPolygon"].IsNull())
    {
        if (!value["ItemPolygon"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TextDetection.ItemPolygon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_itemPolygon.Deserialize(value["ItemPolygon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemPolygonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextDetection::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_detectedTextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DetectedText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_detectedText.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_polygonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Polygon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_polygon.begin(); itr != m_polygon.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_advancedInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdvancedInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_advancedInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_itemPolygonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ItemPolygon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_itemPolygon.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TextDetection::GetDetectedText() const
{
    return m_detectedText;
}

void TextDetection::SetDetectedText(const string& _detectedText)
{
    m_detectedText = _detectedText;
    m_detectedTextHasBeenSet = true;
}

bool TextDetection::DetectedTextHasBeenSet() const
{
    return m_detectedTextHasBeenSet;
}

int64_t TextDetection::GetConfidence() const
{
    return m_confidence;
}

void TextDetection::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool TextDetection::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<Coord> TextDetection::GetPolygon() const
{
    return m_polygon;
}

void TextDetection::SetPolygon(const vector<Coord>& _polygon)
{
    m_polygon = _polygon;
    m_polygonHasBeenSet = true;
}

bool TextDetection::PolygonHasBeenSet() const
{
    return m_polygonHasBeenSet;
}

string TextDetection::GetAdvancedInfo() const
{
    return m_advancedInfo;
}

void TextDetection::SetAdvancedInfo(const string& _advancedInfo)
{
    m_advancedInfo = _advancedInfo;
    m_advancedInfoHasBeenSet = true;
}

bool TextDetection::AdvancedInfoHasBeenSet() const
{
    return m_advancedInfoHasBeenSet;
}

ItemCoord TextDetection::GetItemPolygon() const
{
    return m_itemPolygon;
}

void TextDetection::SetItemPolygon(const ItemCoord& _itemPolygon)
{
    m_itemPolygon = _itemPolygon;
    m_itemPolygonHasBeenSet = true;
}

bool TextDetection::ItemPolygonHasBeenSet() const
{
    return m_itemPolygonHasBeenSet;
}

