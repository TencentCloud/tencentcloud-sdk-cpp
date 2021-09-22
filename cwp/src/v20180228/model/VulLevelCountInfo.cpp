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

#include <tencentcloud/cwp/v20180228/model/VulLevelCountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulLevelCountInfo::VulLevelCountInfo() :
    m_vulLevelHasBeenSet(false),
    m_vulCountHasBeenSet(false)
{
}

CoreInternalOutcome VulLevelCountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulLevel") && !value["VulLevel"].IsNull())
    {
        if (!value["VulLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulLevelCountInfo.VulLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulLevel = value["VulLevel"].GetUint64();
        m_vulLevelHasBeenSet = true;
    }

    if (value.HasMember("VulCount") && !value["VulCount"].IsNull())
    {
        if (!value["VulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulLevelCountInfo.VulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCount = value["VulCount"].GetUint64();
        m_vulCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulLevelCountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulLevel, allocator);
    }

    if (m_vulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCount, allocator);
    }

}


uint64_t VulLevelCountInfo::GetVulLevel() const
{
    return m_vulLevel;
}

void VulLevelCountInfo::SetVulLevel(const uint64_t& _vulLevel)
{
    m_vulLevel = _vulLevel;
    m_vulLevelHasBeenSet = true;
}

bool VulLevelCountInfo::VulLevelHasBeenSet() const
{
    return m_vulLevelHasBeenSet;
}

uint64_t VulLevelCountInfo::GetVulCount() const
{
    return m_vulCount;
}

void VulLevelCountInfo::SetVulCount(const uint64_t& _vulCount)
{
    m_vulCount = _vulCount;
    m_vulCountHasBeenSet = true;
}

bool VulLevelCountInfo::VulCountHasBeenSet() const
{
    return m_vulCountHasBeenSet;
}

