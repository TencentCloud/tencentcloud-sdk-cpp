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

#include <tencentcloud/cwp/v20180228/model/VulInfoByCveId.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulInfoByCveId::VulInfoByCveId() :
    m_vulIdHasBeenSet(false),
    m_fixSwitchHasBeenSet(false)
{
}

CoreInternalOutcome VulInfoByCveId::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoByCveId.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("FixSwitch") && !value["FixSwitch"].IsNull())
    {
        if (!value["FixSwitch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoByCveId.FixSwitch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fixSwitch = value["FixSwitch"].GetUint64();
        m_fixSwitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulInfoByCveId::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_fixSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixSwitch, allocator);
    }

}


uint64_t VulInfoByCveId::GetVulId() const
{
    return m_vulId;
}

void VulInfoByCveId::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulInfoByCveId::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

uint64_t VulInfoByCveId::GetFixSwitch() const
{
    return m_fixSwitch;
}

void VulInfoByCveId::SetFixSwitch(const uint64_t& _fixSwitch)
{
    m_fixSwitch = _fixSwitch;
    m_fixSwitchHasBeenSet = true;
}

bool VulInfoByCveId::FixSwitchHasBeenSet() const
{
    return m_fixSwitchHasBeenSet;
}

