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

#include <tencentcloud/oceanus/v20190422/model/JobGraphEdge.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

JobGraphEdge::JobGraphEdge() :
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

CoreInternalOutcome JobGraphEdge::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobGraphEdge.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobGraphEdge.Target` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_target = value["Target"].GetInt64();
        m_targetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobGraphEdge::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_target, allocator);
    }

}


int64_t JobGraphEdge::GetSource() const
{
    return m_source;
}

void JobGraphEdge::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool JobGraphEdge::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t JobGraphEdge::GetTarget() const
{
    return m_target;
}

void JobGraphEdge::SetTarget(const int64_t& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool JobGraphEdge::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

