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

#include <tencentcloud/fmu/v20191213/model/RGBAInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fmu::V20191213::Model;
using namespace std;

RGBAInfo::RGBAInfo() :
    m_rHasBeenSet(false),
    m_gHasBeenSet(false),
    m_bHasBeenSet(false),
    m_aHasBeenSet(false)
{
}

CoreInternalOutcome RGBAInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("R") && !value["R"].IsNull())
    {
        if (!value["R"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RGBAInfo.R` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_r = value["R"].GetInt64();
        m_rHasBeenSet = true;
    }

    if (value.HasMember("G") && !value["G"].IsNull())
    {
        if (!value["G"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RGBAInfo.G` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_g = value["G"].GetInt64();
        m_gHasBeenSet = true;
    }

    if (value.HasMember("B") && !value["B"].IsNull())
    {
        if (!value["B"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RGBAInfo.B` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_b = value["B"].GetInt64();
        m_bHasBeenSet = true;
    }

    if (value.HasMember("A") && !value["A"].IsNull())
    {
        if (!value["A"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RGBAInfo.A` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_a = value["A"].GetInt64();
        m_aHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RGBAInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "R";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_r, allocator);
    }

    if (m_gHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "G";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_g, allocator);
    }

    if (m_bHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "B";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_b, allocator);
    }

    if (m_aHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_a, allocator);
    }

}


int64_t RGBAInfo::GetR() const
{
    return m_r;
}

void RGBAInfo::SetR(const int64_t& _r)
{
    m_r = _r;
    m_rHasBeenSet = true;
}

bool RGBAInfo::RHasBeenSet() const
{
    return m_rHasBeenSet;
}

int64_t RGBAInfo::GetG() const
{
    return m_g;
}

void RGBAInfo::SetG(const int64_t& _g)
{
    m_g = _g;
    m_gHasBeenSet = true;
}

bool RGBAInfo::GHasBeenSet() const
{
    return m_gHasBeenSet;
}

int64_t RGBAInfo::GetB() const
{
    return m_b;
}

void RGBAInfo::SetB(const int64_t& _b)
{
    m_b = _b;
    m_bHasBeenSet = true;
}

bool RGBAInfo::BHasBeenSet() const
{
    return m_bHasBeenSet;
}

int64_t RGBAInfo::GetA() const
{
    return m_a;
}

void RGBAInfo::SetA(const int64_t& _a)
{
    m_a = _a;
    m_aHasBeenSet = true;
}

bool RGBAInfo::AHasBeenSet() const
{
    return m_aHasBeenSet;
}

