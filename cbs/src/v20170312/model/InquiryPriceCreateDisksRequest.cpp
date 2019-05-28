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
using namespace rapidjson;
using namespace std;

InquiryPriceCreateDisksRequest::InquiryPriceCreateDisksRequest() :
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskChargeTypeHasBeenSet(false),
    m_diskChargePrepaidHasBeenSet(false),
    m_diskCountHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string InquiryPriceCreateDisksRequest::ToJsonString() const
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

    if (m_diskSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_diskChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskChargePrepaidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_diskChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_diskCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskCount, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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


