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

#include <tencentcloud/vod/v20180717/model/ConcatTask2017.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ConcatTask2017::ConcatTask2017() :
    m_taskIdHasBeenSet(false),
    m_fileInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome ConcatTask2017::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcatTask2017.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("FileInfoSet") && !value["FileInfoSet"].IsNull())
    {
        if (!value["FileInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConcatTask2017.FileInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["FileInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConcatFileInfo2017 item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileInfoSet.push_back(item);
        }
        m_fileInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConcatTask2017::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileInfoSet.begin(); itr != m_fileInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ConcatTask2017::GetTaskId() const
{
    return m_taskId;
}

void ConcatTask2017::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ConcatTask2017::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<ConcatFileInfo2017> ConcatTask2017::GetFileInfoSet() const
{
    return m_fileInfoSet;
}

void ConcatTask2017::SetFileInfoSet(const vector<ConcatFileInfo2017>& _fileInfoSet)
{
    m_fileInfoSet = _fileInfoSet;
    m_fileInfoSetHasBeenSet = true;
}

bool ConcatTask2017::FileInfoSetHasBeenSet() const
{
    return m_fileInfoSetHasBeenSet;
}

