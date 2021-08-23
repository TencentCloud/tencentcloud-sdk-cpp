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

#include <tencentcloud/sms/v20190711/model/PullSmsSendStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20190711::Model;
using namespace std;

PullSmsSendStatus::PullSmsSendStatus() :
    m_userReceiveTimeHasBeenSet(false),
    m_userReceiveUnixTimeHasBeenSet(false),
    m_nationCodeHasBeenSet(false),
    m_purePhoneNumberHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_serialNoHasBeenSet(false),
    m_reportStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome PullSmsSendStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserReceiveTime") && !value["UserReceiveTime"].IsNull())
    {
        if (!value["UserReceiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsSendStatus.UserReceiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userReceiveTime = string(value["UserReceiveTime"].GetString());
        m_userReceiveTimeHasBeenSet = true;
    }

    if (value.HasMember("UserReceiveUnixTime") && !value["UserReceiveUnixTime"].IsNull())
    {
        if (!value["UserReceiveUnixTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsSendStatus.UserReceiveUnixTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userReceiveUnixTime = value["UserReceiveUnixTime"].GetUint64();
        m_userReceiveUnixTimeHasBeenSet = true;
    }

    if (value.HasMember("NationCode") && !value["NationCode"].IsNull())
    {
        if (!value["NationCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsSendStatus.NationCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationCode = string(value["NationCode"].GetString());
        m_nationCodeHasBeenSet = true;
    }

    if (value.HasMember("PurePhoneNumber") && !value["PurePhoneNumber"].IsNull())
    {
        if (!value["PurePhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsSendStatus.PurePhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_purePhoneNumber = string(value["PurePhoneNumber"].GetString());
        m_purePhoneNumberHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

void PullSmsSendStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userReceiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserReceiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userReceiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userReceiveUnixTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserReceiveUnixTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userReceiveUnixTime, allocator);
    }

    if (m_nationCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NationCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationCode.c_str(), allocator).Move(), allocator);
    }

    if (m_purePhoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurePhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_purePhoneNumber.c_str(), allocator).Move(), allocator);
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

}


string PullSmsSendStatus::GetUserReceiveTime() const
{
    return m_userReceiveTime;
}

void PullSmsSendStatus::SetUserReceiveTime(const string& _userReceiveTime)
{
    m_userReceiveTime = _userReceiveTime;
    m_userReceiveTimeHasBeenSet = true;
}

bool PullSmsSendStatus::UserReceiveTimeHasBeenSet() const
{
    return m_userReceiveTimeHasBeenSet;
}

uint64_t PullSmsSendStatus::GetUserReceiveUnixTime() const
{
    return m_userReceiveUnixTime;
}

void PullSmsSendStatus::SetUserReceiveUnixTime(const uint64_t& _userReceiveUnixTime)
{
    m_userReceiveUnixTime = _userReceiveUnixTime;
    m_userReceiveUnixTimeHasBeenSet = true;
}

bool PullSmsSendStatus::UserReceiveUnixTimeHasBeenSet() const
{
    return m_userReceiveUnixTimeHasBeenSet;
}

string PullSmsSendStatus::GetNationCode() const
{
    return m_nationCode;
}

void PullSmsSendStatus::SetNationCode(const string& _nationCode)
{
    m_nationCode = _nationCode;
    m_nationCodeHasBeenSet = true;
}

bool PullSmsSendStatus::NationCodeHasBeenSet() const
{
    return m_nationCodeHasBeenSet;
}

string PullSmsSendStatus::GetPurePhoneNumber() const
{
    return m_purePhoneNumber;
}

void PullSmsSendStatus::SetPurePhoneNumber(const string& _purePhoneNumber)
{
    m_purePhoneNumber = _purePhoneNumber;
    m_purePhoneNumberHasBeenSet = true;
}

bool PullSmsSendStatus::PurePhoneNumberHasBeenSet() const
{
    return m_purePhoneNumberHasBeenSet;
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

