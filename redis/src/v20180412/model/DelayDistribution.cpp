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

#include <tencentcloud/redis/v20180412/model/DelayDistribution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DelayDistribution::DelayDistribution() :
    m_ladderHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_updatetimeHasBeenSet(false)
{
}

CoreInternalOutcome DelayDistribution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ladder") && !value["Ladder"].IsNull())
    {
        if (!value["Ladder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DelayDistribution.Ladder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ladder = value["Ladder"].GetInt64();
        m_ladderHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DelayDistribution.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Updatetime") && !value["Updatetime"].IsNull())
    {
        if (!value["Updatetime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DelayDistribution.Updatetime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatetime = value["Updatetime"].GetInt64();
        m_updatetimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DelayDistribution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ladderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ladder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ladder, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_updatetimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Updatetime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatetime, allocator);
    }

}


int64_t DelayDistribution::GetLadder() const
{
    return m_ladder;
}

void DelayDistribution::SetLadder(const int64_t& _ladder)
{
    m_ladder = _ladder;
    m_ladderHasBeenSet = true;
}

bool DelayDistribution::LadderHasBeenSet() const
{
    return m_ladderHasBeenSet;
}

int64_t DelayDistribution::GetSize() const
{
    return m_size;
}

void DelayDistribution::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool DelayDistribution::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t DelayDistribution::GetUpdatetime() const
{
    return m_updatetime;
}

void DelayDistribution::SetUpdatetime(const int64_t& _updatetime)
{
    m_updatetime = _updatetime;
    m_updatetimeHasBeenSet = true;
}

bool DelayDistribution::UpdatetimeHasBeenSet() const
{
    return m_updatetimeHasBeenSet;
}

