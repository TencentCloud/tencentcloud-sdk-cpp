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

#include <tencentcloud/cpdp/v20190820/model/QueryBankClearRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryBankClearRequest::QueryBankClearRequest() :
    m_mrchCodeHasBeenSet(false),
    m_functionFlagHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_reservedMsgHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string QueryBankClearRequest::ToJsonString() const
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

    if (m_functionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageNum.c_str(), allocator).Move(), allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
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


string QueryBankClearRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void QueryBankClearRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool QueryBankClearRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string QueryBankClearRequest::GetFunctionFlag() const
{
    return m_functionFlag;
}

void QueryBankClearRequest::SetFunctionFlag(const string& _functionFlag)
{
    m_functionFlag = _functionFlag;
    m_functionFlagHasBeenSet = true;
}

bool QueryBankClearRequest::FunctionFlagHasBeenSet() const
{
    return m_functionFlagHasBeenSet;
}

string QueryBankClearRequest::GetPageNum() const
{
    return m_pageNum;
}

void QueryBankClearRequest::SetPageNum(const string& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool QueryBankClearRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

string QueryBankClearRequest::GetStartDate() const
{
    return m_startDate;
}

void QueryBankClearRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool QueryBankClearRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string QueryBankClearRequest::GetEndDate() const
{
    return m_endDate;
}

void QueryBankClearRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool QueryBankClearRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string QueryBankClearRequest::GetReservedMsg() const
{
    return m_reservedMsg;
}

void QueryBankClearRequest::SetReservedMsg(const string& _reservedMsg)
{
    m_reservedMsg = _reservedMsg;
    m_reservedMsgHasBeenSet = true;
}

bool QueryBankClearRequest::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}

string QueryBankClearRequest::GetProfile() const
{
    return m_profile;
}

void QueryBankClearRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool QueryBankClearRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


