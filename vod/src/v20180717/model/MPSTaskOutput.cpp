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

#include <tencentcloud/vod/v20180717/model/MPSTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSTaskOutput::MPSTaskOutput() :
    m_outputFilesHasBeenSet(false)
{
}

CoreInternalOutcome MPSTaskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputFiles") && !value["OutputFiles"].IsNull())
    {
        if (!value["OutputFiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MPSTaskOutput.OutputFiles` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputFiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MPSOutputFile item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputFiles.push_back(item);
        }
        m_outputFilesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSTaskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputFiles.begin(); itr != m_outputFiles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MPSOutputFile> MPSTaskOutput::GetOutputFiles() const
{
    return m_outputFiles;
}

void MPSTaskOutput::SetOutputFiles(const vector<MPSOutputFile>& _outputFiles)
{
    m_outputFiles = _outputFiles;
    m_outputFilesHasBeenSet = true;
}

bool MPSTaskOutput::OutputFilesHasBeenSet() const
{
    return m_outputFilesHasBeenSet;
}

