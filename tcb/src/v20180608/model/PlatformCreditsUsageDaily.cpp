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

#include <tencentcloud/tcb/v20180608/model/PlatformCreditsUsageDaily.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PlatformCreditsUsageDaily::PlatformCreditsUsageDaily() :
    m_dateHasBeenSet(false),
    m_deductValueHasBeenSet(false),
    m_packageDeductValueHasBeenSet(false),
    m_reportValueHasBeenSet(false),
    m_originCreditsHasBeenSet(false)
{
}

CoreInternalOutcome PlatformCreditsUsageDaily::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformCreditsUsageDaily.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("DeductValue") && !value["DeductValue"].IsNull())
    {
        if (!value["DeductValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformCreditsUsageDaily.DeductValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_deductValue = value["DeductValue"].GetDouble();
        m_deductValueHasBeenSet = true;
    }

    if (value.HasMember("PackageDeductValue") && !value["PackageDeductValue"].IsNull())
    {
        if (!value["PackageDeductValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformCreditsUsageDaily.PackageDeductValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_packageDeductValue = value["PackageDeductValue"].GetDouble();
        m_packageDeductValueHasBeenSet = true;
    }

    if (value.HasMember("ReportValue") && !value["ReportValue"].IsNull())
    {
        if (!value["ReportValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformCreditsUsageDaily.ReportValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_reportValue = value["ReportValue"].GetDouble();
        m_reportValueHasBeenSet = true;
    }

    if (value.HasMember("OriginCredits") && !value["OriginCredits"].IsNull())
    {
        if (!value["OriginCredits"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformCreditsUsageDaily.OriginCredits` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originCredits = value["OriginCredits"].GetDouble();
        m_originCreditsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlatformCreditsUsageDaily::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_deductValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductValue, allocator);
    }

    if (m_packageDeductValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageDeductValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageDeductValue, allocator);
    }

    if (m_reportValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportValue, allocator);
    }

    if (m_originCreditsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginCredits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originCredits, allocator);
    }

}


string PlatformCreditsUsageDaily::GetDate() const
{
    return m_date;
}

void PlatformCreditsUsageDaily::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool PlatformCreditsUsageDaily::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

double PlatformCreditsUsageDaily::GetDeductValue() const
{
    return m_deductValue;
}

void PlatformCreditsUsageDaily::SetDeductValue(const double& _deductValue)
{
    m_deductValue = _deductValue;
    m_deductValueHasBeenSet = true;
}

bool PlatformCreditsUsageDaily::DeductValueHasBeenSet() const
{
    return m_deductValueHasBeenSet;
}

double PlatformCreditsUsageDaily::GetPackageDeductValue() const
{
    return m_packageDeductValue;
}

void PlatformCreditsUsageDaily::SetPackageDeductValue(const double& _packageDeductValue)
{
    m_packageDeductValue = _packageDeductValue;
    m_packageDeductValueHasBeenSet = true;
}

bool PlatformCreditsUsageDaily::PackageDeductValueHasBeenSet() const
{
    return m_packageDeductValueHasBeenSet;
}

double PlatformCreditsUsageDaily::GetReportValue() const
{
    return m_reportValue;
}

void PlatformCreditsUsageDaily::SetReportValue(const double& _reportValue)
{
    m_reportValue = _reportValue;
    m_reportValueHasBeenSet = true;
}

bool PlatformCreditsUsageDaily::ReportValueHasBeenSet() const
{
    return m_reportValueHasBeenSet;
}

double PlatformCreditsUsageDaily::GetOriginCredits() const
{
    return m_originCredits;
}

void PlatformCreditsUsageDaily::SetOriginCredits(const double& _originCredits)
{
    m_originCredits = _originCredits;
    m_originCreditsHasBeenSet = true;
}

bool PlatformCreditsUsageDaily::OriginCreditsHasBeenSet() const
{
    return m_originCreditsHasBeenSet;
}

