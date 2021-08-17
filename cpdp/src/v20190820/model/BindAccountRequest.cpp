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

#include <tencentcloud/cpdp/v20190820/model/BindAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

BindAccountRequest::BindAccountRequest() :
    m_anchorIdHasBeenSet(false),
    m_transferTypeHasBeenSet(false),
    m_accountNoHasBeenSet(false),
    m_phoneNumHasBeenSet(false)
{
}

string BindAccountRequest::ToJsonString() const
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


string BindAccountRequest::GetAnchorId() const
{
    return m_anchorId;
}

void BindAccountRequest::SetAnchorId(const string& _anchorId)
{
    m_anchorId = _anchorId;
    m_anchorIdHasBeenSet = true;
}

bool BindAccountRequest::AnchorIdHasBeenSet() const
{
    return m_anchorIdHasBeenSet;
}

int64_t BindAccountRequest::GetTransferType() const
{
    return m_transferType;
}

void BindAccountRequest::SetTransferType(const int64_t& _transferType)
{
    m_transferType = _transferType;
    m_transferTypeHasBeenSet = true;
}

bool BindAccountRequest::TransferTypeHasBeenSet() const
{
    return m_transferTypeHasBeenSet;
}

string BindAccountRequest::GetAccountNo() const
{
    return m_accountNo;
}

void BindAccountRequest::SetAccountNo(const string& _accountNo)
{
    m_accountNo = _accountNo;
    m_accountNoHasBeenSet = true;
}

bool BindAccountRequest::AccountNoHasBeenSet() const
{
    return m_accountNoHasBeenSet;
}

string BindAccountRequest::GetPhoneNum() const
{
    return m_phoneNum;
}

void BindAccountRequest::SetPhoneNum(const string& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool BindAccountRequest::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}


