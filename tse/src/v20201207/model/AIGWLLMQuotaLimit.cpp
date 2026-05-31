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

#include <tencentcloud/tse/v20201207/model/AIGWLLMQuotaLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWLLMQuotaLimit::AIGWLLMQuotaLimit() :
    m_rPMLimitHasBeenSet(false),
    m_tPMLimitHasBeenSet(false)
{
}

CoreInternalOutcome AIGWLLMQuotaLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RPMLimit") && !value["RPMLimit"].IsNull())
    {
        if (!value["RPMLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMQuotaLimit.RPMLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rPMLimit = value["RPMLimit"].GetInt64();
        m_rPMLimitHasBeenSet = true;
    }

    if (value.HasMember("TPMLimit") && !value["TPMLimit"].IsNull())
    {
        if (!value["TPMLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMQuotaLimit.TPMLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tPMLimit = value["TPMLimit"].GetInt64();
        m_tPMLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWLLMQuotaLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rPMLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RPMLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rPMLimit, allocator);
    }

    if (m_tPMLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPMLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tPMLimit, allocator);
    }

}


int64_t AIGWLLMQuotaLimit::GetRPMLimit() const
{
    return m_rPMLimit;
}

void AIGWLLMQuotaLimit::SetRPMLimit(const int64_t& _rPMLimit)
{
    m_rPMLimit = _rPMLimit;
    m_rPMLimitHasBeenSet = true;
}

bool AIGWLLMQuotaLimit::RPMLimitHasBeenSet() const
{
    return m_rPMLimitHasBeenSet;
}

int64_t AIGWLLMQuotaLimit::GetTPMLimit() const
{
    return m_tPMLimit;
}

void AIGWLLMQuotaLimit::SetTPMLimit(const int64_t& _tPMLimit)
{
    m_tPMLimit = _tPMLimit;
    m_tPMLimitHasBeenSet = true;
}

bool AIGWLLMQuotaLimit::TPMLimitHasBeenSet() const
{
    return m_tPMLimitHasBeenSet;
}

