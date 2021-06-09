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

#include <tencentcloud/cpdp/v20190820/model/CreateSinglePayResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateSinglePayResult::CreateSinglePayResult() :
    m_handleStatusHasBeenSet(false),
    m_handleMsgHasBeenSet(false),
    m_serialNoHasBeenSet(false),
    m_bankSerialNoHasBeenSet(false),
    m_payStatusHasBeenSet(false),
    m_bankRetCodeHasBeenSet(false),
    m_bankRetMsgHasBeenSet(false)
{
}

CoreInternalOutcome CreateSinglePayResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HandleStatus") && !value["HandleStatus"].IsNull())
    {
        if (!value["HandleStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateSinglePayResult.HandleStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handleStatus = string(value["HandleStatus"].GetString());
        m_handleStatusHasBeenSet = true;
    }

    if (value.HasMember("HandleMsg") && !value["HandleMsg"].IsNull())
    {
        if (!value["HandleMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateSinglePayResult.HandleMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handleMsg = string(value["HandleMsg"].GetString());
        m_handleMsgHasBeenSet = true;
    }

    if (value.HasMember("SerialNo") && !value["SerialNo"].IsNull())
    {
        if (!value["SerialNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateSinglePayResult.SerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNo = string(value["SerialNo"].GetString());
        m_serialNoHasBeenSet = true;
    }

    if (value.HasMember("BankSerialNo") && !value["BankSerialNo"].IsNull())
    {
        if (!value["BankSerialNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateSinglePayResult.BankSerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankSerialNo = string(value["BankSerialNo"].GetString());
        m_bankSerialNoHasBeenSet = true;
    }

    if (value.HasMember("PayStatus") && !value["PayStatus"].IsNull())
    {
        if (!value["PayStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateSinglePayResult.PayStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payStatus = string(value["PayStatus"].GetString());
        m_payStatusHasBeenSet = true;
    }

    if (value.HasMember("BankRetCode") && !value["BankRetCode"].IsNull())
    {
        if (!value["BankRetCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateSinglePayResult.BankRetCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankRetCode = string(value["BankRetCode"].GetString());
        m_bankRetCodeHasBeenSet = true;
    }

    if (value.HasMember("BankRetMsg") && !value["BankRetMsg"].IsNull())
    {
        if (!value["BankRetMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateSinglePayResult.BankRetMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankRetMsg = string(value["BankRetMsg"].GetString());
        m_bankRetMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateSinglePayResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_handleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handleStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_handleMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handleMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_bankSerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankSerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankSerialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_payStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_bankRetCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankRetCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankRetCode.c_str(), allocator).Move(), allocator);
    }

    if (m_bankRetMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankRetMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankRetMsg.c_str(), allocator).Move(), allocator);
    }

}


string CreateSinglePayResult::GetHandleStatus() const
{
    return m_handleStatus;
}

void CreateSinglePayResult::SetHandleStatus(const string& _handleStatus)
{
    m_handleStatus = _handleStatus;
    m_handleStatusHasBeenSet = true;
}

bool CreateSinglePayResult::HandleStatusHasBeenSet() const
{
    return m_handleStatusHasBeenSet;
}

string CreateSinglePayResult::GetHandleMsg() const
{
    return m_handleMsg;
}

void CreateSinglePayResult::SetHandleMsg(const string& _handleMsg)
{
    m_handleMsg = _handleMsg;
    m_handleMsgHasBeenSet = true;
}

bool CreateSinglePayResult::HandleMsgHasBeenSet() const
{
    return m_handleMsgHasBeenSet;
}

string CreateSinglePayResult::GetSerialNo() const
{
    return m_serialNo;
}

void CreateSinglePayResult::SetSerialNo(const string& _serialNo)
{
    m_serialNo = _serialNo;
    m_serialNoHasBeenSet = true;
}

bool CreateSinglePayResult::SerialNoHasBeenSet() const
{
    return m_serialNoHasBeenSet;
}

string CreateSinglePayResult::GetBankSerialNo() const
{
    return m_bankSerialNo;
}

void CreateSinglePayResult::SetBankSerialNo(const string& _bankSerialNo)
{
    m_bankSerialNo = _bankSerialNo;
    m_bankSerialNoHasBeenSet = true;
}

bool CreateSinglePayResult::BankSerialNoHasBeenSet() const
{
    return m_bankSerialNoHasBeenSet;
}

string CreateSinglePayResult::GetPayStatus() const
{
    return m_payStatus;
}

void CreateSinglePayResult::SetPayStatus(const string& _payStatus)
{
    m_payStatus = _payStatus;
    m_payStatusHasBeenSet = true;
}

bool CreateSinglePayResult::PayStatusHasBeenSet() const
{
    return m_payStatusHasBeenSet;
}

string CreateSinglePayResult::GetBankRetCode() const
{
    return m_bankRetCode;
}

void CreateSinglePayResult::SetBankRetCode(const string& _bankRetCode)
{
    m_bankRetCode = _bankRetCode;
    m_bankRetCodeHasBeenSet = true;
}

bool CreateSinglePayResult::BankRetCodeHasBeenSet() const
{
    return m_bankRetCodeHasBeenSet;
}

string CreateSinglePayResult::GetBankRetMsg() const
{
    return m_bankRetMsg;
}

void CreateSinglePayResult::SetBankRetMsg(const string& _bankRetMsg)
{
    m_bankRetMsg = _bankRetMsg;
    m_bankRetMsgHasBeenSet = true;
}

bool CreateSinglePayResult::BankRetMsgHasBeenSet() const
{
    return m_bankRetMsgHasBeenSet;
}

