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

#include <tencentcloud/essbasic/v20210526/model/FlowResourceUrlInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

FlowResourceUrlInfo::FlowResourceUrlInfo() :
    m_flowIdHasBeenSet(false),
    m_resourceUrlInfosHasBeenSet(false)
{
}

CoreInternalOutcome FlowResourceUrlInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowResourceUrlInfo.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceUrlInfos") && !value["ResourceUrlInfos"].IsNull())
    {
        if (!value["ResourceUrlInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowResourceUrlInfo.ResourceUrlInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceUrlInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceUrlInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceUrlInfos.push_back(item);
        }
        m_resourceUrlInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowResourceUrlInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceUrlInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUrlInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceUrlInfos.begin(); itr != m_resourceUrlInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FlowResourceUrlInfo::GetFlowId() const
{
    return m_flowId;
}

void FlowResourceUrlInfo::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool FlowResourceUrlInfo::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

vector<ResourceUrlInfo> FlowResourceUrlInfo::GetResourceUrlInfos() const
{
    return m_resourceUrlInfos;
}

void FlowResourceUrlInfo::SetResourceUrlInfos(const vector<ResourceUrlInfo>& _resourceUrlInfos)
{
    m_resourceUrlInfos = _resourceUrlInfos;
    m_resourceUrlInfosHasBeenSet = true;
}

bool FlowResourceUrlInfo::ResourceUrlInfosHasBeenSet() const
{
    return m_resourceUrlInfosHasBeenSet;
}

