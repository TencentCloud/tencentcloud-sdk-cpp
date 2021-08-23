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

#include <tencentcloud/partners/v20180321/model/AgentBillElem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

AgentBillElem::AgentBillElem() :
    m_uinHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_clientUinHasBeenSet(false),
    m_clientRemarkHasBeenSet(false),
    m_payTimeHasBeenSet(false),
    m_goodsTypeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_settleMonthHasBeenSet(false),
    m_amtHasBeenSet(false),
    m_payerModeHasBeenSet(false),
    m_clientTypeHasBeenSet(false),
    m_projectTypeHasBeenSet(false),
    m_activityIdHasBeenSet(false)
{
}

CoreInternalOutcome AgentBillElem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBillElem.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBillElem.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("ClientUin") && !value["ClientUin"].IsNull())
    {
        if (!value["ClientUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBillElem.ClientUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientUin = string(value["ClientUin"].GetString());
        m_clientUinHasBeenSet = true;
    }

    if (value.HasMember("ClientRemark") && !value["ClientRemark"].IsNull())
    {
        if (!value["ClientRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBillElem.ClientRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientRemark = string(value["ClientRemark"].GetString());
        m_clientRemarkHasBeenSet = true;
    }

    if (value.HasMember("PayTime") && !value["PayTime"].IsNull())
    {
        if (!value["PayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBillElem.PayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTime = string(value["PayTime"].GetString());
        m_payTimeHasBeenSet = true;
    }

    if (value.HasMember("GoodsType") && !value["GoodsType"].IsNull())
    {
        if (!value["GoodsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBillElem.GoodsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsType = string(value["GoodsType"].GetString());
        m_goodsTypeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBillElem.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("SettleMonth") && !value["SettleMonth"].IsNull())
    {
        if (!value["SettleMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBillElem.SettleMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settleMonth = string(value["SettleMonth"].GetString());
        m_settleMonthHasBeenSet = true;
    }

    if (value.HasMember("Amt") && !value["Amt"].IsNull())
    {
        if (!value["Amt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBillElem.Amt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amt = value["Amt"].GetInt64();
        m_amtHasBeenSet = true;
    }

    if (value.HasMember("PayerMode") && !value["PayerMode"].IsNull())
    {
        if (!value["PayerMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBillElem.PayerMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerMode = string(value["PayerMode"].GetString());
        m_payerModeHasBeenSet = true;
    }

    if (value.HasMember("ClientType") && !value["ClientType"].IsNull())
    {
        if (!value["ClientType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBillElem.ClientType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientType = string(value["ClientType"].GetString());
        m_clientTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectType") && !value["ProjectType"].IsNull())
    {
        if (!value["ProjectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBillElem.ProjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectType = string(value["ProjectType"].GetString());
        m_projectTypeHasBeenSet = true;
    }

    if (value.HasMember("ActivityId") && !value["ActivityId"].IsNull())
    {
        if (!value["ActivityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBillElem.ActivityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityId = string(value["ActivityId"].GetString());
        m_activityIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentBillElem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientUin.c_str(), allocator).Move(), allocator);
    }

    if (m_clientRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_payTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payTime.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsType.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_settleMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settleMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_amtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amt, allocator);
    }

    if (m_payerModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerMode.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectType.c_str(), allocator).Move(), allocator);
    }

    if (m_activityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityId.c_str(), allocator).Move(), allocator);
    }

}


string AgentBillElem::GetUin() const
{
    return m_uin;
}

void AgentBillElem::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AgentBillElem::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AgentBillElem::GetOrderId() const
{
    return m_orderId;
}

void AgentBillElem::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool AgentBillElem::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string AgentBillElem::GetClientUin() const
{
    return m_clientUin;
}

void AgentBillElem::SetClientUin(const string& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool AgentBillElem::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

string AgentBillElem::GetClientRemark() const
{
    return m_clientRemark;
}

void AgentBillElem::SetClientRemark(const string& _clientRemark)
{
    m_clientRemark = _clientRemark;
    m_clientRemarkHasBeenSet = true;
}

bool AgentBillElem::ClientRemarkHasBeenSet() const
{
    return m_clientRemarkHasBeenSet;
}

string AgentBillElem::GetPayTime() const
{
    return m_payTime;
}

void AgentBillElem::SetPayTime(const string& _payTime)
{
    m_payTime = _payTime;
    m_payTimeHasBeenSet = true;
}

bool AgentBillElem::PayTimeHasBeenSet() const
{
    return m_payTimeHasBeenSet;
}

string AgentBillElem::GetGoodsType() const
{
    return m_goodsType;
}

void AgentBillElem::SetGoodsType(const string& _goodsType)
{
    m_goodsType = _goodsType;
    m_goodsTypeHasBeenSet = true;
}

bool AgentBillElem::GoodsTypeHasBeenSet() const
{
    return m_goodsTypeHasBeenSet;
}

string AgentBillElem::GetPayMode() const
{
    return m_payMode;
}

void AgentBillElem::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool AgentBillElem::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string AgentBillElem::GetSettleMonth() const
{
    return m_settleMonth;
}

void AgentBillElem::SetSettleMonth(const string& _settleMonth)
{
    m_settleMonth = _settleMonth;
    m_settleMonthHasBeenSet = true;
}

bool AgentBillElem::SettleMonthHasBeenSet() const
{
    return m_settleMonthHasBeenSet;
}

int64_t AgentBillElem::GetAmt() const
{
    return m_amt;
}

void AgentBillElem::SetAmt(const int64_t& _amt)
{
    m_amt = _amt;
    m_amtHasBeenSet = true;
}

bool AgentBillElem::AmtHasBeenSet() const
{
    return m_amtHasBeenSet;
}

string AgentBillElem::GetPayerMode() const
{
    return m_payerMode;
}

void AgentBillElem::SetPayerMode(const string& _payerMode)
{
    m_payerMode = _payerMode;
    m_payerModeHasBeenSet = true;
}

bool AgentBillElem::PayerModeHasBeenSet() const
{
    return m_payerModeHasBeenSet;
}

string AgentBillElem::GetClientType() const
{
    return m_clientType;
}

void AgentBillElem::SetClientType(const string& _clientType)
{
    m_clientType = _clientType;
    m_clientTypeHasBeenSet = true;
}

bool AgentBillElem::ClientTypeHasBeenSet() const
{
    return m_clientTypeHasBeenSet;
}

string AgentBillElem::GetProjectType() const
{
    return m_projectType;
}

void AgentBillElem::SetProjectType(const string& _projectType)
{
    m_projectType = _projectType;
    m_projectTypeHasBeenSet = true;
}

bool AgentBillElem::ProjectTypeHasBeenSet() const
{
    return m_projectTypeHasBeenSet;
}

string AgentBillElem::GetActivityId() const
{
    return m_activityId;
}

void AgentBillElem::SetActivityId(const string& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool AgentBillElem::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

