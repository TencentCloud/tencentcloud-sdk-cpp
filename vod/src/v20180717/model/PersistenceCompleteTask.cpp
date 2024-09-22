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

#include <tencentcloud/vod/v20180717/model/PersistenceCompleteTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

PersistenceCompleteTask::PersistenceCompleteTask() :
    m_fileIdHasBeenSet(false),
    m_persistenceSourceHasBeenSet(false)
{
}

CoreInternalOutcome PersistenceCompleteTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersistenceCompleteTask.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("PersistenceSource") && !value["PersistenceSource"].IsNull())
    {
        if (!value["PersistenceSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersistenceCompleteTask.PersistenceSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_persistenceSource = string(value["PersistenceSource"].GetString());
        m_persistenceSourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersistenceCompleteTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_persistenceSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersistenceSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_persistenceSource.c_str(), allocator).Move(), allocator);
    }

}


string PersistenceCompleteTask::GetFileId() const
{
    return m_fileId;
}

void PersistenceCompleteTask::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool PersistenceCompleteTask::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string PersistenceCompleteTask::GetPersistenceSource() const
{
    return m_persistenceSource;
}

void PersistenceCompleteTask::SetPersistenceSource(const string& _persistenceSource)
{
    m_persistenceSource = _persistenceSource;
    m_persistenceSourceHasBeenSet = true;
}

bool PersistenceCompleteTask::PersistenceSourceHasBeenSet() const
{
    return m_persistenceSourceHasBeenSet;
}

