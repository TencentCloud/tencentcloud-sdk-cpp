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

#include <tencentcloud/tat/v20201028/model/RegisterCodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

RegisterCodeInfo::RegisterCodeInfo() :
    m_registerCodeIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_instanceNamePrefixHasBeenSet(false),
    m_registerLimitHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_ipAddressRangeHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_registeredCountHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false)
{
}

CoreInternalOutcome RegisterCodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegisterCodeId") && !value["RegisterCodeId"].IsNull())
    {
        if (!value["RegisterCodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCodeInfo.RegisterCodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerCodeId = string(value["RegisterCodeId"].GetString());
        m_registerCodeIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCodeInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("InstanceNamePrefix") && !value["InstanceNamePrefix"].IsNull())
    {
        if (!value["InstanceNamePrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCodeInfo.InstanceNamePrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNamePrefix = string(value["InstanceNamePrefix"].GetString());
        m_instanceNamePrefixHasBeenSet = true;
    }

    if (value.HasMember("RegisterLimit") && !value["RegisterLimit"].IsNull())
    {
        if (!value["RegisterLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCodeInfo.RegisterLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registerLimit = value["RegisterLimit"].GetInt64();
        m_registerLimitHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCodeInfo.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("IpAddressRange") && !value["IpAddressRange"].IsNull())
    {
        if (!value["IpAddressRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCodeInfo.IpAddressRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipAddressRange = string(value["IpAddressRange"].GetString());
        m_ipAddressRangeHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCodeInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("RegisteredCount") && !value["RegisteredCount"].IsNull())
    {
        if (!value["RegisteredCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCodeInfo.RegisteredCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registeredCount = value["RegisteredCount"].GetInt64();
        m_registeredCountHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCodeInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterCodeInfo.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegisterCodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registerCodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterCodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerCodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNamePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNamePrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceNamePrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_registerLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registerLimit, allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ipAddressRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddressRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipAddressRange.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_registeredCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisteredCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registeredCount, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

}


string RegisterCodeInfo::GetRegisterCodeId() const
{
    return m_registerCodeId;
}

void RegisterCodeInfo::SetRegisterCodeId(const string& _registerCodeId)
{
    m_registerCodeId = _registerCodeId;
    m_registerCodeIdHasBeenSet = true;
}

bool RegisterCodeInfo::RegisterCodeIdHasBeenSet() const
{
    return m_registerCodeIdHasBeenSet;
}

string RegisterCodeInfo::GetDescription() const
{
    return m_description;
}

void RegisterCodeInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RegisterCodeInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RegisterCodeInfo::GetInstanceNamePrefix() const
{
    return m_instanceNamePrefix;
}

void RegisterCodeInfo::SetInstanceNamePrefix(const string& _instanceNamePrefix)
{
    m_instanceNamePrefix = _instanceNamePrefix;
    m_instanceNamePrefixHasBeenSet = true;
}

bool RegisterCodeInfo::InstanceNamePrefixHasBeenSet() const
{
    return m_instanceNamePrefixHasBeenSet;
}

int64_t RegisterCodeInfo::GetRegisterLimit() const
{
    return m_registerLimit;
}

void RegisterCodeInfo::SetRegisterLimit(const int64_t& _registerLimit)
{
    m_registerLimit = _registerLimit;
    m_registerLimitHasBeenSet = true;
}

bool RegisterCodeInfo::RegisterLimitHasBeenSet() const
{
    return m_registerLimitHasBeenSet;
}

string RegisterCodeInfo::GetExpiredTime() const
{
    return m_expiredTime;
}

void RegisterCodeInfo::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool RegisterCodeInfo::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string RegisterCodeInfo::GetIpAddressRange() const
{
    return m_ipAddressRange;
}

void RegisterCodeInfo::SetIpAddressRange(const string& _ipAddressRange)
{
    m_ipAddressRange = _ipAddressRange;
    m_ipAddressRangeHasBeenSet = true;
}

bool RegisterCodeInfo::IpAddressRangeHasBeenSet() const
{
    return m_ipAddressRangeHasBeenSet;
}

bool RegisterCodeInfo::GetEnabled() const
{
    return m_enabled;
}

void RegisterCodeInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool RegisterCodeInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

int64_t RegisterCodeInfo::GetRegisteredCount() const
{
    return m_registeredCount;
}

void RegisterCodeInfo::SetRegisteredCount(const int64_t& _registeredCount)
{
    m_registeredCount = _registeredCount;
    m_registeredCountHasBeenSet = true;
}

bool RegisterCodeInfo::RegisteredCountHasBeenSet() const
{
    return m_registeredCountHasBeenSet;
}

string RegisterCodeInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void RegisterCodeInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool RegisterCodeInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string RegisterCodeInfo::GetUpdatedTime() const
{
    return m_updatedTime;
}

void RegisterCodeInfo::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool RegisterCodeInfo::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

