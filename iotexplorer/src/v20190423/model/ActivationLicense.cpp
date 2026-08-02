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

#include <tencentcloud/iotexplorer/v20190423/model/ActivationLicense.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ActivationLicense::ActivationLicense() :
    m_serviceTypeHasBeenSet(false),
    m_totalLicenseNumHasBeenSet(false),
    m_usedLicenseNumHasBeenSet(false),
    m_periodHasBeenSet(false)
{
}

CoreInternalOutcome ActivationLicense::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivationLicense.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalLicenseNum") && !value["TotalLicenseNum"].IsNull())
    {
        if (!value["TotalLicenseNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivationLicense.TotalLicenseNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalLicenseNum = value["TotalLicenseNum"].GetInt64();
        m_totalLicenseNumHasBeenSet = true;
    }

    if (value.HasMember("UsedLicenseNum") && !value["UsedLicenseNum"].IsNull())
    {
        if (!value["UsedLicenseNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivationLicense.UsedLicenseNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedLicenseNum = value["UsedLicenseNum"].GetInt64();
        m_usedLicenseNumHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivationLicense.Period` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_period = string(value["Period"].GetString());
        m_periodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActivationLicense::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_totalLicenseNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalLicenseNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalLicenseNum, allocator);
    }

    if (m_usedLicenseNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedLicenseNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedLicenseNum, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_period.c_str(), allocator).Move(), allocator);
    }

}


string ActivationLicense::GetServiceType() const
{
    return m_serviceType;
}

void ActivationLicense::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ActivationLicense::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

int64_t ActivationLicense::GetTotalLicenseNum() const
{
    return m_totalLicenseNum;
}

void ActivationLicense::SetTotalLicenseNum(const int64_t& _totalLicenseNum)
{
    m_totalLicenseNum = _totalLicenseNum;
    m_totalLicenseNumHasBeenSet = true;
}

bool ActivationLicense::TotalLicenseNumHasBeenSet() const
{
    return m_totalLicenseNumHasBeenSet;
}

int64_t ActivationLicense::GetUsedLicenseNum() const
{
    return m_usedLicenseNum;
}

void ActivationLicense::SetUsedLicenseNum(const int64_t& _usedLicenseNum)
{
    m_usedLicenseNum = _usedLicenseNum;
    m_usedLicenseNumHasBeenSet = true;
}

bool ActivationLicense::UsedLicenseNumHasBeenSet() const
{
    return m_usedLicenseNumHasBeenSet;
}

string ActivationLicense::GetPeriod() const
{
    return m_period;
}

void ActivationLicense::SetPeriod(const string& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool ActivationLicense::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

