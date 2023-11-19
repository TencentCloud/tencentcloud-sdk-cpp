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

#include <tencentcloud/wedata/v20210820/model/BatchCreateTaskVersionDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchCreateTaskVersionDTO::BatchCreateTaskVersionDTO() :
    m_taskIdHasBeenSet(false),
    m_versionRemarkHasBeenSet(false),
    m_folderIdHasBeenSet(false)
{
}

CoreInternalOutcome BatchCreateTaskVersionDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateTaskVersionDTO.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("VersionRemark") && !value["VersionRemark"].IsNull())
    {
        if (!value["VersionRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateTaskVersionDTO.VersionRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionRemark = string(value["VersionRemark"].GetString());
        m_versionRemarkHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateTaskVersionDTO.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchCreateTaskVersionDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

}


string BatchCreateTaskVersionDTO::GetTaskId() const
{
    return m_taskId;
}

void BatchCreateTaskVersionDTO::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool BatchCreateTaskVersionDTO::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string BatchCreateTaskVersionDTO::GetVersionRemark() const
{
    return m_versionRemark;
}

void BatchCreateTaskVersionDTO::SetVersionRemark(const string& _versionRemark)
{
    m_versionRemark = _versionRemark;
    m_versionRemarkHasBeenSet = true;
}

bool BatchCreateTaskVersionDTO::VersionRemarkHasBeenSet() const
{
    return m_versionRemarkHasBeenSet;
}

string BatchCreateTaskVersionDTO::GetFolderId() const
{
    return m_folderId;
}

void BatchCreateTaskVersionDTO::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool BatchCreateTaskVersionDTO::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

