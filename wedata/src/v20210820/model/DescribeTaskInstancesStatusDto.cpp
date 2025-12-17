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

#include <tencentcloud/wedata/v20210820/model/DescribeTaskInstancesStatusDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTaskInstancesStatusDto::DescribeTaskInstancesStatusDto() :
    m_instancesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskInstancesStatusDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Instances") && !value["Instances"].IsNull())
    {
        if (!value["Instances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeTaskInstancesStatusDto.Instances` is not array type"));

        const rapidjson::Value &tmpValue = value["Instances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamGetTaskInstancesStatusInfoResponseInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instances.push_back(item);
        }
        m_instancesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeTaskInstancesStatusDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instances.begin(); itr != m_instances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ParamGetTaskInstancesStatusInfoResponseInstance> DescribeTaskInstancesStatusDto::GetInstances() const
{
    return m_instances;
}

void DescribeTaskInstancesStatusDto::SetInstances(const vector<ParamGetTaskInstancesStatusInfoResponseInstance>& _instances)
{
    m_instances = _instances;
    m_instancesHasBeenSet = true;
}

bool DescribeTaskInstancesStatusDto::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}

