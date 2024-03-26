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

#include <tencentcloud/ess/v20201111/model/FlowGroupApprovers.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FlowGroupApprovers::FlowGroupApprovers() :
    m_flowIdHasBeenSet(false),
    m_approversHasBeenSet(false)
{
}

CoreInternalOutcome FlowGroupApprovers::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupApprovers.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("Approvers") && !value["Approvers"].IsNull())
    {
        if (!value["Approvers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowGroupApprovers.Approvers` is not array type"));

        const rapidjson::Value &tmpValue = value["Approvers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApproverItem item;
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

void FlowGroupApprovers::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
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


string FlowGroupApprovers::GetFlowId() const
{
    return m_flowId;
}

void FlowGroupApprovers::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool FlowGroupApprovers::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

vector<ApproverItem> FlowGroupApprovers::GetApprovers() const
{
    return m_approvers;
}

void FlowGroupApprovers::SetApprovers(const vector<ApproverItem>& _approvers)
{
    m_approvers = _approvers;
    m_approversHasBeenSet = true;
}

bool FlowGroupApprovers::ApproversHasBeenSet() const
{
    return m_approversHasBeenSet;
}

