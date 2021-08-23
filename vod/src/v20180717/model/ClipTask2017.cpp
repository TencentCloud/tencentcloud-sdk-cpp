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

#include <tencentcloud/vod/v20180717/model/ClipTask2017.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ClipTask2017::ClipTask2017() :
    m_taskIdHasBeenSet(false),
    m_srcFileIdHasBeenSet(false),
    m_fileInfoHasBeenSet(false)
{
}

CoreInternalOutcome ClipTask2017::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClipTask2017.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("SrcFileId") && !value["SrcFileId"].IsNull())
    {
        if (!value["SrcFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClipTask2017.SrcFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcFileId = string(value["SrcFileId"].GetString());
        m_srcFileIdHasBeenSet = true;
    }

    if (value.HasMember("FileInfo") && !value["FileInfo"].IsNull())
    {
        if (!value["FileInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClipTask2017.FileInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileInfo.Deserialize(value["FileInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClipTask2017::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ClipTask2017::GetTaskId() const
{
    return m_taskId;
}

void ClipTask2017::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ClipTask2017::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ClipTask2017::GetSrcFileId() const
{
    return m_srcFileId;
}

void ClipTask2017::SetSrcFileId(const string& _srcFileId)
{
    m_srcFileId = _srcFileId;
    m_srcFileIdHasBeenSet = true;
}

bool ClipTask2017::SrcFileIdHasBeenSet() const
{
    return m_srcFileIdHasBeenSet;
}

ClipFileInfo2017 ClipTask2017::GetFileInfo() const
{
    return m_fileInfo;
}

void ClipTask2017::SetFileInfo(const ClipFileInfo2017& _fileInfo)
{
    m_fileInfo = _fileInfo;
    m_fileInfoHasBeenSet = true;
}

bool ClipTask2017::FileInfoHasBeenSet() const
{
    return m_fileInfoHasBeenSet;
}

