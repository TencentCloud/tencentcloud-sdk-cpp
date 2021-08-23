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

#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskCoverOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiAnalysisTaskCoverOutput::AiAnalysisTaskCoverOutput() :
    m_coverSetHasBeenSet(false),
    m_outputStorageHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskCoverOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CoverSet") && !value["CoverSet"].IsNull())
    {
        if (!value["CoverSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskCoverOutput.CoverSet` is not array type"));

        const rapidjson::Value &tmpValue = value["CoverSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskCoverOutput.OutputStorage` is not object type").SetRequestId(requestId));
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

void AiAnalysisTaskCoverOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_coverSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coverSet.begin(); itr != m_coverSet.end(); ++itr, ++i)
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

TaskOutputStorage AiAnalysisTaskCoverOutput::GetOutputStorage() const
{
    return m_outputStorage;
}

void AiAnalysisTaskCoverOutput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool AiAnalysisTaskCoverOutput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

