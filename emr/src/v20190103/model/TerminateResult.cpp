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

#include <tencentcloud/emr/v20190103/model/TerminateResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

TerminateResult::TerminateResult() :
    m_instanceIdHasBeenSet(false),
    m_resourceIdsHasBeenSet(false)
{
}

CoreInternalOutcome TerminateResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TerminateResult.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsArray())
            return CoreInternalOutcome(Error("response `TerminateResult.ResourceIds` is not array type"));

        const Value &tmpValue = value["ResourceIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceIds.push_back((*itr).GetString());
        }
        m_resourceIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TerminateResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TerminateResult::GetInstanceId() const
{
    return m_instanceId;
}

void TerminateResult::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TerminateResult::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> TerminateResult::GetResourceIds() const
{
    return m_resourceIds;
}

void TerminateResult::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool TerminateResult::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

