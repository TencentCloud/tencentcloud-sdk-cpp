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

#include <tencentcloud/vod/v20180717/model/MPSAiMediaTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSAiMediaTask::MPSAiMediaTask() :
    m_definitionHasBeenSet(false),
    m_outputFileHasBeenSet(false),
    m_outputTextHasBeenSet(false)
{
}

CoreInternalOutcome MPSAiMediaTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSAiMediaTask.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("OutputFile") && !value["OutputFile"].IsNull())
    {
        if (!value["OutputFile"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MPSAiMediaTask.OutputFile` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputFile"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MPSOutputFileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputFile.push_back(item);
        }
        m_outputFileHasBeenSet = true;
    }

    if (value.HasMember("OutputText") && !value["OutputText"].IsNull())
    {
        if (!value["OutputText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSAiMediaTask.OutputText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputText = string(value["OutputText"].GetString());
        m_outputTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSAiMediaTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_outputFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputFile.begin(); itr != m_outputFile.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputText.c_str(), allocator).Move(), allocator);
    }

}


int64_t MPSAiMediaTask::GetDefinition() const
{
    return m_definition;
}

void MPSAiMediaTask::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool MPSAiMediaTask::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

vector<MPSOutputFileInfo> MPSAiMediaTask::GetOutputFile() const
{
    return m_outputFile;
}

void MPSAiMediaTask::SetOutputFile(const vector<MPSOutputFileInfo>& _outputFile)
{
    m_outputFile = _outputFile;
    m_outputFileHasBeenSet = true;
}

bool MPSAiMediaTask::OutputFileHasBeenSet() const
{
    return m_outputFileHasBeenSet;
}

string MPSAiMediaTask::GetOutputText() const
{
    return m_outputText;
}

void MPSAiMediaTask::SetOutputText(const string& _outputText)
{
    m_outputText = _outputText;
    m_outputTextHasBeenSet = true;
}

bool MPSAiMediaTask::OutputTextHasBeenSet() const
{
    return m_outputTextHasBeenSet;
}

