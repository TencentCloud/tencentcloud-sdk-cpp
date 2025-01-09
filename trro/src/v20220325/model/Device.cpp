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

#include <tencentcloud/trro/v20220325/model/Device.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

Device::Device() :
    m_deviceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_licenseCountHasBeenSet(false),
    m_remainDayHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_licenseIdsHasBeenSet(false),
    m_monthlyRemainTimeHasBeenSet(false),
    m_limitedTimeHasBeenSet(false)
{
}

CoreInternalOutcome Device::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("LicenseCount") && !value["LicenseCount"].IsNull())
    {
        if (!value["LicenseCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.LicenseCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseCount = value["LicenseCount"].GetInt64();
        m_licenseCountHasBeenSet = true;
    }

    if (value.HasMember("RemainDay") && !value["RemainDay"].IsNull())
    {
        if (!value["RemainDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.RemainDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainDay = value["RemainDay"].GetInt64();
        m_remainDayHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("LicenseIds") && !value["LicenseIds"].IsNull())
    {
        if (!value["LicenseIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Device.LicenseIds` is not array type"));

        const rapidjson::Value &tmpValue = value["LicenseIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_licenseIds.push_back((*itr).GetString());
        }
        m_licenseIdsHasBeenSet = true;
    }

    if (value.HasMember("MonthlyRemainTime") && !value["MonthlyRemainTime"].IsNull())
    {
        if (!value["MonthlyRemainTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.MonthlyRemainTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monthlyRemainTime = value["MonthlyRemainTime"].GetInt64();
        m_monthlyRemainTimeHasBeenSet = true;
    }

    if (value.HasMember("LimitedTime") && !value["LimitedTime"].IsNull())
    {
        if (!value["LimitedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.LimitedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limitedTime = value["LimitedTime"].GetInt64();
        m_limitedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Device::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseCount, allocator);
    }

    if (m_remainDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainDay, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_licenseIds.begin(); itr != m_licenseIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_monthlyRemainTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthlyRemainTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monthlyRemainTime, allocator);
    }

    if (m_limitedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitedTime, allocator);
    }

}


string Device::GetDeviceId() const
{
    return m_deviceId;
}

void Device::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool Device::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string Device::GetDeviceName() const
{
    return m_deviceName;
}

void Device::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool Device::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

int64_t Device::GetLicenseCount() const
{
    return m_licenseCount;
}

void Device::SetLicenseCount(const int64_t& _licenseCount)
{
    m_licenseCount = _licenseCount;
    m_licenseCountHasBeenSet = true;
}

bool Device::LicenseCountHasBeenSet() const
{
    return m_licenseCountHasBeenSet;
}

int64_t Device::GetRemainDay() const
{
    return m_remainDay;
}

void Device::SetRemainDay(const int64_t& _remainDay)
{
    m_remainDay = _remainDay;
    m_remainDayHasBeenSet = true;
}

bool Device::RemainDayHasBeenSet() const
{
    return m_remainDayHasBeenSet;
}

string Device::GetExpireTime() const
{
    return m_expireTime;
}

void Device::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool Device::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string Device::GetDuration() const
{
    return m_duration;
}

void Device::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool Device::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<string> Device::GetLicenseIds() const
{
    return m_licenseIds;
}

void Device::SetLicenseIds(const vector<string>& _licenseIds)
{
    m_licenseIds = _licenseIds;
    m_licenseIdsHasBeenSet = true;
}

bool Device::LicenseIdsHasBeenSet() const
{
    return m_licenseIdsHasBeenSet;
}

int64_t Device::GetMonthlyRemainTime() const
{
    return m_monthlyRemainTime;
}

void Device::SetMonthlyRemainTime(const int64_t& _monthlyRemainTime)
{
    m_monthlyRemainTime = _monthlyRemainTime;
    m_monthlyRemainTimeHasBeenSet = true;
}

bool Device::MonthlyRemainTimeHasBeenSet() const
{
    return m_monthlyRemainTimeHasBeenSet;
}

int64_t Device::GetLimitedTime() const
{
    return m_limitedTime;
}

void Device::SetLimitedTime(const int64_t& _limitedTime)
{
    m_limitedTime = _limitedTime;
    m_limitedTimeHasBeenSet = true;
}

bool Device::LimitedTimeHasBeenSet() const
{
    return m_limitedTimeHasBeenSet;
}

