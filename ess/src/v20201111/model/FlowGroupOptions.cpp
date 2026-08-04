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

#include <tencentcloud/ess/v20201111/model/FlowGroupOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FlowGroupOptions::FlowGroupOptions() :
    m_approverVerifyTypeHasBeenSet(false),
    m_selfOrganizationApproverNotifyTypeHasBeenSet(false),
    m_otherApproverNotifyTypeHasBeenSet(false),
    m_flowGroupNeedWorkflowHasBeenSet(false),
    m_noEditFlowNameHasBeenSet(false),
    m_noEditFlowTypeHasBeenSet(false),
    m_noEditDeadlineHasBeenSet(false),
    m_signComponentConfigHasBeenSet(false),
    m_forbidEditWatermarkHasBeenSet(false),
    m_hideSignCodeAfterStartHasBeenSet(false),
    m_signAfterStartHasBeenSet(false),
    m_previewAfterStartHasBeenSet(false)
{
}

CoreInternalOutcome FlowGroupOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApproverVerifyType") && !value["ApproverVerifyType"].IsNull())
    {
        if (!value["ApproverVerifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.ApproverVerifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverVerifyType = string(value["ApproverVerifyType"].GetString());
        m_approverVerifyTypeHasBeenSet = true;
    }

    if (value.HasMember("SelfOrganizationApproverNotifyType") && !value["SelfOrganizationApproverNotifyType"].IsNull())
    {
        if (!value["SelfOrganizationApproverNotifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.SelfOrganizationApproverNotifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfOrganizationApproverNotifyType = string(value["SelfOrganizationApproverNotifyType"].GetString());
        m_selfOrganizationApproverNotifyTypeHasBeenSet = true;
    }

    if (value.HasMember("OtherApproverNotifyType") && !value["OtherApproverNotifyType"].IsNull())
    {
        if (!value["OtherApproverNotifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.OtherApproverNotifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherApproverNotifyType = string(value["OtherApproverNotifyType"].GetString());
        m_otherApproverNotifyTypeHasBeenSet = true;
    }

    if (value.HasMember("FlowGroupNeedWorkflow") && !value["FlowGroupNeedWorkflow"].IsNull())
    {
        if (!value["FlowGroupNeedWorkflow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.FlowGroupNeedWorkflow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_flowGroupNeedWorkflow = value["FlowGroupNeedWorkflow"].GetBool();
        m_flowGroupNeedWorkflowHasBeenSet = true;
    }

    if (value.HasMember("NoEditFlowName") && !value["NoEditFlowName"].IsNull())
    {
        if (!value["NoEditFlowName"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.NoEditFlowName` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noEditFlowName = value["NoEditFlowName"].GetBool();
        m_noEditFlowNameHasBeenSet = true;
    }

    if (value.HasMember("NoEditFlowType") && !value["NoEditFlowType"].IsNull())
    {
        if (!value["NoEditFlowType"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.NoEditFlowType` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noEditFlowType = value["NoEditFlowType"].GetBool();
        m_noEditFlowTypeHasBeenSet = true;
    }

    if (value.HasMember("NoEditDeadline") && !value["NoEditDeadline"].IsNull())
    {
        if (!value["NoEditDeadline"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.NoEditDeadline` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noEditDeadline = value["NoEditDeadline"].GetBool();
        m_noEditDeadlineHasBeenSet = true;
    }

    if (value.HasMember("SignComponentConfig") && !value["SignComponentConfig"].IsNull())
    {
        if (!value["SignComponentConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.SignComponentConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_signComponentConfig.Deserialize(value["SignComponentConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_signComponentConfigHasBeenSet = true;
    }

    if (value.HasMember("ForbidEditWatermark") && !value["ForbidEditWatermark"].IsNull())
    {
        if (!value["ForbidEditWatermark"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.ForbidEditWatermark` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_forbidEditWatermark = value["ForbidEditWatermark"].GetBool();
        m_forbidEditWatermarkHasBeenSet = true;
    }

    if (value.HasMember("HideSignCodeAfterStart") && !value["HideSignCodeAfterStart"].IsNull())
    {
        if (!value["HideSignCodeAfterStart"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.HideSignCodeAfterStart` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hideSignCodeAfterStart = value["HideSignCodeAfterStart"].GetBool();
        m_hideSignCodeAfterStartHasBeenSet = true;
    }

    if (value.HasMember("SignAfterStart") && !value["SignAfterStart"].IsNull())
    {
        if (!value["SignAfterStart"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.SignAfterStart` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_signAfterStart = value["SignAfterStart"].GetBool();
        m_signAfterStartHasBeenSet = true;
    }

    if (value.HasMember("PreviewAfterStart") && !value["PreviewAfterStart"].IsNull())
    {
        if (!value["PreviewAfterStart"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.PreviewAfterStart` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_previewAfterStart = value["PreviewAfterStart"].GetBool();
        m_previewAfterStartHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowGroupOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approverVerifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverVerifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverVerifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_selfOrganizationApproverNotifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfOrganizationApproverNotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selfOrganizationApproverNotifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_otherApproverNotifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherApproverNotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherApproverNotifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_flowGroupNeedWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupNeedWorkflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowGroupNeedWorkflow, allocator);
    }

    if (m_noEditFlowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoEditFlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noEditFlowName, allocator);
    }

    if (m_noEditFlowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoEditFlowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noEditFlowType, allocator);
    }

    if (m_noEditDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoEditDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noEditDeadline, allocator);
    }

    if (m_signComponentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignComponentConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_signComponentConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_forbidEditWatermarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForbidEditWatermark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forbidEditWatermark, allocator);
    }

    if (m_hideSignCodeAfterStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideSignCodeAfterStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideSignCodeAfterStart, allocator);
    }

    if (m_signAfterStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignAfterStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signAfterStart, allocator);
    }

    if (m_previewAfterStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewAfterStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_previewAfterStart, allocator);
    }

}


string FlowGroupOptions::GetApproverVerifyType() const
{
    return m_approverVerifyType;
}

void FlowGroupOptions::SetApproverVerifyType(const string& _approverVerifyType)
{
    m_approverVerifyType = _approverVerifyType;
    m_approverVerifyTypeHasBeenSet = true;
}

bool FlowGroupOptions::ApproverVerifyTypeHasBeenSet() const
{
    return m_approverVerifyTypeHasBeenSet;
}

string FlowGroupOptions::GetSelfOrganizationApproverNotifyType() const
{
    return m_selfOrganizationApproverNotifyType;
}

void FlowGroupOptions::SetSelfOrganizationApproverNotifyType(const string& _selfOrganizationApproverNotifyType)
{
    m_selfOrganizationApproverNotifyType = _selfOrganizationApproverNotifyType;
    m_selfOrganizationApproverNotifyTypeHasBeenSet = true;
}

bool FlowGroupOptions::SelfOrganizationApproverNotifyTypeHasBeenSet() const
{
    return m_selfOrganizationApproverNotifyTypeHasBeenSet;
}

string FlowGroupOptions::GetOtherApproverNotifyType() const
{
    return m_otherApproverNotifyType;
}

void FlowGroupOptions::SetOtherApproverNotifyType(const string& _otherApproverNotifyType)
{
    m_otherApproverNotifyType = _otherApproverNotifyType;
    m_otherApproverNotifyTypeHasBeenSet = true;
}

bool FlowGroupOptions::OtherApproverNotifyTypeHasBeenSet() const
{
    return m_otherApproverNotifyTypeHasBeenSet;
}

bool FlowGroupOptions::GetFlowGroupNeedWorkflow() const
{
    return m_flowGroupNeedWorkflow;
}

void FlowGroupOptions::SetFlowGroupNeedWorkflow(const bool& _flowGroupNeedWorkflow)
{
    m_flowGroupNeedWorkflow = _flowGroupNeedWorkflow;
    m_flowGroupNeedWorkflowHasBeenSet = true;
}

bool FlowGroupOptions::FlowGroupNeedWorkflowHasBeenSet() const
{
    return m_flowGroupNeedWorkflowHasBeenSet;
}

bool FlowGroupOptions::GetNoEditFlowName() const
{
    return m_noEditFlowName;
}

void FlowGroupOptions::SetNoEditFlowName(const bool& _noEditFlowName)
{
    m_noEditFlowName = _noEditFlowName;
    m_noEditFlowNameHasBeenSet = true;
}

bool FlowGroupOptions::NoEditFlowNameHasBeenSet() const
{
    return m_noEditFlowNameHasBeenSet;
}

bool FlowGroupOptions::GetNoEditFlowType() const
{
    return m_noEditFlowType;
}

void FlowGroupOptions::SetNoEditFlowType(const bool& _noEditFlowType)
{
    m_noEditFlowType = _noEditFlowType;
    m_noEditFlowTypeHasBeenSet = true;
}

bool FlowGroupOptions::NoEditFlowTypeHasBeenSet() const
{
    return m_noEditFlowTypeHasBeenSet;
}

bool FlowGroupOptions::GetNoEditDeadline() const
{
    return m_noEditDeadline;
}

void FlowGroupOptions::SetNoEditDeadline(const bool& _noEditDeadline)
{
    m_noEditDeadline = _noEditDeadline;
    m_noEditDeadlineHasBeenSet = true;
}

bool FlowGroupOptions::NoEditDeadlineHasBeenSet() const
{
    return m_noEditDeadlineHasBeenSet;
}

SignComponentConfig FlowGroupOptions::GetSignComponentConfig() const
{
    return m_signComponentConfig;
}

void FlowGroupOptions::SetSignComponentConfig(const SignComponentConfig& _signComponentConfig)
{
    m_signComponentConfig = _signComponentConfig;
    m_signComponentConfigHasBeenSet = true;
}

bool FlowGroupOptions::SignComponentConfigHasBeenSet() const
{
    return m_signComponentConfigHasBeenSet;
}

bool FlowGroupOptions::GetForbidEditWatermark() const
{
    return m_forbidEditWatermark;
}

void FlowGroupOptions::SetForbidEditWatermark(const bool& _forbidEditWatermark)
{
    m_forbidEditWatermark = _forbidEditWatermark;
    m_forbidEditWatermarkHasBeenSet = true;
}

bool FlowGroupOptions::ForbidEditWatermarkHasBeenSet() const
{
    return m_forbidEditWatermarkHasBeenSet;
}

bool FlowGroupOptions::GetHideSignCodeAfterStart() const
{
    return m_hideSignCodeAfterStart;
}

void FlowGroupOptions::SetHideSignCodeAfterStart(const bool& _hideSignCodeAfterStart)
{
    m_hideSignCodeAfterStart = _hideSignCodeAfterStart;
    m_hideSignCodeAfterStartHasBeenSet = true;
}

bool FlowGroupOptions::HideSignCodeAfterStartHasBeenSet() const
{
    return m_hideSignCodeAfterStartHasBeenSet;
}

bool FlowGroupOptions::GetSignAfterStart() const
{
    return m_signAfterStart;
}

void FlowGroupOptions::SetSignAfterStart(const bool& _signAfterStart)
{
    m_signAfterStart = _signAfterStart;
    m_signAfterStartHasBeenSet = true;
}

bool FlowGroupOptions::SignAfterStartHasBeenSet() const
{
    return m_signAfterStartHasBeenSet;
}

bool FlowGroupOptions::GetPreviewAfterStart() const
{
    return m_previewAfterStart;
}

void FlowGroupOptions::SetPreviewAfterStart(const bool& _previewAfterStart)
{
    m_previewAfterStart = _previewAfterStart;
    m_previewAfterStartHasBeenSet = true;
}

bool FlowGroupOptions::PreviewAfterStartHasBeenSet() const
{
    return m_previewAfterStartHasBeenSet;
}

