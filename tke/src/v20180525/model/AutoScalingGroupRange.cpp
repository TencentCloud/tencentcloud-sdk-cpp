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

#include <tencentcloud/tke/v20180525/model/AutoScalingGroupRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

AutoScalingGroupRange::AutoScalingGroupRange() :
    m_minSizeHasBeenSet(false),
    m_maxSizeHasBeenSet(false)
{
}

CoreInternalOutcome AutoScalingGroupRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinSize") && !value["MinSize"].IsNull())
    {
        if (!value["MinSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalingGroupRange.MinSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minSize = value["MinSize"].GetInt64();
        m_minSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxSize") && !value["MaxSize"].IsNull())
    {
        if (!value["MaxSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalingGroupRange.MaxSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSize = value["MaxSize"].GetInt64();
        m_maxSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScalingGroupRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minSize, allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSize, allocator);
    }

}


int64_t AutoScalingGroupRange::GetMinSize() const
{
    return m_minSize;
}

void AutoScalingGroupRange::SetMinSize(const int64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool AutoScalingGroupRange::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

int64_t AutoScalingGroupRange::GetMaxSize() const
{
    return m_maxSize;
}

void AutoScalingGroupRange::SetMaxSize(const int64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool AutoScalingGroupRange::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

