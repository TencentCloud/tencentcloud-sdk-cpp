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

#include <tencentcloud/mps/v20190612/model/BatchSmartSubtitlesResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

BatchSmartSubtitlesResult::BatchSmartSubtitlesResult() :
    m_inputHasBeenSet(false),
    m_outputsHasBeenSet(false)
{
}

CoreInternalOutcome BatchSmartSubtitlesResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BatchSmartSubtitlesResult.Input` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_input.Deserialize(value["Input"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputHasBeenSet = true;
    }

    if (value.HasMember("Outputs") && !value["Outputs"].IsNull())
    {
        if (!value["Outputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchSmartSubtitlesResult.Outputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Outputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SmartSubtitleTaskBatchOutput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputs.push_back(item);
        }
        m_outputsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchSmartSubtitlesResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_input.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputs.begin(); itr != m_outputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


SmartSubtitleTaskResultInput BatchSmartSubtitlesResult::GetInput() const
{
    return m_input;
}

void BatchSmartSubtitlesResult::SetInput(const SmartSubtitleTaskResultInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool BatchSmartSubtitlesResult::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

vector<SmartSubtitleTaskBatchOutput> BatchSmartSubtitlesResult::GetOutputs() const
{
    return m_outputs;
}

void BatchSmartSubtitlesResult::SetOutputs(const vector<SmartSubtitleTaskBatchOutput>& _outputs)
{
    m_outputs = _outputs;
    m_outputsHasBeenSet = true;
}

bool BatchSmartSubtitlesResult::OutputsHasBeenSet() const
{
    return m_outputsHasBeenSet;
}

