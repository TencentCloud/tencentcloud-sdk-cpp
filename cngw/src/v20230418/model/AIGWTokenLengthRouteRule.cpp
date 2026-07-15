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

#include <tencentcloud/cngw/v20230418/model/AIGWTokenLengthRouteRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWTokenLengthRouteRule::AIGWTokenLengthRouteRule() :
    m_minTokenLengthHasBeenSet(false),
    m_maxTokenLengthHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

CoreInternalOutcome AIGWTokenLengthRouteRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinTokenLength") && !value["MinTokenLength"].IsNull())
    {
        if (!value["MinTokenLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWTokenLengthRouteRule.MinTokenLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minTokenLength = value["MinTokenLength"].GetInt64();
        m_minTokenLengthHasBeenSet = true;
    }

    if (value.HasMember("MaxTokenLength") && !value["MaxTokenLength"].IsNull())
    {
        if (!value["MaxTokenLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWTokenLengthRouteRule.MaxTokenLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTokenLength = value["MaxTokenLength"].GetInt64();
        m_maxTokenLengthHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWTokenLengthRouteRule.Target` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_target.Deserialize(value["Target"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWTokenLengthRouteRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minTokenLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinTokenLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minTokenLength, allocator);
    }

    if (m_maxTokenLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTokenLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTokenLength, allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_target.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t AIGWTokenLengthRouteRule::GetMinTokenLength() const
{
    return m_minTokenLength;
}

void AIGWTokenLengthRouteRule::SetMinTokenLength(const int64_t& _minTokenLength)
{
    m_minTokenLength = _minTokenLength;
    m_minTokenLengthHasBeenSet = true;
}

bool AIGWTokenLengthRouteRule::MinTokenLengthHasBeenSet() const
{
    return m_minTokenLengthHasBeenSet;
}

int64_t AIGWTokenLengthRouteRule::GetMaxTokenLength() const
{
    return m_maxTokenLength;
}

void AIGWTokenLengthRouteRule::SetMaxTokenLength(const int64_t& _maxTokenLength)
{
    m_maxTokenLength = _maxTokenLength;
    m_maxTokenLengthHasBeenSet = true;
}

bool AIGWTokenLengthRouteRule::MaxTokenLengthHasBeenSet() const
{
    return m_maxTokenLengthHasBeenSet;
}

AIGWLLMModelServiceSubRoute AIGWTokenLengthRouteRule::GetTarget() const
{
    return m_target;
}

void AIGWTokenLengthRouteRule::SetTarget(const AIGWLLMModelServiceSubRoute& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool AIGWTokenLengthRouteRule::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

