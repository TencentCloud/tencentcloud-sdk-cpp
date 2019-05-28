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

#include <tencentcloud/clb/v20180317/model/ClassicalLoadBalancerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

ClassicalLoadBalancerInfo::ClassicalLoadBalancerInfo() :
    m_instanceIdHasBeenSet(false),
    m_loadBalancerIdsHasBeenSet(false)
{
}

CoreInternalOutcome ClassicalLoadBalancerInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClassicalLoadBalancerInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerIds") && !value["LoadBalancerIds"].IsNull())
    {
        if (!value["LoadBalancerIds"].IsArray())
            return CoreInternalOutcome(Error("response `ClassicalLoadBalancerInfo.LoadBalancerIds` is not array type"));

        const Value &tmpValue = value["LoadBalancerIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_loadBalancerIds.push_back((*itr).GetString());
        }
        m_loadBalancerIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClassicalLoadBalancerInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerIds.begin(); itr != m_loadBalancerIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ClassicalLoadBalancerInfo::GetInstanceId() const
{
    return m_instanceId;
}

void ClassicalLoadBalancerInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ClassicalLoadBalancerInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> ClassicalLoadBalancerInfo::GetLoadBalancerIds() const
{
    return m_loadBalancerIds;
}

void ClassicalLoadBalancerInfo::SetLoadBalancerIds(const vector<string>& _loadBalancerIds)
{
    m_loadBalancerIds = _loadBalancerIds;
    m_loadBalancerIdsHasBeenSet = true;
}

bool ClassicalLoadBalancerInfo::LoadBalancerIdsHasBeenSet() const
{
    return m_loadBalancerIdsHasBeenSet;
}

