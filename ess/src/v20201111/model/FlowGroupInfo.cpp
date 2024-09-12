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

#include <tencentcloud/ess/v20201111/model/FlowGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FlowGroupInfo::FlowGroupInfo() :
    m_flowNameHasBeenSet(false),
    m_approversHasBeenSet(false),
    m_fileIdsHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_flowTypeHasBeenSet(false),
    m_flowDescriptionHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_unorderedHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_needSignReviewHasBeenSet(false),
    m_autoSignSceneHasBeenSet(false),
    m_flowDisplayTypeHasBeenSet(false)
{
}

CoreInternalOutcome FlowGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupInfo.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("Approvers") && !value["Approvers"].IsNull())
    {
        if (!value["Approvers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowGroupInfo.Approvers` is not array type"));

        const rapidjson::Value &tmpValue = value["Approvers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApproverInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_approvers.push_back(item);
        }
        m_approversHasBeenSet = true;
    }

    if (value.HasMember("FileIds") && !value["FileIds"].IsNull())
    {
        if (!value["FileIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowGroupInfo.FileIds` is not array type"));

        const rapidjson::Value &tmpValue = value["FileIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileIds.push_back((*itr).GetString());
        }
        m_fileIdsHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("FlowType") && !value["FlowType"].IsNull())
    {
        if (!value["FlowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupInfo.FlowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowType = string(value["FlowType"].GetString());
        m_flowTypeHasBeenSet = true;
    }

    if (value.HasMember("FlowDescription") && !value["FlowDescription"].IsNull())
    {
        if (!value["FlowDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupInfo.FlowDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowDescription = string(value["FlowDescription"].GetString());
        m_flowDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupInfo.Deadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = value["Deadline"].GetInt64();
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupInfo.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("UserData") && !value["UserData"].IsNull())
    {
        if (!value["UserData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupInfo.UserData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userData = string(value["UserData"].GetString());
        m_userDataHasBeenSet = true;
    }

    if (value.HasMember("Unordered") && !value["Unordered"].IsNull())
    {
        if (!value["Unordered"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupInfo.Unordered` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_unordered = value["Unordered"].GetBool();
        m_unorderedHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowGroupInfo.Components` is not array type"));

        const rapidjson::Value &tmpValue = value["Components"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Component item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_components.push_back(item);
        }
        m_componentsHasBeenSet = true;
    }

    if (value.HasMember("NeedSignReview") && !value["NeedSignReview"].IsNull())
    {
        if (!value["NeedSignReview"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupInfo.NeedSignReview` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needSignReview = value["NeedSignReview"].GetBool();
        m_needSignReviewHasBeenSet = true;
    }

    if (value.HasMember("AutoSignScene") && !value["AutoSignScene"].IsNull())
    {
        if (!value["AutoSignScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupInfo.AutoSignScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoSignScene = string(value["AutoSignScene"].GetString());
        m_autoSignSceneHasBeenSet = true;
    }

    if (value.HasMember("FlowDisplayType") && !value["FlowDisplayType"].IsNull())
    {
        if (!value["FlowDisplayType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupInfo.FlowDisplayType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowDisplayType = value["FlowDisplayType"].GetInt64();
        m_flowDisplayTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_approversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Approvers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_approvers.begin(); itr != m_approvers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fileIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileIds.begin(); itr != m_fileIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowType.c_str(), allocator).Move(), allocator);
    }

    if (m_flowDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadline, allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_unorderedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unordered";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unordered, allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_needSignReviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSignReview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needSignReview, allocator);
    }

    if (m_autoSignSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSignScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoSignScene.c_str(), allocator).Move(), allocator);
    }

    if (m_flowDisplayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDisplayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowDisplayType, allocator);
    }

}


string FlowGroupInfo::GetFlowName() const
{
    return m_flowName;
}

void FlowGroupInfo::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool FlowGroupInfo::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

vector<ApproverInfo> FlowGroupInfo::GetApprovers() const
{
    return m_approvers;
}

void FlowGroupInfo::SetApprovers(const vector<ApproverInfo>& _approvers)
{
    m_approvers = _approvers;
    m_approversHasBeenSet = true;
}

bool FlowGroupInfo::ApproversHasBeenSet() const
{
    return m_approversHasBeenSet;
}

vector<string> FlowGroupInfo::GetFileIds() const
{
    return m_fileIds;
}

void FlowGroupInfo::SetFileIds(const vector<string>& _fileIds)
{
    m_fileIds = _fileIds;
    m_fileIdsHasBeenSet = true;
}

bool FlowGroupInfo::FileIdsHasBeenSet() const
{
    return m_fileIdsHasBeenSet;
}

string FlowGroupInfo::GetTemplateId() const
{
    return m_templateId;
}

void FlowGroupInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool FlowGroupInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string FlowGroupInfo::GetFlowType() const
{
    return m_flowType;
}

void FlowGroupInfo::SetFlowType(const string& _flowType)
{
    m_flowType = _flowType;
    m_flowTypeHasBeenSet = true;
}

bool FlowGroupInfo::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

string FlowGroupInfo::GetFlowDescription() const
{
    return m_flowDescription;
}

void FlowGroupInfo::SetFlowDescription(const string& _flowDescription)
{
    m_flowDescription = _flowDescription;
    m_flowDescriptionHasBeenSet = true;
}

bool FlowGroupInfo::FlowDescriptionHasBeenSet() const
{
    return m_flowDescriptionHasBeenSet;
}

int64_t FlowGroupInfo::GetDeadline() const
{
    return m_deadline;
}

void FlowGroupInfo::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool FlowGroupInfo::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string FlowGroupInfo::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void FlowGroupInfo::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool FlowGroupInfo::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string FlowGroupInfo::GetUserData() const
{
    return m_userData;
}

void FlowGroupInfo::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool FlowGroupInfo::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

bool FlowGroupInfo::GetUnordered() const
{
    return m_unordered;
}

void FlowGroupInfo::SetUnordered(const bool& _unordered)
{
    m_unordered = _unordered;
    m_unorderedHasBeenSet = true;
}

bool FlowGroupInfo::UnorderedHasBeenSet() const
{
    return m_unorderedHasBeenSet;
}

vector<Component> FlowGroupInfo::GetComponents() const
{
    return m_components;
}

void FlowGroupInfo::SetComponents(const vector<Component>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool FlowGroupInfo::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

bool FlowGroupInfo::GetNeedSignReview() const
{
    return m_needSignReview;
}

void FlowGroupInfo::SetNeedSignReview(const bool& _needSignReview)
{
    m_needSignReview = _needSignReview;
    m_needSignReviewHasBeenSet = true;
}

bool FlowGroupInfo::NeedSignReviewHasBeenSet() const
{
    return m_needSignReviewHasBeenSet;
}

string FlowGroupInfo::GetAutoSignScene() const
{
    return m_autoSignScene;
}

void FlowGroupInfo::SetAutoSignScene(const string& _autoSignScene)
{
    m_autoSignScene = _autoSignScene;
    m_autoSignSceneHasBeenSet = true;
}

bool FlowGroupInfo::AutoSignSceneHasBeenSet() const
{
    return m_autoSignSceneHasBeenSet;
}

int64_t FlowGroupInfo::GetFlowDisplayType() const
{
    return m_flowDisplayType;
}

void FlowGroupInfo::SetFlowDisplayType(const int64_t& _flowDisplayType)
{
    m_flowDisplayType = _flowDisplayType;
    m_flowDisplayTypeHasBeenSet = true;
}

bool FlowGroupInfo::FlowDisplayTypeHasBeenSet() const
{
    return m_flowDisplayTypeHasBeenSet;
}

