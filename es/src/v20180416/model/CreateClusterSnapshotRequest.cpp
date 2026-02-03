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

#include <tencentcloud/es/v20180416/model/CreateClusterSnapshotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CreateClusterSnapshotRequest::CreateClusterSnapshotRequest() :
    m_instanceIdHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_indicesHasBeenSet(false),
    m_esRepositoryTypeHasBeenSet(false),
    m_userEsRepositoryHasBeenSet(false),
    m_storageDurationHasBeenSet(false),
    m_cosRetentionHasBeenSet(false),
    m_retainUntilDateHasBeenSet(false),
    m_retentionGraceTimeHasBeenSet(false),
    m_remoteCosHasBeenSet(false),
    m_remoteCosRegionHasBeenSet(false),
    m_multiAzHasBeenSet(false)
{
}

string CreateClusterSnapshotRequest::ToJsonString() const
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

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_indicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indices.c_str(), allocator).Move(), allocator);
    }

    if (m_esRepositoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsRepositoryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_esRepositoryType, allocator);
    }

    if (m_userEsRepositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserEsRepository";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userEsRepository.c_str(), allocator).Move(), allocator);
    }

    if (m_storageDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageDuration, allocator);
    }

    if (m_cosRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRetention";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cosRetention, allocator);
    }

    if (m_retainUntilDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetainUntilDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_retainUntilDate.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionGraceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionGraceTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionGraceTime, allocator);
    }

    if (m_remoteCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteCos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_remoteCos, allocator);
    }

    if (m_remoteCosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteCosRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remoteCosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_multiAzHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiAz";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_multiAz, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClusterSnapshotRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateClusterSnapshotRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateClusterSnapshotRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateClusterSnapshotRequest::GetSnapshotName() const
{
    return m_snapshotName;
}

void CreateClusterSnapshotRequest::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool CreateClusterSnapshotRequest::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

string CreateClusterSnapshotRequest::GetIndices() const
{
    return m_indices;
}

void CreateClusterSnapshotRequest::SetIndices(const string& _indices)
{
    m_indices = _indices;
    m_indicesHasBeenSet = true;
}

bool CreateClusterSnapshotRequest::IndicesHasBeenSet() const
{
    return m_indicesHasBeenSet;
}

uint64_t CreateClusterSnapshotRequest::GetEsRepositoryType() const
{
    return m_esRepositoryType;
}

void CreateClusterSnapshotRequest::SetEsRepositoryType(const uint64_t& _esRepositoryType)
{
    m_esRepositoryType = _esRepositoryType;
    m_esRepositoryTypeHasBeenSet = true;
}

bool CreateClusterSnapshotRequest::EsRepositoryTypeHasBeenSet() const
{
    return m_esRepositoryTypeHasBeenSet;
}

string CreateClusterSnapshotRequest::GetUserEsRepository() const
{
    return m_userEsRepository;
}

void CreateClusterSnapshotRequest::SetUserEsRepository(const string& _userEsRepository)
{
    m_userEsRepository = _userEsRepository;
    m_userEsRepositoryHasBeenSet = true;
}

bool CreateClusterSnapshotRequest::UserEsRepositoryHasBeenSet() const
{
    return m_userEsRepositoryHasBeenSet;
}

uint64_t CreateClusterSnapshotRequest::GetStorageDuration() const
{
    return m_storageDuration;
}

void CreateClusterSnapshotRequest::SetStorageDuration(const uint64_t& _storageDuration)
{
    m_storageDuration = _storageDuration;
    m_storageDurationHasBeenSet = true;
}

bool CreateClusterSnapshotRequest::StorageDurationHasBeenSet() const
{
    return m_storageDurationHasBeenSet;
}

uint64_t CreateClusterSnapshotRequest::GetCosRetention() const
{
    return m_cosRetention;
}

void CreateClusterSnapshotRequest::SetCosRetention(const uint64_t& _cosRetention)
{
    m_cosRetention = _cosRetention;
    m_cosRetentionHasBeenSet = true;
}

bool CreateClusterSnapshotRequest::CosRetentionHasBeenSet() const
{
    return m_cosRetentionHasBeenSet;
}

string CreateClusterSnapshotRequest::GetRetainUntilDate() const
{
    return m_retainUntilDate;
}

void CreateClusterSnapshotRequest::SetRetainUntilDate(const string& _retainUntilDate)
{
    m_retainUntilDate = _retainUntilDate;
    m_retainUntilDateHasBeenSet = true;
}

bool CreateClusterSnapshotRequest::RetainUntilDateHasBeenSet() const
{
    return m_retainUntilDateHasBeenSet;
}

uint64_t CreateClusterSnapshotRequest::GetRetentionGraceTime() const
{
    return m_retentionGraceTime;
}

void CreateClusterSnapshotRequest::SetRetentionGraceTime(const uint64_t& _retentionGraceTime)
{
    m_retentionGraceTime = _retentionGraceTime;
    m_retentionGraceTimeHasBeenSet = true;
}

bool CreateClusterSnapshotRequest::RetentionGraceTimeHasBeenSet() const
{
    return m_retentionGraceTimeHasBeenSet;
}

uint64_t CreateClusterSnapshotRequest::GetRemoteCos() const
{
    return m_remoteCos;
}

void CreateClusterSnapshotRequest::SetRemoteCos(const uint64_t& _remoteCos)
{
    m_remoteCos = _remoteCos;
    m_remoteCosHasBeenSet = true;
}

bool CreateClusterSnapshotRequest::RemoteCosHasBeenSet() const
{
    return m_remoteCosHasBeenSet;
}

string CreateClusterSnapshotRequest::GetRemoteCosRegion() const
{
    return m_remoteCosRegion;
}

void CreateClusterSnapshotRequest::SetRemoteCosRegion(const string& _remoteCosRegion)
{
    m_remoteCosRegion = _remoteCosRegion;
    m_remoteCosRegionHasBeenSet = true;
}

bool CreateClusterSnapshotRequest::RemoteCosRegionHasBeenSet() const
{
    return m_remoteCosRegionHasBeenSet;
}

uint64_t CreateClusterSnapshotRequest::GetMultiAz() const
{
    return m_multiAz;
}

void CreateClusterSnapshotRequest::SetMultiAz(const uint64_t& _multiAz)
{
    m_multiAz = _multiAz;
    m_multiAzHasBeenSet = true;
}

bool CreateClusterSnapshotRequest::MultiAzHasBeenSet() const
{
    return m_multiAzHasBeenSet;
}


