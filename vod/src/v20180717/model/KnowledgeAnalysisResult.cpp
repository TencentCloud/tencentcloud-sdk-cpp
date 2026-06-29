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

#include <tencentcloud/vod/v20180717/model/KnowledgeAnalysisResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

KnowledgeAnalysisResult::KnowledgeAnalysisResult() :
    m_taskTypeHasBeenSet(false),
    m_fileHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeAnalysisResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeAnalysisResult.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("File") && !value["File"].IsNull())
    {
        if (!value["File"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeAnalysisResult.File` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_file.Deserialize(value["File"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeAnalysisResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_file.ToJsonObject(value[key.c_str()], allocator);
    }

}


string KnowledgeAnalysisResult::GetTaskType() const
{
    return m_taskType;
}

void KnowledgeAnalysisResult::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool KnowledgeAnalysisResult::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

MPSOutputFileInfo KnowledgeAnalysisResult::GetFile() const
{
    return m_file;
}

void KnowledgeAnalysisResult::SetFile(const MPSOutputFileInfo& _file)
{
    m_file = _file;
    m_fileHasBeenSet = true;
}

bool KnowledgeAnalysisResult::FileHasBeenSet() const
{
    return m_fileHasBeenSet;
}

