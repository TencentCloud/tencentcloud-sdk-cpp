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

#include <tencentcloud/mps/v20190612/model/PureSubtitleTransResultOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

PureSubtitleTransResultOutput::PureSubtitleTransResultOutput() :
    m_outputStorageHasBeenSet(false),
    m_subtitleResultsHasBeenSet(false)
{
}

CoreInternalOutcome PureSubtitleTransResultOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PureSubtitleTransResultOutput.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }

    if (value.HasMember("SubtitleResults") && !value["SubtitleResults"].IsNull())
    {
        if (!value["SubtitleResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PureSubtitleTransResultOutput.SubtitleResults` is not array type"));

        const rapidjson::Value &tmpValue = value["SubtitleResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubtitleTransResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subtitleResults.push_back(item);
        }
        m_subtitleResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PureSubtitleTransResultOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subtitleResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subtitleResults.begin(); itr != m_subtitleResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


TaskOutputStorage PureSubtitleTransResultOutput::GetOutputStorage() const
{
    return m_outputStorage;
}

void PureSubtitleTransResultOutput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool PureSubtitleTransResultOutput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

vector<SubtitleTransResultItem> PureSubtitleTransResultOutput::GetSubtitleResults() const
{
    return m_subtitleResults;
}

void PureSubtitleTransResultOutput::SetSubtitleResults(const vector<SubtitleTransResultItem>& _subtitleResults)
{
    m_subtitleResults = _subtitleResults;
    m_subtitleResultsHasBeenSet = true;
}

bool PureSubtitleTransResultOutput::SubtitleResultsHasBeenSet() const
{
    return m_subtitleResultsHasBeenSet;
}

