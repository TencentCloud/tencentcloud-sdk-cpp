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

#include <tencentcloud/cpdp/v20190820/model/ClearItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ClearItem::ClearItem() :
    m_dateHasBeenSet(false),
    m_subAcctTypeHasBeenSet(false),
    m_reconcileStatusHasBeenSet(false),
    m_reconcileReturnMsgHasBeenSet(false),
    m_clearingStatusHasBeenSet(false),
    m_clearingReturnMsgHasBeenSet(false),
    m_totalAmtHasBeenSet(false)
{
}

CoreInternalOutcome ClearItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClearItem.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("SubAcctType") && !value["SubAcctType"].IsNull())
    {
        if (!value["SubAcctType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClearItem.SubAcctType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAcctType = string(value["SubAcctType"].GetString());
        m_subAcctTypeHasBeenSet = true;
    }

    if (value.HasMember("ReconcileStatus") && !value["ReconcileStatus"].IsNull())
    {
        if (!value["ReconcileStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClearItem.ReconcileStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reconcileStatus = string(value["ReconcileStatus"].GetString());
        m_reconcileStatusHasBeenSet = true;
    }

    if (value.HasMember("ReconcileReturnMsg") && !value["ReconcileReturnMsg"].IsNull())
    {
        if (!value["ReconcileReturnMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClearItem.ReconcileReturnMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reconcileReturnMsg = string(value["ReconcileReturnMsg"].GetString());
        m_reconcileReturnMsgHasBeenSet = true;
    }

    if (value.HasMember("ClearingStatus") && !value["ClearingStatus"].IsNull())
    {
        if (!value["ClearingStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClearItem.ClearingStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clearingStatus = string(value["ClearingStatus"].GetString());
        m_clearingStatusHasBeenSet = true;
    }

    if (value.HasMember("ClearingReturnMsg") && !value["ClearingReturnMsg"].IsNull())
    {
        if (!value["ClearingReturnMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClearItem.ClearingReturnMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clearingReturnMsg = string(value["ClearingReturnMsg"].GetString());
        m_clearingReturnMsgHasBeenSet = true;
    }

    if (value.HasMember("TotalAmt") && !value["TotalAmt"].IsNull())
    {
        if (!value["TotalAmt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClearItem.TotalAmt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmt = string(value["TotalAmt"].GetString());
        m_totalAmtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClearItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_subAcctTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAcctType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAcctType.c_str(), allocator).Move(), allocator);
    }

    if (m_reconcileStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReconcileStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reconcileStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_reconcileReturnMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReconcileReturnMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reconcileReturnMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_clearingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clearingStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clearingReturnMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearingReturnMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clearingReturnMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_totalAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalAmt.c_str(), allocator).Move(), allocator);
    }

}


string ClearItem::GetDate() const
{
    return m_date;
}

void ClearItem::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool ClearItem::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string ClearItem::GetSubAcctType() const
{
    return m_subAcctType;
}

void ClearItem::SetSubAcctType(const string& _subAcctType)
{
    m_subAcctType = _subAcctType;
    m_subAcctTypeHasBeenSet = true;
}

bool ClearItem::SubAcctTypeHasBeenSet() const
{
    return m_subAcctTypeHasBeenSet;
}

string ClearItem::GetReconcileStatus() const
{
    return m_reconcileStatus;
}

void ClearItem::SetReconcileStatus(const string& _reconcileStatus)
{
    m_reconcileStatus = _reconcileStatus;
    m_reconcileStatusHasBeenSet = true;
}

bool ClearItem::ReconcileStatusHasBeenSet() const
{
    return m_reconcileStatusHasBeenSet;
}

string ClearItem::GetReconcileReturnMsg() const
{
    return m_reconcileReturnMsg;
}

void ClearItem::SetReconcileReturnMsg(const string& _reconcileReturnMsg)
{
    m_reconcileReturnMsg = _reconcileReturnMsg;
    m_reconcileReturnMsgHasBeenSet = true;
}

bool ClearItem::ReconcileReturnMsgHasBeenSet() const
{
    return m_reconcileReturnMsgHasBeenSet;
}

string ClearItem::GetClearingStatus() const
{
    return m_clearingStatus;
}

void ClearItem::SetClearingStatus(const string& _clearingStatus)
{
    m_clearingStatus = _clearingStatus;
    m_clearingStatusHasBeenSet = true;
}

bool ClearItem::ClearingStatusHasBeenSet() const
{
    return m_clearingStatusHasBeenSet;
}

string ClearItem::GetClearingReturnMsg() const
{
    return m_clearingReturnMsg;
}

void ClearItem::SetClearingReturnMsg(const string& _clearingReturnMsg)
{
    m_clearingReturnMsg = _clearingReturnMsg;
    m_clearingReturnMsgHasBeenSet = true;
}

bool ClearItem::ClearingReturnMsgHasBeenSet() const
{
    return m_clearingReturnMsgHasBeenSet;
}

string ClearItem::GetTotalAmt() const
{
    return m_totalAmt;
}

void ClearItem::SetTotalAmt(const string& _totalAmt)
{
    m_totalAmt = _totalAmt;
    m_totalAmtHasBeenSet = true;
}

bool ClearItem::TotalAmtHasBeenSet() const
{
    return m_totalAmtHasBeenSet;
}

