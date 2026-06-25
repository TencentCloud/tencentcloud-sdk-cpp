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

#include <tencentcloud/clb/v20180317/model/RateLimitConfigForBudget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

RateLimitConfigForBudget::RateLimitConfigForBudget() :
    m_rPMHasBeenSet(false),
    m_tPMHasBeenSet(false)
{
}

CoreInternalOutcome RateLimitConfigForBudget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RPM") && !value["RPM"].IsNull())
    {
        if (!value["RPM"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitConfigForBudget.RPM` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rPM = value["RPM"].GetUint64();
        m_rPMHasBeenSet = true;
    }

    if (value.HasMember("TPM") && !value["TPM"].IsNull())
    {
        if (!value["TPM"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitConfigForBudget.TPM` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tPM = value["TPM"].GetUint64();
        m_tPMHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RateLimitConfigForBudget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RPM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rPM, allocator);
    }

    if (m_tPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tPM, allocator);
    }

}


uint64_t RateLimitConfigForBudget::GetRPM() const
{
    return m_rPM;
}

void RateLimitConfigForBudget::SetRPM(const uint64_t& _rPM)
{
    m_rPM = _rPM;
    m_rPMHasBeenSet = true;
}

bool RateLimitConfigForBudget::RPMHasBeenSet() const
{
    return m_rPMHasBeenSet;
}

uint64_t RateLimitConfigForBudget::GetTPM() const
{
    return m_tPM;
}

void RateLimitConfigForBudget::SetTPM(const uint64_t& _tPM)
{
    m_tPM = _tPM;
    m_tPMHasBeenSet = true;
}

bool RateLimitConfigForBudget::TPMHasBeenSet() const
{
    return m_tPMHasBeenSet;
}

