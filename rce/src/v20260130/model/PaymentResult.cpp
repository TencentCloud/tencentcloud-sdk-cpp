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

#include <tencentcloud/rce/v20260130/model/PaymentResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

PaymentResult::PaymentResult() :
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_threeDomainSecureHasBeenSet(false),
    m_eCICodeHasBeenSet(false),
    m_aVSCodeHasBeenSet(false),
    m_cVCCodeHasBeenSet(false)
{
}

CoreInternalOutcome PaymentResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FailureReason") && !value["FailureReason"].IsNull())
    {
        if (!value["FailureReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentResult.FailureReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureReason = string(value["FailureReason"].GetString());
        m_failureReasonHasBeenSet = true;
    }

    if (value.HasMember("ThreeDomainSecure") && !value["ThreeDomainSecure"].IsNull())
    {
        if (!value["ThreeDomainSecure"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentResult.ThreeDomainSecure` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_threeDomainSecure = value["ThreeDomainSecure"].GetBool();
        m_threeDomainSecureHasBeenSet = true;
    }

    if (value.HasMember("ECICode") && !value["ECICode"].IsNull())
    {
        if (!value["ECICode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentResult.ECICode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eCICode = string(value["ECICode"].GetString());
        m_eCICodeHasBeenSet = true;
    }

    if (value.HasMember("AVSCode") && !value["AVSCode"].IsNull())
    {
        if (!value["AVSCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentResult.AVSCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aVSCode = string(value["AVSCode"].GetString());
        m_aVSCodeHasBeenSet = true;
    }

    if (value.HasMember("CVCCode") && !value["CVCCode"].IsNull())
    {
        if (!value["CVCCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentResult.CVCCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVCCode = string(value["CVCCode"].GetString());
        m_cVCCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PaymentResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_failureReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureReason.c_str(), allocator).Move(), allocator);
    }

    if (m_threeDomainSecureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreeDomainSecure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threeDomainSecure, allocator);
    }

    if (m_eCICodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ECICode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eCICode.c_str(), allocator).Move(), allocator);
    }

    if (m_aVSCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AVSCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aVSCode.c_str(), allocator).Move(), allocator);
    }

    if (m_cVCCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVCCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVCCode.c_str(), allocator).Move(), allocator);
    }

}


string PaymentResult::GetStatus() const
{
    return m_status;
}

void PaymentResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PaymentResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PaymentResult::GetFailureReason() const
{
    return m_failureReason;
}

void PaymentResult::SetFailureReason(const string& _failureReason)
{
    m_failureReason = _failureReason;
    m_failureReasonHasBeenSet = true;
}

bool PaymentResult::FailureReasonHasBeenSet() const
{
    return m_failureReasonHasBeenSet;
}

bool PaymentResult::GetThreeDomainSecure() const
{
    return m_threeDomainSecure;
}

void PaymentResult::SetThreeDomainSecure(const bool& _threeDomainSecure)
{
    m_threeDomainSecure = _threeDomainSecure;
    m_threeDomainSecureHasBeenSet = true;
}

bool PaymentResult::ThreeDomainSecureHasBeenSet() const
{
    return m_threeDomainSecureHasBeenSet;
}

string PaymentResult::GetECICode() const
{
    return m_eCICode;
}

void PaymentResult::SetECICode(const string& _eCICode)
{
    m_eCICode = _eCICode;
    m_eCICodeHasBeenSet = true;
}

bool PaymentResult::ECICodeHasBeenSet() const
{
    return m_eCICodeHasBeenSet;
}

string PaymentResult::GetAVSCode() const
{
    return m_aVSCode;
}

void PaymentResult::SetAVSCode(const string& _aVSCode)
{
    m_aVSCode = _aVSCode;
    m_aVSCodeHasBeenSet = true;
}

bool PaymentResult::AVSCodeHasBeenSet() const
{
    return m_aVSCodeHasBeenSet;
}

string PaymentResult::GetCVCCode() const
{
    return m_cVCCode;
}

void PaymentResult::SetCVCCode(const string& _cVCCode)
{
    m_cVCCode = _cVCCode;
    m_cVCCodeHasBeenSet = true;
}

bool PaymentResult::CVCCodeHasBeenSet() const
{
    return m_cVCCodeHasBeenSet;
}

