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

#include <tencentcloud/mqtt/v20240516/model/DescribeDeviceIdentityBackupHistoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

DescribeDeviceIdentityBackupHistoryRequest::DescribeDeviceIdentityBackupHistoryRequest() :
    m_instanceIdHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_modificationTimeStartHasBeenSet(false),
    m_modificationTimeEndHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeDeviceIdentityBackupHistoryRequest::ToJsonString() const
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

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
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


string DescribeDeviceIdentityBackupHistoryRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDeviceIdentityBackupHistoryRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDeviceIdentityBackupHistoryRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeDeviceIdentityBackupHistoryRequest::GetDestination() const
{
    return m_destination;
}

void DescribeDeviceIdentityBackupHistoryRequest::SetDestination(const string& _destination)
{
    m_destination = _destination;
    m_destinationHasBeenSet = true;
}

bool DescribeDeviceIdentityBackupHistoryRequest::DestinationHasBeenSet() const
{
    return m_destinationHasBeenSet;
}

string DescribeDeviceIdentityBackupHistoryRequest::GetDeviceId() const
{
    return m_deviceId;
}

void DescribeDeviceIdentityBackupHistoryRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DescribeDeviceIdentityBackupHistoryRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

int64_t DescribeDeviceIdentityBackupHistoryRequest::GetModificationTimeStart() const
{
    return m_modificationTimeStart;
}

void DescribeDeviceIdentityBackupHistoryRequest::SetModificationTimeStart(const int64_t& _modificationTimeStart)
{
    m_modificationTimeStart = _modificationTimeStart;
    m_modificationTimeStartHasBeenSet = true;
}

bool DescribeDeviceIdentityBackupHistoryRequest::ModificationTimeStartHasBeenSet() const
{
    return m_modificationTimeStartHasBeenSet;
}

int64_t DescribeDeviceIdentityBackupHistoryRequest::GetModificationTimeEnd() const
{
    return m_modificationTimeEnd;
}

void DescribeDeviceIdentityBackupHistoryRequest::SetModificationTimeEnd(const int64_t& _modificationTimeEnd)
{
    m_modificationTimeEnd = _modificationTimeEnd;
    m_modificationTimeEndHasBeenSet = true;
}

bool DescribeDeviceIdentityBackupHistoryRequest::ModificationTimeEndHasBeenSet() const
{
    return m_modificationTimeEndHasBeenSet;
}

int64_t DescribeDeviceIdentityBackupHistoryRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDeviceIdentityBackupHistoryRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDeviceIdentityBackupHistoryRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


