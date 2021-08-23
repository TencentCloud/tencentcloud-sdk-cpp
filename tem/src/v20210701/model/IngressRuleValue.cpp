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

#include <tencentcloud/tem/v20210701/model/IngressRuleValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

IngressRuleValue::IngressRuleValue() :
    m_pathsHasBeenSet(false)
{
}

CoreInternalOutcome IngressRuleValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Paths") && !value["Paths"].IsNull())
    {
        if (!value["Paths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IngressRuleValue.Paths` is not array type"));

        const rapidjson::Value &tmpValue = value["Paths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IngressRulePath item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paths.push_back(item);
        }
        m_pathsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IngressRuleValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paths.begin(); itr != m_paths.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<IngressRulePath> IngressRuleValue::GetPaths() const
{
    return m_paths;
}

void IngressRuleValue::SetPaths(const vector<IngressRulePath>& _paths)
{
    m_paths = _paths;
    m_pathsHasBeenSet = true;
}

bool IngressRuleValue::PathsHasBeenSet() const
{
    return m_pathsHasBeenSet;
}

