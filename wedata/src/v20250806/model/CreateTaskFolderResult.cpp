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

#include <tencentcloud/wedata/v20250806/model/CreateTaskFolderResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateTaskFolderResult::CreateTaskFolderResult() :
    m_taskFolderIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateTaskFolderResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskFolderId") && !value["TaskFolderId"].IsNull())
    {
        if (!value["TaskFolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskFolderResult.TaskFolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFolderId = string(value["TaskFolderId"].GetString());
        m_taskFolderIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateTaskFolderResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFolderId.c_str(), allocator).Move(), allocator);
    }

}


string CreateTaskFolderResult::GetTaskFolderId() const
{
    return m_taskFolderId;
}

void CreateTaskFolderResult::SetTaskFolderId(const string& _taskFolderId)
{
    m_taskFolderId = _taskFolderId;
    m_taskFolderIdHasBeenSet = true;
}

bool CreateTaskFolderResult::TaskFolderIdHasBeenSet() const
{
    return m_taskFolderIdHasBeenSet;
}

