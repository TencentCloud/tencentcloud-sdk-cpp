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

#include <tencentcloud/batch/v20170312/model/ComputeEnvData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

ComputeEnvData::ComputeEnvData() :
    m_instanceTypesHasBeenSet(false)
{
}

CoreInternalOutcome ComputeEnvData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceTypes") && !value["InstanceTypes"].IsNull())
    {
        if (!value["InstanceTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComputeEnvData.InstanceTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceTypes.push_back((*itr).GetString());
        }
        m_instanceTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComputeEnvData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceTypes.begin(); itr != m_instanceTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ComputeEnvData::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void ComputeEnvData::SetInstanceTypes(const vector<string>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool ComputeEnvData::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

