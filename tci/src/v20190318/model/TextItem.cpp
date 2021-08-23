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

#include <tencentcloud/tci/v20190318/model/TextItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

TextItem::TextItem() :
    m_wordsHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_mbtmHasBeenSet(false),
    m_metmHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_textHasBeenSet(false),
    m_textSizeHasBeenSet(false)
{
}

CoreInternalOutcome TextItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Words") && !value["Words"].IsNull())
    {
        if (!value["Words"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextItem.Words` is not array type"));

        const rapidjson::Value &tmpValue = value["Words"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Word item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_words.push_back(item);
        }
        m_wordsHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TextItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Mbtm") && !value["Mbtm"].IsNull())
    {
        if (!value["Mbtm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextItem.Mbtm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mbtm = value["Mbtm"].GetInt64();
        m_mbtmHasBeenSet = true;
    }

    if (value.HasMember("Metm") && !value["Metm"].IsNull())
    {
        if (!value["Metm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextItem.Metm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metm = value["Metm"].GetInt64();
        m_metmHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextItem.Tag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tag = value["Tag"].GetInt64();
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextItem.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("TextSize") && !value["TextSize"].IsNull())
    {
        if (!value["TextSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextItem.TextSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_textSize = value["TextSize"].GetInt64();
        m_textSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Words";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_words.begin(); itr != m_words.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_mbtmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mbtm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mbtm, allocator);
    }

    if (m_metmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metm, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tag, allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_textSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_textSize, allocator);
    }

}


vector<Word> TextItem::GetWords() const
{
    return m_words;
}

void TextItem::SetWords(const vector<Word>& _words)
{
    m_words = _words;
    m_wordsHasBeenSet = true;
}

bool TextItem::WordsHasBeenSet() const
{
    return m_wordsHasBeenSet;
}

double TextItem::GetConfidence() const
{
    return m_confidence;
}

void TextItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool TextItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

int64_t TextItem::GetMbtm() const
{
    return m_mbtm;
}

void TextItem::SetMbtm(const int64_t& _mbtm)
{
    m_mbtm = _mbtm;
    m_mbtmHasBeenSet = true;
}

bool TextItem::MbtmHasBeenSet() const
{
    return m_mbtmHasBeenSet;
}

int64_t TextItem::GetMetm() const
{
    return m_metm;
}

void TextItem::SetMetm(const int64_t& _metm)
{
    m_metm = _metm;
    m_metmHasBeenSet = true;
}

bool TextItem::MetmHasBeenSet() const
{
    return m_metmHasBeenSet;
}

int64_t TextItem::GetTag() const
{
    return m_tag;
}

void TextItem::SetTag(const int64_t& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool TextItem::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string TextItem::GetText() const
{
    return m_text;
}

void TextItem::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool TextItem::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

int64_t TextItem::GetTextSize() const
{
    return m_textSize;
}

void TextItem::SetTextSize(const int64_t& _textSize)
{
    m_textSize = _textSize;
    m_textSizeHasBeenSet = true;
}

bool TextItem::TextSizeHasBeenSet() const
{
    return m_textSizeHasBeenSet;
}

