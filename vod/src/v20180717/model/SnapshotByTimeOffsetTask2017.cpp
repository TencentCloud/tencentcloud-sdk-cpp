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

#include <tencentcloud/vod/v20180717/model/SnapshotByTimeOffsetTask2017.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SnapshotByTimeOffsetTask2017::SnapshotByTimeOffsetTask2017() :
    m_taskIdHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_snapshotInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotByTimeOffsetTask2017::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotByTimeOffsetTask2017.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotByTimeOffsetTask2017.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotByTimeOffsetTask2017.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("SnapshotInfoSet") && !value["SnapshotInfoSet"].IsNull())
    {
        if (!value["SnapshotInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SnapshotByTimeOffsetTask2017.SnapshotInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SnapshotInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SnapshotByTimeOffset2017 item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_snapshotInfoSet.push_back(item);
        }
        m_snapshotInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotByTimeOffsetTask2017::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_snapshotInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_snapshotInfoSet.begin(); itr != m_snapshotInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SnapshotByTimeOffsetTask2017::GetTaskId() const
{
    return m_taskId;
}

void SnapshotByTimeOffsetTask2017::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool SnapshotByTimeOffsetTask2017::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string SnapshotByTimeOffsetTask2017::GetFileId() const
{
    return m_fileId;
}

void SnapshotByTimeOffsetTask2017::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool SnapshotByTimeOffsetTask2017::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

int64_t SnapshotByTimeOffsetTask2017::GetDefinition() const
{
    return m_definition;
}

void SnapshotByTimeOffsetTask2017::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool SnapshotByTimeOffsetTask2017::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

vector<SnapshotByTimeOffset2017> SnapshotByTimeOffsetTask2017::GetSnapshotInfoSet() const
{
    return m_snapshotInfoSet;
}

void SnapshotByTimeOffsetTask2017::SetSnapshotInfoSet(const vector<SnapshotByTimeOffset2017>& _snapshotInfoSet)
{
    m_snapshotInfoSet = _snapshotInfoSet;
    m_snapshotInfoSetHasBeenSet = true;
}

bool SnapshotByTimeOffsetTask2017::SnapshotInfoSetHasBeenSet() const
{
    return m_snapshotInfoSetHasBeenSet;
}

