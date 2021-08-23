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

#include <tencentcloud/cpdp/v20190820/model/QueryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryItem::QueryItem() :
    m_subAcctNoHasBeenSet(false),
    m_subAcctPropertyHasBeenSet(false),
    m_subMchIdHasBeenSet(false),
    m_subAcctNameHasBeenSet(false),
    m_acctAvailBalHasBeenSet(false),
    m_cashAmtHasBeenSet(false),
    m_maintenanceDateHasBeenSet(false)
{
}

CoreInternalOutcome QueryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubAcctNo") && !value["SubAcctNo"].IsNull())
    {
        if (!value["SubAcctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryItem.SubAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAcctNo = string(value["SubAcctNo"].GetString());
        m_subAcctNoHasBeenSet = true;
    }

    if (value.HasMember("SubAcctProperty") && !value["SubAcctProperty"].IsNull())
    {
        if (!value["SubAcctProperty"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryItem.SubAcctProperty` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAcctProperty = string(value["SubAcctProperty"].GetString());
        m_subAcctPropertyHasBeenSet = true;
    }

    if (value.HasMember("SubMchId") && !value["SubMchId"].IsNull())
    {
        if (!value["SubMchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryItem.SubMchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subMchId = string(value["SubMchId"].GetString());
        m_subMchIdHasBeenSet = true;
    }

    if (value.HasMember("SubAcctName") && !value["SubAcctName"].IsNull())
    {
        if (!value["SubAcctName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryItem.SubAcctName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAcctName = string(value["SubAcctName"].GetString());
        m_subAcctNameHasBeenSet = true;
    }

    if (value.HasMember("AcctAvailBal") && !value["AcctAvailBal"].IsNull())
    {
        if (!value["AcctAvailBal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryItem.AcctAvailBal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acctAvailBal = string(value["AcctAvailBal"].GetString());
        m_acctAvailBalHasBeenSet = true;
    }

    if (value.HasMember("CashAmt") && !value["CashAmt"].IsNull())
    {
        if (!value["CashAmt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryItem.CashAmt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashAmt = string(value["CashAmt"].GetString());
        m_cashAmtHasBeenSet = true;
    }

    if (value.HasMember("MaintenanceDate") && !value["MaintenanceDate"].IsNull())
    {
        if (!value["MaintenanceDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryItem.MaintenanceDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maintenanceDate = string(value["MaintenanceDate"].GetString());
        m_maintenanceDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_subMchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subMchId.c_str(), allocator).Move(), allocator);
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


string QueryItem::GetSubAcctNo() const
{
    return m_subAcctNo;
}

void QueryItem::SetSubAcctNo(const string& _subAcctNo)
{
    m_subAcctNo = _subAcctNo;
    m_subAcctNoHasBeenSet = true;
}

bool QueryItem::SubAcctNoHasBeenSet() const
{
    return m_subAcctNoHasBeenSet;
}

string QueryItem::GetSubAcctProperty() const
{
    return m_subAcctProperty;
}

void QueryItem::SetSubAcctProperty(const string& _subAcctProperty)
{
    m_subAcctProperty = _subAcctProperty;
    m_subAcctPropertyHasBeenSet = true;
}

bool QueryItem::SubAcctPropertyHasBeenSet() const
{
    return m_subAcctPropertyHasBeenSet;
}

string QueryItem::GetSubMchId() const
{
    return m_subMchId;
}

void QueryItem::SetSubMchId(const string& _subMchId)
{
    m_subMchId = _subMchId;
    m_subMchIdHasBeenSet = true;
}

bool QueryItem::SubMchIdHasBeenSet() const
{
    return m_subMchIdHasBeenSet;
}

string QueryItem::GetSubAcctName() const
{
    return m_subAcctName;
}

void QueryItem::SetSubAcctName(const string& _subAcctName)
{
    m_subAcctName = _subAcctName;
    m_subAcctNameHasBeenSet = true;
}

bool QueryItem::SubAcctNameHasBeenSet() const
{
    return m_subAcctNameHasBeenSet;
}

string QueryItem::GetAcctAvailBal() const
{
    return m_acctAvailBal;
}

void QueryItem::SetAcctAvailBal(const string& _acctAvailBal)
{
    m_acctAvailBal = _acctAvailBal;
    m_acctAvailBalHasBeenSet = true;
}

bool QueryItem::AcctAvailBalHasBeenSet() const
{
    return m_acctAvailBalHasBeenSet;
}

string QueryItem::GetCashAmt() const
{
    return m_cashAmt;
}

void QueryItem::SetCashAmt(const string& _cashAmt)
{
    m_cashAmt = _cashAmt;
    m_cashAmtHasBeenSet = true;
}

bool QueryItem::CashAmtHasBeenSet() const
{
    return m_cashAmtHasBeenSet;
}

string QueryItem::GetMaintenanceDate() const
{
    return m_maintenanceDate;
}

void QueryItem::SetMaintenanceDate(const string& _maintenanceDate)
{
    m_maintenanceDate = _maintenanceDate;
    m_maintenanceDateHasBeenSet = true;
}

bool QueryItem::MaintenanceDateHasBeenSet() const
{
    return m_maintenanceDateHasBeenSet;
}

