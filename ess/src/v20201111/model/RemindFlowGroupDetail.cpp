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

#include <tencentcloud/ess/v20201111/model/RemindFlowGroupDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

RemindFlowGroupDetail::RemindFlowGroupDetail() :
    m_approverOrderHasBeenSet(false),
    m_signIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome RemindFlowGroupDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApproverOrder") && !value["ApproverOrder"].IsNull())
    {
        if (!value["ApproverOrder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemindFlowGroupDetail.ApproverOrder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approverOrder = value["ApproverOrder"].GetInt64();
        m_approverOrderHasBeenSet = true;
    }

    if (value.HasMember("SignId") && !value["SignId"].IsNull())
    {
        if (!value["SignId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemindFlowGroupDetail.SignId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signId = string(value["SignId"].GetString());
        m_signIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemindFlowGroupDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemindFlowGroupDetail.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RemindFlowGroupDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approverOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approverOrder, allocator);
    }

    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


int64_t RemindFlowGroupDetail::GetApproverOrder() const
{
    return m_approverOrder;
}

void RemindFlowGroupDetail::SetApproverOrder(const int64_t& _approverOrder)
{
    m_approverOrder = _approverOrder;
    m_approverOrderHasBeenSet = true;
}

bool RemindFlowGroupDetail::ApproverOrderHasBeenSet() const
{
    return m_approverOrderHasBeenSet;
}

string RemindFlowGroupDetail::GetSignId() const
{
    return m_signId;
}

void RemindFlowGroupDetail::SetSignId(const string& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool RemindFlowGroupDetail::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

int64_t RemindFlowGroupDetail::GetStatus() const
{
    return m_status;
}

void RemindFlowGroupDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RemindFlowGroupDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RemindFlowGroupDetail::GetReason() const
{
    return m_reason;
}

void RemindFlowGroupDetail::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool RemindFlowGroupDetail::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

