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

#include <tencentcloud/wedata/v20210820/model/BatchCreateTaskVersionDsDTOLite.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchCreateTaskVersionDsDTOLite::BatchCreateTaskVersionDsDTOLite() :
    m_taskIdHasBeenSet(false),
    m_versionRemarkHasBeenSet(false),
    m_taskInfoHasBeenSet(false)
{
}

CoreInternalOutcome BatchCreateTaskVersionDsDTOLite::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateTaskVersionDsDTOLite.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("VersionRemark") && !value["VersionRemark"].IsNull())
    {
        if (!value["VersionRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateTaskVersionDsDTOLite.VersionRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionRemark = string(value["VersionRemark"].GetString());
        m_versionRemarkHasBeenSet = true;
    }

    if (value.HasMember("TaskInfo") && !value["TaskInfo"].IsNull())
    {
        if (!value["TaskInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateTaskVersionDsDTOLite.TaskInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskInfo.Deserialize(value["TaskInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchCreateTaskVersionDsDTOLite::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_taskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string BatchCreateTaskVersionDsDTOLite::GetTaskId() const
{
    return m_taskId;
}

void BatchCreateTaskVersionDsDTOLite::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool BatchCreateTaskVersionDsDTOLite::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string BatchCreateTaskVersionDsDTOLite::GetVersionRemark() const
{
    return m_versionRemark;
}

void BatchCreateTaskVersionDsDTOLite::SetVersionRemark(const string& _versionRemark)
{
    m_versionRemark = _versionRemark;
    m_versionRemarkHasBeenSet = true;
}

bool BatchCreateTaskVersionDsDTOLite::VersionRemarkHasBeenSet() const
{
    return m_versionRemarkHasBeenSet;
}

TaskDsDTOLiteV2 BatchCreateTaskVersionDsDTOLite::GetTaskInfo() const
{
    return m_taskInfo;
}

void BatchCreateTaskVersionDsDTOLite::SetTaskInfo(const TaskDsDTOLiteV2& _taskInfo)
{
    m_taskInfo = _taskInfo;
    m_taskInfoHasBeenSet = true;
}

bool BatchCreateTaskVersionDsDTOLite::TaskInfoHasBeenSet() const
{
    return m_taskInfoHasBeenSet;
}

