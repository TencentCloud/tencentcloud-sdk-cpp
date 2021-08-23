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

#include <tencentcloud/mongodb/v20190725/model/BackupFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

BackupFile::BackupFile() :
    m_replicateSetIdHasBeenSet(false),
    m_fileHasBeenSet(false)
{
}

CoreInternalOutcome BackupFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReplicateSetId") && !value["ReplicateSetId"].IsNull())
    {
        if (!value["ReplicateSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.ReplicateSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicateSetId = string(value["ReplicateSetId"].GetString());
        m_replicateSetIdHasBeenSet = true;
    }

    if (value.HasMember("File") && !value["File"].IsNull())
    {
        if (!value["File"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.File` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_file = string(value["File"].GetString());
        m_fileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_replicateSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicateSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicateSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_file.c_str(), allocator).Move(), allocator);
    }

}


string BackupFile::GetReplicateSetId() const
{
    return m_replicateSetId;
}

void BackupFile::SetReplicateSetId(const string& _replicateSetId)
{
    m_replicateSetId = _replicateSetId;
    m_replicateSetIdHasBeenSet = true;
}

bool BackupFile::ReplicateSetIdHasBeenSet() const
{
    return m_replicateSetIdHasBeenSet;
}

string BackupFile::GetFile() const
{
    return m_file;
}

void BackupFile::SetFile(const string& _file)
{
    m_file = _file;
    m_fileHasBeenSet = true;
}

bool BackupFile::FileHasBeenSet() const
{
    return m_fileHasBeenSet;
}

