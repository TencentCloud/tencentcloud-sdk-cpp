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

#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskSegmentOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiAnalysisTaskSegmentOutput::AiAnalysisTaskSegmentOutput() :
    m_segmentSetHasBeenSet(false),
    m_abstractHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskSegmentOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SegmentSet") && !value["SegmentSet"].IsNull())
    {
        if (!value["SegmentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskSegmentOutput.SegmentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SegmentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SegmentRecognitionItem item;
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

    if (value.HasMember("Abstract") && !value["Abstract"].IsNull())
    {
        if (!value["Abstract"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskSegmentOutput.Abstract` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_abstract = string(value["Abstract"].GetString());
        m_abstractHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisTaskSegmentOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_abstractHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Abstract";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_abstract.c_str(), allocator).Move(), allocator);
    }

}


vector<SegmentRecognitionItem> AiAnalysisTaskSegmentOutput::GetSegmentSet() const
{
    return m_segmentSet;
}

void AiAnalysisTaskSegmentOutput::SetSegmentSet(const vector<SegmentRecognitionItem>& _segmentSet)
{
    m_segmentSet = _segmentSet;
    m_segmentSetHasBeenSet = true;
}

bool AiAnalysisTaskSegmentOutput::SegmentSetHasBeenSet() const
{
    return m_segmentSetHasBeenSet;
}

string AiAnalysisTaskSegmentOutput::GetAbstract() const
{
    return m_abstract;
}

void AiAnalysisTaskSegmentOutput::SetAbstract(const string& _abstract)
{
    m_abstract = _abstract;
    m_abstractHasBeenSet = true;
}

bool AiAnalysisTaskSegmentOutput::AbstractHasBeenSet() const
{
    return m_abstractHasBeenSet;
}

