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

#include <tencentcloud/tiia/v20190529/model/Threshold.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

Threshold::Threshold() :
    m_falseRate1PercentHasBeenSet(false),
    m_falseRate5PermilHasBeenSet(false),
    m_falseRate1PermilHasBeenSet(false)
{
}

CoreInternalOutcome Threshold::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FalseRate1Percent") && !value["FalseRate1Percent"].IsNull())
    {
        if (!value["FalseRate1Percent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Threshold.FalseRate1Percent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_falseRate1Percent = value["FalseRate1Percent"].GetInt64();
        m_falseRate1PercentHasBeenSet = true;
    }

    if (value.HasMember("FalseRate5Permil") && !value["FalseRate5Permil"].IsNull())
    {
        if (!value["FalseRate5Permil"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Threshold.FalseRate5Permil` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_falseRate5Permil = value["FalseRate5Permil"].GetInt64();
        m_falseRate5PermilHasBeenSet = true;
    }

    if (value.HasMember("FalseRate1Permil") && !value["FalseRate1Permil"].IsNull())
    {
        if (!value["FalseRate1Permil"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Threshold.FalseRate1Permil` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_falseRate1Permil = value["FalseRate1Permil"].GetInt64();
        m_falseRate1PermilHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Threshold::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_falseRate1PercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FalseRate1Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_falseRate1Percent, allocator);
    }

    if (m_falseRate5PermilHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FalseRate5Permil";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_falseRate5Permil, allocator);
    }

    if (m_falseRate1PermilHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FalseRate1Permil";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_falseRate1Permil, allocator);
    }

}


int64_t Threshold::GetFalseRate1Percent() const
{
    return m_falseRate1Percent;
}

void Threshold::SetFalseRate1Percent(const int64_t& _falseRate1Percent)
{
    m_falseRate1Percent = _falseRate1Percent;
    m_falseRate1PercentHasBeenSet = true;
}

bool Threshold::FalseRate1PercentHasBeenSet() const
{
    return m_falseRate1PercentHasBeenSet;
}

int64_t Threshold::GetFalseRate5Permil() const
{
    return m_falseRate5Permil;
}

void Threshold::SetFalseRate5Permil(const int64_t& _falseRate5Permil)
{
    m_falseRate5Permil = _falseRate5Permil;
    m_falseRate5PermilHasBeenSet = true;
}

bool Threshold::FalseRate5PermilHasBeenSet() const
{
    return m_falseRate5PermilHasBeenSet;
}

int64_t Threshold::GetFalseRate1Permil() const
{
    return m_falseRate1Permil;
}

void Threshold::SetFalseRate1Permil(const int64_t& _falseRate1Permil)
{
    m_falseRate1Permil = _falseRate1Permil;
    m_falseRate1PermilHasBeenSet = true;
}

bool Threshold::FalseRate1PermilHasBeenSet() const
{
    return m_falseRate1PermilHasBeenSet;
}

