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

#include <tencentcloud/ccc/v20200210/model/ErrStaffItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

ErrStaffItem::ErrStaffItem() :
    m_staffEmailHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome ErrStaffItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StaffEmail") && !value["StaffEmail"].IsNull())
    {
        if (!value["StaffEmail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrStaffItem.StaffEmail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffEmail = string(value["StaffEmail"].GetString());
        m_staffEmailHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrStaffItem.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrStaffItem.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrStaffItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_staffEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffEmail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staffEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string ErrStaffItem::GetStaffEmail() const
{
    return m_staffEmail;
}

void ErrStaffItem::SetStaffEmail(const string& _staffEmail)
{
    m_staffEmail = _staffEmail;
    m_staffEmailHasBeenSet = true;
}

bool ErrStaffItem::StaffEmailHasBeenSet() const
{
    return m_staffEmailHasBeenSet;
}

string ErrStaffItem::GetCode() const
{
    return m_code;
}

void ErrStaffItem::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ErrStaffItem::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string ErrStaffItem::GetMessage() const
{
    return m_message;
}

void ErrStaffItem::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ErrStaffItem::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

