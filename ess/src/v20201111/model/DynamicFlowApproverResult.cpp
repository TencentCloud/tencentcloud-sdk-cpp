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

#include <tencentcloud/ess/v20201111/model/DynamicFlowApproverResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DynamicFlowApproverResult::DynamicFlowApproverResult() :
    m_recipientIdHasBeenSet(false),
    m_signIdHasBeenSet(false),
    m_approverStatusHasBeenSet(false)
{
}

CoreInternalOutcome DynamicFlowApproverResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecipientId") && !value["RecipientId"].IsNull())
    {
        if (!value["RecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicFlowApproverResult.RecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientId = string(value["RecipientId"].GetString());
        m_recipientIdHasBeenSet = true;
    }

    if (value.HasMember("SignId") && !value["SignId"].IsNull())
    {
        if (!value["SignId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicFlowApproverResult.SignId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signId = string(value["SignId"].GetString());
        m_signIdHasBeenSet = true;
    }

    if (value.HasMember("ApproverStatus") && !value["ApproverStatus"].IsNull())
    {
        if (!value["ApproverStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicFlowApproverResult.ApproverStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approverStatus = value["ApproverStatus"].GetInt64();
        m_approverStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DynamicFlowApproverResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signId.c_str(), allocator).Move(), allocator);
    }

    if (m_approverStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approverStatus, allocator);
    }

}


string DynamicFlowApproverResult::GetRecipientId() const
{
    return m_recipientId;
}

void DynamicFlowApproverResult::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool DynamicFlowApproverResult::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}

string DynamicFlowApproverResult::GetSignId() const
{
    return m_signId;
}

void DynamicFlowApproverResult::SetSignId(const string& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool DynamicFlowApproverResult::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

int64_t DynamicFlowApproverResult::GetApproverStatus() const
{
    return m_approverStatus;
}

void DynamicFlowApproverResult::SetApproverStatus(const int64_t& _approverStatus)
{
    m_approverStatus = _approverStatus;
    m_approverStatusHasBeenSet = true;
}

bool DynamicFlowApproverResult::ApproverStatusHasBeenSet() const
{
    return m_approverStatusHasBeenSet;
}

