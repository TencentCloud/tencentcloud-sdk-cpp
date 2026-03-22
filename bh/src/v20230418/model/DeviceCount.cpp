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

#include <tencentcloud/bh/v20230418/model/DeviceCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

DeviceCount::DeviceCount() :
    m_kindHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome DeviceCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCount.Kind` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_kind = value["Kind"].GetInt64();
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCount.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kind, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


int64_t DeviceCount::GetKind() const
{
    return m_kind;
}

void DeviceCount::SetKind(const int64_t& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool DeviceCount::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

int64_t DeviceCount::GetCount() const
{
    return m_count;
}

void DeviceCount::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DeviceCount::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

