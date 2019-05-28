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

#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrFullTextResultOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

AiRecognitionTaskAsrFullTextResultOutput::AiRecognitionTaskAsrFullTextResultOutput() :
    m_segmentSetHasBeenSet(false),
    m_subtitleUrlHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskAsrFullTextResultOutput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SegmentSet") && !value["SegmentSet"].IsNull())
    {
        if (!value["SegmentSet"].IsArray())
            return CoreInternalOutcome(Error("response `AiRecognitionTaskAsrFullTextResultOutput.SegmentSet` is not array type"));

        const Value &tmpValue = value["SegmentSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiRecognitionTaskAsrFullTextSegmentItem item;
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

    if (value.HasMember("SubtitleUrl") && !value["SubtitleUrl"].IsNull())
    {
        if (!value["SubtitleUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `AiRecognitionTaskAsrFullTextResultOutput.SubtitleUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleUrl = string(value["SubtitleUrl"].GetString());
        m_subtitleUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskAsrFullTextResultOutput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_segmentSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SegmentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_segmentSet.begin(); itr != m_segmentSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subtitleUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubtitleUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subtitleUrl.c_str(), allocator).Move(), allocator);
    }

}


vector<AiRecognitionTaskAsrFullTextSegmentItem> AiRecognitionTaskAsrFullTextResultOutput::GetSegmentSet() const
{
    return m_segmentSet;
}

void AiRecognitionTaskAsrFullTextResultOutput::SetSegmentSet(const vector<AiRecognitionTaskAsrFullTextSegmentItem>& _segmentSet)
{
    m_segmentSet = _segmentSet;
    m_segmentSetHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResultOutput::SegmentSetHasBeenSet() const
{
    return m_segmentSetHasBeenSet;
}

string AiRecognitionTaskAsrFullTextResultOutput::GetSubtitleUrl() const
{
    return m_subtitleUrl;
}

void AiRecognitionTaskAsrFullTextResultOutput::SetSubtitleUrl(const string& _subtitleUrl)
{
    m_subtitleUrl = _subtitleUrl;
    m_subtitleUrlHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResultOutput::SubtitleUrlHasBeenSet() const
{
    return m_subtitleUrlHasBeenSet;
}

