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

#include <tencentcloud/cbs/v20170312/model/DiskBackup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

DiskBackup::DiskBackup() :
    m_diskBackupIdHasBeenSet(false),
    m_diskIdHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskUsageHasBeenSet(false),
    m_diskBackupNameHasBeenSet(false),
    m_diskBackupStateHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_encryptHasBeenSet(false)
{
}

CoreInternalOutcome DiskBackup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskBackupId") && !value["DiskBackupId"].IsNull())
    {
        if (!value["DiskBackupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskBackup.DiskBackupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskBackupId = string(value["DiskBackupId"].GetString());
        m_diskBackupIdHasBeenSet = true;
    }

    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskBackup.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskBackup.DiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetUint64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskUsage") && !value["DiskUsage"].IsNull())
    {
        if (!value["DiskUsage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskBackup.DiskUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskUsage = string(value["DiskUsage"].GetString());
        m_diskUsageHasBeenSet = true;
    }

    if (value.HasMember("DiskBackupName") && !value["DiskBackupName"].IsNull())
    {
        if (!value["DiskBackupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskBackup.DiskBackupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskBackupName = string(value["DiskBackupName"].GetString());
        m_diskBackupNameHasBeenSet = true;
    }

    if (value.HasMember("DiskBackupState") && !value["DiskBackupState"].IsNull())
    {
        if (!value["DiskBackupState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskBackup.DiskBackupState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskBackupState = string(value["DiskBackupState"].GetString());
        m_diskBackupStateHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskBackup.Percent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetUint64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskBackup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Encrypt") && !value["Encrypt"].IsNull())
    {
        if (!value["Encrypt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DiskBackup.Encrypt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_encrypt = value["Encrypt"].GetBool();
        m_encryptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskBackup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskBackupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskBackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskBackupId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_diskBackupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskBackupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskBackupName.c_str(), allocator).Move(), allocator);
    }

    if (m_diskBackupStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskBackupState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskBackupState.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encrypt, allocator);
    }

}


string DiskBackup::GetDiskBackupId() const
{
    return m_diskBackupId;
}

void DiskBackup::SetDiskBackupId(const string& _diskBackupId)
{
    m_diskBackupId = _diskBackupId;
    m_diskBackupIdHasBeenSet = true;
}

bool DiskBackup::DiskBackupIdHasBeenSet() const
{
    return m_diskBackupIdHasBeenSet;
}

string DiskBackup::GetDiskId() const
{
    return m_diskId;
}

void DiskBackup::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool DiskBackup::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

uint64_t DiskBackup::GetDiskSize() const
{
    return m_diskSize;
}

void DiskBackup::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool DiskBackup::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string DiskBackup::GetDiskUsage() const
{
    return m_diskUsage;
}

void DiskBackup::SetDiskUsage(const string& _diskUsage)
{
    m_diskUsage = _diskUsage;
    m_diskUsageHasBeenSet = true;
}

bool DiskBackup::DiskUsageHasBeenSet() const
{
    return m_diskUsageHasBeenSet;
}

string DiskBackup::GetDiskBackupName() const
{
    return m_diskBackupName;
}

void DiskBackup::SetDiskBackupName(const string& _diskBackupName)
{
    m_diskBackupName = _diskBackupName;
    m_diskBackupNameHasBeenSet = true;
}

bool DiskBackup::DiskBackupNameHasBeenSet() const
{
    return m_diskBackupNameHasBeenSet;
}

string DiskBackup::GetDiskBackupState() const
{
    return m_diskBackupState;
}

void DiskBackup::SetDiskBackupState(const string& _diskBackupState)
{
    m_diskBackupState = _diskBackupState;
    m_diskBackupStateHasBeenSet = true;
}

bool DiskBackup::DiskBackupStateHasBeenSet() const
{
    return m_diskBackupStateHasBeenSet;
}

uint64_t DiskBackup::GetPercent() const
{
    return m_percent;
}

void DiskBackup::SetPercent(const uint64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool DiskBackup::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

string DiskBackup::GetCreateTime() const
{
    return m_createTime;
}

void DiskBackup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DiskBackup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool DiskBackup::GetEncrypt() const
{
    return m_encrypt;
}

void DiskBackup::SetEncrypt(const bool& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool DiskBackup::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}

