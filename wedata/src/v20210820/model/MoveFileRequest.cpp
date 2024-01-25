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

#include <tencentcloud/wedata/v20210820/model/MoveFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

MoveFileRequest::MoveFileRequest() :
    m_projectIdHasBeenSet(false),
    m_sourceFilePathHasBeenSet(false),
    m_targetDirPathHasBeenSet(false)
{
}

string MoveFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceFilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceFilePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceFilePath.c_str(), allocator).Move(), allocator);
    }

    if (m_targetDirPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDirPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetDirPath.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string MoveFileRequest::GetProjectId() const
{
    return m_projectId;
}

void MoveFileRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool MoveFileRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string MoveFileRequest::GetSourceFilePath() const
{
    return m_sourceFilePath;
}

void MoveFileRequest::SetSourceFilePath(const string& _sourceFilePath)
{
    m_sourceFilePath = _sourceFilePath;
    m_sourceFilePathHasBeenSet = true;
}

bool MoveFileRequest::SourceFilePathHasBeenSet() const
{
    return m_sourceFilePathHasBeenSet;
}

string MoveFileRequest::GetTargetDirPath() const
{
    return m_targetDirPath;
}

void MoveFileRequest::SetTargetDirPath(const string& _targetDirPath)
{
    m_targetDirPath = _targetDirPath;
    m_targetDirPathHasBeenSet = true;
}

bool MoveFileRequest::TargetDirPathHasBeenSet() const
{
    return m_targetDirPathHasBeenSet;
}


