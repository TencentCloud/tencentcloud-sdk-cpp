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

#include <tencentcloud/dbdc/v20201029/model/DataDisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

DataDisk::DataDisk() :
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskNameHasBeenSet(false),
    m_encryptHasBeenSet(false),
    m_diskIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_clientDiskKeyHasBeenSet(false)
{
}

CoreInternalOutcome DataDisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskName") && !value["DiskName"].IsNull())
    {
        if (!value["DiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.DiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskName = string(value["DiskName"].GetString());
        m_diskNameHasBeenSet = true;
    }

    if (value.HasMember("Encrypt") && !value["Encrypt"].IsNull())
    {
        if (!value["Encrypt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.Encrypt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_encrypt = value["Encrypt"].GetBool();
        m_encryptHasBeenSet = true;
    }

    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }

    if (value.HasMember("SnapshotId") && !value["SnapshotId"].IsNull())
    {
        if (!value["SnapshotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.SnapshotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotId = string(value["SnapshotId"].GetString());
        m_snapshotIdHasBeenSet = true;
    }

    if (value.HasMember("ClientDiskKey") && !value["ClientDiskKey"].IsNull())
    {
        if (!value["ClientDiskKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.ClientDiskKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientDiskKey = string(value["ClientDiskKey"].GetString());
        m_clientDiskKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataDisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskName.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encrypt, allocator);
    }

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientDiskKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientDiskKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientDiskKey.c_str(), allocator).Move(), allocator);
    }

}


string DataDisk::GetDiskType() const
{
    return m_diskType;
}

void DataDisk::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool DataDisk::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t DataDisk::GetDiskSize() const
{
    return m_diskSize;
}

void DataDisk::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool DataDisk::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string DataDisk::GetDiskName() const
{
    return m_diskName;
}

void DataDisk::SetDiskName(const string& _diskName)
{
    m_diskName = _diskName;
    m_diskNameHasBeenSet = true;
}

bool DataDisk::DiskNameHasBeenSet() const
{
    return m_diskNameHasBeenSet;
}

bool DataDisk::GetEncrypt() const
{
    return m_encrypt;
}

void DataDisk::SetEncrypt(const bool& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool DataDisk::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}

string DataDisk::GetDiskId() const
{
    return m_diskId;
}

void DataDisk::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool DataDisk::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

string DataDisk::GetSnapshotId() const
{
    return m_snapshotId;
}

void DataDisk::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool DataDisk::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string DataDisk::GetClientDiskKey() const
{
    return m_clientDiskKey;
}

void DataDisk::SetClientDiskKey(const string& _clientDiskKey)
{
    m_clientDiskKey = _clientDiskKey;
    m_clientDiskKeyHasBeenSet = true;
}

bool DataDisk::ClientDiskKeyHasBeenSet() const
{
    return m_clientDiskKeyHasBeenSet;
}

