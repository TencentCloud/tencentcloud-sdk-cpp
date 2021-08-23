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

#include <tencentcloud/ocr/v20181119/model/TextArithmetic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TextArithmetic::TextArithmetic() :
    m_detectedTextHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_polygonHasBeenSet(false),
    m_advancedInfoHasBeenSet(false),
    m_itemCoordHasBeenSet(false),
    m_expressionTypeHasBeenSet(false),
    m_answerHasBeenSet(false)
{
}

CoreInternalOutcome TextArithmetic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectedText") && !value["DetectedText"].IsNull())
    {
        if (!value["DetectedText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextArithmetic.DetectedText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectedText = string(value["DetectedText"].GetString());
        m_detectedTextHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TextArithmetic.Result` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetBool();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextArithmetic.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Polygon") && !value["Polygon"].IsNull())
    {
        if (!value["Polygon"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextArithmetic.Polygon` is not array type"));

        const rapidjson::Value &tmpValue = value["Polygon"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `TextArithmetic.AdvancedInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedInfo = string(value["AdvancedInfo"].GetString());
        m_advancedInfoHasBeenSet = true;
    }

    if (value.HasMember("ItemCoord") && !value["ItemCoord"].IsNull())
    {
        if (!value["ItemCoord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextArithmetic.ItemCoord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_itemCoord.Deserialize(value["ItemCoord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemCoordHasBeenSet = true;
    }

    if (value.HasMember("ExpressionType") && !value["ExpressionType"].IsNull())
    {
        if (!value["ExpressionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextArithmetic.ExpressionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expressionType = string(value["ExpressionType"].GetString());
        m_expressionTypeHasBeenSet = true;
    }

    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextArithmetic.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextArithmetic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detectedTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectedText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectedText.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_polygonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Polygon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_polygon.begin(); itr != m_polygon.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_advancedInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCoordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCoord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_itemCoord.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_expressionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpressionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expressionType.c_str(), allocator).Move(), allocator);
    }

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_answer.c_str(), allocator).Move(), allocator);
    }

}


string TextArithmetic::GetDetectedText() const
{
    return m_detectedText;
}

void TextArithmetic::SetDetectedText(const string& _detectedText)
{
    m_detectedText = _detectedText;
    m_detectedTextHasBeenSet = true;
}

bool TextArithmetic::DetectedTextHasBeenSet() const
{
    return m_detectedTextHasBeenSet;
}

bool TextArithmetic::GetResult() const
{
    return m_result;
}

void TextArithmetic::SetResult(const bool& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool TextArithmetic::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

int64_t TextArithmetic::GetConfidence() const
{
    return m_confidence;
}

void TextArithmetic::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool TextArithmetic::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<Coord> TextArithmetic::GetPolygon() const
{
    return m_polygon;
}

void TextArithmetic::SetPolygon(const vector<Coord>& _polygon)
{
    m_polygon = _polygon;
    m_polygonHasBeenSet = true;
}

bool TextArithmetic::PolygonHasBeenSet() const
{
    return m_polygonHasBeenSet;
}

string TextArithmetic::GetAdvancedInfo() const
{
    return m_advancedInfo;
}

void TextArithmetic::SetAdvancedInfo(const string& _advancedInfo)
{
    m_advancedInfo = _advancedInfo;
    m_advancedInfoHasBeenSet = true;
}

bool TextArithmetic::AdvancedInfoHasBeenSet() const
{
    return m_advancedInfoHasBeenSet;
}

ItemCoord TextArithmetic::GetItemCoord() const
{
    return m_itemCoord;
}

void TextArithmetic::SetItemCoord(const ItemCoord& _itemCoord)
{
    m_itemCoord = _itemCoord;
    m_itemCoordHasBeenSet = true;
}

bool TextArithmetic::ItemCoordHasBeenSet() const
{
    return m_itemCoordHasBeenSet;
}

string TextArithmetic::GetExpressionType() const
{
    return m_expressionType;
}

void TextArithmetic::SetExpressionType(const string& _expressionType)
{
    m_expressionType = _expressionType;
    m_expressionTypeHasBeenSet = true;
}

bool TextArithmetic::ExpressionTypeHasBeenSet() const
{
    return m_expressionTypeHasBeenSet;
}

string TextArithmetic::GetAnswer() const
{
    return m_answer;
}

void TextArithmetic::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool TextArithmetic::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

