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

#include <tencentcloud/sms/v20210111/model/SmsPackagesStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

SmsPackagesStatistics::SmsPackagesStatistics() :
    m_packageCreateTimeHasBeenSet(false),
    m_packageEffectiveTimeHasBeenSet(false),
    m_packageExpiredTimeHasBeenSet(false),
    m_packageAmountHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_currentUsageHasBeenSet(false)
{
}

CoreInternalOutcome SmsPackagesStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageCreateTime") && !value["PackageCreateTime"].IsNull())
    {
        if (!value["PackageCreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmsPackagesStatistics.PackageCreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packageCreateTime = value["PackageCreateTime"].GetUint64();
        m_packageCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("PackageEffectiveTime") && !value["PackageEffectiveTime"].IsNull())
    {
        if (!value["PackageEffectiveTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmsPackagesStatistics.PackageEffectiveTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packageEffectiveTime = value["PackageEffectiveTime"].GetUint64();
        m_packageEffectiveTimeHasBeenSet = true;
    }

    if (value.HasMember("PackageExpiredTime") && !value["PackageExpiredTime"].IsNull())
    {
        if (!value["PackageExpiredTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmsPackagesStatistics.PackageExpiredTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packageExpiredTime = value["PackageExpiredTime"].GetUint64();
        m_packageExpiredTimeHasBeenSet = true;
    }

    if (value.HasMember("PackageAmount") && !value["PackageAmount"].IsNull())
    {
        if (!value["PackageAmount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmsPackagesStatistics.PackageAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packageAmount = value["PackageAmount"].GetUint64();
        m_packageAmountHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmsPackagesStatistics.PackageType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = value["PackageType"].GetUint64();
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmsPackagesStatistics.PackageId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = value["PackageId"].GetUint64();
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("CurrentUsage") && !value["CurrentUsage"].IsNull())
    {
        if (!value["CurrentUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmsPackagesStatistics.CurrentUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentUsage = value["CurrentUsage"].GetUint64();
        m_currentUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmsPackagesStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packageCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageCreateTime, allocator);
    }

    if (m_packageEffectiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageEffectiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageEffectiveTime, allocator);
    }

    if (m_packageExpiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageExpiredTime, allocator);
    }

    if (m_packageAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageAmount, allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageType, allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageId, allocator);
    }

    if (m_currentUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentUsage, allocator);
    }

}


uint64_t SmsPackagesStatistics::GetPackageCreateTime() const
{
    return m_packageCreateTime;
}

void SmsPackagesStatistics::SetPackageCreateTime(const uint64_t& _packageCreateTime)
{
    m_packageCreateTime = _packageCreateTime;
    m_packageCreateTimeHasBeenSet = true;
}

bool SmsPackagesStatistics::PackageCreateTimeHasBeenSet() const
{
    return m_packageCreateTimeHasBeenSet;
}

uint64_t SmsPackagesStatistics::GetPackageEffectiveTime() const
{
    return m_packageEffectiveTime;
}

void SmsPackagesStatistics::SetPackageEffectiveTime(const uint64_t& _packageEffectiveTime)
{
    m_packageEffectiveTime = _packageEffectiveTime;
    m_packageEffectiveTimeHasBeenSet = true;
}

bool SmsPackagesStatistics::PackageEffectiveTimeHasBeenSet() const
{
    return m_packageEffectiveTimeHasBeenSet;
}

uint64_t SmsPackagesStatistics::GetPackageExpiredTime() const
{
    return m_packageExpiredTime;
}

void SmsPackagesStatistics::SetPackageExpiredTime(const uint64_t& _packageExpiredTime)
{
    m_packageExpiredTime = _packageExpiredTime;
    m_packageExpiredTimeHasBeenSet = true;
}

bool SmsPackagesStatistics::PackageExpiredTimeHasBeenSet() const
{
    return m_packageExpiredTimeHasBeenSet;
}

uint64_t SmsPackagesStatistics::GetPackageAmount() const
{
    return m_packageAmount;
}

void SmsPackagesStatistics::SetPackageAmount(const uint64_t& _packageAmount)
{
    m_packageAmount = _packageAmount;
    m_packageAmountHasBeenSet = true;
}

bool SmsPackagesStatistics::PackageAmountHasBeenSet() const
{
    return m_packageAmountHasBeenSet;
}

uint64_t SmsPackagesStatistics::GetPackageType() const
{
    return m_packageType;
}

void SmsPackagesStatistics::SetPackageType(const uint64_t& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool SmsPackagesStatistics::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

uint64_t SmsPackagesStatistics::GetPackageId() const
{
    return m_packageId;
}

void SmsPackagesStatistics::SetPackageId(const uint64_t& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool SmsPackagesStatistics::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

uint64_t SmsPackagesStatistics::GetCurrentUsage() const
{
    return m_currentUsage;
}

void SmsPackagesStatistics::SetCurrentUsage(const uint64_t& _currentUsage)
{
    m_currentUsage = _currentUsage;
    m_currentUsageHasBeenSet = true;
}

bool SmsPackagesStatistics::CurrentUsageHasBeenSet() const
{
    return m_currentUsageHasBeenSet;
}

