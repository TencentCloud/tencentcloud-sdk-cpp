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

#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskFrameTagOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

AiAnalysisTaskFrameTagOutput::AiAnalysisTaskFrameTagOutput() :
    m_segmentSetHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskFrameTagOutput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SegmentSet") && !value["SegmentSet"].IsNull())
    {
        if (!value["SegmentSet"].IsArray())
            return CoreInternalOutcome(Error("response `AiAnalysisTaskFrameTagOutput.SegmentSet` is not array type"));

        const Value &tmpValue = value["SegmentSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaAiAnalysisFrameTagSegmentItem item;
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

void AiAnalysisTaskFrameTagOutput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
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

}


vector<MediaAiAnalysisFrameTagSegmentItem> AiAnalysisTaskFrameTagOutput::GetSegmentSet() const
{
    return m_segmentSet;
}

void AiAnalysisTaskFrameTagOutput::SetSegmentSet(const vector<MediaAiAnalysisFrameTagSegmentItem>& _segmentSet)
{
    m_segmentSet = _segmentSet;
    m_segmentSetHasBeenSet = true;
}

bool AiAnalysisTaskFrameTagOutput::SegmentSetHasBeenSet() const
{
    return m_segmentSetHasBeenSet;
}

