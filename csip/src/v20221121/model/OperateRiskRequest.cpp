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

#include <tencentcloud/csip/v20221121/model/OperateRiskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

OperateRiskRequest::OperateRiskRequest() :
    m_riskRuleIdHasBeenSet(false),
    m_riskIdListHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

string OperateRiskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_riskRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_riskIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskIdList.begin(); itr != m_riskIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string OperateRiskRequest::GetRiskRuleId() const
{
    return m_riskRuleId;
}

void OperateRiskRequest::SetRiskRuleId(const string& _riskRuleId)
{
    m_riskRuleId = _riskRuleId;
    m_riskRuleIdHasBeenSet = true;
}

bool OperateRiskRequest::RiskRuleIdHasBeenSet() const
{
    return m_riskRuleIdHasBeenSet;
}

vector<uint64_t> OperateRiskRequest::GetRiskIdList() const
{
    return m_riskIdList;
}

void OperateRiskRequest::SetRiskIdList(const vector<uint64_t>& _riskIdList)
{
    m_riskIdList = _riskIdList;
    m_riskIdListHasBeenSet = true;
}

bool OperateRiskRequest::RiskIdListHasBeenSet() const
{
    return m_riskIdListHasBeenSet;
}

string OperateRiskRequest::GetOperationType() const
{
    return m_operationType;
}

void OperateRiskRequest::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool OperateRiskRequest::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

vector<string> OperateRiskRequest::GetMemberId() const
{
    return m_memberId;
}

void OperateRiskRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool OperateRiskRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string OperateRiskRequest::GetReason() const
{
    return m_reason;
}

void OperateRiskRequest::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool OperateRiskRequest::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}


