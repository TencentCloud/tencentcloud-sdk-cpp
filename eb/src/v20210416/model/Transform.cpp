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

#include <tencentcloud/eb/v20210416/model/Transform.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

Transform::Transform() :
    m_outputStructsHasBeenSet(false)
{
}

CoreInternalOutcome Transform::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputStructs") && !value["OutputStructs"].IsNull())
    {
        if (!value["OutputStructs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Transform.OutputStructs` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputStructs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OutputStructParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputStructs.push_back(item);
        }
        m_outputStructsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Transform::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputStructsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStructs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputStructs.begin(); itr != m_outputStructs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<OutputStructParam> Transform::GetOutputStructs() const
{
    return m_outputStructs;
}

void Transform::SetOutputStructs(const vector<OutputStructParam>& _outputStructs)
{
    m_outputStructs = _outputStructs;
    m_outputStructsHasBeenSet = true;
}

bool Transform::OutputStructsHasBeenSet() const
{
    return m_outputStructsHasBeenSet;
}

