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

#include <tencentcloud/iecp/v20210914/model/IotDevicesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

IotDevicesInfo::IotDevicesInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_disabledHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastOnlineTimeHasBeenSet(false),
    m_isBoundHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_unitIDHasBeenSet(false),
    m_unitNameHasBeenSet(false)
{
}

CoreInternalOutcome IotDevicesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IotDevicesInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotDevicesInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IotDevicesInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Disabled") && !value["Disabled"].IsNull())
    {
        if (!value["Disabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IotDevicesInfo.Disabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disabled = value["Disabled"].GetBool();
        m_disabledHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotDevicesInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotDevicesInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastOnlineTime") && !value["LastOnlineTime"].IsNull())
    {
        if (!value["LastOnlineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotDevicesInfo.LastOnlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOnlineTime = string(value["LastOnlineTime"].GetString());
        m_lastOnlineTimeHasBeenSet = true;
    }

    if (value.HasMember("IsBound") && !value["IsBound"].IsNull())
    {
        if (!value["IsBound"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IotDevicesInfo.IsBound` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBound = value["IsBound"].GetBool();
        m_isBoundHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotDevicesInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotDevicesInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("UnitID") && !value["UnitID"].IsNull())
    {
        if (!value["UnitID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IotDevicesInfo.UnitID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unitID = value["UnitID"].GetInt64();
        m_unitIDHasBeenSet = true;
    }

    if (value.HasMember("UnitName") && !value["UnitName"].IsNull())
    {
        if (!value["UnitName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotDevicesInfo.UnitName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitName = string(value["UnitName"].GetString());
        m_unitNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IotDevicesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_disabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disabled, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastOnlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOnlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastOnlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isBoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBound, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_unitIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitID, allocator);
    }

    if (m_unitNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitName.c_str(), allocator).Move(), allocator);
    }

}


int64_t IotDevicesInfo::GetId() const
{
    return m_id;
}

void IotDevicesInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool IotDevicesInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string IotDevicesInfo::GetName() const
{
    return m_name;
}

void IotDevicesInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IotDevicesInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t IotDevicesInfo::GetStatus() const
{
    return m_status;
}

void IotDevicesInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IotDevicesInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool IotDevicesInfo::GetDisabled() const
{
    return m_disabled;
}

void IotDevicesInfo::SetDisabled(const bool& _disabled)
{
    m_disabled = _disabled;
    m_disabledHasBeenSet = true;
}

bool IotDevicesInfo::DisabledHasBeenSet() const
{
    return m_disabledHasBeenSet;
}

string IotDevicesInfo::GetDescription() const
{
    return m_description;
}

void IotDevicesInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool IotDevicesInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string IotDevicesInfo::GetCreateTime() const
{
    return m_createTime;
}

void IotDevicesInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool IotDevicesInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string IotDevicesInfo::GetLastOnlineTime() const
{
    return m_lastOnlineTime;
}

void IotDevicesInfo::SetLastOnlineTime(const string& _lastOnlineTime)
{
    m_lastOnlineTime = _lastOnlineTime;
    m_lastOnlineTimeHasBeenSet = true;
}

bool IotDevicesInfo::LastOnlineTimeHasBeenSet() const
{
    return m_lastOnlineTimeHasBeenSet;
}

bool IotDevicesInfo::GetIsBound() const
{
    return m_isBound;
}

void IotDevicesInfo::SetIsBound(const bool& _isBound)
{
    m_isBound = _isBound;
    m_isBoundHasBeenSet = true;
}

bool IotDevicesInfo::IsBoundHasBeenSet() const
{
    return m_isBoundHasBeenSet;
}

string IotDevicesInfo::GetVersion() const
{
    return m_version;
}

void IotDevicesInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool IotDevicesInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string IotDevicesInfo::GetRegion() const
{
    return m_region;
}

void IotDevicesInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool IotDevicesInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t IotDevicesInfo::GetUnitID() const
{
    return m_unitID;
}

void IotDevicesInfo::SetUnitID(const int64_t& _unitID)
{
    m_unitID = _unitID;
    m_unitIDHasBeenSet = true;
}

bool IotDevicesInfo::UnitIDHasBeenSet() const
{
    return m_unitIDHasBeenSet;
}

string IotDevicesInfo::GetUnitName() const
{
    return m_unitName;
}

void IotDevicesInfo::SetUnitName(const string& _unitName)
{
    m_unitName = _unitName;
    m_unitNameHasBeenSet = true;
}

bool IotDevicesInfo::UnitNameHasBeenSet() const
{
    return m_unitNameHasBeenSet;
}

