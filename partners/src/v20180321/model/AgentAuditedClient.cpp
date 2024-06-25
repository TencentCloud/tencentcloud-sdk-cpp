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

#include <tencentcloud/partners/v20180321/model/AgentAuditedClient.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

AgentAuditedClient::AgentAuditedClient() :
    m_uinHasBeenSet(false),
    m_clientUinHasBeenSet(false),
    m_agentTimeHasBeenSet(false),
    m_clientFlagHasBeenSet(false),
    m_clientRemarkHasBeenSet(false),
    m_clientNameHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_lastMonthAmtHasBeenSet(false),
    m_thisMonthAmtHasBeenSet(false),
    m_hasOverdueBillHasBeenSet(false),
    m_clientTypeHasBeenSet(false),
    m_projectTypeHasBeenSet(false),
    m_salesUinHasBeenSet(false),
    m_salesNameHasBeenSet(false),
    m_mailHasBeenSet(false),
    m_transactionTypeHasBeenSet(false)
{
}

CoreInternalOutcome AgentAuditedClient::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ClientUin") && !value["ClientUin"].IsNull())
    {
        if (!value["ClientUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.ClientUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientUin = string(value["ClientUin"].GetString());
        m_clientUinHasBeenSet = true;
    }

    if (value.HasMember("AgentTime") && !value["AgentTime"].IsNull())
    {
        if (!value["AgentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.AgentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentTime = string(value["AgentTime"].GetString());
        m_agentTimeHasBeenSet = true;
    }

    if (value.HasMember("ClientFlag") && !value["ClientFlag"].IsNull())
    {
        if (!value["ClientFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.ClientFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientFlag = string(value["ClientFlag"].GetString());
        m_clientFlagHasBeenSet = true;
    }

    if (value.HasMember("ClientRemark") && !value["ClientRemark"].IsNull())
    {
        if (!value["ClientRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.ClientRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientRemark = string(value["ClientRemark"].GetString());
        m_clientRemarkHasBeenSet = true;
    }

    if (value.HasMember("ClientName") && !value["ClientName"].IsNull())
    {
        if (!value["ClientName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.ClientName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientName = string(value["ClientName"].GetString());
        m_clientNameHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("LastMonthAmt") && !value["LastMonthAmt"].IsNull())
    {
        if (!value["LastMonthAmt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.LastMonthAmt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastMonthAmt = value["LastMonthAmt"].GetInt64();
        m_lastMonthAmtHasBeenSet = true;
    }

    if (value.HasMember("ThisMonthAmt") && !value["ThisMonthAmt"].IsNull())
    {
        if (!value["ThisMonthAmt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.ThisMonthAmt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_thisMonthAmt = value["ThisMonthAmt"].GetInt64();
        m_thisMonthAmtHasBeenSet = true;
    }

    if (value.HasMember("HasOverdueBill") && !value["HasOverdueBill"].IsNull())
    {
        if (!value["HasOverdueBill"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.HasOverdueBill` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hasOverdueBill = value["HasOverdueBill"].GetUint64();
        m_hasOverdueBillHasBeenSet = true;
    }

    if (value.HasMember("ClientType") && !value["ClientType"].IsNull())
    {
        if (!value["ClientType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.ClientType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientType = string(value["ClientType"].GetString());
        m_clientTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectType") && !value["ProjectType"].IsNull())
    {
        if (!value["ProjectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.ProjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectType = string(value["ProjectType"].GetString());
        m_projectTypeHasBeenSet = true;
    }

    if (value.HasMember("SalesUin") && !value["SalesUin"].IsNull())
    {
        if (!value["SalesUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.SalesUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesUin = string(value["SalesUin"].GetString());
        m_salesUinHasBeenSet = true;
    }

    if (value.HasMember("SalesName") && !value["SalesName"].IsNull())
    {
        if (!value["SalesName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.SalesName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesName = string(value["SalesName"].GetString());
        m_salesNameHasBeenSet = true;
    }

    if (value.HasMember("Mail") && !value["Mail"].IsNull())
    {
        if (!value["Mail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.Mail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mail = string(value["Mail"].GetString());
        m_mailHasBeenSet = true;
    }

    if (value.HasMember("TransactionType") && !value["TransactionType"].IsNull())
    {
        if (!value["TransactionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentAuditedClient.TransactionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionType = string(value["TransactionType"].GetString());
        m_transactionTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentAuditedClient::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_agentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentTime.c_str(), allocator).Move(), allocator);
    }

    if (m_clientFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_clientRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_clientNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientName.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_lastMonthAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastMonthAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastMonthAmt, allocator);
    }

    if (m_thisMonthAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThisMonthAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thisMonthAmt, allocator);
    }

    if (m_hasOverdueBillHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasOverdueBill";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasOverdueBill, allocator);
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

    if (m_mailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mail.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionType.c_str(), allocator).Move(), allocator);
    }

}


string AgentAuditedClient::GetUin() const
{
    return m_uin;
}

void AgentAuditedClient::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AgentAuditedClient::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AgentAuditedClient::GetClientUin() const
{
    return m_clientUin;
}

void AgentAuditedClient::SetClientUin(const string& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool AgentAuditedClient::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

string AgentAuditedClient::GetAgentTime() const
{
    return m_agentTime;
}

void AgentAuditedClient::SetAgentTime(const string& _agentTime)
{
    m_agentTime = _agentTime;
    m_agentTimeHasBeenSet = true;
}

bool AgentAuditedClient::AgentTimeHasBeenSet() const
{
    return m_agentTimeHasBeenSet;
}

string AgentAuditedClient::GetClientFlag() const
{
    return m_clientFlag;
}

void AgentAuditedClient::SetClientFlag(const string& _clientFlag)
{
    m_clientFlag = _clientFlag;
    m_clientFlagHasBeenSet = true;
}

bool AgentAuditedClient::ClientFlagHasBeenSet() const
{
    return m_clientFlagHasBeenSet;
}

string AgentAuditedClient::GetClientRemark() const
{
    return m_clientRemark;
}

void AgentAuditedClient::SetClientRemark(const string& _clientRemark)
{
    m_clientRemark = _clientRemark;
    m_clientRemarkHasBeenSet = true;
}

bool AgentAuditedClient::ClientRemarkHasBeenSet() const
{
    return m_clientRemarkHasBeenSet;
}

string AgentAuditedClient::GetClientName() const
{
    return m_clientName;
}

void AgentAuditedClient::SetClientName(const string& _clientName)
{
    m_clientName = _clientName;
    m_clientNameHasBeenSet = true;
}

bool AgentAuditedClient::ClientNameHasBeenSet() const
{
    return m_clientNameHasBeenSet;
}

string AgentAuditedClient::GetAuthType() const
{
    return m_authType;
}

void AgentAuditedClient::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool AgentAuditedClient::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string AgentAuditedClient::GetAppId() const
{
    return m_appId;
}

void AgentAuditedClient::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AgentAuditedClient::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t AgentAuditedClient::GetLastMonthAmt() const
{
    return m_lastMonthAmt;
}

void AgentAuditedClient::SetLastMonthAmt(const int64_t& _lastMonthAmt)
{
    m_lastMonthAmt = _lastMonthAmt;
    m_lastMonthAmtHasBeenSet = true;
}

bool AgentAuditedClient::LastMonthAmtHasBeenSet() const
{
    return m_lastMonthAmtHasBeenSet;
}

int64_t AgentAuditedClient::GetThisMonthAmt() const
{
    return m_thisMonthAmt;
}

void AgentAuditedClient::SetThisMonthAmt(const int64_t& _thisMonthAmt)
{
    m_thisMonthAmt = _thisMonthAmt;
    m_thisMonthAmtHasBeenSet = true;
}

bool AgentAuditedClient::ThisMonthAmtHasBeenSet() const
{
    return m_thisMonthAmtHasBeenSet;
}

uint64_t AgentAuditedClient::GetHasOverdueBill() const
{
    return m_hasOverdueBill;
}

void AgentAuditedClient::SetHasOverdueBill(const uint64_t& _hasOverdueBill)
{
    m_hasOverdueBill = _hasOverdueBill;
    m_hasOverdueBillHasBeenSet = true;
}

bool AgentAuditedClient::HasOverdueBillHasBeenSet() const
{
    return m_hasOverdueBillHasBeenSet;
}

string AgentAuditedClient::GetClientType() const
{
    return m_clientType;
}

void AgentAuditedClient::SetClientType(const string& _clientType)
{
    m_clientType = _clientType;
    m_clientTypeHasBeenSet = true;
}

bool AgentAuditedClient::ClientTypeHasBeenSet() const
{
    return m_clientTypeHasBeenSet;
}

string AgentAuditedClient::GetProjectType() const
{
    return m_projectType;
}

void AgentAuditedClient::SetProjectType(const string& _projectType)
{
    m_projectType = _projectType;
    m_projectTypeHasBeenSet = true;
}

bool AgentAuditedClient::ProjectTypeHasBeenSet() const
{
    return m_projectTypeHasBeenSet;
}

string AgentAuditedClient::GetSalesUin() const
{
    return m_salesUin;
}

void AgentAuditedClient::SetSalesUin(const string& _salesUin)
{
    m_salesUin = _salesUin;
    m_salesUinHasBeenSet = true;
}

bool AgentAuditedClient::SalesUinHasBeenSet() const
{
    return m_salesUinHasBeenSet;
}

string AgentAuditedClient::GetSalesName() const
{
    return m_salesName;
}

void AgentAuditedClient::SetSalesName(const string& _salesName)
{
    m_salesName = _salesName;
    m_salesNameHasBeenSet = true;
}

bool AgentAuditedClient::SalesNameHasBeenSet() const
{
    return m_salesNameHasBeenSet;
}

string AgentAuditedClient::GetMail() const
{
    return m_mail;
}

void AgentAuditedClient::SetMail(const string& _mail)
{
    m_mail = _mail;
    m_mailHasBeenSet = true;
}

bool AgentAuditedClient::MailHasBeenSet() const
{
    return m_mailHasBeenSet;
}

string AgentAuditedClient::GetTransactionType() const
{
    return m_transactionType;
}

void AgentAuditedClient::SetTransactionType(const string& _transactionType)
{
    m_transactionType = _transactionType;
    m_transactionTypeHasBeenSet = true;
}

bool AgentAuditedClient::TransactionTypeHasBeenSet() const
{
    return m_transactionTypeHasBeenSet;
}

