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

#include <tencentcloud/ess/v20201111/model/CreateFlowByFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateFlowByFilesRequest::CreateFlowByFilesRequest() :
    m_operatorHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_approversHasBeenSet(false),
    m_fileIdsHasBeenSet(false),
    m_flowDescriptionHasBeenSet(false),
    m_flowTypeHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_ccInfosHasBeenSet(false),
    m_ccNotifyTypeHasBeenSet(false),
    m_needPreviewHasBeenSet(false),
    m_previewTypeHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_unorderedHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_remindedOnHasBeenSet(false),
    m_approverVerifyTypeHasBeenSet(false),
    m_signBeanTagHasBeenSet(false),
    m_customShowMapHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_autoSignSceneHasBeenSet(false),
    m_needSignReviewHasBeenSet(false),
    m_flowDisplayTypeHasBeenSet(false),
    m_openDynamicSignFlowHasBeenSet(false)
{
}

string CreateFlowByFilesRequest::ToJsonString() const
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

    if (m_fileIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileIds.begin(); itr != m_fileIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_ccNotifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcNotifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ccNotifyType, allocator);
    }

    if (m_needPreviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedPreview";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needPreview, allocator);
    }

    if (m_previewTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_previewType, allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deadline, allocator);
    }

    if (m_unorderedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unordered";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unordered, allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_remindedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemindedOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_remindedOn, allocator);
    }

    if (m_approverVerifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverVerifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_approverVerifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_signBeanTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignBeanTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_signBeanTag, allocator);
    }

    if (m_customShowMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomShowMap";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customShowMap.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoSignSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSignScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoSignScene.c_str(), allocator).Move(), allocator);
    }

    if (m_needSignReviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSignReview";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needSignReview, allocator);
    }

    if (m_flowDisplayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDisplayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flowDisplayType, allocator);
    }

    if (m_openDynamicSignFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenDynamicSignFlow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_openDynamicSignFlow, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateFlowByFilesRequest::GetOperator() const
{
    return m_operator;
}

void CreateFlowByFilesRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateFlowByFilesRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateFlowByFilesRequest::GetFlowName() const
{
    return m_flowName;
}

void CreateFlowByFilesRequest::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool CreateFlowByFilesRequest::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

vector<ApproverInfo> CreateFlowByFilesRequest::GetApprovers() const
{
    return m_approvers;
}

void CreateFlowByFilesRequest::SetApprovers(const vector<ApproverInfo>& _approvers)
{
    m_approvers = _approvers;
    m_approversHasBeenSet = true;
}

bool CreateFlowByFilesRequest::ApproversHasBeenSet() const
{
    return m_approversHasBeenSet;
}

vector<string> CreateFlowByFilesRequest::GetFileIds() const
{
    return m_fileIds;
}

void CreateFlowByFilesRequest::SetFileIds(const vector<string>& _fileIds)
{
    m_fileIds = _fileIds;
    m_fileIdsHasBeenSet = true;
}

bool CreateFlowByFilesRequest::FileIdsHasBeenSet() const
{
    return m_fileIdsHasBeenSet;
}

string CreateFlowByFilesRequest::GetFlowDescription() const
{
    return m_flowDescription;
}

void CreateFlowByFilesRequest::SetFlowDescription(const string& _flowDescription)
{
    m_flowDescription = _flowDescription;
    m_flowDescriptionHasBeenSet = true;
}

bool CreateFlowByFilesRequest::FlowDescriptionHasBeenSet() const
{
    return m_flowDescriptionHasBeenSet;
}

string CreateFlowByFilesRequest::GetFlowType() const
{
    return m_flowType;
}

void CreateFlowByFilesRequest::SetFlowType(const string& _flowType)
{
    m_flowType = _flowType;
    m_flowTypeHasBeenSet = true;
}

bool CreateFlowByFilesRequest::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

vector<Component> CreateFlowByFilesRequest::GetComponents() const
{
    return m_components;
}

void CreateFlowByFilesRequest::SetComponents(const vector<Component>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool CreateFlowByFilesRequest::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

vector<CcInfo> CreateFlowByFilesRequest::GetCcInfos() const
{
    return m_ccInfos;
}

void CreateFlowByFilesRequest::SetCcInfos(const vector<CcInfo>& _ccInfos)
{
    m_ccInfos = _ccInfos;
    m_ccInfosHasBeenSet = true;
}

bool CreateFlowByFilesRequest::CcInfosHasBeenSet() const
{
    return m_ccInfosHasBeenSet;
}

int64_t CreateFlowByFilesRequest::GetCcNotifyType() const
{
    return m_ccNotifyType;
}

void CreateFlowByFilesRequest::SetCcNotifyType(const int64_t& _ccNotifyType)
{
    m_ccNotifyType = _ccNotifyType;
    m_ccNotifyTypeHasBeenSet = true;
}

bool CreateFlowByFilesRequest::CcNotifyTypeHasBeenSet() const
{
    return m_ccNotifyTypeHasBeenSet;
}

bool CreateFlowByFilesRequest::GetNeedPreview() const
{
    return m_needPreview;
}

void CreateFlowByFilesRequest::SetNeedPreview(const bool& _needPreview)
{
    m_needPreview = _needPreview;
    m_needPreviewHasBeenSet = true;
}

bool CreateFlowByFilesRequest::NeedPreviewHasBeenSet() const
{
    return m_needPreviewHasBeenSet;
}

int64_t CreateFlowByFilesRequest::GetPreviewType() const
{
    return m_previewType;
}

void CreateFlowByFilesRequest::SetPreviewType(const int64_t& _previewType)
{
    m_previewType = _previewType;
    m_previewTypeHasBeenSet = true;
}

bool CreateFlowByFilesRequest::PreviewTypeHasBeenSet() const
{
    return m_previewTypeHasBeenSet;
}

int64_t CreateFlowByFilesRequest::GetDeadline() const
{
    return m_deadline;
}

void CreateFlowByFilesRequest::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool CreateFlowByFilesRequest::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

bool CreateFlowByFilesRequest::GetUnordered() const
{
    return m_unordered;
}

void CreateFlowByFilesRequest::SetUnordered(const bool& _unordered)
{
    m_unordered = _unordered;
    m_unorderedHasBeenSet = true;
}

bool CreateFlowByFilesRequest::UnorderedHasBeenSet() const
{
    return m_unorderedHasBeenSet;
}

string CreateFlowByFilesRequest::GetUserData() const
{
    return m_userData;
}

void CreateFlowByFilesRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateFlowByFilesRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

int64_t CreateFlowByFilesRequest::GetRemindedOn() const
{
    return m_remindedOn;
}

void CreateFlowByFilesRequest::SetRemindedOn(const int64_t& _remindedOn)
{
    m_remindedOn = _remindedOn;
    m_remindedOnHasBeenSet = true;
}

bool CreateFlowByFilesRequest::RemindedOnHasBeenSet() const
{
    return m_remindedOnHasBeenSet;
}

string CreateFlowByFilesRequest::GetApproverVerifyType() const
{
    return m_approverVerifyType;
}

void CreateFlowByFilesRequest::SetApproverVerifyType(const string& _approverVerifyType)
{
    m_approverVerifyType = _approverVerifyType;
    m_approverVerifyTypeHasBeenSet = true;
}

bool CreateFlowByFilesRequest::ApproverVerifyTypeHasBeenSet() const
{
    return m_approverVerifyTypeHasBeenSet;
}

int64_t CreateFlowByFilesRequest::GetSignBeanTag() const
{
    return m_signBeanTag;
}

void CreateFlowByFilesRequest::SetSignBeanTag(const int64_t& _signBeanTag)
{
    m_signBeanTag = _signBeanTag;
    m_signBeanTagHasBeenSet = true;
}

bool CreateFlowByFilesRequest::SignBeanTagHasBeenSet() const
{
    return m_signBeanTagHasBeenSet;
}

string CreateFlowByFilesRequest::GetCustomShowMap() const
{
    return m_customShowMap;
}

void CreateFlowByFilesRequest::SetCustomShowMap(const string& _customShowMap)
{
    m_customShowMap = _customShowMap;
    m_customShowMapHasBeenSet = true;
}

bool CreateFlowByFilesRequest::CustomShowMapHasBeenSet() const
{
    return m_customShowMapHasBeenSet;
}

Agent CreateFlowByFilesRequest::GetAgent() const
{
    return m_agent;
}

void CreateFlowByFilesRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateFlowByFilesRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateFlowByFilesRequest::GetAutoSignScene() const
{
    return m_autoSignScene;
}

void CreateFlowByFilesRequest::SetAutoSignScene(const string& _autoSignScene)
{
    m_autoSignScene = _autoSignScene;
    m_autoSignSceneHasBeenSet = true;
}

bool CreateFlowByFilesRequest::AutoSignSceneHasBeenSet() const
{
    return m_autoSignSceneHasBeenSet;
}

bool CreateFlowByFilesRequest::GetNeedSignReview() const
{
    return m_needSignReview;
}

void CreateFlowByFilesRequest::SetNeedSignReview(const bool& _needSignReview)
{
    m_needSignReview = _needSignReview;
    m_needSignReviewHasBeenSet = true;
}

bool CreateFlowByFilesRequest::NeedSignReviewHasBeenSet() const
{
    return m_needSignReviewHasBeenSet;
}

int64_t CreateFlowByFilesRequest::GetFlowDisplayType() const
{
    return m_flowDisplayType;
}

void CreateFlowByFilesRequest::SetFlowDisplayType(const int64_t& _flowDisplayType)
{
    m_flowDisplayType = _flowDisplayType;
    m_flowDisplayTypeHasBeenSet = true;
}

bool CreateFlowByFilesRequest::FlowDisplayTypeHasBeenSet() const
{
    return m_flowDisplayTypeHasBeenSet;
}

bool CreateFlowByFilesRequest::GetOpenDynamicSignFlow() const
{
    return m_openDynamicSignFlow;
}

void CreateFlowByFilesRequest::SetOpenDynamicSignFlow(const bool& _openDynamicSignFlow)
{
    m_openDynamicSignFlow = _openDynamicSignFlow;
    m_openDynamicSignFlowHasBeenSet = true;
}

bool CreateFlowByFilesRequest::OpenDynamicSignFlowHasBeenSet() const
{
    return m_openDynamicSignFlowHasBeenSet;
}


