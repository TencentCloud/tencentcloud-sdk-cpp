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

#include <tencentcloud/cpdp/v20190820/model/BindRelateAccReUnionPayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

BindRelateAccReUnionPayRequest::BindRelateAccReUnionPayRequest() :
    m_mrchCodeHasBeenSet(false),
    m_tranNetMemberCodeHasBeenSet(false),
    m_memberAcctNoHasBeenSet(false),
    m_messageCheckCodeHasBeenSet(false),
    m_reservedMsgHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string BindRelateAccReUnionPayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mrchCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MrchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mrchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_tranNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_memberAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_memberAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_messageCheckCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageCheckCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_messageCheckCode.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reservedMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindRelateAccReUnionPayRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void BindRelateAccReUnionPayRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool BindRelateAccReUnionPayRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string BindRelateAccReUnionPayRequest::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void BindRelateAccReUnionPayRequest::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool BindRelateAccReUnionPayRequest::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string BindRelateAccReUnionPayRequest::GetMemberAcctNo() const
{
    return m_memberAcctNo;
}

void BindRelateAccReUnionPayRequest::SetMemberAcctNo(const string& _memberAcctNo)
{
    m_memberAcctNo = _memberAcctNo;
    m_memberAcctNoHasBeenSet = true;
}

bool BindRelateAccReUnionPayRequest::MemberAcctNoHasBeenSet() const
{
    return m_memberAcctNoHasBeenSet;
}

string BindRelateAccReUnionPayRequest::GetMessageCheckCode() const
{
    return m_messageCheckCode;
}

void BindRelateAccReUnionPayRequest::SetMessageCheckCode(const string& _messageCheckCode)
{
    m_messageCheckCode = _messageCheckCode;
    m_messageCheckCodeHasBeenSet = true;
}

bool BindRelateAccReUnionPayRequest::MessageCheckCodeHasBeenSet() const
{
    return m_messageCheckCodeHasBeenSet;
}

string BindRelateAccReUnionPayRequest::GetReservedMsg() const
{
    return m_reservedMsg;
}

void BindRelateAccReUnionPayRequest::SetReservedMsg(const string& _reservedMsg)
{
    m_reservedMsg = _reservedMsg;
    m_reservedMsgHasBeenSet = true;
}

bool BindRelateAccReUnionPayRequest::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}

string BindRelateAccReUnionPayRequest::GetProfile() const
{
    return m_profile;
}

void BindRelateAccReUnionPayRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool BindRelateAccReUnionPayRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


