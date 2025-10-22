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

#include <tencentcloud/mqtt/v20240516/model/DeviceIdentityItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

DeviceIdentityItem::DeviceIdentityItem() :
    m_instanceIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_primaryKeyHasBeenSet(false),
    m_secondaryKeyHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_propagatingPropertiesHasBeenSet(false)
{
}

CoreInternalOutcome DeviceIdentityItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceIdentityItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceIdentityItem.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceIdentityItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PrimaryKey") && !value["PrimaryKey"].IsNull())
    {
        if (!value["PrimaryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceIdentityItem.PrimaryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryKey = string(value["PrimaryKey"].GetString());
        m_primaryKeyHasBeenSet = true;
    }

    if (value.HasMember("SecondaryKey") && !value["SecondaryKey"].IsNull())
    {
        if (!value["SecondaryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceIdentityItem.SecondaryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryKey = string(value["SecondaryKey"].GetString());
        m_secondaryKeyHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceIdentityItem.CreatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = value["CreatedTime"].GetInt64();
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("PropagatingProperties") && !value["PropagatingProperties"].IsNull())
    {
        if (!value["PropagatingProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceIdentityItem.PropagatingProperties` is not array type"));

        const rapidjson::Value &tmpValue = value["PropagatingProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PropagatingProperty item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_propagatingProperties.push_back(item);
        }
        m_propagatingPropertiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceIdentityItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_primaryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTime, allocator);
    }

    if (m_propagatingPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropagatingProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_propagatingProperties.begin(); itr != m_propagatingProperties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DeviceIdentityItem::GetInstanceId() const
{
    return m_instanceId;
}

void DeviceIdentityItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeviceIdentityItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DeviceIdentityItem::GetDeviceId() const
{
    return m_deviceId;
}

void DeviceIdentityItem::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DeviceIdentityItem::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

int64_t DeviceIdentityItem::GetStatus() const
{
    return m_status;
}

void DeviceIdentityItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeviceIdentityItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeviceIdentityItem::GetPrimaryKey() const
{
    return m_primaryKey;
}

void DeviceIdentityItem::SetPrimaryKey(const string& _primaryKey)
{
    m_primaryKey = _primaryKey;
    m_primaryKeyHasBeenSet = true;
}

bool DeviceIdentityItem::PrimaryKeyHasBeenSet() const
{
    return m_primaryKeyHasBeenSet;
}

string DeviceIdentityItem::GetSecondaryKey() const
{
    return m_secondaryKey;
}

void DeviceIdentityItem::SetSecondaryKey(const string& _secondaryKey)
{
    m_secondaryKey = _secondaryKey;
    m_secondaryKeyHasBeenSet = true;
}

bool DeviceIdentityItem::SecondaryKeyHasBeenSet() const
{
    return m_secondaryKeyHasBeenSet;
}

int64_t DeviceIdentityItem::GetCreatedTime() const
{
    return m_createdTime;
}

void DeviceIdentityItem::SetCreatedTime(const int64_t& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool DeviceIdentityItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<PropagatingProperty> DeviceIdentityItem::GetPropagatingProperties() const
{
    return m_propagatingProperties;
}

void DeviceIdentityItem::SetPropagatingProperties(const vector<PropagatingProperty>& _propagatingProperties)
{
    m_propagatingProperties = _propagatingProperties;
    m_propagatingPropertiesHasBeenSet = true;
}

bool DeviceIdentityItem::PropagatingPropertiesHasBeenSet() const
{
    return m_propagatingPropertiesHasBeenSet;
}

