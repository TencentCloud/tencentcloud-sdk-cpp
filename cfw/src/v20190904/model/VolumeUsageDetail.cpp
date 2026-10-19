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

#include <tencentcloud/cfw/v20190904/model/VolumeUsageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

VolumeUsageDetail::VolumeUsageDetail() :
    m_publicIpUsedHasBeenSet(false),
    m_instanceUsedHasBeenSet(false),
    m_statDateHasBeenSet(false),
    m_todayTrafficGBHasBeenSet(false),
    m_protectDaysHasBeenSet(false)
{
}

CoreInternalOutcome VolumeUsageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicIpUsed") && !value["PublicIpUsed"].IsNull())
    {
        if (!value["PublicIpUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeUsageDetail.PublicIpUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpUsed = value["PublicIpUsed"].GetInt64();
        m_publicIpUsedHasBeenSet = true;
    }

    if (value.HasMember("InstanceUsed") && !value["InstanceUsed"].IsNull())
    {
        if (!value["InstanceUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeUsageDetail.InstanceUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceUsed = value["InstanceUsed"].GetInt64();
        m_instanceUsedHasBeenSet = true;
    }

    if (value.HasMember("StatDate") && !value["StatDate"].IsNull())
    {
        if (!value["StatDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeUsageDetail.StatDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statDate = string(value["StatDate"].GetString());
        m_statDateHasBeenSet = true;
    }

    if (value.HasMember("TodayTrafficGB") && !value["TodayTrafficGB"].IsNull())
    {
        if (!value["TodayTrafficGB"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeUsageDetail.TodayTrafficGB` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_todayTrafficGB = value["TodayTrafficGB"].GetDouble();
        m_todayTrafficGBHasBeenSet = true;
    }

    if (value.HasMember("ProtectDays") && !value["ProtectDays"].IsNull())
    {
        if (!value["ProtectDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeUsageDetail.ProtectDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectDays = value["ProtectDays"].GetInt64();
        m_protectDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeUsageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicIpUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicIpUsed, allocator);
    }

    if (m_instanceUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceUsed, allocator);
    }

    if (m_statDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statDate.c_str(), allocator).Move(), allocator);
    }

    if (m_todayTrafficGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TodayTrafficGB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_todayTrafficGB, allocator);
    }

    if (m_protectDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectDays, allocator);
    }

}


int64_t VolumeUsageDetail::GetPublicIpUsed() const
{
    return m_publicIpUsed;
}

void VolumeUsageDetail::SetPublicIpUsed(const int64_t& _publicIpUsed)
{
    m_publicIpUsed = _publicIpUsed;
    m_publicIpUsedHasBeenSet = true;
}

bool VolumeUsageDetail::PublicIpUsedHasBeenSet() const
{
    return m_publicIpUsedHasBeenSet;
}

int64_t VolumeUsageDetail::GetInstanceUsed() const
{
    return m_instanceUsed;
}

void VolumeUsageDetail::SetInstanceUsed(const int64_t& _instanceUsed)
{
    m_instanceUsed = _instanceUsed;
    m_instanceUsedHasBeenSet = true;
}

bool VolumeUsageDetail::InstanceUsedHasBeenSet() const
{
    return m_instanceUsedHasBeenSet;
}

string VolumeUsageDetail::GetStatDate() const
{
    return m_statDate;
}

void VolumeUsageDetail::SetStatDate(const string& _statDate)
{
    m_statDate = _statDate;
    m_statDateHasBeenSet = true;
}

bool VolumeUsageDetail::StatDateHasBeenSet() const
{
    return m_statDateHasBeenSet;
}

double VolumeUsageDetail::GetTodayTrafficGB() const
{
    return m_todayTrafficGB;
}

void VolumeUsageDetail::SetTodayTrafficGB(const double& _todayTrafficGB)
{
    m_todayTrafficGB = _todayTrafficGB;
    m_todayTrafficGBHasBeenSet = true;
}

bool VolumeUsageDetail::TodayTrafficGBHasBeenSet() const
{
    return m_todayTrafficGBHasBeenSet;
}

int64_t VolumeUsageDetail::GetProtectDays() const
{
    return m_protectDays;
}

void VolumeUsageDetail::SetProtectDays(const int64_t& _protectDays)
{
    m_protectDays = _protectDays;
    m_protectDaysHasBeenSet = true;
}

bool VolumeUsageDetail::ProtectDaysHasBeenSet() const
{
    return m_protectDaysHasBeenSet;
}

