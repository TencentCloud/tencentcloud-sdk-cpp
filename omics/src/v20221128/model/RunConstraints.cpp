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

#include <tencentcloud/omics/v20221128/model/RunConstraints.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

RunConstraints::RunConstraints() :
    m_nextflowVersionHasBeenSet(false)
{
}

CoreInternalOutcome RunConstraints::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NextflowVersion") && !value["NextflowVersion"].IsNull())
    {
        if (!value["NextflowVersion"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RunConstraints.NextflowVersion` is not array type"));

        const rapidjson::Value &tmpValue = value["NextflowVersion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nextflowVersion.push_back((*itr).GetString());
        }
        m_nextflowVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunConstraints::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nextflowVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextflowVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nextflowVersion.begin(); itr != m_nextflowVersion.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> RunConstraints::GetNextflowVersion() const
{
    return m_nextflowVersion;
}

void RunConstraints::SetNextflowVersion(const vector<string>& _nextflowVersion)
{
    m_nextflowVersion = _nextflowVersion;
    m_nextflowVersionHasBeenSet = true;
}

bool RunConstraints::NextflowVersionHasBeenSet() const
{
    return m_nextflowVersionHasBeenSet;
}

