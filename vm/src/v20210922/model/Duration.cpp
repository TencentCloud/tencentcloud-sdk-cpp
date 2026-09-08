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

#include <tencentcloud/vm/v20210922/model/Duration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20210922::Model;
using namespace std;

Duration::Duration() :
    m_startHasBeenSet(false),
    m_endHasBeenSet(false)
{
}

CoreInternalOutcome Duration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Start") && !value["Start"].IsNull())
    {
        if (!value["Start"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Duration.Start` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_start = value["Start"].GetDouble();
        m_startHasBeenSet = true;
    }

    if (value.HasMember("End") && !value["End"].IsNull())
    {
        if (!value["End"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Duration.End` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_end = value["End"].GetDouble();
        m_endHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Duration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_start, allocator);
    }

    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_end, allocator);
    }

}


double Duration::GetStart() const
{
    return m_start;
}

void Duration::SetStart(const double& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool Duration::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

double Duration::GetEnd() const
{
    return m_end;
}

void Duration::SetEnd(const double& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool Duration::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

