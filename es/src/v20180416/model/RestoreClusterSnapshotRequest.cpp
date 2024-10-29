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

#include <tencentcloud/es/v20180416/model/RestoreClusterSnapshotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

RestoreClusterSnapshotRequest::RestoreClusterSnapshotRequest() :
    m_instanceIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_targetInstanceIdHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_indexSettingsHasBeenSet(false),
    m_includeGlobalStateHasBeenSet(false),
    m_indicesHasBeenSet(false),
    m_partialHasBeenSet(false)
{
}

string RestoreClusterSnapshotRequest::ToJsonString() const
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

    if (m_repositoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repositoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_indexSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexSettings.c_str(), allocator).Move(), allocator);
    }

    if (m_includeGlobalStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeGlobalState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeGlobalState.begin(); itr != m_includeGlobalState.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_indicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indices.c_str(), allocator).Move(), allocator);
    }

    if (m_partialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partial";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_partial.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RestoreClusterSnapshotRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RestoreClusterSnapshotRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RestoreClusterSnapshotRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RestoreClusterSnapshotRequest::GetRepositoryName() const
{
    return m_repositoryName;
}

void RestoreClusterSnapshotRequest::SetRepositoryName(const string& _repositoryName)
{
    m_repositoryName = _repositoryName;
    m_repositoryNameHasBeenSet = true;
}

bool RestoreClusterSnapshotRequest::RepositoryNameHasBeenSet() const
{
    return m_repositoryNameHasBeenSet;
}

string RestoreClusterSnapshotRequest::GetSnapshotName() const
{
    return m_snapshotName;
}

void RestoreClusterSnapshotRequest::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool RestoreClusterSnapshotRequest::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

string RestoreClusterSnapshotRequest::GetTargetInstanceId() const
{
    return m_targetInstanceId;
}

void RestoreClusterSnapshotRequest::SetTargetInstanceId(const string& _targetInstanceId)
{
    m_targetInstanceId = _targetInstanceId;
    m_targetInstanceIdHasBeenSet = true;
}

bool RestoreClusterSnapshotRequest::TargetInstanceIdHasBeenSet() const
{
    return m_targetInstanceIdHasBeenSet;
}

string RestoreClusterSnapshotRequest::GetPassword() const
{
    return m_password;
}

void RestoreClusterSnapshotRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool RestoreClusterSnapshotRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string RestoreClusterSnapshotRequest::GetIndexSettings() const
{
    return m_indexSettings;
}

void RestoreClusterSnapshotRequest::SetIndexSettings(const string& _indexSettings)
{
    m_indexSettings = _indexSettings;
    m_indexSettingsHasBeenSet = true;
}

bool RestoreClusterSnapshotRequest::IndexSettingsHasBeenSet() const
{
    return m_indexSettingsHasBeenSet;
}

vector<string> RestoreClusterSnapshotRequest::GetIncludeGlobalState() const
{
    return m_includeGlobalState;
}

void RestoreClusterSnapshotRequest::SetIncludeGlobalState(const vector<string>& _includeGlobalState)
{
    m_includeGlobalState = _includeGlobalState;
    m_includeGlobalStateHasBeenSet = true;
}

bool RestoreClusterSnapshotRequest::IncludeGlobalStateHasBeenSet() const
{
    return m_includeGlobalStateHasBeenSet;
}

string RestoreClusterSnapshotRequest::GetIndices() const
{
    return m_indices;
}

void RestoreClusterSnapshotRequest::SetIndices(const string& _indices)
{
    m_indices = _indices;
    m_indicesHasBeenSet = true;
}

bool RestoreClusterSnapshotRequest::IndicesHasBeenSet() const
{
    return m_indicesHasBeenSet;
}

string RestoreClusterSnapshotRequest::GetPartial() const
{
    return m_partial;
}

void RestoreClusterSnapshotRequest::SetPartial(const string& _partial)
{
    m_partial = _partial;
    m_partialHasBeenSet = true;
}

bool RestoreClusterSnapshotRequest::PartialHasBeenSet() const
{
    return m_partialHasBeenSet;
}


