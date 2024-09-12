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

#include <tencentcloud/ess/v20201111/model/CreateFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateFlowRequest::CreateFlowRequest() :
    m_operatorHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_approversHasBeenSet(false),
    m_flowDescriptionHasBeenSet(false),
    m_flowTypeHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_deadLineHasBeenSet(false),
    m_remindedOnHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_unorderedHasBeenSet(false),
    m_customShowMapHasBeenSet(false),
    m_needSignReviewHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_ccInfosHasBeenSet(false),
    m_autoSignSceneHasBeenSet(false),
    m_relatedFlowIdHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_flowDisplayTypeHasBeenSet(false)
{
}

string CreateFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_approversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Approvers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_approvers.begin(); itr != m_approvers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_flowDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_flowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowType.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_deadLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deadLine, allocator);
    }

    if (m_remindedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemindedOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_remindedOn, allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_unorderedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unordered";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unordered, allocator);
    }

    if (m_customShowMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomShowMap";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customShowMap.c_str(), allocator).Move(), allocator);
    }

    if (m_needSignReviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSignReview";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needSignReview, allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ccInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ccInfos.begin(); itr != m_ccInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoSignSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSignScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoSignScene.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedFlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_relatedFlowId.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_flowDisplayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDisplayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flowDisplayType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateFlowRequest::GetOperator() const
{
    return m_operator;
}

void CreateFlowRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateFlowRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateFlowRequest::GetFlowName() const
{
    return m_flowName;
}

void CreateFlowRequest::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool CreateFlowRequest::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

vector<FlowCreateApprover> CreateFlowRequest::GetApprovers() const
{
    return m_approvers;
}

void CreateFlowRequest::SetApprovers(const vector<FlowCreateApprover>& _approvers)
{
    m_approvers = _approvers;
    m_approversHasBeenSet = true;
}

bool CreateFlowRequest::ApproversHasBeenSet() const
{
    return m_approversHasBeenSet;
}

string CreateFlowRequest::GetFlowDescription() const
{
    return m_flowDescription;
}

void CreateFlowRequest::SetFlowDescription(const string& _flowDescription)
{
    m_flowDescription = _flowDescription;
    m_flowDescriptionHasBeenSet = true;
}

bool CreateFlowRequest::FlowDescriptionHasBeenSet() const
{
    return m_flowDescriptionHasBeenSet;
}

string CreateFlowRequest::GetFlowType() const
{
    return m_flowType;
}

void CreateFlowRequest::SetFlowType(const string& _flowType)
{
    m_flowType = _flowType;
    m_flowTypeHasBeenSet = true;
}

bool CreateFlowRequest::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

string CreateFlowRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateFlowRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateFlowRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

int64_t CreateFlowRequest::GetDeadLine() const
{
    return m_deadLine;
}

void CreateFlowRequest::SetDeadLine(const int64_t& _deadLine)
{
    m_deadLine = _deadLine;
    m_deadLineHasBeenSet = true;
}

bool CreateFlowRequest::DeadLineHasBeenSet() const
{
    return m_deadLineHasBeenSet;
}

int64_t CreateFlowRequest::GetRemindedOn() const
{
    return m_remindedOn;
}

void CreateFlowRequest::SetRemindedOn(const int64_t& _remindedOn)
{
    m_remindedOn = _remindedOn;
    m_remindedOnHasBeenSet = true;
}

bool CreateFlowRequest::RemindedOnHasBeenSet() const
{
    return m_remindedOnHasBeenSet;
}

string CreateFlowRequest::GetUserData() const
{
    return m_userData;
}

void CreateFlowRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateFlowRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

bool CreateFlowRequest::GetUnordered() const
{
    return m_unordered;
}

void CreateFlowRequest::SetUnordered(const bool& _unordered)
{
    m_unordered = _unordered;
    m_unorderedHasBeenSet = true;
}

bool CreateFlowRequest::UnorderedHasBeenSet() const
{
    return m_unorderedHasBeenSet;
}

string CreateFlowRequest::GetCustomShowMap() const
{
    return m_customShowMap;
}

void CreateFlowRequest::SetCustomShowMap(const string& _customShowMap)
{
    m_customShowMap = _customShowMap;
    m_customShowMapHasBeenSet = true;
}

bool CreateFlowRequest::CustomShowMapHasBeenSet() const
{
    return m_customShowMapHasBeenSet;
}

bool CreateFlowRequest::GetNeedSignReview() const
{
    return m_needSignReview;
}

void CreateFlowRequest::SetNeedSignReview(const bool& _needSignReview)
{
    m_needSignReview = _needSignReview;
    m_needSignReviewHasBeenSet = true;
}

bool CreateFlowRequest::NeedSignReviewHasBeenSet() const
{
    return m_needSignReviewHasBeenSet;
}

Agent CreateFlowRequest::GetAgent() const
{
    return m_agent;
}

void CreateFlowRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateFlowRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<CcInfo> CreateFlowRequest::GetCcInfos() const
{
    return m_ccInfos;
}

void CreateFlowRequest::SetCcInfos(const vector<CcInfo>& _ccInfos)
{
    m_ccInfos = _ccInfos;
    m_ccInfosHasBeenSet = true;
}

bool CreateFlowRequest::CcInfosHasBeenSet() const
{
    return m_ccInfosHasBeenSet;
}

string CreateFlowRequest::GetAutoSignScene() const
{
    return m_autoSignScene;
}

void CreateFlowRequest::SetAutoSignScene(const string& _autoSignScene)
{
    m_autoSignScene = _autoSignScene;
    m_autoSignSceneHasBeenSet = true;
}

bool CreateFlowRequest::AutoSignSceneHasBeenSet() const
{
    return m_autoSignSceneHasBeenSet;
}

string CreateFlowRequest::GetRelatedFlowId() const
{
    return m_relatedFlowId;
}

void CreateFlowRequest::SetRelatedFlowId(const string& _relatedFlowId)
{
    m_relatedFlowId = _relatedFlowId;
    m_relatedFlowIdHasBeenSet = true;
}

bool CreateFlowRequest::RelatedFlowIdHasBeenSet() const
{
    return m_relatedFlowIdHasBeenSet;
}

string CreateFlowRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateFlowRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateFlowRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

int64_t CreateFlowRequest::GetFlowDisplayType() const
{
    return m_flowDisplayType;
}

void CreateFlowRequest::SetFlowDisplayType(const int64_t& _flowDisplayType)
{
    m_flowDisplayType = _flowDisplayType;
    m_flowDisplayTypeHasBeenSet = true;
}

bool CreateFlowRequest::FlowDisplayTypeHasBeenSet() const
{
    return m_flowDisplayTypeHasBeenSet;
}


