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

#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskCoverOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

AiAnalysisTaskCoverOutput::AiAnalysisTaskCoverOutput() :
    m_coverSetHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskCoverOutput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CoverSet") && !value["CoverSet"].IsNull())
    {
        if (!value["CoverSet"].IsArray())
            return CoreInternalOutcome(Error("response `AiAnalysisTaskCoverOutput.CoverSet` is not array type"));

        const Value &tmpValue = value["CoverSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaAiAnalysisCoverItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_coverSet.push_back(item);
        }
        m_coverSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisTaskCoverOutput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_coverSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoverSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coverSet.begin(); itr != m_coverSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaAiAnalysisCoverItem> AiAnalysisTaskCoverOutput::GetCoverSet() const
{
    return m_coverSet;
}

void AiAnalysisTaskCoverOutput::SetCoverSet(const vector<MediaAiAnalysisCoverItem>& _coverSet)
{
    m_coverSet = _coverSet;
    m_coverSetHasBeenSet = true;
}

bool AiAnalysisTaskCoverOutput::CoverSetHasBeenSet() const
{
    return m_coverSetHasBeenSet;
}

