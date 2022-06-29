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

#include <tencentcloud/cpdp/v20190820/model/ModifyFlexPayeeAccountRightStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ModifyFlexPayeeAccountRightStatusRequest::ModifyFlexPayeeAccountRightStatusRequest() :
    m_payeeIdHasBeenSet(false),
    m_accountRightTypeHasBeenSet(false),
    m_accountRightStatusHasBeenSet(false)
{
}

string ModifyFlexPayeeAccountRightStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_payeeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountRightTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountRightType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountRightType.c_str(), allocator).Move(), allocator);
    }

    if (m_accountRightStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountRightStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountRightStatus.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyFlexPayeeAccountRightStatusRequest::GetPayeeId() const
{
    return m_payeeId;
}

void ModifyFlexPayeeAccountRightStatusRequest::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool ModifyFlexPayeeAccountRightStatusRequest::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string ModifyFlexPayeeAccountRightStatusRequest::GetAccountRightType() const
{
    return m_accountRightType;
}

void ModifyFlexPayeeAccountRightStatusRequest::SetAccountRightType(const string& _accountRightType)
{
    m_accountRightType = _accountRightType;
    m_accountRightTypeHasBeenSet = true;
}

bool ModifyFlexPayeeAccountRightStatusRequest::AccountRightTypeHasBeenSet() const
{
    return m_accountRightTypeHasBeenSet;
}

string ModifyFlexPayeeAccountRightStatusRequest::GetAccountRightStatus() const
{
    return m_accountRightStatus;
}

void ModifyFlexPayeeAccountRightStatusRequest::SetAccountRightStatus(const string& _accountRightStatus)
{
    m_accountRightStatus = _accountRightStatus;
    m_accountRightStatusHasBeenSet = true;
}

bool ModifyFlexPayeeAccountRightStatusRequest::AccountRightStatusHasBeenSet() const
{
    return m_accountRightStatusHasBeenSet;
}


