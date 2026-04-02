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

#include <tencentcloud/vod/v20180717/model/FaceRecognitionTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

FaceRecognitionTask::FaceRecognitionTask() :
    m_definitionHasBeenSet(false),
    m_outputFileHasBeenSet(false)
{
}

CoreInternalOutcome FaceRecognitionTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceRecognitionTask.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("OutputFile") && !value["OutputFile"].IsNull())
    {
        if (!value["OutputFile"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceRecognitionTask.OutputFile` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputFile"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FaceRecognitionOutputFileInfo item;
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


    return CoreInternalOutcome(true);
}

void FaceRecognitionTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


int64_t FaceRecognitionTask::GetDefinition() const
{
    return m_definition;
}

void FaceRecognitionTask::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool FaceRecognitionTask::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

vector<FaceRecognitionOutputFileInfo> FaceRecognitionTask::GetOutputFile() const
{
    return m_outputFile;
}

void FaceRecognitionTask::SetOutputFile(const vector<FaceRecognitionOutputFileInfo>& _outputFile)
{
    m_outputFile = _outputFile;
    m_outputFileHasBeenSet = true;
}

bool FaceRecognitionTask::OutputFileHasBeenSet() const
{
    return m_outputFileHasBeenSet;
}

