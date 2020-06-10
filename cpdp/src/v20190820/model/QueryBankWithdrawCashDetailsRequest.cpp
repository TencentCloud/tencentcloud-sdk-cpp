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

#include <tencentcloud/cpdp/v20190820/model/QueryBankWithdrawCashDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QueryBankWithdrawCashDetailsRequest::QueryBankWithdrawCashDetailsRequest() :
    m_mrchCodeHasBeenSet(false),
    m_functionFlagHasBeenSet(false),
    m_subAcctNoHasBeenSet(false),
    m_queryFlagHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_beginDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_reservedMsgHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string QueryBankWithdrawCashDetailsRequest::ToJsonString() const
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

    if (m_functionFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FunctionFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_functionFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_subAcctNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_queryFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueryFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_queryFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_pageNum.c_str(), allocator).Move(), allocator);
    }

    if (m_beginDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BeginDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_beginDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endDate.c_str(), allocator).Move(), allocator);
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


string QueryBankWithdrawCashDetailsRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void QueryBankWithdrawCashDetailsRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool QueryBankWithdrawCashDetailsRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string QueryBankWithdrawCashDetailsRequest::GetFunctionFlag() const
{
    return m_functionFlag;
}

void QueryBankWithdrawCashDetailsRequest::SetFunctionFlag(const string& _functionFlag)
{
    m_functionFlag = _functionFlag;
    m_functionFlagHasBeenSet = true;
}

bool QueryBankWithdrawCashDetailsRequest::FunctionFlagHasBeenSet() const
{
    return m_functionFlagHasBeenSet;
}

string QueryBankWithdrawCashDetailsRequest::GetSubAcctNo() const
{
    return m_subAcctNo;
}

void QueryBankWithdrawCashDetailsRequest::SetSubAcctNo(const string& _subAcctNo)
{
    m_subAcctNo = _subAcctNo;
    m_subAcctNoHasBeenSet = true;
}

bool QueryBankWithdrawCashDetailsRequest::SubAcctNoHasBeenSet() const
{
    return m_subAcctNoHasBeenSet;
}

string QueryBankWithdrawCashDetailsRequest::GetQueryFlag() const
{
    return m_queryFlag;
}

void QueryBankWithdrawCashDetailsRequest::SetQueryFlag(const string& _queryFlag)
{
    m_queryFlag = _queryFlag;
    m_queryFlagHasBeenSet = true;
}

bool QueryBankWithdrawCashDetailsRequest::QueryFlagHasBeenSet() const
{
    return m_queryFlagHasBeenSet;
}

string QueryBankWithdrawCashDetailsRequest::GetPageNum() const
{
    return m_pageNum;
}

void QueryBankWithdrawCashDetailsRequest::SetPageNum(const string& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool QueryBankWithdrawCashDetailsRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

string QueryBankWithdrawCashDetailsRequest::GetBeginDate() const
{
    return m_beginDate;
}

void QueryBankWithdrawCashDetailsRequest::SetBeginDate(const string& _beginDate)
{
    m_beginDate = _beginDate;
    m_beginDateHasBeenSet = true;
}

bool QueryBankWithdrawCashDetailsRequest::BeginDateHasBeenSet() const
{
    return m_beginDateHasBeenSet;
}

string QueryBankWithdrawCashDetailsRequest::GetEndDate() const
{
    return m_endDate;
}

void QueryBankWithdrawCashDetailsRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool QueryBankWithdrawCashDetailsRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string QueryBankWithdrawCashDetailsRequest::GetReservedMsg() const
{
    return m_reservedMsg;
}

void QueryBankWithdrawCashDetailsRequest::SetReservedMsg(const string& _reservedMsg)
{
    m_reservedMsg = _reservedMsg;
    m_reservedMsgHasBeenSet = true;
}

bool QueryBankWithdrawCashDetailsRequest::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}

string QueryBankWithdrawCashDetailsRequest::GetProfile() const
{
    return m_profile;
}

void QueryBankWithdrawCashDetailsRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool QueryBankWithdrawCashDetailsRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


