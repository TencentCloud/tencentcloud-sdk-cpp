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

#include <tencentcloud/clb/v20180317/model/RateLimitConfigForKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

RateLimitConfigForKey::RateLimitConfigForKey() :
    m_maxParallelRequestHasBeenSet(false),
    m_rPMHasBeenSet(false),
    m_tPMHasBeenSet(false)
{
}

CoreInternalOutcome RateLimitConfigForKey::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxParallelRequest") && !value["MaxParallelRequest"].IsNull())
    {
        if (!value["MaxParallelRequest"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitConfigForKey.MaxParallelRequest` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxParallelRequest = value["MaxParallelRequest"].GetUint64();
        m_maxParallelRequestHasBeenSet = true;
    }

    if (value.HasMember("RPM") && !value["RPM"].IsNull())
    {
        if (!value["RPM"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitConfigForKey.RPM` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rPM = value["RPM"].GetUint64();
        m_rPMHasBeenSet = true;
    }

    if (value.HasMember("TPM") && !value["TPM"].IsNull())
    {
        if (!value["TPM"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitConfigForKey.TPM` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tPM = value["TPM"].GetUint64();
        m_tPMHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RateLimitConfigForKey::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxParallelRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxParallelRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxParallelRequest, allocator);
    }

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


uint64_t RateLimitConfigForKey::GetMaxParallelRequest() const
{
    return m_maxParallelRequest;
}

void RateLimitConfigForKey::SetMaxParallelRequest(const uint64_t& _maxParallelRequest)
{
    m_maxParallelRequest = _maxParallelRequest;
    m_maxParallelRequestHasBeenSet = true;
}

bool RateLimitConfigForKey::MaxParallelRequestHasBeenSet() const
{
    return m_maxParallelRequestHasBeenSet;
}

uint64_t RateLimitConfigForKey::GetRPM() const
{
    return m_rPM;
}

void RateLimitConfigForKey::SetRPM(const uint64_t& _rPM)
{
    m_rPM = _rPM;
    m_rPMHasBeenSet = true;
}

bool RateLimitConfigForKey::RPMHasBeenSet() const
{
    return m_rPMHasBeenSet;
}

uint64_t RateLimitConfigForKey::GetTPM() const
{
    return m_tPM;
}

void RateLimitConfigForKey::SetTPM(const uint64_t& _tPM)
{
    m_tPM = _tPM;
    m_tPMHasBeenSet = true;
}

bool RateLimitConfigForKey::TPMHasBeenSet() const
{
    return m_tPMHasBeenSet;
}

