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

#include <tencentcloud/mps/v20190612/model/LiveRecordResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveRecordResult::LiveRecordResult() :
    m_outputStorageHasBeenSet(false),
    m_fileListHasBeenSet(false)
{
}

CoreInternalOutcome LiveRecordResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordResult.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }

    if (value.HasMember("FileList") && !value["FileList"].IsNull())
    {
        if (!value["FileList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveRecordResult.FileList` is not array type"));

        const rapidjson::Value &tmpValue = value["FileList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LiveRecordFile item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileList.push_back(item);
        }
        m_fileListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveRecordResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileList.begin(); itr != m_fileList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


TaskOutputStorage LiveRecordResult::GetOutputStorage() const
{
    return m_outputStorage;
}

void LiveRecordResult::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool LiveRecordResult::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

vector<LiveRecordFile> LiveRecordResult::GetFileList() const
{
    return m_fileList;
}

void LiveRecordResult::SetFileList(const vector<LiveRecordFile>& _fileList)
{
    m_fileList = _fileList;
    m_fileListHasBeenSet = true;
}

bool LiveRecordResult::FileListHasBeenSet() const
{
    return m_fileListHasBeenSet;
}

