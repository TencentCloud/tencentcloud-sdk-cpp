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

#include <tencentcloud/cwp/v20180228/model/VulLevelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulLevelInfo::VulLevelInfo() :
    m_vulLevelHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome VulLevelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulLevel") && !value["VulLevel"].IsNull())
    {
        if (!value["VulLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulLevelInfo.VulLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulLevel = value["VulLevel"].GetUint64();
        m_vulLevelHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulLevelInfo.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulLevelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulLevel, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


uint64_t VulLevelInfo::GetVulLevel() const
{
    return m_vulLevel;
}

void VulLevelInfo::SetVulLevel(const uint64_t& _vulLevel)
{
    m_vulLevel = _vulLevel;
    m_vulLevelHasBeenSet = true;
}

bool VulLevelInfo::VulLevelHasBeenSet() const
{
    return m_vulLevelHasBeenSet;
}

uint64_t VulLevelInfo::GetCount() const
{
    return m_count;
}

void VulLevelInfo::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool VulLevelInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

