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

#include <tencentcloud/ses/v20201002/model/ReceiverDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

ReceiverDetail::ReceiverDetail() :
    m_emailHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_templateDataHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_emailIdHasBeenSet(false)
{
}

CoreInternalOutcome ReceiverDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverDetail.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TemplateData") && !value["TemplateData"].IsNull())
    {
        if (!value["TemplateData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverDetail.TemplateData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateData = string(value["TemplateData"].GetString());
        m_templateDataHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverDetail.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EmailId") && !value["EmailId"].IsNull())
    {
        if (!value["EmailId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverDetail.EmailId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_emailId = value["EmailId"].GetUint64();
        m_emailIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReceiverDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_templateDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateData.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_emailIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emailId, allocator);
    }

}


string ReceiverDetail::GetEmail() const
{
    return m_email;
}

void ReceiverDetail::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ReceiverDetail::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ReceiverDetail::GetCreateTime() const
{
    return m_createTime;
}

void ReceiverDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ReceiverDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ReceiverDetail::GetTemplateData() const
{
    return m_templateData;
}

void ReceiverDetail::SetTemplateData(const string& _templateData)
{
    m_templateData = _templateData;
    m_templateDataHasBeenSet = true;
}

bool ReceiverDetail::TemplateDataHasBeenSet() const
{
    return m_templateDataHasBeenSet;
}

string ReceiverDetail::GetReason() const
{
    return m_reason;
}

void ReceiverDetail::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ReceiverDetail::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

uint64_t ReceiverDetail::GetStatus() const
{
    return m_status;
}

void ReceiverDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReceiverDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ReceiverDetail::GetEmailId() const
{
    return m_emailId;
}

void ReceiverDetail::SetEmailId(const uint64_t& _emailId)
{
    m_emailId = _emailId;
    m_emailIdHasBeenSet = true;
}

bool ReceiverDetail::EmailIdHasBeenSet() const
{
    return m_emailIdHasBeenSet;
}

