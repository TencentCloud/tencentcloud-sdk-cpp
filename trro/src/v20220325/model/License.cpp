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

#include <tencentcloud/trro/v20220325/model/License.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

License::License() :
    m_countHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_remainDayHasBeenSet(false),
    m_licenseIdsHasBeenSet(false)
{
}

CoreInternalOutcome License::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `License.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `License.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("RemainDay") && !value["RemainDay"].IsNull())
    {
        if (!value["RemainDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `License.RemainDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainDay = value["RemainDay"].GetInt64();
        m_remainDayHasBeenSet = true;
    }

    if (value.HasMember("LicenseIds") && !value["LicenseIds"].IsNull())
    {
        if (!value["LicenseIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `License.LicenseIds` is not array type"));

        const rapidjson::Value &tmpValue = value["LicenseIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_licenseIds.push_back((*itr).GetString());
        }
        m_licenseIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void License::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

    if (m_remainDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainDay, allocator);
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

}


int64_t License::GetCount() const
{
    return m_count;
}

void License::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool License::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t License::GetStatus() const
{
    return m_status;
}

void License::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool License::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string License::GetExpireTime() const
{
    return m_expireTime;
}

void License::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool License::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string License::GetDuration() const
{
    return m_duration;
}

void License::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool License::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t License::GetRemainDay() const
{
    return m_remainDay;
}

void License::SetRemainDay(const int64_t& _remainDay)
{
    m_remainDay = _remainDay;
    m_remainDayHasBeenSet = true;
}

bool License::RemainDayHasBeenSet() const
{
    return m_remainDayHasBeenSet;
}

vector<string> License::GetLicenseIds() const
{
    return m_licenseIds;
}

void License::SetLicenseIds(const vector<string>& _licenseIds)
{
    m_licenseIds = _licenseIds;
    m_licenseIdsHasBeenSet = true;
}

bool License::LicenseIdsHasBeenSet() const
{
    return m_licenseIdsHasBeenSet;
}

