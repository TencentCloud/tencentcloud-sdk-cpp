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

#include <tencentcloud/essbasic/v20210526/model/DynamicFlowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

DynamicFlowInfo::DynamicFlowInfo() :
    m_flowIdHasBeenSet(false),
    m_flowApproversHasBeenSet(false),
    m_autoSignSceneHasBeenSet(false),
    m_approverVerifyTypeHasBeenSet(false)
{
}

CoreInternalOutcome DynamicFlowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicFlowInfo.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("FlowApprovers") && !value["FlowApprovers"].IsNull())
    {
        if (!value["FlowApprovers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicFlowInfo.FlowApprovers` is not array type"));

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

    if (value.HasMember("AutoSignScene") && !value["AutoSignScene"].IsNull())
    {
        if (!value["AutoSignScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicFlowInfo.AutoSignScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoSignScene = string(value["AutoSignScene"].GetString());
        m_autoSignSceneHasBeenSet = true;
    }

    if (value.HasMember("ApproverVerifyType") && !value["ApproverVerifyType"].IsNull())
    {
        if (!value["ApproverVerifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicFlowInfo.ApproverVerifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverVerifyType = string(value["ApproverVerifyType"].GetString());
        m_approverVerifyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DynamicFlowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
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

    if (m_autoSignSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSignScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoSignScene.c_str(), allocator).Move(), allocator);
    }

    if (m_approverVerifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverVerifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverVerifyType.c_str(), allocator).Move(), allocator);
    }

}


string DynamicFlowInfo::GetFlowId() const
{
    return m_flowId;
}

void DynamicFlowInfo::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool DynamicFlowInfo::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

vector<FlowApproverInfo> DynamicFlowInfo::GetFlowApprovers() const
{
    return m_flowApprovers;
}

void DynamicFlowInfo::SetFlowApprovers(const vector<FlowApproverInfo>& _flowApprovers)
{
    m_flowApprovers = _flowApprovers;
    m_flowApproversHasBeenSet = true;
}

bool DynamicFlowInfo::FlowApproversHasBeenSet() const
{
    return m_flowApproversHasBeenSet;
}

string DynamicFlowInfo::GetAutoSignScene() const
{
    return m_autoSignScene;
}

void DynamicFlowInfo::SetAutoSignScene(const string& _autoSignScene)
{
    m_autoSignScene = _autoSignScene;
    m_autoSignSceneHasBeenSet = true;
}

bool DynamicFlowInfo::AutoSignSceneHasBeenSet() const
{
    return m_autoSignSceneHasBeenSet;
}

string DynamicFlowInfo::GetApproverVerifyType() const
{
    return m_approverVerifyType;
}

void DynamicFlowInfo::SetApproverVerifyType(const string& _approverVerifyType)
{
    m_approverVerifyType = _approverVerifyType;
    m_approverVerifyTypeHasBeenSet = true;
}

bool DynamicFlowInfo::ApproverVerifyTypeHasBeenSet() const
{
    return m_approverVerifyTypeHasBeenSet;
}

