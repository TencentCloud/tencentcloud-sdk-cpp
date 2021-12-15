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

#include <tencentcloud/iotvideoindustry/v20201201/model/ModifySubscriptionStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

ModifySubscriptionStatusRequest::ModifySubscriptionStatusRequest() :
    m_deviceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subscriptionItemHasBeenSet(false)
{
}

string ModifySubscriptionStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_subscriptionItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriptionItem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscriptionItem.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySubscriptionStatusRequest::GetDeviceId() const
{
    return m_deviceId;
}

void ModifySubscriptionStatusRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool ModifySubscriptionStatusRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

int64_t ModifySubscriptionStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifySubscriptionStatusRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifySubscriptionStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifySubscriptionStatusRequest::GetSubscriptionItem() const
{
    return m_subscriptionItem;
}

void ModifySubscriptionStatusRequest::SetSubscriptionItem(const string& _subscriptionItem)
{
    m_subscriptionItem = _subscriptionItem;
    m_subscriptionItemHasBeenSet = true;
}

bool ModifySubscriptionStatusRequest::SubscriptionItemHasBeenSet() const
{
    return m_subscriptionItemHasBeenSet;
}


