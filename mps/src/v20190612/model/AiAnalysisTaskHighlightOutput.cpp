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

#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHighlightOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiAnalysisTaskHighlightOutput::AiAnalysisTaskHighlightOutput() :
    m_highlightSetHasBeenSet(false),
    m_outputStorageHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskHighlightOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HighlightSet") && !value["HighlightSet"].IsNull())
    {
        if (!value["HighlightSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskHighlightOutput.HighlightSet` is not array type"));

        const rapidjson::Value &tmpValue = value["HighlightSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaAiAnalysisHighlightItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_highlightSet.push_back(item);
        }
        m_highlightSetHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskHighlightOutput.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisTaskHighlightOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_highlightSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighlightSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_highlightSet.begin(); itr != m_highlightSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<MediaAiAnalysisHighlightItem> AiAnalysisTaskHighlightOutput::GetHighlightSet() const
{
    return m_highlightSet;
}

void AiAnalysisTaskHighlightOutput::SetHighlightSet(const vector<MediaAiAnalysisHighlightItem>& _highlightSet)
{
    m_highlightSet = _highlightSet;
    m_highlightSetHasBeenSet = true;
}

bool AiAnalysisTaskHighlightOutput::HighlightSetHasBeenSet() const
{
    return m_highlightSetHasBeenSet;
}

TaskOutputStorage AiAnalysisTaskHighlightOutput::GetOutputStorage() const
{
    return m_outputStorage;
}

void AiAnalysisTaskHighlightOutput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool AiAnalysisTaskHighlightOutput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

