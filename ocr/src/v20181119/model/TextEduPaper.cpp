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

#include <tencentcloud/ocr/v20181119/model/TextEduPaper.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TextEduPaper::TextEduPaper() :
    m_itemHasBeenSet(false),
    m_detectedTextHasBeenSet(false),
    m_itemcoordHasBeenSet(false)
{
}

CoreInternalOutcome TextEduPaper::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextEduPaper.Item` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_item = string(value["Item"].GetString());
        m_itemHasBeenSet = true;
    }

    if (value.HasMember("DetectedText") && !value["DetectedText"].IsNull())
    {
        if (!value["DetectedText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextEduPaper.DetectedText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectedText = string(value["DetectedText"].GetString());
        m_detectedTextHasBeenSet = true;
    }

    if (value.HasMember("Itemcoord") && !value["Itemcoord"].IsNull())
    {
        if (!value["Itemcoord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextEduPaper.Itemcoord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_itemcoord.Deserialize(value["Itemcoord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemcoordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextEduPaper::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_item.c_str(), allocator).Move(), allocator);
    }

    if (m_detectedTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectedText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectedText.c_str(), allocator).Move(), allocator);
    }

    if (m_itemcoordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Itemcoord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_itemcoord.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TextEduPaper::GetItem() const
{
    return m_item;
}

void TextEduPaper::SetItem(const string& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool TextEduPaper::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

string TextEduPaper::GetDetectedText() const
{
    return m_detectedText;
}

void TextEduPaper::SetDetectedText(const string& _detectedText)
{
    m_detectedText = _detectedText;
    m_detectedTextHasBeenSet = true;
}

bool TextEduPaper::DetectedTextHasBeenSet() const
{
    return m_detectedTextHasBeenSet;
}

ItemCoord TextEduPaper::GetItemcoord() const
{
    return m_itemcoord;
}

void TextEduPaper::SetItemcoord(const ItemCoord& _itemcoord)
{
    m_itemcoord = _itemcoord;
    m_itemcoordHasBeenSet = true;
}

bool TextEduPaper::ItemcoordHasBeenSet() const
{
    return m_itemcoordHasBeenSet;
}

