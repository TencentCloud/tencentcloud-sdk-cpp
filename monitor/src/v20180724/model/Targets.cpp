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

#include <tencentcloud/monitor/v20180724/model/Targets.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

Targets::Targets() :
    m_totalHasBeenSet(false),
    m_upHasBeenSet(false),
    m_downHasBeenSet(false),
    m_unknownHasBeenSet(false)
{
}

CoreInternalOutcome Targets::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Targets.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Up") && !value["Up"].IsNull())
    {
        if (!value["Up"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Targets.Up` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_up = value["Up"].GetUint64();
        m_upHasBeenSet = true;
    }

    if (value.HasMember("Down") && !value["Down"].IsNull())
    {
        if (!value["Down"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Targets.Down` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_down = value["Down"].GetUint64();
        m_downHasBeenSet = true;
    }

    if (value.HasMember("Unknown") && !value["Unknown"].IsNull())
    {
        if (!value["Unknown"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Targets.Unknown` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unknown = value["Unknown"].GetUint64();
        m_unknownHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Targets::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_upHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Up";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_up, allocator);
    }

    if (m_downHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Down";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_down, allocator);
    }

    if (m_unknownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unknown";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unknown, allocator);
    }

}


uint64_t Targets::GetTotal() const
{
    return m_total;
}

void Targets::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool Targets::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t Targets::GetUp() const
{
    return m_up;
}

void Targets::SetUp(const uint64_t& _up)
{
    m_up = _up;
    m_upHasBeenSet = true;
}

bool Targets::UpHasBeenSet() const
{
    return m_upHasBeenSet;
}

uint64_t Targets::GetDown() const
{
    return m_down;
}

void Targets::SetDown(const uint64_t& _down)
{
    m_down = _down;
    m_downHasBeenSet = true;
}

bool Targets::DownHasBeenSet() const
{
    return m_downHasBeenSet;
}

uint64_t Targets::GetUnknown() const
{
    return m_unknown;
}

void Targets::SetUnknown(const uint64_t& _unknown)
{
    m_unknown = _unknown;
    m_unknownHasBeenSet = true;
}

bool Targets::UnknownHasBeenSet() const
{
    return m_unknownHasBeenSet;
}

