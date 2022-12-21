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

#include <tencentcloud/cdb/v20170320/model/ModifyRemoteBackupConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyRemoteBackupConfigRequest::ModifyRemoteBackupConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_remoteBackupSaveHasBeenSet(false),
    m_remoteBinlogSaveHasBeenSet(false),
    m_remoteRegionHasBeenSet(false),
    m_expireDaysHasBeenSet(false)
{
}

string ModifyRemoteBackupConfigRequest::ToJsonString() const
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

    if (m_remoteBackupSaveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteBackupSave";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remoteBackupSave.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteBinlogSaveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteBinlogSave";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remoteBinlogSave.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_remoteRegion.begin(); itr != m_remoteRegion.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_expireDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireDays, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRemoteBackupConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyRemoteBackupConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyRemoteBackupConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyRemoteBackupConfigRequest::GetRemoteBackupSave() const
{
    return m_remoteBackupSave;
}

void ModifyRemoteBackupConfigRequest::SetRemoteBackupSave(const string& _remoteBackupSave)
{
    m_remoteBackupSave = _remoteBackupSave;
    m_remoteBackupSaveHasBeenSet = true;
}

bool ModifyRemoteBackupConfigRequest::RemoteBackupSaveHasBeenSet() const
{
    return m_remoteBackupSaveHasBeenSet;
}

string ModifyRemoteBackupConfigRequest::GetRemoteBinlogSave() const
{
    return m_remoteBinlogSave;
}

void ModifyRemoteBackupConfigRequest::SetRemoteBinlogSave(const string& _remoteBinlogSave)
{
    m_remoteBinlogSave = _remoteBinlogSave;
    m_remoteBinlogSaveHasBeenSet = true;
}

bool ModifyRemoteBackupConfigRequest::RemoteBinlogSaveHasBeenSet() const
{
    return m_remoteBinlogSaveHasBeenSet;
}

vector<string> ModifyRemoteBackupConfigRequest::GetRemoteRegion() const
{
    return m_remoteRegion;
}

void ModifyRemoteBackupConfigRequest::SetRemoteRegion(const vector<string>& _remoteRegion)
{
    m_remoteRegion = _remoteRegion;
    m_remoteRegionHasBeenSet = true;
}

bool ModifyRemoteBackupConfigRequest::RemoteRegionHasBeenSet() const
{
    return m_remoteRegionHasBeenSet;
}

int64_t ModifyRemoteBackupConfigRequest::GetExpireDays() const
{
    return m_expireDays;
}

void ModifyRemoteBackupConfigRequest::SetExpireDays(const int64_t& _expireDays)
{
    m_expireDays = _expireDays;
    m_expireDaysHasBeenSet = true;
}

bool ModifyRemoteBackupConfigRequest::ExpireDaysHasBeenSet() const
{
    return m_expireDaysHasBeenSet;
}


