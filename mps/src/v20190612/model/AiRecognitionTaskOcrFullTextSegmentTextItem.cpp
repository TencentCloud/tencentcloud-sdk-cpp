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

#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskOcrFullTextSegmentTextItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

AiRecognitionTaskOcrFullTextSegmentTextItem::AiRecognitionTaskOcrFullTextSegmentTextItem() :
    m_confidenceHasBeenSet(false),
    m_areaCoordSetHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskOcrFullTextSegmentTextItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `AiRecognitionTaskOcrFullTextSegmentTextItem.Confidence` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("AreaCoordSet") && !value["AreaCoordSet"].IsNull())
    {
        if (!value["AreaCoordSet"].IsArray())
            return CoreInternalOutcome(Error("response `AiRecognitionTaskOcrFullTextSegmentTextItem.AreaCoordSet` is not array type"));

        const Value &tmpValue = value["AreaCoordSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_areaCoordSet.push_back((*itr).GetInt64());
        }
        m_areaCoordSetHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Error("response `AiRecognitionTaskOcrFullTextSegmentTextItem.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskOcrFullTextSegmentTextItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_areaCoordSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AreaCoordSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_areaCoordSet.begin(); itr != m_areaCoordSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_textHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_text.c_str(), allocator).Move(), allocator);
    }

}


double AiRecognitionTaskOcrFullTextSegmentTextItem::GetConfidence() const
{
    return m_confidence;
}

void AiRecognitionTaskOcrFullTextSegmentTextItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool AiRecognitionTaskOcrFullTextSegmentTextItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<int64_t> AiRecognitionTaskOcrFullTextSegmentTextItem::GetAreaCoordSet() const
{
    return m_areaCoordSet;
}

void AiRecognitionTaskOcrFullTextSegmentTextItem::SetAreaCoordSet(const vector<int64_t>& _areaCoordSet)
{
    m_areaCoordSet = _areaCoordSet;
    m_areaCoordSetHasBeenSet = true;
}

bool AiRecognitionTaskOcrFullTextSegmentTextItem::AreaCoordSetHasBeenSet() const
{
    return m_areaCoordSetHasBeenSet;
}

string AiRecognitionTaskOcrFullTextSegmentTextItem::GetText() const
{
    return m_text;
}

void AiRecognitionTaskOcrFullTextSegmentTextItem::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool AiRecognitionTaskOcrFullTextSegmentTextItem::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

