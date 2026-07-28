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

#include <tencentcloud/mqtt/v20240516/model/DeviceIdentityBackupHistoryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

DeviceIdentityBackupHistoryItem::DeviceIdentityBackupHistoryItem() :
    m_deviceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_primaryKeyHasBeenSet(false),
    m_secondaryKeyHasBeenSet(false),
    m_propagatingPropertiesHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_modificationTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeviceIdentityBackupHistoryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceIdentityBackupHistoryItem.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceIdentityBackupHistoryItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PrimaryKey") && !value["PrimaryKey"].IsNull())
    {
        if (!value["PrimaryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceIdentityBackupHistoryItem.PrimaryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryKey = string(value["PrimaryKey"].GetString());
        m_primaryKeyHasBeenSet = true;
    }

    if (value.HasMember("SecondaryKey") && !value["SecondaryKey"].IsNull())
    {
        if (!value["SecondaryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceIdentityBackupHistoryItem.SecondaryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryKey = string(value["SecondaryKey"].GetString());
        m_secondaryKeyHasBeenSet = true;
    }

    if (value.HasMember("PropagatingProperties") && !value["PropagatingProperties"].IsNull())
    {
        if (!value["PropagatingProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceIdentityBackupHistoryItem.PropagatingProperties` is not array type"));

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

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceIdentityBackupHistoryItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("ModificationTime") && !value["ModificationTime"].IsNull())
    {
        if (!value["ModificationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceIdentityBackupHistoryItem.ModificationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modificationTime = value["ModificationTime"].GetInt64();
        m_modificationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceIdentityBackupHistoryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_modificationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModificationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modificationTime, allocator);
    }

}


string DeviceIdentityBackupHistoryItem::GetDeviceId() const
{
    return m_deviceId;
}

void DeviceIdentityBackupHistoryItem::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DeviceIdentityBackupHistoryItem::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

int64_t DeviceIdentityBackupHistoryItem::GetStatus() const
{
    return m_status;
}

void DeviceIdentityBackupHistoryItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeviceIdentityBackupHistoryItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeviceIdentityBackupHistoryItem::GetPrimaryKey() const
{
    return m_primaryKey;
}

void DeviceIdentityBackupHistoryItem::SetPrimaryKey(const string& _primaryKey)
{
    m_primaryKey = _primaryKey;
    m_primaryKeyHasBeenSet = true;
}

bool DeviceIdentityBackupHistoryItem::PrimaryKeyHasBeenSet() const
{
    return m_primaryKeyHasBeenSet;
}

string DeviceIdentityBackupHistoryItem::GetSecondaryKey() const
{
    return m_secondaryKey;
}

void DeviceIdentityBackupHistoryItem::SetSecondaryKey(const string& _secondaryKey)
{
    m_secondaryKey = _secondaryKey;
    m_secondaryKeyHasBeenSet = true;
}

bool DeviceIdentityBackupHistoryItem::SecondaryKeyHasBeenSet() const
{
    return m_secondaryKeyHasBeenSet;
}

vector<PropagatingProperty> DeviceIdentityBackupHistoryItem::GetPropagatingProperties() const
{
    return m_propagatingProperties;
}

void DeviceIdentityBackupHistoryItem::SetPropagatingProperties(const vector<PropagatingProperty>& _propagatingProperties)
{
    m_propagatingProperties = _propagatingProperties;
    m_propagatingPropertiesHasBeenSet = true;
}

bool DeviceIdentityBackupHistoryItem::PropagatingPropertiesHasBeenSet() const
{
    return m_propagatingPropertiesHasBeenSet;
}

string DeviceIdentityBackupHistoryItem::GetSource() const
{
    return m_source;
}

void DeviceIdentityBackupHistoryItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DeviceIdentityBackupHistoryItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t DeviceIdentityBackupHistoryItem::GetModificationTime() const
{
    return m_modificationTime;
}

void DeviceIdentityBackupHistoryItem::SetModificationTime(const int64_t& _modificationTime)
{
    m_modificationTime = _modificationTime;
    m_modificationTimeHasBeenSet = true;
}

bool DeviceIdentityBackupHistoryItem::ModificationTimeHasBeenSet() const
{
    return m_modificationTimeHasBeenSet;
}

