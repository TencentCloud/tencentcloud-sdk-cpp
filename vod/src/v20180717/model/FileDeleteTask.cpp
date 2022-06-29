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

#include <tencentcloud/vod/v20180717/model/FileDeleteTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

FileDeleteTask::FileDeleteTask() :
    m_fileIdSetHasBeenSet(false),
    m_fileDeleteResultInfoHasBeenSet(false)
{
}

CoreInternalOutcome FileDeleteTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileIdSet") && !value["FileIdSet"].IsNull())
    {
        if (!value["FileIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileDeleteTask.FileIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["FileIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileIdSet.push_back((*itr).GetString());
        }
        m_fileIdSetHasBeenSet = true;
    }

    if (value.HasMember("FileDeleteResultInfo") && !value["FileDeleteResultInfo"].IsNull())
    {
        if (!value["FileDeleteResultInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileDeleteTask.FileDeleteResultInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["FileDeleteResultInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileDeleteResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileDeleteResultInfo.push_back(item);
        }
        m_fileDeleteResultInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileDeleteTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileIdSet.begin(); itr != m_fileIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileDeleteResultInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileDeleteResultInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileDeleteResultInfo.begin(); itr != m_fileDeleteResultInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> FileDeleteTask::GetFileIdSet() const
{
    return m_fileIdSet;
}

void FileDeleteTask::SetFileIdSet(const vector<string>& _fileIdSet)
{
    m_fileIdSet = _fileIdSet;
    m_fileIdSetHasBeenSet = true;
}

bool FileDeleteTask::FileIdSetHasBeenSet() const
{
    return m_fileIdSetHasBeenSet;
}

vector<FileDeleteResultItem> FileDeleteTask::GetFileDeleteResultInfo() const
{
    return m_fileDeleteResultInfo;
}

void FileDeleteTask::SetFileDeleteResultInfo(const vector<FileDeleteResultItem>& _fileDeleteResultInfo)
{
    m_fileDeleteResultInfo = _fileDeleteResultInfo;
    m_fileDeleteResultInfoHasBeenSet = true;
}

bool FileDeleteTask::FileDeleteResultInfoHasBeenSet() const
{
    return m_fileDeleteResultInfoHasBeenSet;
}

