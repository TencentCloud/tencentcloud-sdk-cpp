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

#include <tencentcloud/csip/v20221121/model/RuleContentFileOperation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RuleContentFileOperation::RuleContentFileOperation() :
    m_processHasBeenSet(false),
    m_parentProcessHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fileActionsHasBeenSet(false)
{
}

CoreInternalOutcome RuleContentFileOperation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Process") && !value["Process"].IsNull())
    {
        if (!value["Process"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentFileOperation.Process` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_process.Deserialize(value["Process"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_processHasBeenSet = true;
    }

    if (value.HasMember("ParentProcess") && !value["ParentProcess"].IsNull())
    {
        if (!value["ParentProcess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentFileOperation.ParentProcess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_parentProcess.Deserialize(value["ParentProcess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_parentProcessHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentFileOperation.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("FileActions") && !value["FileActions"].IsNull())
    {
        if (!value["FileActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleContentFileOperation.FileActions` is not array type"));

        const rapidjson::Value &tmpValue = value["FileActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileActions.push_back((*itr).GetString());
        }
        m_fileActionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleContentFileOperation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Process";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_process.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_parentProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_parentProcess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileActions.begin(); itr != m_fileActions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


RuleContentProcessInfo RuleContentFileOperation::GetProcess() const
{
    return m_process;
}

void RuleContentFileOperation::SetProcess(const RuleContentProcessInfo& _process)
{
    m_process = _process;
    m_processHasBeenSet = true;
}

bool RuleContentFileOperation::ProcessHasBeenSet() const
{
    return m_processHasBeenSet;
}

RuleContentProcessInfo RuleContentFileOperation::GetParentProcess() const
{
    return m_parentProcess;
}

void RuleContentFileOperation::SetParentProcess(const RuleContentProcessInfo& _parentProcess)
{
    m_parentProcess = _parentProcess;
    m_parentProcessHasBeenSet = true;
}

bool RuleContentFileOperation::ParentProcessHasBeenSet() const
{
    return m_parentProcessHasBeenSet;
}

string RuleContentFileOperation::GetFilePath() const
{
    return m_filePath;
}

void RuleContentFileOperation::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool RuleContentFileOperation::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

vector<string> RuleContentFileOperation::GetFileActions() const
{
    return m_fileActions;
}

void RuleContentFileOperation::SetFileActions(const vector<string>& _fileActions)
{
    m_fileActions = _fileActions;
    m_fileActionsHasBeenSet = true;
}

bool RuleContentFileOperation::FileActionsHasBeenSet() const
{
    return m_fileActionsHasBeenSet;
}

