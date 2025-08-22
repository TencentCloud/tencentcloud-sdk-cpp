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

#include <tencentcloud/mqtt/v20240516/model/ModifyDeviceIdentityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

ModifyDeviceIdentityRequest::ModifyDeviceIdentityRequest() :
    m_instanceIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_primaryKeyHasBeenSet(false),
    m_secondaryKeyHasBeenSet(false),
    m_propagatingPropertiesHasBeenSet(false)
{
}

string ModifyDeviceIdentityRequest::ToJsonString() const
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
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_primaryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secondaryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_propagatingPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropagatingProperties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_propagatingProperties.begin(); itr != m_propagatingProperties.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDeviceIdentityRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDeviceIdentityRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDeviceIdentityRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDeviceIdentityRequest::GetDeviceId() const
{
    return m_deviceId;
}

void ModifyDeviceIdentityRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool ModifyDeviceIdentityRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string ModifyDeviceIdentityRequest::GetStatus() const
{
    return m_status;
}

void ModifyDeviceIdentityRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyDeviceIdentityRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyDeviceIdentityRequest::GetPrimaryKey() const
{
    return m_primaryKey;
}

void ModifyDeviceIdentityRequest::SetPrimaryKey(const string& _primaryKey)
{
    m_primaryKey = _primaryKey;
    m_primaryKeyHasBeenSet = true;
}

bool ModifyDeviceIdentityRequest::PrimaryKeyHasBeenSet() const
{
    return m_primaryKeyHasBeenSet;
}

string ModifyDeviceIdentityRequest::GetSecondaryKey() const
{
    return m_secondaryKey;
}

void ModifyDeviceIdentityRequest::SetSecondaryKey(const string& _secondaryKey)
{
    m_secondaryKey = _secondaryKey;
    m_secondaryKeyHasBeenSet = true;
}

bool ModifyDeviceIdentityRequest::SecondaryKeyHasBeenSet() const
{
    return m_secondaryKeyHasBeenSet;
}

vector<PropagatingProperty> ModifyDeviceIdentityRequest::GetPropagatingProperties() const
{
    return m_propagatingProperties;
}

void ModifyDeviceIdentityRequest::SetPropagatingProperties(const vector<PropagatingProperty>& _propagatingProperties)
{
    m_propagatingProperties = _propagatingProperties;
    m_propagatingPropertiesHasBeenSet = true;
}

bool ModifyDeviceIdentityRequest::PropagatingPropertiesHasBeenSet() const
{
    return m_propagatingPropertiesHasBeenSet;
}


