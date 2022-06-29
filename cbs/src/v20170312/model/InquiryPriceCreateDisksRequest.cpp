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

#include <tencentcloud/cbs/v20170312/model/InquiryPriceCreateDisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

InquiryPriceCreateDisksRequest::InquiryPriceCreateDisksRequest() :
    m_diskChargeTypeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_diskCountHasBeenSet(false),
    m_throughputPerformanceHasBeenSet(false),
    m_diskChargePrepaidHasBeenSet(false),
    m_diskBackupQuotaHasBeenSet(false)
{
}

string InquiryPriceCreateDisksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_diskChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_diskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskCount, allocator);
    }

    if (m_throughputPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThroughputPerformance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_throughputPerformance, allocator);
    }

    if (m_diskChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diskChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
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


string InquiryPriceCreateDisksRequest::GetDiskChargeType() const
{
    return m_diskChargeType;
}

void InquiryPriceCreateDisksRequest::SetDiskChargeType(const string& _diskChargeType)
{
    m_diskChargeType = _diskChargeType;
    m_diskChargeTypeHasBeenSet = true;
}

bool InquiryPriceCreateDisksRequest::DiskChargeTypeHasBeenSet() const
{
    return m_diskChargeTypeHasBeenSet;
}

string InquiryPriceCreateDisksRequest::GetDiskType() const
{
    return m_diskType;
}

void InquiryPriceCreateDisksRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool InquiryPriceCreateDisksRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

uint64_t InquiryPriceCreateDisksRequest::GetDiskSize() const
{
    return m_diskSize;
}

void InquiryPriceCreateDisksRequest::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool InquiryPriceCreateDisksRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

uint64_t InquiryPriceCreateDisksRequest::GetProjectId() const
{
    return m_projectId;
}

void InquiryPriceCreateDisksRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InquiryPriceCreateDisksRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t InquiryPriceCreateDisksRequest::GetDiskCount() const
{
    return m_diskCount;
}

void InquiryPriceCreateDisksRequest::SetDiskCount(const uint64_t& _diskCount)
{
    m_diskCount = _diskCount;
    m_diskCountHasBeenSet = true;
}

bool InquiryPriceCreateDisksRequest::DiskCountHasBeenSet() const
{
    return m_diskCountHasBeenSet;
}

uint64_t InquiryPriceCreateDisksRequest::GetThroughputPerformance() const
{
    return m_throughputPerformance;
}

void InquiryPriceCreateDisksRequest::SetThroughputPerformance(const uint64_t& _throughputPerformance)
{
    m_throughputPerformance = _throughputPerformance;
    m_throughputPerformanceHasBeenSet = true;
}

bool InquiryPriceCreateDisksRequest::ThroughputPerformanceHasBeenSet() const
{
    return m_throughputPerformanceHasBeenSet;
}

DiskChargePrepaid InquiryPriceCreateDisksRequest::GetDiskChargePrepaid() const
{
    return m_diskChargePrepaid;
}

void InquiryPriceCreateDisksRequest::SetDiskChargePrepaid(const DiskChargePrepaid& _diskChargePrepaid)
{
    m_diskChargePrepaid = _diskChargePrepaid;
    m_diskChargePrepaidHasBeenSet = true;
}

bool InquiryPriceCreateDisksRequest::DiskChargePrepaidHasBeenSet() const
{
    return m_diskChargePrepaidHasBeenSet;
}

uint64_t InquiryPriceCreateDisksRequest::GetDiskBackupQuota() const
{
    return m_diskBackupQuota;
}

void InquiryPriceCreateDisksRequest::SetDiskBackupQuota(const uint64_t& _diskBackupQuota)
{
    m_diskBackupQuota = _diskBackupQuota;
    m_diskBackupQuotaHasBeenSet = true;
}

bool InquiryPriceCreateDisksRequest::DiskBackupQuotaHasBeenSet() const
{
    return m_diskBackupQuotaHasBeenSet;
}


