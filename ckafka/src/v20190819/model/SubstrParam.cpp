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

#include <tencentcloud/ckafka/v20190819/model/SubstrParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

SubstrParam::SubstrParam() :
    m_startHasBeenSet(false),
    m_endHasBeenSet(false)
{
}

CoreInternalOutcome SubstrParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Start") && !value["Start"].IsNull())
    {
        if (!value["Start"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubstrParam.Start` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_start = value["Start"].GetInt64();
        m_startHasBeenSet = true;
    }

    if (value.HasMember("End") && !value["End"].IsNull())
    {
        if (!value["End"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubstrParam.End` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_end = value["End"].GetInt64();
        m_endHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubstrParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


int64_t SubstrParam::GetStart() const
{
    return m_start;
}

void SubstrParam::SetStart(const int64_t& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool SubstrParam::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

int64_t SubstrParam::GetEnd() const
{
    return m_end;
}

void SubstrParam::SetEnd(const int64_t& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool SubstrParam::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

