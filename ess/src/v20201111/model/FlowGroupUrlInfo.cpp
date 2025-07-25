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

#include <tencentcloud/ess/v20201111/model/FlowGroupUrlInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FlowGroupUrlInfo::FlowGroupUrlInfo() :
    m_flowGroupApproverInfosHasBeenSet(false)
{
}

CoreInternalOutcome FlowGroupUrlInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowGroupApproverInfos") && !value["FlowGroupApproverInfos"].IsNull())
    {
        if (!value["FlowGroupApproverInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowGroupUrlInfo.FlowGroupApproverInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowGroupApproverInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowGroupApproverInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowGroupApproverInfos.push_back(item);
        }
        m_flowGroupApproverInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowGroupUrlInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowGroupApproverInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupApproverInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowGroupApproverInfos.begin(); itr != m_flowGroupApproverInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<FlowGroupApproverInfo> FlowGroupUrlInfo::GetFlowGroupApproverInfos() const
{
    return m_flowGroupApproverInfos;
}

void FlowGroupUrlInfo::SetFlowGroupApproverInfos(const vector<FlowGroupApproverInfo>& _flowGroupApproverInfos)
{
    m_flowGroupApproverInfos = _flowGroupApproverInfos;
    m_flowGroupApproverInfosHasBeenSet = true;
}

bool FlowGroupUrlInfo::FlowGroupApproverInfosHasBeenSet() const
{
    return m_flowGroupApproverInfosHasBeenSet;
}

