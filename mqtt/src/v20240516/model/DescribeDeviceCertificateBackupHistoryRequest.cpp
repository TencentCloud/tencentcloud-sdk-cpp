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

#include <tencentcloud/mqtt/v20240516/model/DescribeDeviceCertificateBackupHistoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

DescribeDeviceCertificateBackupHistoryRequest::DescribeDeviceCertificateBackupHistoryRequest() :
    m_instanceIdHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_caSnHasBeenSet(false),
    m_deviceCertificateSnHasBeenSet(false),
    m_modificationTimeStartHasBeenSet(false),
    m_modificationTimeEndHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeDeviceCertificateBackupHistoryRequest::ToJsonString() const
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

    if (m_destinationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destination";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destination.c_str(), allocator).Move(), allocator);
    }

    if (m_caSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaSn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_caSn.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceCertificateSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCertificateSn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceCertificateSn.c_str(), allocator).Move(), allocator);
    }

    if (m_modificationTimeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModificationTimeStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modificationTimeStart, allocator);
    }

    if (m_modificationTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModificationTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modificationTimeEnd, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDeviceCertificateBackupHistoryRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDeviceCertificateBackupHistoryRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDeviceCertificateBackupHistoryRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeDeviceCertificateBackupHistoryRequest::GetDestination() const
{
    return m_destination;
}

void DescribeDeviceCertificateBackupHistoryRequest::SetDestination(const string& _destination)
{
    m_destination = _destination;
    m_destinationHasBeenSet = true;
}

bool DescribeDeviceCertificateBackupHistoryRequest::DestinationHasBeenSet() const
{
    return m_destinationHasBeenSet;
}

string DescribeDeviceCertificateBackupHistoryRequest::GetCaSn() const
{
    return m_caSn;
}

void DescribeDeviceCertificateBackupHistoryRequest::SetCaSn(const string& _caSn)
{
    m_caSn = _caSn;
    m_caSnHasBeenSet = true;
}

bool DescribeDeviceCertificateBackupHistoryRequest::CaSnHasBeenSet() const
{
    return m_caSnHasBeenSet;
}

string DescribeDeviceCertificateBackupHistoryRequest::GetDeviceCertificateSn() const
{
    return m_deviceCertificateSn;
}

void DescribeDeviceCertificateBackupHistoryRequest::SetDeviceCertificateSn(const string& _deviceCertificateSn)
{
    m_deviceCertificateSn = _deviceCertificateSn;
    m_deviceCertificateSnHasBeenSet = true;
}

bool DescribeDeviceCertificateBackupHistoryRequest::DeviceCertificateSnHasBeenSet() const
{
    return m_deviceCertificateSnHasBeenSet;
}

int64_t DescribeDeviceCertificateBackupHistoryRequest::GetModificationTimeStart() const
{
    return m_modificationTimeStart;
}

void DescribeDeviceCertificateBackupHistoryRequest::SetModificationTimeStart(const int64_t& _modificationTimeStart)
{
    m_modificationTimeStart = _modificationTimeStart;
    m_modificationTimeStartHasBeenSet = true;
}

bool DescribeDeviceCertificateBackupHistoryRequest::ModificationTimeStartHasBeenSet() const
{
    return m_modificationTimeStartHasBeenSet;
}

int64_t DescribeDeviceCertificateBackupHistoryRequest::GetModificationTimeEnd() const
{
    return m_modificationTimeEnd;
}

void DescribeDeviceCertificateBackupHistoryRequest::SetModificationTimeEnd(const int64_t& _modificationTimeEnd)
{
    m_modificationTimeEnd = _modificationTimeEnd;
    m_modificationTimeEndHasBeenSet = true;
}

bool DescribeDeviceCertificateBackupHistoryRequest::ModificationTimeEndHasBeenSet() const
{
    return m_modificationTimeEndHasBeenSet;
}

int64_t DescribeDeviceCertificateBackupHistoryRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDeviceCertificateBackupHistoryRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDeviceCertificateBackupHistoryRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


