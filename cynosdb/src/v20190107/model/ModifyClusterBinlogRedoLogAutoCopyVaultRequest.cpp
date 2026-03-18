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

#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterBinlogRedoLogAutoCopyVaultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyClusterBinlogRedoLogAutoCopyVaultRequest::ModifyClusterBinlogRedoLogAutoCopyVaultRequest() :
    m_clusterIdHasBeenSet(false),
    m_autoCopyVaultsHasBeenSet(false)
{
}

string ModifyClusterBinlogRedoLogAutoCopyVaultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoCopyVaultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCopyVaults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_autoCopyVaults.begin(); itr != m_autoCopyVaults.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterBinlogRedoLogAutoCopyVaultRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterBinlogRedoLogAutoCopyVaultRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterBinlogRedoLogAutoCopyVaultRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<CreateBackupVaultItem> ModifyClusterBinlogRedoLogAutoCopyVaultRequest::GetAutoCopyVaults() const
{
    return m_autoCopyVaults;
}

void ModifyClusterBinlogRedoLogAutoCopyVaultRequest::SetAutoCopyVaults(const vector<CreateBackupVaultItem>& _autoCopyVaults)
{
    m_autoCopyVaults = _autoCopyVaults;
    m_autoCopyVaultsHasBeenSet = true;
}

bool ModifyClusterBinlogRedoLogAutoCopyVaultRequest::AutoCopyVaultsHasBeenSet() const
{
    return m_autoCopyVaultsHasBeenSet;
}


