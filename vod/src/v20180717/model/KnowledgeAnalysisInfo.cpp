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

#include <tencentcloud/vod/v20180717/model/KnowledgeAnalysisInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

KnowledgeAnalysisInfo::KnowledgeAnalysisInfo() :
    m_definitionHasBeenSet(false),
    m_analysisResultsHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeAnalysisInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeAnalysisInfo.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("AnalysisResults") && !value["AnalysisResults"].IsNull())
    {
        if (!value["AnalysisResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeAnalysisInfo.AnalysisResults` is not array type"));

        const rapidjson::Value &tmpValue = value["AnalysisResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KnowledgeAnalysisResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_analysisResults.push_back(item);
        }
        m_analysisResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeAnalysisInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_analysisResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_analysisResults.begin(); itr != m_analysisResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t KnowledgeAnalysisInfo::GetDefinition() const
{
    return m_definition;
}

void KnowledgeAnalysisInfo::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool KnowledgeAnalysisInfo::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

vector<KnowledgeAnalysisResult> KnowledgeAnalysisInfo::GetAnalysisResults() const
{
    return m_analysisResults;
}

void KnowledgeAnalysisInfo::SetAnalysisResults(const vector<KnowledgeAnalysisResult>& _analysisResults)
{
    m_analysisResults = _analysisResults;
    m_analysisResultsHasBeenSet = true;
}

bool KnowledgeAnalysisInfo::AnalysisResultsHasBeenSet() const
{
    return m_analysisResultsHasBeenSet;
}

