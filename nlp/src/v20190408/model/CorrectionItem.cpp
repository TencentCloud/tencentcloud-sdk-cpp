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

#include <tencentcloud/nlp/v20190408/model/CorrectionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

CorrectionItem::CorrectionItem() :
    m_orderHasBeenSet(false),
    m_beginOffsetHasBeenSet(false),
    m_lenHasBeenSet(false),
    m_wordHasBeenSet(false),
    m_correctWordHasBeenSet(false),
    m_correctionTypeHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_descriptionZhHasBeenSet(false),
    m_descriptionEnHasBeenSet(false)
{
}

CoreInternalOutcome CorrectionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CorrectionItem.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("BeginOffset") && !value["BeginOffset"].IsNull())
    {
        if (!value["BeginOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CorrectionItem.BeginOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beginOffset = value["BeginOffset"].GetInt64();
        m_beginOffsetHasBeenSet = true;
    }

    if (value.HasMember("Len") && !value["Len"].IsNull())
    {
        if (!value["Len"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CorrectionItem.Len` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_len = value["Len"].GetInt64();
        m_lenHasBeenSet = true;
    }

    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorrectionItem.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }

    if (value.HasMember("CorrectWord") && !value["CorrectWord"].IsNull())
    {
        if (!value["CorrectWord"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CorrectionItem.CorrectWord` is not array type"));

        const rapidjson::Value &tmpValue = value["CorrectWord"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_correctWord.push_back((*itr).GetString());
        }
        m_correctWordHasBeenSet = true;
    }

    if (value.HasMember("CorrectionType") && !value["CorrectionType"].IsNull())
    {
        if (!value["CorrectionType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CorrectionItem.CorrectionType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_correctionType = value["CorrectionType"].GetInt64();
        m_correctionTypeHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CorrectionItem.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("DescriptionZh") && !value["DescriptionZh"].IsNull())
    {
        if (!value["DescriptionZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorrectionItem.DescriptionZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descriptionZh = string(value["DescriptionZh"].GetString());
        m_descriptionZhHasBeenSet = true;
    }

    if (value.HasMember("DescriptionEn") && !value["DescriptionEn"].IsNull())
    {
        if (!value["DescriptionEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorrectionItem.DescriptionEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descriptionEn = string(value["DescriptionEn"].GetString());
        m_descriptionEnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CorrectionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

    if (m_beginOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginOffset, allocator);
    }

    if (m_lenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Len";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_len, allocator);
    }

    if (m_wordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Word";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_word.c_str(), allocator).Move(), allocator);
    }

    if (m_correctWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorrectWord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_correctWord.begin(); itr != m_correctWord.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_correctionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorrectionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_correctionType, allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_descriptionZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescriptionZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descriptionZh.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescriptionEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descriptionEn.c_str(), allocator).Move(), allocator);
    }

}


int64_t CorrectionItem::GetOrder() const
{
    return m_order;
}

void CorrectionItem::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool CorrectionItem::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

int64_t CorrectionItem::GetBeginOffset() const
{
    return m_beginOffset;
}

void CorrectionItem::SetBeginOffset(const int64_t& _beginOffset)
{
    m_beginOffset = _beginOffset;
    m_beginOffsetHasBeenSet = true;
}

bool CorrectionItem::BeginOffsetHasBeenSet() const
{
    return m_beginOffsetHasBeenSet;
}

int64_t CorrectionItem::GetLen() const
{
    return m_len;
}

void CorrectionItem::SetLen(const int64_t& _len)
{
    m_len = _len;
    m_lenHasBeenSet = true;
}

bool CorrectionItem::LenHasBeenSet() const
{
    return m_lenHasBeenSet;
}

string CorrectionItem::GetWord() const
{
    return m_word;
}

void CorrectionItem::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool CorrectionItem::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}

vector<string> CorrectionItem::GetCorrectWord() const
{
    return m_correctWord;
}

void CorrectionItem::SetCorrectWord(const vector<string>& _correctWord)
{
    m_correctWord = _correctWord;
    m_correctWordHasBeenSet = true;
}

bool CorrectionItem::CorrectWordHasBeenSet() const
{
    return m_correctWordHasBeenSet;
}

int64_t CorrectionItem::GetCorrectionType() const
{
    return m_correctionType;
}

void CorrectionItem::SetCorrectionType(const int64_t& _correctionType)
{
    m_correctionType = _correctionType;
    m_correctionTypeHasBeenSet = true;
}

bool CorrectionItem::CorrectionTypeHasBeenSet() const
{
    return m_correctionTypeHasBeenSet;
}

int64_t CorrectionItem::GetConfidence() const
{
    return m_confidence;
}

void CorrectionItem::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool CorrectionItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string CorrectionItem::GetDescriptionZh() const
{
    return m_descriptionZh;
}

void CorrectionItem::SetDescriptionZh(const string& _descriptionZh)
{
    m_descriptionZh = _descriptionZh;
    m_descriptionZhHasBeenSet = true;
}

bool CorrectionItem::DescriptionZhHasBeenSet() const
{
    return m_descriptionZhHasBeenSet;
}

string CorrectionItem::GetDescriptionEn() const
{
    return m_descriptionEn;
}

void CorrectionItem::SetDescriptionEn(const string& _descriptionEn)
{
    m_descriptionEn = _descriptionEn;
    m_descriptionEnHasBeenSet = true;
}

bool CorrectionItem::DescriptionEnHasBeenSet() const
{
    return m_descriptionEnHasBeenSet;
}

