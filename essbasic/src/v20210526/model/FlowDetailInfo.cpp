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

#include <tencentcloud/essbasic/v20210526/model/FlowDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

FlowDetailInfo::FlowDetailInfo() :
    m_flowIdHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_flowTypeHasBeenSet(false),
    m_flowStatusHasBeenSet(false),
    m_flowMessageHasBeenSet(false),
    m_createOnHasBeenSet(false),
    m_deadLineHasBeenSet(false),
    m_customDataHasBeenSet(false),
    m_flowApproverInfosHasBeenSet(false),
    m_ccInfosHasBeenSet(false),
    m_needCreateReviewHasBeenSet(false)
{
}

CoreInternalOutcome FlowDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("FlowType") && !value["FlowType"].IsNull())
    {
        if (!value["FlowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.FlowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowType = string(value["FlowType"].GetString());
        m_flowTypeHasBeenSet = true;
    }

    if (value.HasMember("FlowStatus") && !value["FlowStatus"].IsNull())
    {
        if (!value["FlowStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.FlowStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowStatus = string(value["FlowStatus"].GetString());
        m_flowStatusHasBeenSet = true;
    }

    if (value.HasMember("FlowMessage") && !value["FlowMessage"].IsNull())
    {
        if (!value["FlowMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.FlowMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowMessage = string(value["FlowMessage"].GetString());
        m_flowMessageHasBeenSet = true;
    }

    if (value.HasMember("CreateOn") && !value["CreateOn"].IsNull())
    {
        if (!value["CreateOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.CreateOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createOn = value["CreateOn"].GetInt64();
        m_createOnHasBeenSet = true;
    }

    if (value.HasMember("DeadLine") && !value["DeadLine"].IsNull())
    {
        if (!value["DeadLine"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.DeadLine` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadLine = value["DeadLine"].GetInt64();
        m_deadLineHasBeenSet = true;
    }

    if (value.HasMember("CustomData") && !value["CustomData"].IsNull())
    {
        if (!value["CustomData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.CustomData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customData = string(value["CustomData"].GetString());
        m_customDataHasBeenSet = true;
    }

    if (value.HasMember("FlowApproverInfos") && !value["FlowApproverInfos"].IsNull())
    {
        if (!value["FlowApproverInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.FlowApproverInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowApproverInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowApproverDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowApproverInfos.push_back(item);
        }
        m_flowApproverInfosHasBeenSet = true;
    }

    if (value.HasMember("CcInfos") && !value["CcInfos"].IsNull())
    {
        if (!value["CcInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.CcInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["CcInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowApproverDetail item;
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
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.NeedCreateReview` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needCreateReview = value["NeedCreateReview"].GetBool();
        m_needCreateReviewHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_flowStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_flowMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_createOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createOn, allocator);
    }

    if (m_deadLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadLine, allocator);
    }

    if (m_customDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customData.c_str(), allocator).Move(), allocator);
    }

    if (m_flowApproverInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowApproverInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowApproverInfos.begin(); itr != m_flowApproverInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

}


string FlowDetailInfo::GetFlowId() const
{
    return m_flowId;
}

void FlowDetailInfo::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool FlowDetailInfo::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string FlowDetailInfo::GetFlowName() const
{
    return m_flowName;
}

void FlowDetailInfo::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool FlowDetailInfo::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

string FlowDetailInfo::GetFlowType() const
{
    return m_flowType;
}

void FlowDetailInfo::SetFlowType(const string& _flowType)
{
    m_flowType = _flowType;
    m_flowTypeHasBeenSet = true;
}

bool FlowDetailInfo::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

string FlowDetailInfo::GetFlowStatus() const
{
    return m_flowStatus;
}

void FlowDetailInfo::SetFlowStatus(const string& _flowStatus)
{
    m_flowStatus = _flowStatus;
    m_flowStatusHasBeenSet = true;
}

bool FlowDetailInfo::FlowStatusHasBeenSet() const
{
    return m_flowStatusHasBeenSet;
}

string FlowDetailInfo::GetFlowMessage() const
{
    return m_flowMessage;
}

void FlowDetailInfo::SetFlowMessage(const string& _flowMessage)
{
    m_flowMessage = _flowMessage;
    m_flowMessageHasBeenSet = true;
}

bool FlowDetailInfo::FlowMessageHasBeenSet() const
{
    return m_flowMessageHasBeenSet;
}

int64_t FlowDetailInfo::GetCreateOn() const
{
    return m_createOn;
}

void FlowDetailInfo::SetCreateOn(const int64_t& _createOn)
{
    m_createOn = _createOn;
    m_createOnHasBeenSet = true;
}

bool FlowDetailInfo::CreateOnHasBeenSet() const
{
    return m_createOnHasBeenSet;
}

int64_t FlowDetailInfo::GetDeadLine() const
{
    return m_deadLine;
}

void FlowDetailInfo::SetDeadLine(const int64_t& _deadLine)
{
    m_deadLine = _deadLine;
    m_deadLineHasBeenSet = true;
}

bool FlowDetailInfo::DeadLineHasBeenSet() const
{
    return m_deadLineHasBeenSet;
}

string FlowDetailInfo::GetCustomData() const
{
    return m_customData;
}

void FlowDetailInfo::SetCustomData(const string& _customData)
{
    m_customData = _customData;
    m_customDataHasBeenSet = true;
}

bool FlowDetailInfo::CustomDataHasBeenSet() const
{
    return m_customDataHasBeenSet;
}

vector<FlowApproverDetail> FlowDetailInfo::GetFlowApproverInfos() const
{
    return m_flowApproverInfos;
}

void FlowDetailInfo::SetFlowApproverInfos(const vector<FlowApproverDetail>& _flowApproverInfos)
{
    m_flowApproverInfos = _flowApproverInfos;
    m_flowApproverInfosHasBeenSet = true;
}

bool FlowDetailInfo::FlowApproverInfosHasBeenSet() const
{
    return m_flowApproverInfosHasBeenSet;
}

vector<FlowApproverDetail> FlowDetailInfo::GetCcInfos() const
{
    return m_ccInfos;
}

void FlowDetailInfo::SetCcInfos(const vector<FlowApproverDetail>& _ccInfos)
{
    m_ccInfos = _ccInfos;
    m_ccInfosHasBeenSet = true;
}

bool FlowDetailInfo::CcInfosHasBeenSet() const
{
    return m_ccInfosHasBeenSet;
}

bool FlowDetailInfo::GetNeedCreateReview() const
{
    return m_needCreateReview;
}

void FlowDetailInfo::SetNeedCreateReview(const bool& _needCreateReview)
{
    m_needCreateReview = _needCreateReview;
    m_needCreateReviewHasBeenSet = true;
}

bool FlowDetailInfo::NeedCreateReviewHasBeenSet() const
{
    return m_needCreateReviewHasBeenSet;
}

