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

#include <tencentcloud/essbasic/v20210526/model/FlowFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

FlowFileInfo::FlowFileInfo() :
    m_fileIdsHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_flowApproversHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_flowDescriptionHasBeenSet(false),
    m_flowTypeHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_customerDataHasBeenSet(false),
    m_unorderedHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_customShowMapHasBeenSet(false),
    m_needSignReviewHasBeenSet(false),
    m_flowDisplayTypeHasBeenSet(false)
{
}

CoreInternalOutcome FlowFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileIds") && !value["FileIds"].IsNull())
    {
        if (!value["FileIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowFileInfo.FileIds` is not array type"));

        const rapidjson::Value &tmpValue = value["FileIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileIds.push_back((*itr).GetString());
        }
        m_fileIdsHasBeenSet = true;
    }

    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowFileInfo.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("FlowApprovers") && !value["FlowApprovers"].IsNull())
    {
        if (!value["FlowApprovers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowFileInfo.FlowApprovers` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowApprovers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowApproverInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowApprovers.push_back(item);
        }
        m_flowApproversHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowFileInfo.Deadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = value["Deadline"].GetInt64();
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("FlowDescription") && !value["FlowDescription"].IsNull())
    {
        if (!value["FlowDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowFileInfo.FlowDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowDescription = string(value["FlowDescription"].GetString());
        m_flowDescriptionHasBeenSet = true;
    }

    if (value.HasMember("FlowType") && !value["FlowType"].IsNull())
    {
        if (!value["FlowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowFileInfo.FlowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowType = string(value["FlowType"].GetString());
        m_flowTypeHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowFileInfo.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("CustomerData") && !value["CustomerData"].IsNull())
    {
        if (!value["CustomerData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowFileInfo.CustomerData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerData = string(value["CustomerData"].GetString());
        m_customerDataHasBeenSet = true;
    }

    if (value.HasMember("Unordered") && !value["Unordered"].IsNull())
    {
        if (!value["Unordered"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowFileInfo.Unordered` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_unordered = value["Unordered"].GetBool();
        m_unorderedHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowFileInfo.Components` is not array type"));

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

    if (value.HasMember("CustomShowMap") && !value["CustomShowMap"].IsNull())
    {
        if (!value["CustomShowMap"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowFileInfo.CustomShowMap` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customShowMap = string(value["CustomShowMap"].GetString());
        m_customShowMapHasBeenSet = true;
    }

    if (value.HasMember("NeedSignReview") && !value["NeedSignReview"].IsNull())
    {
        if (!value["NeedSignReview"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowFileInfo.NeedSignReview` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needSignReview = value["NeedSignReview"].GetBool();
        m_needSignReviewHasBeenSet = true;
    }

    if (value.HasMember("FlowDisplayType") && !value["FlowDisplayType"].IsNull())
    {
        if (!value["FlowDisplayType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowFileInfo.FlowDisplayType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowDisplayType = value["FlowDisplayType"].GetInt64();
        m_flowDisplayTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowApproversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowApprovers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowApprovers.begin(); itr != m_flowApprovers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadline, allocator);
    }

    if (m_flowDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_flowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowType.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_customerDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerData.c_str(), allocator).Move(), allocator);
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

    if (m_customShowMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomShowMap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customShowMap.c_str(), allocator).Move(), allocator);
    }

    if (m_needSignReviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSignReview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needSignReview, allocator);
    }

    if (m_flowDisplayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDisplayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowDisplayType, allocator);
    }

}


vector<string> FlowFileInfo::GetFileIds() const
{
    return m_fileIds;
}

void FlowFileInfo::SetFileIds(const vector<string>& _fileIds)
{
    m_fileIds = _fileIds;
    m_fileIdsHasBeenSet = true;
}

bool FlowFileInfo::FileIdsHasBeenSet() const
{
    return m_fileIdsHasBeenSet;
}

string FlowFileInfo::GetFlowName() const
{
    return m_flowName;
}

void FlowFileInfo::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool FlowFileInfo::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

vector<FlowApproverInfo> FlowFileInfo::GetFlowApprovers() const
{
    return m_flowApprovers;
}

void FlowFileInfo::SetFlowApprovers(const vector<FlowApproverInfo>& _flowApprovers)
{
    m_flowApprovers = _flowApprovers;
    m_flowApproversHasBeenSet = true;
}

bool FlowFileInfo::FlowApproversHasBeenSet() const
{
    return m_flowApproversHasBeenSet;
}

int64_t FlowFileInfo::GetDeadline() const
{
    return m_deadline;
}

void FlowFileInfo::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool FlowFileInfo::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string FlowFileInfo::GetFlowDescription() const
{
    return m_flowDescription;
}

void FlowFileInfo::SetFlowDescription(const string& _flowDescription)
{
    m_flowDescription = _flowDescription;
    m_flowDescriptionHasBeenSet = true;
}

bool FlowFileInfo::FlowDescriptionHasBeenSet() const
{
    return m_flowDescriptionHasBeenSet;
}

string FlowFileInfo::GetFlowType() const
{
    return m_flowType;
}

void FlowFileInfo::SetFlowType(const string& _flowType)
{
    m_flowType = _flowType;
    m_flowTypeHasBeenSet = true;
}

bool FlowFileInfo::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

string FlowFileInfo::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void FlowFileInfo::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool FlowFileInfo::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string FlowFileInfo::GetCustomerData() const
{
    return m_customerData;
}

void FlowFileInfo::SetCustomerData(const string& _customerData)
{
    m_customerData = _customerData;
    m_customerDataHasBeenSet = true;
}

bool FlowFileInfo::CustomerDataHasBeenSet() const
{
    return m_customerDataHasBeenSet;
}

bool FlowFileInfo::GetUnordered() const
{
    return m_unordered;
}

void FlowFileInfo::SetUnordered(const bool& _unordered)
{
    m_unordered = _unordered;
    m_unorderedHasBeenSet = true;
}

bool FlowFileInfo::UnorderedHasBeenSet() const
{
    return m_unorderedHasBeenSet;
}

vector<Component> FlowFileInfo::GetComponents() const
{
    return m_components;
}

void FlowFileInfo::SetComponents(const vector<Component>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool FlowFileInfo::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

string FlowFileInfo::GetCustomShowMap() const
{
    return m_customShowMap;
}

void FlowFileInfo::SetCustomShowMap(const string& _customShowMap)
{
    m_customShowMap = _customShowMap;
    m_customShowMapHasBeenSet = true;
}

bool FlowFileInfo::CustomShowMapHasBeenSet() const
{
    return m_customShowMapHasBeenSet;
}

bool FlowFileInfo::GetNeedSignReview() const
{
    return m_needSignReview;
}

void FlowFileInfo::SetNeedSignReview(const bool& _needSignReview)
{
    m_needSignReview = _needSignReview;
    m_needSignReviewHasBeenSet = true;
}

bool FlowFileInfo::NeedSignReviewHasBeenSet() const
{
    return m_needSignReviewHasBeenSet;
}

int64_t FlowFileInfo::GetFlowDisplayType() const
{
    return m_flowDisplayType;
}

void FlowFileInfo::SetFlowDisplayType(const int64_t& _flowDisplayType)
{
    m_flowDisplayType = _flowDisplayType;
    m_flowDisplayTypeHasBeenSet = true;
}

bool FlowFileInfo::FlowDisplayTypeHasBeenSet() const
{
    return m_flowDisplayTypeHasBeenSet;
}

