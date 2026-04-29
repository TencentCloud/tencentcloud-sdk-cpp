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

#include <tencentcloud/ioa/v20220601/model/ModifyDeviceTrustStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

ModifyDeviceTrustStatusRequest::ModifyDeviceTrustStatusRequest() :
    m_statusHasBeenSet(false),
    m_deviceIDListHasBeenSet(false),
    m_blackStatusDeadlineHasBeenSet(false),
    m_idListHasBeenSet(false),
    m_updateFlagsHasBeenSet(false)
{
}

string ModifyDeviceTrustStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_deviceIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceIDList.begin(); itr != m_deviceIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_blackStatusDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlackStatusDeadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_blackStatusDeadline, allocator);
    }

    if (m_idListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idList.begin(); itr != m_idList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_updateFlagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateFlags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateFlags, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyDeviceTrustStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyDeviceTrustStatusRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyDeviceTrustStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> ModifyDeviceTrustStatusRequest::GetDeviceIDList() const
{
    return m_deviceIDList;
}

void ModifyDeviceTrustStatusRequest::SetDeviceIDList(const vector<string>& _deviceIDList)
{
    m_deviceIDList = _deviceIDList;
    m_deviceIDListHasBeenSet = true;
}

bool ModifyDeviceTrustStatusRequest::DeviceIDListHasBeenSet() const
{
    return m_deviceIDListHasBeenSet;
}

int64_t ModifyDeviceTrustStatusRequest::GetBlackStatusDeadline() const
{
    return m_blackStatusDeadline;
}

void ModifyDeviceTrustStatusRequest::SetBlackStatusDeadline(const int64_t& _blackStatusDeadline)
{
    m_blackStatusDeadline = _blackStatusDeadline;
    m_blackStatusDeadlineHasBeenSet = true;
}

bool ModifyDeviceTrustStatusRequest::BlackStatusDeadlineHasBeenSet() const
{
    return m_blackStatusDeadlineHasBeenSet;
}

vector<int64_t> ModifyDeviceTrustStatusRequest::GetIdList() const
{
    return m_idList;
}

void ModifyDeviceTrustStatusRequest::SetIdList(const vector<int64_t>& _idList)
{
    m_idList = _idList;
    m_idListHasBeenSet = true;
}

bool ModifyDeviceTrustStatusRequest::IdListHasBeenSet() const
{
    return m_idListHasBeenSet;
}

int64_t ModifyDeviceTrustStatusRequest::GetUpdateFlags() const
{
    return m_updateFlags;
}

void ModifyDeviceTrustStatusRequest::SetUpdateFlags(const int64_t& _updateFlags)
{
    m_updateFlags = _updateFlags;
    m_updateFlagsHasBeenSet = true;
}

bool ModifyDeviceTrustStatusRequest::UpdateFlagsHasBeenSet() const
{
    return m_updateFlagsHasBeenSet;
}


