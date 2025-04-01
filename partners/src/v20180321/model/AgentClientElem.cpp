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

#include <tencentcloud/partners/v20180321/model/AgentClientElem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

AgentClientElem::AgentClientElem() :
    m_uinHasBeenSet(false),
    m_clientUinHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_clientFlagHasBeenSet(false),
    m_mailHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_hasOverdueBillHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_salesUinHasBeenSet(false),
    m_salesNameHasBeenSet(false),
    m_clientNameHasBeenSet(false),
    m_increaseGoalHasBeenSet(false)
{
}

CoreInternalOutcome AgentClientElem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentClientElem.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ClientUin") && !value["ClientUin"].IsNull())
    {
        if (!value["ClientUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentClientElem.ClientUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientUin = string(value["ClientUin"].GetString());
        m_clientUinHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentClientElem.ApplyTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = value["ApplyTime"].GetUint64();
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("ClientFlag") && !value["ClientFlag"].IsNull())
    {
        if (!value["ClientFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentClientElem.ClientFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientFlag = string(value["ClientFlag"].GetString());
        m_clientFlagHasBeenSet = true;
    }

    if (value.HasMember("Mail") && !value["Mail"].IsNull())
    {
        if (!value["Mail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentClientElem.Mail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mail = string(value["Mail"].GetString());
        m_mailHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentClientElem.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("HasOverdueBill") && !value["HasOverdueBill"].IsNull())
    {
        if (!value["HasOverdueBill"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentClientElem.HasOverdueBill` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hasOverdueBill = value["HasOverdueBill"].GetUint64();
        m_hasOverdueBillHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentClientElem.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SalesUin") && !value["SalesUin"].IsNull())
    {
        if (!value["SalesUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentClientElem.SalesUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesUin = string(value["SalesUin"].GetString());
        m_salesUinHasBeenSet = true;
    }

    if (value.HasMember("SalesName") && !value["SalesName"].IsNull())
    {
        if (!value["SalesName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentClientElem.SalesName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesName = string(value["SalesName"].GetString());
        m_salesNameHasBeenSet = true;
    }

    if (value.HasMember("ClientName") && !value["ClientName"].IsNull())
    {
        if (!value["ClientName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentClientElem.ClientName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientName = string(value["ClientName"].GetString());
        m_clientNameHasBeenSet = true;
    }

    if (value.HasMember("IncreaseGoal") && !value["IncreaseGoal"].IsNull())
    {
        if (!value["IncreaseGoal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentClientElem.IncreaseGoal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_increaseGoal = string(value["IncreaseGoal"].GetString());
        m_increaseGoalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentClientElem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_clientUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientUin.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyTime, allocator);
    }

    if (m_clientFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_mailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mail.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_hasOverdueBillHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasOverdueBill";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasOverdueBill, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_salesUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesUin.c_str(), allocator).Move(), allocator);
    }

    if (m_salesNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesName.c_str(), allocator).Move(), allocator);
    }

    if (m_clientNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientName.c_str(), allocator).Move(), allocator);
    }

    if (m_increaseGoalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncreaseGoal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_increaseGoal.c_str(), allocator).Move(), allocator);
    }

}


string AgentClientElem::GetUin() const
{
    return m_uin;
}

void AgentClientElem::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AgentClientElem::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AgentClientElem::GetClientUin() const
{
    return m_clientUin;
}

void AgentClientElem::SetClientUin(const string& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool AgentClientElem::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

uint64_t AgentClientElem::GetApplyTime() const
{
    return m_applyTime;
}

void AgentClientElem::SetApplyTime(const uint64_t& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool AgentClientElem::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

string AgentClientElem::GetClientFlag() const
{
    return m_clientFlag;
}

void AgentClientElem::SetClientFlag(const string& _clientFlag)
{
    m_clientFlag = _clientFlag;
    m_clientFlagHasBeenSet = true;
}

bool AgentClientElem::ClientFlagHasBeenSet() const
{
    return m_clientFlagHasBeenSet;
}

string AgentClientElem::GetMail() const
{
    return m_mail;
}

void AgentClientElem::SetMail(const string& _mail)
{
    m_mail = _mail;
    m_mailHasBeenSet = true;
}

bool AgentClientElem::MailHasBeenSet() const
{
    return m_mailHasBeenSet;
}

string AgentClientElem::GetPhone() const
{
    return m_phone;
}

void AgentClientElem::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool AgentClientElem::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

uint64_t AgentClientElem::GetHasOverdueBill() const
{
    return m_hasOverdueBill;
}

void AgentClientElem::SetHasOverdueBill(const uint64_t& _hasOverdueBill)
{
    m_hasOverdueBill = _hasOverdueBill;
    m_hasOverdueBillHasBeenSet = true;
}

bool AgentClientElem::HasOverdueBillHasBeenSet() const
{
    return m_hasOverdueBillHasBeenSet;
}

uint64_t AgentClientElem::GetStatus() const
{
    return m_status;
}

void AgentClientElem::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AgentClientElem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AgentClientElem::GetSalesUin() const
{
    return m_salesUin;
}

void AgentClientElem::SetSalesUin(const string& _salesUin)
{
    m_salesUin = _salesUin;
    m_salesUinHasBeenSet = true;
}

bool AgentClientElem::SalesUinHasBeenSet() const
{
    return m_salesUinHasBeenSet;
}

string AgentClientElem::GetSalesName() const
{
    return m_salesName;
}

void AgentClientElem::SetSalesName(const string& _salesName)
{
    m_salesName = _salesName;
    m_salesNameHasBeenSet = true;
}

bool AgentClientElem::SalesNameHasBeenSet() const
{
    return m_salesNameHasBeenSet;
}

string AgentClientElem::GetClientName() const
{
    return m_clientName;
}

void AgentClientElem::SetClientName(const string& _clientName)
{
    m_clientName = _clientName;
    m_clientNameHasBeenSet = true;
}

bool AgentClientElem::ClientNameHasBeenSet() const
{
    return m_clientNameHasBeenSet;
}

string AgentClientElem::GetIncreaseGoal() const
{
    return m_increaseGoal;
}

void AgentClientElem::SetIncreaseGoal(const string& _increaseGoal)
{
    m_increaseGoal = _increaseGoal;
    m_increaseGoalHasBeenSet = true;
}

bool AgentClientElem::IncreaseGoalHasBeenSet() const
{
    return m_increaseGoalHasBeenSet;
}

