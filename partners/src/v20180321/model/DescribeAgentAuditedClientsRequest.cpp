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

#include <tencentcloud/partners/v20180321/model/DescribeAgentAuditedClientsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

DescribeAgentAuditedClientsRequest::DescribeAgentAuditedClientsRequest() :
    m_clientUinHasBeenSet(false),
    m_clientNameHasBeenSet(false),
    m_clientFlagHasBeenSet(false),
    m_orderDirectionHasBeenSet(false),
    m_clientUinsHasBeenSet(false),
    m_hasOverdueBillHasBeenSet(false),
    m_clientRemarkHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_clientTypeHasBeenSet(false),
    m_projectTypeHasBeenSet(false),
    m_salesUinHasBeenSet(false),
    m_salesNameHasBeenSet(false)
{
}

string DescribeAgentAuditedClientsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clientUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientUin.c_str(), allocator).Move(), allocator);
    }

    if (m_clientNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientName.c_str(), allocator).Move(), allocator);
    }

    if (m_clientFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_clientUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clientUins.begin(); itr != m_clientUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hasOverdueBillHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasOverdueBill";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasOverdueBill, allocator);
    }

    if (m_clientRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_clientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectType.c_str(), allocator).Move(), allocator);
    }

    if (m_salesUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_salesUin.c_str(), allocator).Move(), allocator);
    }

    if (m_salesNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_salesName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAgentAuditedClientsRequest::GetClientUin() const
{
    return m_clientUin;
}

void DescribeAgentAuditedClientsRequest::SetClientUin(const string& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool DescribeAgentAuditedClientsRequest::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

string DescribeAgentAuditedClientsRequest::GetClientName() const
{
    return m_clientName;
}

void DescribeAgentAuditedClientsRequest::SetClientName(const string& _clientName)
{
    m_clientName = _clientName;
    m_clientNameHasBeenSet = true;
}

bool DescribeAgentAuditedClientsRequest::ClientNameHasBeenSet() const
{
    return m_clientNameHasBeenSet;
}

string DescribeAgentAuditedClientsRequest::GetClientFlag() const
{
    return m_clientFlag;
}

void DescribeAgentAuditedClientsRequest::SetClientFlag(const string& _clientFlag)
{
    m_clientFlag = _clientFlag;
    m_clientFlagHasBeenSet = true;
}

bool DescribeAgentAuditedClientsRequest::ClientFlagHasBeenSet() const
{
    return m_clientFlagHasBeenSet;
}

string DescribeAgentAuditedClientsRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeAgentAuditedClientsRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeAgentAuditedClientsRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}

vector<string> DescribeAgentAuditedClientsRequest::GetClientUins() const
{
    return m_clientUins;
}

void DescribeAgentAuditedClientsRequest::SetClientUins(const vector<string>& _clientUins)
{
    m_clientUins = _clientUins;
    m_clientUinsHasBeenSet = true;
}

bool DescribeAgentAuditedClientsRequest::ClientUinsHasBeenSet() const
{
    return m_clientUinsHasBeenSet;
}

uint64_t DescribeAgentAuditedClientsRequest::GetHasOverdueBill() const
{
    return m_hasOverdueBill;
}

void DescribeAgentAuditedClientsRequest::SetHasOverdueBill(const uint64_t& _hasOverdueBill)
{
    m_hasOverdueBill = _hasOverdueBill;
    m_hasOverdueBillHasBeenSet = true;
}

bool DescribeAgentAuditedClientsRequest::HasOverdueBillHasBeenSet() const
{
    return m_hasOverdueBillHasBeenSet;
}

string DescribeAgentAuditedClientsRequest::GetClientRemark() const
{
    return m_clientRemark;
}

void DescribeAgentAuditedClientsRequest::SetClientRemark(const string& _clientRemark)
{
    m_clientRemark = _clientRemark;
    m_clientRemarkHasBeenSet = true;
}

bool DescribeAgentAuditedClientsRequest::ClientRemarkHasBeenSet() const
{
    return m_clientRemarkHasBeenSet;
}

uint64_t DescribeAgentAuditedClientsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAgentAuditedClientsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAgentAuditedClientsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAgentAuditedClientsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAgentAuditedClientsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAgentAuditedClientsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAgentAuditedClientsRequest::GetClientType() const
{
    return m_clientType;
}

void DescribeAgentAuditedClientsRequest::SetClientType(const string& _clientType)
{
    m_clientType = _clientType;
    m_clientTypeHasBeenSet = true;
}

bool DescribeAgentAuditedClientsRequest::ClientTypeHasBeenSet() const
{
    return m_clientTypeHasBeenSet;
}

string DescribeAgentAuditedClientsRequest::GetProjectType() const
{
    return m_projectType;
}

void DescribeAgentAuditedClientsRequest::SetProjectType(const string& _projectType)
{
    m_projectType = _projectType;
    m_projectTypeHasBeenSet = true;
}

bool DescribeAgentAuditedClientsRequest::ProjectTypeHasBeenSet() const
{
    return m_projectTypeHasBeenSet;
}

string DescribeAgentAuditedClientsRequest::GetSalesUin() const
{
    return m_salesUin;
}

void DescribeAgentAuditedClientsRequest::SetSalesUin(const string& _salesUin)
{
    m_salesUin = _salesUin;
    m_salesUinHasBeenSet = true;
}

bool DescribeAgentAuditedClientsRequest::SalesUinHasBeenSet() const
{
    return m_salesUinHasBeenSet;
}

string DescribeAgentAuditedClientsRequest::GetSalesName() const
{
    return m_salesName;
}

void DescribeAgentAuditedClientsRequest::SetSalesName(const string& _salesName)
{
    m_salesName = _salesName;
    m_salesNameHasBeenSet = true;
}

bool DescribeAgentAuditedClientsRequest::SalesNameHasBeenSet() const
{
    return m_salesNameHasBeenSet;
}


