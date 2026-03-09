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

#include <tencentcloud/cetcd/v20220325/model/CreateEtcdSnapshotPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

CreateEtcdSnapshotPolicyRequest::CreateEtcdSnapshotPolicyRequest() :
    m_instanceIdHasBeenSet(false),
    m_snapshotPolicyNameHasBeenSet(false),
    m_backupSettingsHasBeenSet(false)
{
}

string CreateEtcdSnapshotPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotPolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupSettings.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEtcdSnapshotPolicyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateEtcdSnapshotPolicyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateEtcdSnapshotPolicyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateEtcdSnapshotPolicyRequest::GetSnapshotPolicyName() const
{
    return m_snapshotPolicyName;
}

void CreateEtcdSnapshotPolicyRequest::SetSnapshotPolicyName(const string& _snapshotPolicyName)
{
    m_snapshotPolicyName = _snapshotPolicyName;
    m_snapshotPolicyNameHasBeenSet = true;
}

bool CreateEtcdSnapshotPolicyRequest::SnapshotPolicyNameHasBeenSet() const
{
    return m_snapshotPolicyNameHasBeenSet;
}

EtcdBackupSettings CreateEtcdSnapshotPolicyRequest::GetBackupSettings() const
{
    return m_backupSettings;
}

void CreateEtcdSnapshotPolicyRequest::SetBackupSettings(const EtcdBackupSettings& _backupSettings)
{
    m_backupSettings = _backupSettings;
    m_backupSettingsHasBeenSet = true;
}

bool CreateEtcdSnapshotPolicyRequest::BackupSettingsHasBeenSet() const
{
    return m_backupSettingsHasBeenSet;
}


