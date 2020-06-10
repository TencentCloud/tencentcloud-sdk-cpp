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

#include <tencentcloud/cpdp/v20190820/model/QuerySmallAmountTransferRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QuerySmallAmountTransferRequest::QuerySmallAmountTransferRequest() :
    m_mrchCodeHasBeenSet(false),
    m_oldTranSeqNoHasBeenSet(false),
    m_tranDateHasBeenSet(false),
    m_reservedMsgHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string QuerySmallAmountTransferRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mrchCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MrchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mrchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_oldTranSeqNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OldTranSeqNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_oldTranSeqNo.c_str(), allocator).Move(), allocator);
    }

    if (m_tranDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TranDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tranDate.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReservedMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_reservedMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QuerySmallAmountTransferRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void QuerySmallAmountTransferRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool QuerySmallAmountTransferRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string QuerySmallAmountTransferRequest::GetOldTranSeqNo() const
{
    return m_oldTranSeqNo;
}

void QuerySmallAmountTransferRequest::SetOldTranSeqNo(const string& _oldTranSeqNo)
{
    m_oldTranSeqNo = _oldTranSeqNo;
    m_oldTranSeqNoHasBeenSet = true;
}

bool QuerySmallAmountTransferRequest::OldTranSeqNoHasBeenSet() const
{
    return m_oldTranSeqNoHasBeenSet;
}

string QuerySmallAmountTransferRequest::GetTranDate() const
{
    return m_tranDate;
}

void QuerySmallAmountTransferRequest::SetTranDate(const string& _tranDate)
{
    m_tranDate = _tranDate;
    m_tranDateHasBeenSet = true;
}

bool QuerySmallAmountTransferRequest::TranDateHasBeenSet() const
{
    return m_tranDateHasBeenSet;
}

string QuerySmallAmountTransferRequest::GetReservedMsg() const
{
    return m_reservedMsg;
}

void QuerySmallAmountTransferRequest::SetReservedMsg(const string& _reservedMsg)
{
    m_reservedMsg = _reservedMsg;
    m_reservedMsgHasBeenSet = true;
}

bool QuerySmallAmountTransferRequest::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}

string QuerySmallAmountTransferRequest::GetProfile() const
{
    return m_profile;
}

void QuerySmallAmountTransferRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool QuerySmallAmountTransferRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


