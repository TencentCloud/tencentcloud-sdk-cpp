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

#include <tencentcloud/soe/v20180724/model/Tone.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Soe::V20180724::Model;
using namespace std;

Tone::Tone() :
    m_validHasBeenSet(false),
    m_refToneHasBeenSet(false),
    m_hypothesisToneHasBeenSet(false)
{
}

CoreInternalOutcome Tone::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Valid") && !value["Valid"].IsNull())
    {
        if (!value["Valid"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Tone.Valid` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_valid = value["Valid"].GetBool();
        m_validHasBeenSet = true;
    }

    if (value.HasMember("RefTone") && !value["RefTone"].IsNull())
    {
        if (!value["RefTone"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tone.RefTone` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refTone = value["RefTone"].GetInt64();
        m_refToneHasBeenSet = true;
    }

    if (value.HasMember("HypothesisTone") && !value["HypothesisTone"].IsNull())
    {
        if (!value["HypothesisTone"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tone.HypothesisTone` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hypothesisTone = value["HypothesisTone"].GetInt64();
        m_hypothesisToneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Tone::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_validHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Valid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valid, allocator);
    }

    if (m_refToneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefTone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refTone, allocator);
    }

    if (m_hypothesisToneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HypothesisTone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hypothesisTone, allocator);
    }

}


bool Tone::GetValid() const
{
    return m_valid;
}

void Tone::SetValid(const bool& _valid)
{
    m_valid = _valid;
    m_validHasBeenSet = true;
}

bool Tone::ValidHasBeenSet() const
{
    return m_validHasBeenSet;
}

int64_t Tone::GetRefTone() const
{
    return m_refTone;
}

void Tone::SetRefTone(const int64_t& _refTone)
{
    m_refTone = _refTone;
    m_refToneHasBeenSet = true;
}

bool Tone::RefToneHasBeenSet() const
{
    return m_refToneHasBeenSet;
}

int64_t Tone::GetHypothesisTone() const
{
    return m_hypothesisTone;
}

void Tone::SetHypothesisTone(const int64_t& _hypothesisTone)
{
    m_hypothesisTone = _hypothesisTone;
    m_hypothesisToneHasBeenSet = true;
}

bool Tone::HypothesisToneHasBeenSet() const
{
    return m_hypothesisToneHasBeenSet;
}

