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

#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateDisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

InquirePriceCreateDisksRequest::InquirePriceCreateDisksRequest() :
    m_diskSizeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskChargePrepaidHasBeenSet(false),
    m_diskCountHasBeenSet(false),
    m_diskBackupQuotaHasBeenSet(false)
{
}

string InquirePriceCreateDisksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t InquirePriceCreateDisksRequest::GetDiskSize() const
{
    return m_diskSize;
}

void InquirePriceCreateDisksRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool InquirePriceCreateDisksRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string InquirePriceCreateDisksRequest::GetDiskType() const
{
    return m_diskType;
}

void InquirePriceCreateDisksRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool InquirePriceCreateDisksRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

DiskChargePrepaid InquirePriceCreateDisksRequest::GetDiskChargePrepaid() const
{
    return m_diskChargePrepaid;
}

void InquirePriceCreateDisksRequest::SetDiskChargePrepaid(const DiskChargePrepaid& _diskChargePrepaid)
{
    m_diskChargePrepaid = _diskChargePrepaid;
    m_diskChargePrepaidHasBeenSet = true;
}

bool InquirePriceCreateDisksRequest::DiskChargePrepaidHasBeenSet() const
{
    return m_diskChargePrepaidHasBeenSet;
}

int64_t InquirePriceCreateDisksRequest::GetDiskCount() const
{
    return m_diskCount;
}

void InquirePriceCreateDisksRequest::SetDiskCount(const int64_t& _diskCount)
{
    m_diskCount = _diskCount;
    m_diskCountHasBeenSet = true;
}

bool InquirePriceCreateDisksRequest::DiskCountHasBeenSet() const
{
    return m_diskCountHasBeenSet;
}

int64_t InquirePriceCreateDisksRequest::GetDiskBackupQuota() const
{
    return m_diskBackupQuota;
}

void InquirePriceCreateDisksRequest::SetDiskBackupQuota(const int64_t& _diskBackupQuota)
{
    m_diskBackupQuota = _diskBackupQuota;
    m_diskBackupQuotaHasBeenSet = true;
}

bool InquirePriceCreateDisksRequest::DiskBackupQuotaHasBeenSet() const
{
    return m_diskBackupQuotaHasBeenSet;
}


