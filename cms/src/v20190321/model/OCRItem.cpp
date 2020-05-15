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

#include <tencentcloud/cms/v20190321/model/OCRItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

OCRItem::OCRItem() :
    m_textPositionHasBeenSet(false),
    m_evilLabelHasBeenSet(false),
    m_evilTypeHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_textContentHasBeenSet(false)
{
}

CoreInternalOutcome OCRItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TextPosition") && !value["TextPosition"].IsNull())
    {
        if (!value["TextPosition"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OCRItem.TextPosition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textPosition.Deserialize(value["TextPosition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textPositionHasBeenSet = true;
    }

    if (value.HasMember("EvilLabel") && !value["EvilLabel"].IsNull())
    {
        if (!value["EvilLabel"].IsString())
        {
            return CoreInternalOutcome(Error("response `OCRItem.EvilLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evilLabel = string(value["EvilLabel"].GetString());
        m_evilLabelHasBeenSet = true;
    }

    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OCRItem.EvilType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = value["EvilType"].GetInt64();
        m_evilTypeHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Error("response `OCRItem.Keywords` is not array type"));

        const Value &tmpValue = value["Keywords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OCRItem.Rate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rate = value["Rate"].GetInt64();
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("TextContent") && !value["TextContent"].IsNull())
    {
        if (!value["TextContent"].IsString())
        {
            return CoreInternalOutcome(Error("response `OCRItem.TextContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textContent = string(value["TextContent"].GetString());
        m_textContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OCRItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_textPositionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TextPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_textPosition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_evilLabelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_evilLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_evilTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rate, allocator);
    }

    if (m_textContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TextContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_textContent.c_str(), allocator).Move(), allocator);
    }

}


Coordinate OCRItem::GetTextPosition() const
{
    return m_textPosition;
}

void OCRItem::SetTextPosition(const Coordinate& _textPosition)
{
    m_textPosition = _textPosition;
    m_textPositionHasBeenSet = true;
}

bool OCRItem::TextPositionHasBeenSet() const
{
    return m_textPositionHasBeenSet;
}

string OCRItem::GetEvilLabel() const
{
    return m_evilLabel;
}

void OCRItem::SetEvilLabel(const string& _evilLabel)
{
    m_evilLabel = _evilLabel;
    m_evilLabelHasBeenSet = true;
}

bool OCRItem::EvilLabelHasBeenSet() const
{
    return m_evilLabelHasBeenSet;
}

int64_t OCRItem::GetEvilType() const
{
    return m_evilType;
}

void OCRItem::SetEvilType(const int64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool OCRItem::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

vector<string> OCRItem::GetKeywords() const
{
    return m_keywords;
}

void OCRItem::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool OCRItem::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

int64_t OCRItem::GetRate() const
{
    return m_rate;
}

void OCRItem::SetRate(const int64_t& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool OCRItem::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

string OCRItem::GetTextContent() const
{
    return m_textContent;
}

void OCRItem::SetTextContent(const string& _textContent)
{
    m_textContent = _textContent;
    m_textContentHasBeenSet = true;
}

bool OCRItem::TextContentHasBeenSet() const
{
    return m_textContentHasBeenSet;
}

