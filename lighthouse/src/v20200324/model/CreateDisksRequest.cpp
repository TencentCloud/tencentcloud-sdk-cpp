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

#include <tencentcloud/lighthouse/v20200324/model/CreateDisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

CreateDisksRequest::CreateDisksRequest() :
    m_zoneHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskChargePrepaidHasBeenSet(false),
    m_diskNameHasBeenSet(false),
    m_diskCountHasBeenSet(false),
    m_diskBackupQuotaHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_autoMountConfigurationHasBeenSet(false)
{
}

string CreateDisksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diskChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_diskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskName.c_str(), allocator).Move(), allocator);
    }

    if (m_diskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskCount, allocator);
    }

    if (m_diskBackupQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskBackupQuota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskBackupQuota, allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_autoMountConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoMountConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoMountConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDisksRequest::GetZone() const
{
    return m_zone;
}

void CreateDisksRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateDisksRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t CreateDisksRequest::GetDiskSize() const
{
    return m_diskSize;
}

void CreateDisksRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CreateDisksRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
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

int64_t CreateDisksRequest::GetDiskCount() const
{
    return m_diskCount;
}

void CreateDisksRequest::SetDiskCount(const int64_t& _diskCount)
{
    m_diskCount = _diskCount;
    m_diskCountHasBeenSet = true;
}

bool CreateDisksRequest::DiskCountHasBeenSet() const
{
    return m_diskCountHasBeenSet;
}

int64_t CreateDisksRequest::GetDiskBackupQuota() const
{
    return m_diskBackupQuota;
}

void CreateDisksRequest::SetDiskBackupQuota(const int64_t& _diskBackupQuota)
{
    m_diskBackupQuota = _diskBackupQuota;
    m_diskBackupQuotaHasBeenSet = true;
}

bool CreateDisksRequest::DiskBackupQuotaHasBeenSet() const
{
    return m_diskBackupQuotaHasBeenSet;
}

bool CreateDisksRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateDisksRequest::SetAutoVoucher(const bool& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateDisksRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

AutoMountConfiguration CreateDisksRequest::GetAutoMountConfiguration() const
{
    return m_autoMountConfiguration;
}

void CreateDisksRequest::SetAutoMountConfiguration(const AutoMountConfiguration& _autoMountConfiguration)
{
    m_autoMountConfiguration = _autoMountConfiguration;
    m_autoMountConfigurationHasBeenSet = true;
}

bool CreateDisksRequest::AutoMountConfigurationHasBeenSet() const
{
    return m_autoMountConfigurationHasBeenSet;
}


