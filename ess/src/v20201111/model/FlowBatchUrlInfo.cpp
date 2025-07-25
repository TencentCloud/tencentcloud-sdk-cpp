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

#include <tencentcloud/ess/v20201111/model/FlowBatchUrlInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FlowBatchUrlInfo::FlowBatchUrlInfo() :
    m_flowBatchApproverInfosHasBeenSet(false)
{
}

CoreInternalOutcome FlowBatchUrlInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowBatchApproverInfos") && !value["FlowBatchApproverInfos"].IsNull())
    {
        if (!value["FlowBatchApproverInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowBatchUrlInfo.FlowBatchApproverInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowBatchApproverInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowBatchApproverInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowBatchApproverInfos.push_back(item);
        }
        m_flowBatchApproverInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowBatchUrlInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowBatchApproverInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowBatchApproverInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowBatchApproverInfos.begin(); itr != m_flowBatchApproverInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<FlowBatchApproverInfo> FlowBatchUrlInfo::GetFlowBatchApproverInfos() const
{
    return m_flowBatchApproverInfos;
}

void FlowBatchUrlInfo::SetFlowBatchApproverInfos(const vector<FlowBatchApproverInfo>& _flowBatchApproverInfos)
{
    m_flowBatchApproverInfos = _flowBatchApproverInfos;
    m_flowBatchApproverInfosHasBeenSet = true;
}

bool FlowBatchUrlInfo::FlowBatchApproverInfosHasBeenSet() const
{
    return m_flowBatchApproverInfosHasBeenSet;
}

