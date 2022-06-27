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

#include <tencentcloud/cpdp/v20190820/model/BusinessLicenseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

BusinessLicenseInfo::BusinessLicenseInfo() :
    m_businessLicenseTypeHasBeenSet(false),
    m_businessLicenseNumberHasBeenSet(false),
    m_businessLicenseValidityTypeHasBeenSet(false),
    m_businessLicenseEffectiveDateHasBeenSet(false),
    m_businessLicenseExpireDateHasBeenSet(false)
{
}

CoreInternalOutcome BusinessLicenseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BusinessLicenseType") && !value["BusinessLicenseType"].IsNull())
    {
        if (!value["BusinessLicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLicenseInfo.BusinessLicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLicenseType = string(value["BusinessLicenseType"].GetString());
        m_businessLicenseTypeHasBeenSet = true;
    }

    if (value.HasMember("BusinessLicenseNumber") && !value["BusinessLicenseNumber"].IsNull())
    {
        if (!value["BusinessLicenseNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLicenseInfo.BusinessLicenseNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLicenseNumber = string(value["BusinessLicenseNumber"].GetString());
        m_businessLicenseNumberHasBeenSet = true;
    }

    if (value.HasMember("BusinessLicenseValidityType") && !value["BusinessLicenseValidityType"].IsNull())
    {
        if (!value["BusinessLicenseValidityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLicenseInfo.BusinessLicenseValidityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLicenseValidityType = string(value["BusinessLicenseValidityType"].GetString());
        m_businessLicenseValidityTypeHasBeenSet = true;
    }

    if (value.HasMember("BusinessLicenseEffectiveDate") && !value["BusinessLicenseEffectiveDate"].IsNull())
    {
        if (!value["BusinessLicenseEffectiveDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLicenseInfo.BusinessLicenseEffectiveDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLicenseEffectiveDate = string(value["BusinessLicenseEffectiveDate"].GetString());
        m_businessLicenseEffectiveDateHasBeenSet = true;
    }

    if (value.HasMember("BusinessLicenseExpireDate") && !value["BusinessLicenseExpireDate"].IsNull())
    {
        if (!value["BusinessLicenseExpireDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLicenseInfo.BusinessLicenseExpireDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLicenseExpireDate = string(value["BusinessLicenseExpireDate"].GetString());
        m_businessLicenseExpireDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BusinessLicenseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessLicenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLicenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLicenseNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseValidityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseValidityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLicenseValidityType.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseEffectiveDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseEffectiveDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLicenseEffectiveDate.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseExpireDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseExpireDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLicenseExpireDate.c_str(), allocator).Move(), allocator);
    }

}


string BusinessLicenseInfo::GetBusinessLicenseType() const
{
    return m_businessLicenseType;
}

void BusinessLicenseInfo::SetBusinessLicenseType(const string& _businessLicenseType)
{
    m_businessLicenseType = _businessLicenseType;
    m_businessLicenseTypeHasBeenSet = true;
}

bool BusinessLicenseInfo::BusinessLicenseTypeHasBeenSet() const
{
    return m_businessLicenseTypeHasBeenSet;
}

string BusinessLicenseInfo::GetBusinessLicenseNumber() const
{
    return m_businessLicenseNumber;
}

void BusinessLicenseInfo::SetBusinessLicenseNumber(const string& _businessLicenseNumber)
{
    m_businessLicenseNumber = _businessLicenseNumber;
    m_businessLicenseNumberHasBeenSet = true;
}

bool BusinessLicenseInfo::BusinessLicenseNumberHasBeenSet() const
{
    return m_businessLicenseNumberHasBeenSet;
}

string BusinessLicenseInfo::GetBusinessLicenseValidityType() const
{
    return m_businessLicenseValidityType;
}

void BusinessLicenseInfo::SetBusinessLicenseValidityType(const string& _businessLicenseValidityType)
{
    m_businessLicenseValidityType = _businessLicenseValidityType;
    m_businessLicenseValidityTypeHasBeenSet = true;
}

bool BusinessLicenseInfo::BusinessLicenseValidityTypeHasBeenSet() const
{
    return m_businessLicenseValidityTypeHasBeenSet;
}

string BusinessLicenseInfo::GetBusinessLicenseEffectiveDate() const
{
    return m_businessLicenseEffectiveDate;
}

void BusinessLicenseInfo::SetBusinessLicenseEffectiveDate(const string& _businessLicenseEffectiveDate)
{
    m_businessLicenseEffectiveDate = _businessLicenseEffectiveDate;
    m_businessLicenseEffectiveDateHasBeenSet = true;
}

bool BusinessLicenseInfo::BusinessLicenseEffectiveDateHasBeenSet() const
{
    return m_businessLicenseEffectiveDateHasBeenSet;
}

string BusinessLicenseInfo::GetBusinessLicenseExpireDate() const
{
    return m_businessLicenseExpireDate;
}

void BusinessLicenseInfo::SetBusinessLicenseExpireDate(const string& _businessLicenseExpireDate)
{
    m_businessLicenseExpireDate = _businessLicenseExpireDate;
    m_businessLicenseExpireDateHasBeenSet = true;
}

bool BusinessLicenseInfo::BusinessLicenseExpireDateHasBeenSet() const
{
    return m_businessLicenseExpireDateHasBeenSet;
}

