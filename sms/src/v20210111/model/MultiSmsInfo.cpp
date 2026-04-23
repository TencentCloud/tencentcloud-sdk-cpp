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

#include <tencentcloud/sms/v20210111/model/MultiSmsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

MultiSmsInfo::MultiSmsInfo() :
    m_phoneNumberHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_templateParamSetHasBeenSet(false),
    m_senderIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

CoreInternalOutcome MultiSmsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiSmsInfo.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiSmsInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateParamSet") && !value["TemplateParamSet"].IsNull())
    {
        if (!value["TemplateParamSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiSmsInfo.TemplateParamSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TemplateParamSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_templateParamSet.push_back((*itr).GetString());
        }
        m_templateParamSetHasBeenSet = true;
    }

    if (value.HasMember("SenderId") && !value["SenderId"].IsNull())
    {
        if (!value["SenderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiSmsInfo.SenderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_senderId = string(value["SenderId"].GetString());
        m_senderIdHasBeenSet = true;
    }

    if (value.HasMember("SessionContext") && !value["SessionContext"].IsNull())
    {
        if (!value["SessionContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiSmsInfo.SessionContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionContext = string(value["SessionContext"].GetString());
        m_sessionContextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiSmsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateParamSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateParamSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_templateParamSet.begin(); itr != m_templateParamSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_senderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SenderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_senderId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

}


string MultiSmsInfo::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void MultiSmsInfo::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool MultiSmsInfo::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string MultiSmsInfo::GetTemplateId() const
{
    return m_templateId;
}

void MultiSmsInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool MultiSmsInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<string> MultiSmsInfo::GetTemplateParamSet() const
{
    return m_templateParamSet;
}

void MultiSmsInfo::SetTemplateParamSet(const vector<string>& _templateParamSet)
{
    m_templateParamSet = _templateParamSet;
    m_templateParamSetHasBeenSet = true;
}

bool MultiSmsInfo::TemplateParamSetHasBeenSet() const
{
    return m_templateParamSetHasBeenSet;
}

string MultiSmsInfo::GetSenderId() const
{
    return m_senderId;
}

void MultiSmsInfo::SetSenderId(const string& _senderId)
{
    m_senderId = _senderId;
    m_senderIdHasBeenSet = true;
}

bool MultiSmsInfo::SenderIdHasBeenSet() const
{
    return m_senderIdHasBeenSet;
}

string MultiSmsInfo::GetSessionContext() const
{
    return m_sessionContext;
}

void MultiSmsInfo::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool MultiSmsInfo::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

