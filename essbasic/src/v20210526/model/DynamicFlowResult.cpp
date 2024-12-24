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

#include <tencentcloud/essbasic/v20210526/model/DynamicFlowResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

DynamicFlowResult::DynamicFlowResult() :
    m_flowIdHasBeenSet(false),
    m_dynamicFlowApproverListHasBeenSet(false)
{
}

CoreInternalOutcome DynamicFlowResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicFlowResult.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("DynamicFlowApproverList") && !value["DynamicFlowApproverList"].IsNull())
    {
        if (!value["DynamicFlowApproverList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicFlowResult.DynamicFlowApproverList` is not array type"));

        const rapidjson::Value &tmpValue = value["DynamicFlowApproverList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DynamicFlowApproverResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dynamicFlowApproverList.push_back(item);
        }
        m_dynamicFlowApproverListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DynamicFlowResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_dynamicFlowApproverListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicFlowApproverList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dynamicFlowApproverList.begin(); itr != m_dynamicFlowApproverList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DynamicFlowResult::GetFlowId() const
{
    return m_flowId;
}

void DynamicFlowResult::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool DynamicFlowResult::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

vector<DynamicFlowApproverResult> DynamicFlowResult::GetDynamicFlowApproverList() const
{
    return m_dynamicFlowApproverList;
}

void DynamicFlowResult::SetDynamicFlowApproverList(const vector<DynamicFlowApproverResult>& _dynamicFlowApproverList)
{
    m_dynamicFlowApproverList = _dynamicFlowApproverList;
    m_dynamicFlowApproverListHasBeenSet = true;
}

bool DynamicFlowResult::DynamicFlowApproverListHasBeenSet() const
{
    return m_dynamicFlowApproverListHasBeenSet;
}

