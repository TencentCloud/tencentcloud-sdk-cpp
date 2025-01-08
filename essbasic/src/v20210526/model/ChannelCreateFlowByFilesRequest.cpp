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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowByFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateFlowByFilesRequest::ChannelCreateFlowByFilesRequest() :
    m_agentHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_flowDescriptionHasBeenSet(false),
    m_flowApproversHasBeenSet(false),
    m_fileIdsHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_unorderedHasBeenSet(false),
    m_flowTypeHasBeenSet(false),
    m_customShowMapHasBeenSet(false),
    m_customerDataHasBeenSet(false),
    m_needSignReviewHasBeenSet(false),
    m_approverVerifyTypeHasBeenSet(false),
    m_signBeanTagHasBeenSet(false),
    m_ccInfosHasBeenSet(false),
    m_ccNotifyTypeHasBeenSet(false),
    m_autoSignSceneHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_flowDisplayTypeHasBeenSet(false),
    m_needPreviewHasBeenSet(false),
    m_previewTypeHasBeenSet(false),
    m_openDynamicFlowHasBeenSet(false),
    m_openDynamicSignFlowHasBeenSet(false)
{
}

string ChannelCreateFlowByFilesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_flowApproversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowApprovers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowApprovers.begin(); itr != m_flowApprovers.end(); ++itr, ++i)
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

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deadline, allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_unorderedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unordered";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unordered, allocator);
    }

    if (m_flowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowType.c_str(), allocator).Move(), allocator);
    }

    if (m_customShowMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomShowMap";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customShowMap.c_str(), allocator).Move(), allocator);
    }

    if (m_customerDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerData.c_str(), allocator).Move(), allocator);
    }

    if (m_needSignReviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSignReview";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needSignReview, allocator);
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

    if (m_autoSignSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSignScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoSignScene.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flowDisplayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDisplayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flowDisplayType, allocator);
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

    if (m_openDynamicFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenDynamicFlow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_openDynamicFlow, allocator);
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


Agent ChannelCreateFlowByFilesRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateFlowByFilesRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreateFlowByFilesRequest::GetFlowName() const
{
    return m_flowName;
}

void ChannelCreateFlowByFilesRequest::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

string ChannelCreateFlowByFilesRequest::GetFlowDescription() const
{
    return m_flowDescription;
}

void ChannelCreateFlowByFilesRequest::SetFlowDescription(const string& _flowDescription)
{
    m_flowDescription = _flowDescription;
    m_flowDescriptionHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::FlowDescriptionHasBeenSet() const
{
    return m_flowDescriptionHasBeenSet;
}

vector<FlowApproverInfo> ChannelCreateFlowByFilesRequest::GetFlowApprovers() const
{
    return m_flowApprovers;
}

void ChannelCreateFlowByFilesRequest::SetFlowApprovers(const vector<FlowApproverInfo>& _flowApprovers)
{
    m_flowApprovers = _flowApprovers;
    m_flowApproversHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::FlowApproversHasBeenSet() const
{
    return m_flowApproversHasBeenSet;
}

vector<string> ChannelCreateFlowByFilesRequest::GetFileIds() const
{
    return m_fileIds;
}

void ChannelCreateFlowByFilesRequest::SetFileIds(const vector<string>& _fileIds)
{
    m_fileIds = _fileIds;
    m_fileIdsHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::FileIdsHasBeenSet() const
{
    return m_fileIdsHasBeenSet;
}

vector<Component> ChannelCreateFlowByFilesRequest::GetComponents() const
{
    return m_components;
}

void ChannelCreateFlowByFilesRequest::SetComponents(const vector<Component>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

int64_t ChannelCreateFlowByFilesRequest::GetDeadline() const
{
    return m_deadline;
}

void ChannelCreateFlowByFilesRequest::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string ChannelCreateFlowByFilesRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void ChannelCreateFlowByFilesRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

bool ChannelCreateFlowByFilesRequest::GetUnordered() const
{
    return m_unordered;
}

void ChannelCreateFlowByFilesRequest::SetUnordered(const bool& _unordered)
{
    m_unordered = _unordered;
    m_unorderedHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::UnorderedHasBeenSet() const
{
    return m_unorderedHasBeenSet;
}

string ChannelCreateFlowByFilesRequest::GetFlowType() const
{
    return m_flowType;
}

void ChannelCreateFlowByFilesRequest::SetFlowType(const string& _flowType)
{
    m_flowType = _flowType;
    m_flowTypeHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

string ChannelCreateFlowByFilesRequest::GetCustomShowMap() const
{
    return m_customShowMap;
}

void ChannelCreateFlowByFilesRequest::SetCustomShowMap(const string& _customShowMap)
{
    m_customShowMap = _customShowMap;
    m_customShowMapHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::CustomShowMapHasBeenSet() const
{
    return m_customShowMapHasBeenSet;
}

string ChannelCreateFlowByFilesRequest::GetCustomerData() const
{
    return m_customerData;
}

void ChannelCreateFlowByFilesRequest::SetCustomerData(const string& _customerData)
{
    m_customerData = _customerData;
    m_customerDataHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::CustomerDataHasBeenSet() const
{
    return m_customerDataHasBeenSet;
}

bool ChannelCreateFlowByFilesRequest::GetNeedSignReview() const
{
    return m_needSignReview;
}

void ChannelCreateFlowByFilesRequest::SetNeedSignReview(const bool& _needSignReview)
{
    m_needSignReview = _needSignReview;
    m_needSignReviewHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::NeedSignReviewHasBeenSet() const
{
    return m_needSignReviewHasBeenSet;
}

string ChannelCreateFlowByFilesRequest::GetApproverVerifyType() const
{
    return m_approverVerifyType;
}

void ChannelCreateFlowByFilesRequest::SetApproverVerifyType(const string& _approverVerifyType)
{
    m_approverVerifyType = _approverVerifyType;
    m_approverVerifyTypeHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::ApproverVerifyTypeHasBeenSet() const
{
    return m_approverVerifyTypeHasBeenSet;
}

int64_t ChannelCreateFlowByFilesRequest::GetSignBeanTag() const
{
    return m_signBeanTag;
}

void ChannelCreateFlowByFilesRequest::SetSignBeanTag(const int64_t& _signBeanTag)
{
    m_signBeanTag = _signBeanTag;
    m_signBeanTagHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::SignBeanTagHasBeenSet() const
{
    return m_signBeanTagHasBeenSet;
}

vector<CcInfo> ChannelCreateFlowByFilesRequest::GetCcInfos() const
{
    return m_ccInfos;
}

void ChannelCreateFlowByFilesRequest::SetCcInfos(const vector<CcInfo>& _ccInfos)
{
    m_ccInfos = _ccInfos;
    m_ccInfosHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::CcInfosHasBeenSet() const
{
    return m_ccInfosHasBeenSet;
}

int64_t ChannelCreateFlowByFilesRequest::GetCcNotifyType() const
{
    return m_ccNotifyType;
}

void ChannelCreateFlowByFilesRequest::SetCcNotifyType(const int64_t& _ccNotifyType)
{
    m_ccNotifyType = _ccNotifyType;
    m_ccNotifyTypeHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::CcNotifyTypeHasBeenSet() const
{
    return m_ccNotifyTypeHasBeenSet;
}

string ChannelCreateFlowByFilesRequest::GetAutoSignScene() const
{
    return m_autoSignScene;
}

void ChannelCreateFlowByFilesRequest::SetAutoSignScene(const string& _autoSignScene)
{
    m_autoSignScene = _autoSignScene;
    m_autoSignSceneHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::AutoSignSceneHasBeenSet() const
{
    return m_autoSignSceneHasBeenSet;
}

UserInfo ChannelCreateFlowByFilesRequest::GetOperator() const
{
    return m_operator;
}

void ChannelCreateFlowByFilesRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

int64_t ChannelCreateFlowByFilesRequest::GetFlowDisplayType() const
{
    return m_flowDisplayType;
}

void ChannelCreateFlowByFilesRequest::SetFlowDisplayType(const int64_t& _flowDisplayType)
{
    m_flowDisplayType = _flowDisplayType;
    m_flowDisplayTypeHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::FlowDisplayTypeHasBeenSet() const
{
    return m_flowDisplayTypeHasBeenSet;
}

bool ChannelCreateFlowByFilesRequest::GetNeedPreview() const
{
    return m_needPreview;
}

void ChannelCreateFlowByFilesRequest::SetNeedPreview(const bool& _needPreview)
{
    m_needPreview = _needPreview;
    m_needPreviewHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::NeedPreviewHasBeenSet() const
{
    return m_needPreviewHasBeenSet;
}

int64_t ChannelCreateFlowByFilesRequest::GetPreviewType() const
{
    return m_previewType;
}

void ChannelCreateFlowByFilesRequest::SetPreviewType(const int64_t& _previewType)
{
    m_previewType = _previewType;
    m_previewTypeHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::PreviewTypeHasBeenSet() const
{
    return m_previewTypeHasBeenSet;
}

bool ChannelCreateFlowByFilesRequest::GetOpenDynamicFlow() const
{
    return m_openDynamicFlow;
}

void ChannelCreateFlowByFilesRequest::SetOpenDynamicFlow(const bool& _openDynamicFlow)
{
    m_openDynamicFlow = _openDynamicFlow;
    m_openDynamicFlowHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::OpenDynamicFlowHasBeenSet() const
{
    return m_openDynamicFlowHasBeenSet;
}

bool ChannelCreateFlowByFilesRequest::GetOpenDynamicSignFlow() const
{
    return m_openDynamicSignFlow;
}

void ChannelCreateFlowByFilesRequest::SetOpenDynamicSignFlow(const bool& _openDynamicSignFlow)
{
    m_openDynamicSignFlow = _openDynamicSignFlow;
    m_openDynamicSignFlowHasBeenSet = true;
}

bool ChannelCreateFlowByFilesRequest::OpenDynamicSignFlowHasBeenSet() const
{
    return m_openDynamicSignFlowHasBeenSet;
}


