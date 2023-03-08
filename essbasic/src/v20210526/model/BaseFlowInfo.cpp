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
    m_flowTypeHasBeenSet(false),
    m_flowDescriptionHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_unorderedHasBeenSet(false),
    m_intelligentStatusHasBeenSet(false),
    m_formFieldsHasBeenSet(false),
    m_needSignReviewHasBeenSet(false)
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

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaseFlowInfo.Deadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = value["Deadline"].GetInt64();
        m_deadlineHasBeenSet = true;
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

