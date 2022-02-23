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

#include <tencentcloud/sms/v20210111/model/PullSmsSendStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

PullSmsSendStatus::PullSmsSendStatus() :
    m_userReceiveTimeHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_subscriberNumberHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_serialNoHasBeenSet(false),
    m_reportStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

CoreInternalOutcome PullSmsSendStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserReceiveTime") && !value["UserReceiveTime"].IsNull())
    {
        if (!value["UserReceiveTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsSendStatus.UserReceiveTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userReceiveTime = value["UserReceiveTime"].GetUint64();
        m_userReceiveTimeHasBeenSet = true;
    }

    if (value.HasMember("CountryCode") && !value["CountryCode"].IsNull())
    {
        if (!value["CountryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsSendStatus.CountryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryCode = string(value["CountryCode"].GetString());
        m_countryCodeHasBeenSet = true;
    }

    if (value.HasMember("SubscriberNumber") && !value["SubscriberNumber"].IsNull())
    {
        if (!value["SubscriberNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsSendStatus.SubscriberNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscriberNumber = string(value["SubscriberNumber"].GetString());
        m_subscriberNumberHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsSendStatus.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("SerialNo") && !value["SerialNo"].IsNull())
    {
        if (!value["SerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsSendStatus.SerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNo = string(value["SerialNo"].GetString());
        m_serialNoHasBeenSet = true;
    }

    if (value.HasMember("ReportStatus") && !value["ReportStatus"].IsNull())
    {
        if (!value["ReportStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsSendStatus.ReportStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportStatus = string(value["ReportStatus"].GetString());
        m_reportStatusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsSendStatus.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("SessionContext") && !value["SessionContext"].IsNull())
    {
        if (!value["SessionContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsSendStatus.SessionContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionContext = string(value["SessionContext"].GetString());
        m_sessionContextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PullSmsSendStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userReceiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserReceiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userReceiveTime, allocator);
    }

    if (m_countryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subscriberNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriberNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subscriberNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_reportStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

}


uint64_t PullSmsSendStatus::GetUserReceiveTime() const
{
    return m_userReceiveTime;
}

void PullSmsSendStatus::SetUserReceiveTime(const uint64_t& _userReceiveTime)
{
    m_userReceiveTime = _userReceiveTime;
    m_userReceiveTimeHasBeenSet = true;
}

bool PullSmsSendStatus::UserReceiveTimeHasBeenSet() const
{
    return m_userReceiveTimeHasBeenSet;
}

string PullSmsSendStatus::GetCountryCode() const
{
    return m_countryCode;
}

void PullSmsSendStatus::SetCountryCode(const string& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool PullSmsSendStatus::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

string PullSmsSendStatus::GetSubscriberNumber() const
{
    return m_subscriberNumber;
}

void PullSmsSendStatus::SetSubscriberNumber(const string& _subscriberNumber)
{
    m_subscriberNumber = _subscriberNumber;
    m_subscriberNumberHasBeenSet = true;
}

bool PullSmsSendStatus::SubscriberNumberHasBeenSet() const
{
    return m_subscriberNumberHasBeenSet;
}

string PullSmsSendStatus::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void PullSmsSendStatus::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool PullSmsSendStatus::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string PullSmsSendStatus::GetSerialNo() const
{
    return m_serialNo;
}

void PullSmsSendStatus::SetSerialNo(const string& _serialNo)
{
    m_serialNo = _serialNo;
    m_serialNoHasBeenSet = true;
}

bool PullSmsSendStatus::SerialNoHasBeenSet() const
{
    return m_serialNoHasBeenSet;
}

string PullSmsSendStatus::GetReportStatus() const
{
    return m_reportStatus;
}

void PullSmsSendStatus::SetReportStatus(const string& _reportStatus)
{
    m_reportStatus = _reportStatus;
    m_reportStatusHasBeenSet = true;
}

bool PullSmsSendStatus::ReportStatusHasBeenSet() const
{
    return m_reportStatusHasBeenSet;
}

string PullSmsSendStatus::GetDescription() const
{
    return m_description;
}

void PullSmsSendStatus::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PullSmsSendStatus::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string PullSmsSendStatus::GetSessionContext() const
{
    return m_sessionContext;
}

void PullSmsSendStatus::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool PullSmsSendStatus::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

