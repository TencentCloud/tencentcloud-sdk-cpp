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

#include <tencentcloud/essbasic/v20210526/model/BaseFlowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

BaseFlowInfo::BaseFlowInfo() :
    m_flowNameHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_flowTypeHasBeenSet(false),
    m_flowDescriptionHasBeenSet(false),
    m_unorderedHasBeenSet(false),
    m_intelligentStatusHasBeenSet(false),
    m_formFieldsHasBeenSet(false),
    m_needSignReviewHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_ccInfosHasBeenSet(false),
    m_needCreateReviewHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_flowDisplayTypeHasBeenSet(false),
    m_fileIdsHasBeenSet(false),
    m_approversHasBeenSet(false)
{
}

CoreInternalOutcome BaseFlowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.Deadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = value["Deadline"].GetInt64();
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("FlowType") && !value["FlowType"].IsNull())
    {
        if (!value["FlowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.FlowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowType = string(value["FlowType"].GetString());
        m_flowTypeHasBeenSet = true;
    }

    if (value.HasMember("FlowDescription") && !value["FlowDescription"].IsNull())
    {
        if (!value["FlowDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.FlowDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowDescription = string(value["FlowDescription"].GetString());
        m_flowDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Unordered") && !value["Unordered"].IsNull())
    {
        if (!value["Unordered"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.Unordered` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_unordered = value["Unordered"].GetBool();
        m_unorderedHasBeenSet = true;
    }

    if (value.HasMember("IntelligentStatus") && !value["IntelligentStatus"].IsNull())
    {
        if (!value["IntelligentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.IntelligentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intelligentStatus = string(value["IntelligentStatus"].GetString());
        m_intelligentStatusHasBeenSet = true;
    }

    if (value.HasMember("FormFields") && !value["FormFields"].IsNull())
    {
        if (!value["FormFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.FormFields` is not array type"));

        const rapidjson::Value &tmpValue = value["FormFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FormField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_formFields.push_back(item);
        }
        m_formFieldsHasBeenSet = true;
    }

    if (value.HasMember("NeedSignReview") && !value["NeedSignReview"].IsNull())
    {
        if (!value["NeedSignReview"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.NeedSignReview` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needSignReview = value["NeedSignReview"].GetBool();
        m_needSignReviewHasBeenSet = true;
    }

    if (value.HasMember("UserData") && !value["UserData"].IsNull())
    {
        if (!value["UserData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.UserData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userData = string(value["UserData"].GetString());
        m_userDataHasBeenSet = true;
    }

    if (value.HasMember("CcInfos") && !value["CcInfos"].IsNull())
    {
        if (!value["CcInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.CcInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["CcInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ccInfos.push_back(item);
        }
        m_ccInfosHasBeenSet = true;
    }

    if (value.HasMember("NeedCreateReview") && !value["NeedCreateReview"].IsNull())
    {
        if (!value["NeedCreateReview"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.NeedCreateReview` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needCreateReview = value["NeedCreateReview"].GetBool();
        m_needCreateReviewHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.Components` is not array type"));

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

    if (value.HasMember("FlowDisplayType") && !value["FlowDisplayType"].IsNull())
    {
        if (!value["FlowDisplayType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.FlowDisplayType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowDisplayType = value["FlowDisplayType"].GetInt64();
        m_flowDisplayTypeHasBeenSet = true;
    }

    if (value.HasMember("FileIds") && !value["FileIds"].IsNull())
    {
        if (!value["FileIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.FileIds` is not array type"));

        const rapidjson::Value &tmpValue = value["FileIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileIds.push_back((*itr).GetString());
        }
        m_fileIdsHasBeenSet = true;
    }

    if (value.HasMember("Approvers") && !value["Approvers"].IsNull())
    {
        if (!value["Approvers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.Approvers` is not array type"));

        const rapidjson::Value &tmpValue = value["Approvers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonFlowApprover item;
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


    return CoreInternalOutcome(true);
}

void BaseFlowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadline, allocator);
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

    if (m_unorderedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unordered";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unordered, allocator);
    }

    if (m_intelligentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntelligentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intelligentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_formFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_formFields.begin(); itr != m_formFields.end(); ++itr, ++i)
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

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_ccInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ccInfos.begin(); itr != m_ccInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_needCreateReviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedCreateReview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needCreateReview, allocator);
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

    if (m_flowDisplayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDisplayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowDisplayType, allocator);
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

}


string BaseFlowInfo::GetFlowName() const
{
    return m_flowName;
}

void BaseFlowInfo::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool BaseFlowInfo::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

int64_t BaseFlowInfo::GetDeadline() const
{
    return m_deadline;
}

void BaseFlowInfo::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool BaseFlowInfo::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string BaseFlowInfo::GetFlowType() const
{
    return m_flowType;
}

void BaseFlowInfo::SetFlowType(const string& _flowType)
{
    m_flowType = _flowType;
    m_flowTypeHasBeenSet = true;
}

bool BaseFlowInfo::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

string BaseFlowInfo::GetFlowDescription() const
{
    return m_flowDescription;
}

void BaseFlowInfo::SetFlowDescription(const string& _flowDescription)
{
    m_flowDescription = _flowDescription;
    m_flowDescriptionHasBeenSet = true;
}

bool BaseFlowInfo::FlowDescriptionHasBeenSet() const
{
    return m_flowDescriptionHasBeenSet;
}

bool BaseFlowInfo::GetUnordered() const
{
    return m_unordered;
}

void BaseFlowInfo::SetUnordered(const bool& _unordered)
{
    m_unordered = _unordered;
    m_unorderedHasBeenSet = true;
}

bool BaseFlowInfo::UnorderedHasBeenSet() const
{
    return m_unorderedHasBeenSet;
}

string BaseFlowInfo::GetIntelligentStatus() const
{
    return m_intelligentStatus;
}

void BaseFlowInfo::SetIntelligentStatus(const string& _intelligentStatus)
{
    m_intelligentStatus = _intelligentStatus;
    m_intelligentStatusHasBeenSet = true;
}

bool BaseFlowInfo::IntelligentStatusHasBeenSet() const
{
    return m_intelligentStatusHasBeenSet;
}

vector<FormField> BaseFlowInfo::GetFormFields() const
{
    return m_formFields;
}

void BaseFlowInfo::SetFormFields(const vector<FormField>& _formFields)
{
    m_formFields = _formFields;
    m_formFieldsHasBeenSet = true;
}

bool BaseFlowInfo::FormFieldsHasBeenSet() const
{
    return m_formFieldsHasBeenSet;
}

bool BaseFlowInfo::GetNeedSignReview() const
{
    return m_needSignReview;
}

void BaseFlowInfo::SetNeedSignReview(const bool& _needSignReview)
{
    m_needSignReview = _needSignReview;
    m_needSignReviewHasBeenSet = true;
}

bool BaseFlowInfo::NeedSignReviewHasBeenSet() const
{
    return m_needSignReviewHasBeenSet;
}

string BaseFlowInfo::GetUserData() const
{
    return m_userData;
}

void BaseFlowInfo::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool BaseFlowInfo::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

vector<CcInfo> BaseFlowInfo::GetCcInfos() const
{
    return m_ccInfos;
}

void BaseFlowInfo::SetCcInfos(const vector<CcInfo>& _ccInfos)
{
    m_ccInfos = _ccInfos;
    m_ccInfosHasBeenSet = true;
}

bool BaseFlowInfo::CcInfosHasBeenSet() const
{
    return m_ccInfosHasBeenSet;
}

bool BaseFlowInfo::GetNeedCreateReview() const
{
    return m_needCreateReview;
}

void BaseFlowInfo::SetNeedCreateReview(const bool& _needCreateReview)
{
    m_needCreateReview = _needCreateReview;
    m_needCreateReviewHasBeenSet = true;
}

bool BaseFlowInfo::NeedCreateReviewHasBeenSet() const
{
    return m_needCreateReviewHasBeenSet;
}

vector<Component> BaseFlowInfo::GetComponents() const
{
    return m_components;
}

void BaseFlowInfo::SetComponents(const vector<Component>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool BaseFlowInfo::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

int64_t BaseFlowInfo::GetFlowDisplayType() const
{
    return m_flowDisplayType;
}

void BaseFlowInfo::SetFlowDisplayType(const int64_t& _flowDisplayType)
{
    m_flowDisplayType = _flowDisplayType;
    m_flowDisplayTypeHasBeenSet = true;
}

bool BaseFlowInfo::FlowDisplayTypeHasBeenSet() const
{
    return m_flowDisplayTypeHasBeenSet;
}

vector<string> BaseFlowInfo::GetFileIds() const
{
    return m_fileIds;
}

void BaseFlowInfo::SetFileIds(const vector<string>& _fileIds)
{
    m_fileIds = _fileIds;
    m_fileIdsHasBeenSet = true;
}

bool BaseFlowInfo::FileIdsHasBeenSet() const
{
    return m_fileIdsHasBeenSet;
}

vector<CommonFlowApprover> BaseFlowInfo::GetApprovers() const
{
    return m_approvers;
}

void BaseFlowInfo::SetApprovers(const vector<CommonFlowApprover>& _approvers)
{
    m_approvers = _approvers;
    m_approversHasBeenSet = true;
}

bool BaseFlowInfo::ApproversHasBeenSet() const
{
    return m_approversHasBeenSet;
}

