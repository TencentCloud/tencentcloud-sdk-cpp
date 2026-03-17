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

#include <tencentcloud/ess/v20201111/model/FlowOperateLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FlowOperateLimit::FlowOperateLimit() :
    m_noReleaseHasBeenSet(false)
{
}

CoreInternalOutcome FlowOperateLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoRelease") && !value["NoRelease"].IsNull())
    {
        if (!value["NoRelease"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowOperateLimit.NoRelease` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noRelease = value["NoRelease"].GetBool();
        m_noReleaseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowOperateLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noReleaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoRelease";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noRelease, allocator);
    }

}


bool FlowOperateLimit::GetNoRelease() const
{
    return m_noRelease;
}

void FlowOperateLimit::SetNoRelease(const bool& _noRelease)
{
    m_noRelease = _noRelease;
    m_noReleaseHasBeenSet = true;
}

bool FlowOperateLimit::NoReleaseHasBeenSet() const
{
    return m_noReleaseHasBeenSet;
}

