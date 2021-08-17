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

#include <tencentcloud/cpdp/v20190820/model/ModifyBindedAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ModifyBindedAccountRequest::ModifyBindedAccountRequest() :
    m_anchorIdHasBeenSet(false),
    m_transferTypeHasBeenSet(false),
    m_accountNoHasBeenSet(false),
    m_phoneNumHasBeenSet(false)
{
}

string ModifyBindedAccountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_anchorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anchorId.c_str(), allocator).Move(), allocator);
    }

    if (m_transferTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transferType, allocator);
    }

    if (m_accountNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountNo.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNum.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBindedAccountRequest::GetAnchorId() const
{
    return m_anchorId;
}

void ModifyBindedAccountRequest::SetAnchorId(const string& _anchorId)
{
    m_anchorId = _anchorId;
    m_anchorIdHasBeenSet = true;
}

bool ModifyBindedAccountRequest::AnchorIdHasBeenSet() const
{
    return m_anchorIdHasBeenSet;
}

int64_t ModifyBindedAccountRequest::GetTransferType() const
{
    return m_transferType;
}

void ModifyBindedAccountRequest::SetTransferType(const int64_t& _transferType)
{
    m_transferType = _transferType;
    m_transferTypeHasBeenSet = true;
}

bool ModifyBindedAccountRequest::TransferTypeHasBeenSet() const
{
    return m_transferTypeHasBeenSet;
}

string ModifyBindedAccountRequest::GetAccountNo() const
{
    return m_accountNo;
}

void ModifyBindedAccountRequest::SetAccountNo(const string& _accountNo)
{
    m_accountNo = _accountNo;
    m_accountNoHasBeenSet = true;
}

bool ModifyBindedAccountRequest::AccountNoHasBeenSet() const
{
    return m_accountNoHasBeenSet;
}

string ModifyBindedAccountRequest::GetPhoneNum() const
{
    return m_phoneNum;
}

void ModifyBindedAccountRequest::SetPhoneNum(const string& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool ModifyBindedAccountRequest::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}


