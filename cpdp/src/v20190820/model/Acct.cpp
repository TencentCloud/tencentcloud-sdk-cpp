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

#include <tencentcloud/cpdp/v20190820/model/Acct.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

Acct::Acct() :
    m_subAcctNoHasBeenSet(false),
    m_subAcctPropertyHasBeenSet(false),
    m_tranNetMemberCodeHasBeenSet(false),
    m_subAcctNameHasBeenSet(false),
    m_acctAvailBalHasBeenSet(false),
    m_cashAmtHasBeenSet(false),
    m_maintenanceDateHasBeenSet(false)
{
}

CoreInternalOutcome Acct::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubAcctNo") && !value["SubAcctNo"].IsNull())
    {
        if (!value["SubAcctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Acct.SubAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAcctNo = string(value["SubAcctNo"].GetString());
        m_subAcctNoHasBeenSet = true;
    }

    if (value.HasMember("SubAcctProperty") && !value["SubAcctProperty"].IsNull())
    {
        if (!value["SubAcctProperty"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Acct.SubAcctProperty` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAcctProperty = string(value["SubAcctProperty"].GetString());
        m_subAcctPropertyHasBeenSet = true;
    }

    if (value.HasMember("TranNetMemberCode") && !value["TranNetMemberCode"].IsNull())
    {
        if (!value["TranNetMemberCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Acct.TranNetMemberCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranNetMemberCode = string(value["TranNetMemberCode"].GetString());
        m_tranNetMemberCodeHasBeenSet = true;
    }

    if (value.HasMember("SubAcctName") && !value["SubAcctName"].IsNull())
    {
        if (!value["SubAcctName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Acct.SubAcctName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAcctName = string(value["SubAcctName"].GetString());
        m_subAcctNameHasBeenSet = true;
    }

    if (value.HasMember("AcctAvailBal") && !value["AcctAvailBal"].IsNull())
    {
        if (!value["AcctAvailBal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Acct.AcctAvailBal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acctAvailBal = string(value["AcctAvailBal"].GetString());
        m_acctAvailBalHasBeenSet = true;
    }

    if (value.HasMember("CashAmt") && !value["CashAmt"].IsNull())
    {
        if (!value["CashAmt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Acct.CashAmt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashAmt = string(value["CashAmt"].GetString());
        m_cashAmtHasBeenSet = true;
    }

    if (value.HasMember("MaintenanceDate") && !value["MaintenanceDate"].IsNull())
    {
        if (!value["MaintenanceDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Acct.MaintenanceDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maintenanceDate = string(value["MaintenanceDate"].GetString());
        m_maintenanceDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Acct::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAcctNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_subAcctPropertyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAcctProperty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAcctProperty.c_str(), allocator).Move(), allocator);
    }

    if (m_tranNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subAcctNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAcctName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAcctName.c_str(), allocator).Move(), allocator);
    }

    if (m_acctAvailBalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcctAvailBal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_acctAvailBal.c_str(), allocator).Move(), allocator);
    }

    if (m_cashAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CashAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cashAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_maintenanceDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintenanceDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maintenanceDate.c_str(), allocator).Move(), allocator);
    }

}


string Acct::GetSubAcctNo() const
{
    return m_subAcctNo;
}

void Acct::SetSubAcctNo(const string& _subAcctNo)
{
    m_subAcctNo = _subAcctNo;
    m_subAcctNoHasBeenSet = true;
}

bool Acct::SubAcctNoHasBeenSet() const
{
    return m_subAcctNoHasBeenSet;
}

string Acct::GetSubAcctProperty() const
{
    return m_subAcctProperty;
}

void Acct::SetSubAcctProperty(const string& _subAcctProperty)
{
    m_subAcctProperty = _subAcctProperty;
    m_subAcctPropertyHasBeenSet = true;
}

bool Acct::SubAcctPropertyHasBeenSet() const
{
    return m_subAcctPropertyHasBeenSet;
}

string Acct::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void Acct::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool Acct::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string Acct::GetSubAcctName() const
{
    return m_subAcctName;
}

void Acct::SetSubAcctName(const string& _subAcctName)
{
    m_subAcctName = _subAcctName;
    m_subAcctNameHasBeenSet = true;
}

bool Acct::SubAcctNameHasBeenSet() const
{
    return m_subAcctNameHasBeenSet;
}

string Acct::GetAcctAvailBal() const
{
    return m_acctAvailBal;
}

void Acct::SetAcctAvailBal(const string& _acctAvailBal)
{
    m_acctAvailBal = _acctAvailBal;
    m_acctAvailBalHasBeenSet = true;
}

bool Acct::AcctAvailBalHasBeenSet() const
{
    return m_acctAvailBalHasBeenSet;
}

string Acct::GetCashAmt() const
{
    return m_cashAmt;
}

void Acct::SetCashAmt(const string& _cashAmt)
{
    m_cashAmt = _cashAmt;
    m_cashAmtHasBeenSet = true;
}

bool Acct::CashAmtHasBeenSet() const
{
    return m_cashAmtHasBeenSet;
}

string Acct::GetMaintenanceDate() const
{
    return m_maintenanceDate;
}

void Acct::SetMaintenanceDate(const string& _maintenanceDate)
{
    m_maintenanceDate = _maintenanceDate;
    m_maintenanceDateHasBeenSet = true;
}

bool Acct::MaintenanceDateHasBeenSet() const
{
    return m_maintenanceDateHasBeenSet;
}

