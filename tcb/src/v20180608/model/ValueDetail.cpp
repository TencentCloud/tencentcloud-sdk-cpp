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

#include <tencentcloud/tcb/v20180608/model/ValueDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ValueDetail::ValueDetail() :
    m_calcTimeHasBeenSet(false),
    m_rawValueHasBeenSet(false),
    m_creditsValueHasBeenSet(false),
    m_deductValueHasBeenSet(false),
    m_packageDeductValueHasBeenSet(false),
    m_reportValueHasBeenSet(false)
{
}

CoreInternalOutcome ValueDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CalcTime") && !value["CalcTime"].IsNull())
    {
        if (!value["CalcTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValueDetail.CalcTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calcTime = string(value["CalcTime"].GetString());
        m_calcTimeHasBeenSet = true;
    }

    if (value.HasMember("RawValue") && !value["RawValue"].IsNull())
    {
        if (!value["RawValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ValueDetail.RawValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rawValue = value["RawValue"].GetInt64();
        m_rawValueHasBeenSet = true;
    }

    if (value.HasMember("CreditsValue") && !value["CreditsValue"].IsNull())
    {
        if (!value["CreditsValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ValueDetail.CreditsValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_creditsValue = value["CreditsValue"].GetDouble();
        m_creditsValueHasBeenSet = true;
    }

    if (value.HasMember("DeductValue") && !value["DeductValue"].IsNull())
    {
        if (!value["DeductValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ValueDetail.DeductValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_deductValue = value["DeductValue"].GetDouble();
        m_deductValueHasBeenSet = true;
    }

    if (value.HasMember("PackageDeductValue") && !value["PackageDeductValue"].IsNull())
    {
        if (!value["PackageDeductValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ValueDetail.PackageDeductValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_packageDeductValue = value["PackageDeductValue"].GetDouble();
        m_packageDeductValueHasBeenSet = true;
    }

    if (value.HasMember("ReportValue") && !value["ReportValue"].IsNull())
    {
        if (!value["ReportValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ValueDetail.ReportValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_reportValue = value["ReportValue"].GetDouble();
        m_reportValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ValueDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_calcTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calcTime.c_str(), allocator).Move(), allocator);
    }

    if (m_rawValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rawValue, allocator);
    }

    if (m_creditsValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditsValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creditsValue, allocator);
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

}


string ValueDetail::GetCalcTime() const
{
    return m_calcTime;
}

void ValueDetail::SetCalcTime(const string& _calcTime)
{
    m_calcTime = _calcTime;
    m_calcTimeHasBeenSet = true;
}

bool ValueDetail::CalcTimeHasBeenSet() const
{
    return m_calcTimeHasBeenSet;
}

int64_t ValueDetail::GetRawValue() const
{
    return m_rawValue;
}

void ValueDetail::SetRawValue(const int64_t& _rawValue)
{
    m_rawValue = _rawValue;
    m_rawValueHasBeenSet = true;
}

bool ValueDetail::RawValueHasBeenSet() const
{
    return m_rawValueHasBeenSet;
}

double ValueDetail::GetCreditsValue() const
{
    return m_creditsValue;
}

void ValueDetail::SetCreditsValue(const double& _creditsValue)
{
    m_creditsValue = _creditsValue;
    m_creditsValueHasBeenSet = true;
}

bool ValueDetail::CreditsValueHasBeenSet() const
{
    return m_creditsValueHasBeenSet;
}

double ValueDetail::GetDeductValue() const
{
    return m_deductValue;
}

void ValueDetail::SetDeductValue(const double& _deductValue)
{
    m_deductValue = _deductValue;
    m_deductValueHasBeenSet = true;
}

bool ValueDetail::DeductValueHasBeenSet() const
{
    return m_deductValueHasBeenSet;
}

double ValueDetail::GetPackageDeductValue() const
{
    return m_packageDeductValue;
}

void ValueDetail::SetPackageDeductValue(const double& _packageDeductValue)
{
    m_packageDeductValue = _packageDeductValue;
    m_packageDeductValueHasBeenSet = true;
}

bool ValueDetail::PackageDeductValueHasBeenSet() const
{
    return m_packageDeductValueHasBeenSet;
}

double ValueDetail::GetReportValue() const
{
    return m_reportValue;
}

void ValueDetail::SetReportValue(const double& _reportValue)
{
    m_reportValue = _reportValue;
    m_reportValueHasBeenSet = true;
}

bool ValueDetail::ReportValueHasBeenSet() const
{
    return m_reportValueHasBeenSet;
}

