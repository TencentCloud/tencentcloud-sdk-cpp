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

#include <tencentcloud/cpdp/v20190820/model/QuerySinglePayItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QuerySinglePayItem::QuerySinglePayItem() :
    m_payStatusHasBeenSet(false),
    m_platformMsgHasBeenSet(false),
    m_bankRetCodeHasBeenSet(false),
    m_bankRetMsgHasBeenSet(false)
{
}

CoreInternalOutcome QuerySinglePayItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("PayStatus") && !value["PayStatus"].IsNull())
    {
        if (!value["PayStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `QuerySinglePayItem.PayStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payStatus = string(value["PayStatus"].GetString());
        m_payStatusHasBeenSet = true;
    }

    if (value.HasMember("PlatformMsg") && !value["PlatformMsg"].IsNull())
    {
        if (!value["PlatformMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `QuerySinglePayItem.PlatformMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platformMsg = string(value["PlatformMsg"].GetString());
        m_platformMsgHasBeenSet = true;
    }

    if (value.HasMember("BankRetCode") && !value["BankRetCode"].IsNull())
    {
        if (!value["BankRetCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `QuerySinglePayItem.BankRetCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankRetCode = string(value["BankRetCode"].GetString());
        m_bankRetCodeHasBeenSet = true;
    }

    if (value.HasMember("BankRetMsg") && !value["BankRetMsg"].IsNull())
    {
        if (!value["BankRetMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `QuerySinglePayItem.BankRetMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankRetMsg = string(value["BankRetMsg"].GetString());
        m_bankRetMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuerySinglePayItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_payStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_payStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_platformMsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PlatformMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_platformMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_bankRetCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BankRetCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_bankRetCode.c_str(), allocator).Move(), allocator);
    }

    if (m_bankRetMsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BankRetMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_bankRetMsg.c_str(), allocator).Move(), allocator);
    }

}


string QuerySinglePayItem::GetPayStatus() const
{
    return m_payStatus;
}

void QuerySinglePayItem::SetPayStatus(const string& _payStatus)
{
    m_payStatus = _payStatus;
    m_payStatusHasBeenSet = true;
}

bool QuerySinglePayItem::PayStatusHasBeenSet() const
{
    return m_payStatusHasBeenSet;
}

string QuerySinglePayItem::GetPlatformMsg() const
{
    return m_platformMsg;
}

void QuerySinglePayItem::SetPlatformMsg(const string& _platformMsg)
{
    m_platformMsg = _platformMsg;
    m_platformMsgHasBeenSet = true;
}

bool QuerySinglePayItem::PlatformMsgHasBeenSet() const
{
    return m_platformMsgHasBeenSet;
}

string QuerySinglePayItem::GetBankRetCode() const
{
    return m_bankRetCode;
}

void QuerySinglePayItem::SetBankRetCode(const string& _bankRetCode)
{
    m_bankRetCode = _bankRetCode;
    m_bankRetCodeHasBeenSet = true;
}

bool QuerySinglePayItem::BankRetCodeHasBeenSet() const
{
    return m_bankRetCodeHasBeenSet;
}

string QuerySinglePayItem::GetBankRetMsg() const
{
    return m_bankRetMsg;
}

void QuerySinglePayItem::SetBankRetMsg(const string& _bankRetMsg)
{
    m_bankRetMsg = _bankRetMsg;
    m_bankRetMsgHasBeenSet = true;
}

bool QuerySinglePayItem::BankRetMsgHasBeenSet() const
{
    return m_bankRetMsgHasBeenSet;
}

