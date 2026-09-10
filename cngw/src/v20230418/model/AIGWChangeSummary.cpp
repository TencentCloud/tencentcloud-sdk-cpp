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

#include <tencentcloud/cngw/v20230418/model/AIGWChangeSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWChangeSummary::AIGWChangeSummary() :
    m_breakingHasBeenSet(false),
    m_compatibleHasBeenSet(false)
{
}

CoreInternalOutcome AIGWChangeSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Breaking") && !value["Breaking"].IsNull())
    {
        if (!value["Breaking"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWChangeSummary.Breaking` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_breaking = value["Breaking"].GetUint64();
        m_breakingHasBeenSet = true;
    }

    if (value.HasMember("Compatible") && !value["Compatible"].IsNull())
    {
        if (!value["Compatible"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWChangeSummary.Compatible` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_compatible = value["Compatible"].GetUint64();
        m_compatibleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWChangeSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_breakingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Breaking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_breaking, allocator);
    }

    if (m_compatibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compatible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compatible, allocator);
    }

}


uint64_t AIGWChangeSummary::GetBreaking() const
{
    return m_breaking;
}

void AIGWChangeSummary::SetBreaking(const uint64_t& _breaking)
{
    m_breaking = _breaking;
    m_breakingHasBeenSet = true;
}

bool AIGWChangeSummary::BreakingHasBeenSet() const
{
    return m_breakingHasBeenSet;
}

uint64_t AIGWChangeSummary::GetCompatible() const
{
    return m_compatible;
}

void AIGWChangeSummary::SetCompatible(const uint64_t& _compatible)
{
    m_compatible = _compatible;
    m_compatibleHasBeenSet = true;
}

bool AIGWChangeSummary::CompatibleHasBeenSet() const
{
    return m_compatibleHasBeenSet;
}

