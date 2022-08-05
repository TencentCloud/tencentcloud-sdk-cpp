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

#include <tencentcloud/ic/v20190307/model/ResSms.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ic::V20190307::Model;
using namespace std;

ResSms::ResSms() :
    m_iccidHasBeenSet(false),
    m_msisdnHasBeenSet(false),
    m_sdkAppidHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_smsTypeHasBeenSet(false),
    m_sendTimeHasBeenSet(false),
    m_reportTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ResSms::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Iccid") && !value["Iccid"].IsNull())
    {
        if (!value["Iccid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResSms.Iccid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iccid = string(value["Iccid"].GetString());
        m_iccidHasBeenSet = true;
    }

    if (value.HasMember("Msisdn") && !value["Msisdn"].IsNull())
    {
        if (!value["Msisdn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResSms.Msisdn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msisdn = string(value["Msisdn"].GetString());
        m_msisdnHasBeenSet = true;
    }

    if (value.HasMember("SdkAppid") && !value["SdkAppid"].IsNull())
    {
        if (!value["SdkAppid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResSms.SdkAppid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppid = value["SdkAppid"].GetInt64();
        m_sdkAppidHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResSms.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("SmsType") && !value["SmsType"].IsNull())
    {
        if (!value["SmsType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResSms.SmsType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_smsType = value["SmsType"].GetInt64();
        m_smsTypeHasBeenSet = true;
    }

    if (value.HasMember("SendTime") && !value["SendTime"].IsNull())
    {
        if (!value["SendTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResSms.SendTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sendTime = string(value["SendTime"].GetString());
        m_sendTimeHasBeenSet = true;
    }

    if (value.HasMember("ReportTime") && !value["ReportTime"].IsNull())
    {
        if (!value["ReportTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResSms.ReportTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportTime = string(value["ReportTime"].GetString());
        m_reportTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResSms.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResSms.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResSms::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iccidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Iccid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iccid.c_str(), allocator).Move(), allocator);
    }

    if (m_msisdnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msisdn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msisdn.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppid, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_smsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smsType, allocator);
    }

    if (m_sendTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sendTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportTime.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string ResSms::GetIccid() const
{
    return m_iccid;
}

void ResSms::SetIccid(const string& _iccid)
{
    m_iccid = _iccid;
    m_iccidHasBeenSet = true;
}

bool ResSms::IccidHasBeenSet() const
{
    return m_iccidHasBeenSet;
}

string ResSms::GetMsisdn() const
{
    return m_msisdn;
}

void ResSms::SetMsisdn(const string& _msisdn)
{
    m_msisdn = _msisdn;
    m_msisdnHasBeenSet = true;
}

bool ResSms::MsisdnHasBeenSet() const
{
    return m_msisdnHasBeenSet;
}

int64_t ResSms::GetSdkAppid() const
{
    return m_sdkAppid;
}

void ResSms::SetSdkAppid(const int64_t& _sdkAppid)
{
    m_sdkAppid = _sdkAppid;
    m_sdkAppidHasBeenSet = true;
}

bool ResSms::SdkAppidHasBeenSet() const
{
    return m_sdkAppidHasBeenSet;
}

string ResSms::GetContent() const
{
    return m_content;
}

void ResSms::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ResSms::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t ResSms::GetSmsType() const
{
    return m_smsType;
}

void ResSms::SetSmsType(const int64_t& _smsType)
{
    m_smsType = _smsType;
    m_smsTypeHasBeenSet = true;
}

bool ResSms::SmsTypeHasBeenSet() const
{
    return m_smsTypeHasBeenSet;
}

string ResSms::GetSendTime() const
{
    return m_sendTime;
}

void ResSms::SetSendTime(const string& _sendTime)
{
    m_sendTime = _sendTime;
    m_sendTimeHasBeenSet = true;
}

bool ResSms::SendTimeHasBeenSet() const
{
    return m_sendTimeHasBeenSet;
}

string ResSms::GetReportTime() const
{
    return m_reportTime;
}

void ResSms::SetReportTime(const string& _reportTime)
{
    m_reportTime = _reportTime;
    m_reportTimeHasBeenSet = true;
}

bool ResSms::ReportTimeHasBeenSet() const
{
    return m_reportTimeHasBeenSet;
}

string ResSms::GetRemark() const
{
    return m_remark;
}

void ResSms::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ResSms::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t ResSms::GetStatus() const
{
    return m_status;
}

void ResSms::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ResSms::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

