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

#include <tencentcloud/cynosdb/v20190107/model/DeleteVaultTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DeleteVaultTask::DeleteVaultTask() :
    m_vaultIdHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

CoreInternalOutcome DeleteVaultTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VaultId") && !value["VaultId"].IsNull())
    {
        if (!value["VaultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteVaultTask.VaultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultId = string(value["VaultId"].GetString());
        m_vaultIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteVaultTask.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteVaultTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vaultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaultId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

}


string DeleteVaultTask::GetVaultId() const
{
    return m_vaultId;
}

void DeleteVaultTask::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool DeleteVaultTask::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

int64_t DeleteVaultTask::GetTaskId() const
{
    return m_taskId;
}

void DeleteVaultTask::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DeleteVaultTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

