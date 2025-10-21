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

#include <tencentcloud/ccc/v20200210/model/EventStaffElement.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

EventStaffElement::EventStaffElement() :
    m_mailHasBeenSet(false),
    m_staffNumberHasBeenSet(false)
{
}

CoreInternalOutcome EventStaffElement::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mail") && !value["Mail"].IsNull())
    {
        if (!value["Mail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventStaffElement.Mail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mail = string(value["Mail"].GetString());
        m_mailHasBeenSet = true;
    }

    if (value.HasMember("StaffNumber") && !value["StaffNumber"].IsNull())
    {
        if (!value["StaffNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventStaffElement.StaffNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffNumber = string(value["StaffNumber"].GetString());
        m_staffNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventStaffElement::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mail.c_str(), allocator).Move(), allocator);
    }

    if (m_staffNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staffNumber.c_str(), allocator).Move(), allocator);
    }

}


string EventStaffElement::GetMail() const
{
    return m_mail;
}

void EventStaffElement::SetMail(const string& _mail)
{
    m_mail = _mail;
    m_mailHasBeenSet = true;
}

bool EventStaffElement::MailHasBeenSet() const
{
    return m_mailHasBeenSet;
}

string EventStaffElement::GetStaffNumber() const
{
    return m_staffNumber;
}

void EventStaffElement::SetStaffNumber(const string& _staffNumber)
{
    m_staffNumber = _staffNumber;
    m_staffNumberHasBeenSet = true;
}

bool EventStaffElement::StaffNumberHasBeenSet() const
{
    return m_staffNumberHasBeenSet;
}

