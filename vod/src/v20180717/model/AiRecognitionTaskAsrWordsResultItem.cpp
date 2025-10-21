/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrWordsResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiRecognitionTaskAsrWordsResultItem::AiRecognitionTaskAsrWordsResultItem() :
    m_wordHasBeenSet(false),
    m_segmentSetHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskAsrWordsResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrWordsResultItem.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }

    if (value.HasMember("SegmentSet") && !value["SegmentSet"].IsNull())
    {
        if (!value["SegmentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrWordsResultItem.SegmentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SegmentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiRecognitionTaskAsrWordsSegmentItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_segmentSet.push_back(item);
        }
        m_segmentSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskAsrWordsResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Word";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_word.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_segmentSet.begin(); itr != m_segmentSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AiRecognitionTaskAsrWordsResultItem::GetWord() const
{
    return m_word;
}

void AiRecognitionTaskAsrWordsResultItem::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool AiRecognitionTaskAsrWordsResultItem::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}

vector<AiRecognitionTaskAsrWordsSegmentItem> AiRecognitionTaskAsrWordsResultItem::GetSegmentSet() const
{
    return m_segmentSet;
}

void AiRecognitionTaskAsrWordsResultItem::SetSegmentSet(const vector<AiRecognitionTaskAsrWordsSegmentItem>& _segmentSet)
{
    m_segmentSet = _segmentSet;
    m_segmentSetHasBeenSet = true;
}

bool AiRecognitionTaskAsrWordsResultItem::SegmentSetHasBeenSet() const
{
    return m_segmentSetHasBeenSet;
}

