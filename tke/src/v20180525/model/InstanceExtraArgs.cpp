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

#include <tencentcloud/tke/v20180525/model/InstanceExtraArgs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

InstanceExtraArgs::InstanceExtraArgs() :
    m_kubeletHasBeenSet(false)
{
}

CoreInternalOutcome InstanceExtraArgs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Kubelet") && !value["Kubelet"].IsNull())
    {
        if (!value["Kubelet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceExtraArgs.Kubelet` is not array type"));

        const rapidjson::Value &tmpValue = value["Kubelet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_kubelet.push_back((*itr).GetString());
        }
        m_kubeletHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceExtraArgs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kubeletHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kubelet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kubelet.begin(); itr != m_kubelet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> InstanceExtraArgs::GetKubelet() const
{
    return m_kubelet;
}

void InstanceExtraArgs::SetKubelet(const vector<string>& _kubelet)
{
    m_kubelet = _kubelet;
    m_kubeletHasBeenSet = true;
}

bool InstanceExtraArgs::KubeletHasBeenSet() const
{
    return m_kubeletHasBeenSet;
}

