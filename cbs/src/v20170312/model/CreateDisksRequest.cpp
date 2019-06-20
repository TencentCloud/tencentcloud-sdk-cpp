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

#include <tencentcloud/cbs/v20170312/model/CreateDisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateDisksRequest::CreateDisksRequest() :
    m_diskTypeHasBeenSet(false),
    m_diskChargeTypeHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_diskNameHasBeenSet(false),
    m_diskCountHasBeenSet(false),
    m_diskChargePrepaidHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_encryptHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_shareableHasBeenSet(false)
{
}

string CreateDisksRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_diskTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_diskChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_placementHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_diskNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_diskName.c_str(), allocator).Move(), allocator);
    }

    if (m_diskCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskCount, allocator);
    }

    if (m_diskChargePrepaidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_diskChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_snapshotIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_encrypt.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_shareableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Shareable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shareable, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDisksRequest::GetDiskType() const
{
    return m_diskType;
}

void CreateDisksRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool CreateDisksRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

string CreateDisksRequest::GetDiskChargeType() const
{
    return m_diskChargeType;
}

void CreateDisksRequest::SetDiskChargeType(const string& _diskChargeType)
{
    m_diskChargeType = _diskChargeType;
    m_diskChargeTypeHasBeenSet = true;
}

bool CreateDisksRequest::DiskChargeTypeHasBeenSet() const
{
    return m_diskChargeTypeHasBeenSet;
}

Placement CreateDisksRequest::GetPlacement() const
{
    return m_placement;
}

void CreateDisksRequest::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool CreateDisksRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string CreateDisksRequest::GetDiskName() const
{
    return m_diskName;
}

void CreateDisksRequest::SetDiskName(const string& _diskName)
{
    m_diskName = _diskName;
    m_diskNameHasBeenSet = true;
}

bool CreateDisksRequest::DiskNameHasBeenSet() const
{
    return m_diskNameHasBeenSet;
}

uint64_t CreateDisksRequest::GetDiskCount() const
{
    return m_diskCount;
}

void CreateDisksRequest::SetDiskCount(const uint64_t& _diskCount)
{
    m_diskCount = _diskCount;
    m_diskCountHasBeenSet = true;
}

bool CreateDisksRequest::DiskCountHasBeenSet() const
{
    return m_diskCountHasBeenSet;
}

DiskChargePrepaid CreateDisksRequest::GetDiskChargePrepaid() const
{
    return m_diskChargePrepaid;
}

void CreateDisksRequest::SetDiskChargePrepaid(const DiskChargePrepaid& _diskChargePrepaid)
{
    m_diskChargePrepaid = _diskChargePrepaid;
    m_diskChargePrepaidHasBeenSet = true;
}

bool CreateDisksRequest::DiskChargePrepaidHasBeenSet() const
{
    return m_diskChargePrepaidHasBeenSet;
}

uint64_t CreateDisksRequest::GetDiskSize() const
{
    return m_diskSize;
}

void CreateDisksRequest::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CreateDisksRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string CreateDisksRequest::GetSnapshotId() const
{
    return m_snapshotId;
}

void CreateDisksRequest::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool CreateDisksRequest::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string CreateDisksRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateDisksRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateDisksRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string CreateDisksRequest::GetEncrypt() const
{
    return m_encrypt;
}

void CreateDisksRequest::SetEncrypt(const string& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool CreateDisksRequest::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}

vector<Tag> CreateDisksRequest::GetTags() const
{
    return m_tags;
}

void CreateDisksRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDisksRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CreateDisksRequest::GetShareable() const
{
    return m_shareable;
}

void CreateDisksRequest::SetShareable(const bool& _shareable)
{
    m_shareable = _shareable;
    m_shareableHasBeenSet = true;
}

bool CreateDisksRequest::ShareableHasBeenSet() const
{
    return m_shareableHasBeenSet;
}


