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

#include <tencentcloud/as/v20180419/model/DataDisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

DataDisk::DataDisk() :
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_deleteWithInstanceHasBeenSet(false),
    m_encryptHasBeenSet(false),
    m_throughputPerformanceHasBeenSet(false),
    m_burstPerformanceHasBeenSet(false)
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
        if (!value["DiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.DiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetUint64();
        m_diskSizeHasBeenSet = true;
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

    if (value.HasMember("DeleteWithInstance") && !value["DeleteWithInstance"].IsNull())
    {
        if (!value["DeleteWithInstance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.DeleteWithInstance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteWithInstance = value["DeleteWithInstance"].GetBool();
        m_deleteWithInstanceHasBeenSet = true;
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

    if (value.HasMember("ThroughputPerformance") && !value["ThroughputPerformance"].IsNull())
    {
        if (!value["ThroughputPerformance"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.ThroughputPerformance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_throughputPerformance = value["ThroughputPerformance"].GetUint64();
        m_throughputPerformanceHasBeenSet = true;
    }

    if (value.HasMember("BurstPerformance") && !value["BurstPerformance"].IsNull())
    {
        if (!value["BurstPerformance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.BurstPerformance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_burstPerformance = value["BurstPerformance"].GetBool();
        m_burstPerformanceHasBeenSet = true;
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

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteWithInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteWithInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteWithInstance, allocator);
    }

    if (m_encryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encrypt, allocator);
    }

    if (m_throughputPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThroughputPerformance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_throughputPerformance, allocator);
    }

    if (m_burstPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BurstPerformance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_burstPerformance, allocator);
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

uint64_t DataDisk::GetDiskSize() const
{
    return m_diskSize;
}

void DataDisk::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool DataDisk::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
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

bool DataDisk::GetDeleteWithInstance() const
{
    return m_deleteWithInstance;
}

void DataDisk::SetDeleteWithInstance(const bool& _deleteWithInstance)
{
    m_deleteWithInstance = _deleteWithInstance;
    m_deleteWithInstanceHasBeenSet = true;
}

bool DataDisk::DeleteWithInstanceHasBeenSet() const
{
    return m_deleteWithInstanceHasBeenSet;
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

uint64_t DataDisk::GetThroughputPerformance() const
{
    return m_throughputPerformance;
}

void DataDisk::SetThroughputPerformance(const uint64_t& _throughputPerformance)
{
    m_throughputPerformance = _throughputPerformance;
    m_throughputPerformanceHasBeenSet = true;
}

bool DataDisk::ThroughputPerformanceHasBeenSet() const
{
    return m_throughputPerformanceHasBeenSet;
}

bool DataDisk::GetBurstPerformance() const
{
    return m_burstPerformance;
}

void DataDisk::SetBurstPerformance(const bool& _burstPerformance)
{
    m_burstPerformance = _burstPerformance;
    m_burstPerformanceHasBeenSet = true;
}

bool DataDisk::BurstPerformanceHasBeenSet() const
{
    return m_burstPerformanceHasBeenSet;
}

