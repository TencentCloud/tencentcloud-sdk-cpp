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

#include <tencentcloud/tke/v20180525/model/PodLimitsByType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PodLimitsByType::PodLimitsByType() :
    m_tKERouteENINonStaticIPHasBeenSet(false),
    m_tKERouteENIStaticIPHasBeenSet(false),
    m_tKEDirectENIHasBeenSet(false),
    m_tKESubENIHasBeenSet(false)
{
}

CoreInternalOutcome PodLimitsByType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TKERouteENINonStaticIP") && !value["TKERouteENINonStaticIP"].IsNull())
    {
        if (!value["TKERouteENINonStaticIP"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PodLimitsByType.TKERouteENINonStaticIP` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tKERouteENINonStaticIP = value["TKERouteENINonStaticIP"].GetInt64();
        m_tKERouteENINonStaticIPHasBeenSet = true;
    }

    if (value.HasMember("TKERouteENIStaticIP") && !value["TKERouteENIStaticIP"].IsNull())
    {
        if (!value["TKERouteENIStaticIP"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PodLimitsByType.TKERouteENIStaticIP` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tKERouteENIStaticIP = value["TKERouteENIStaticIP"].GetInt64();
        m_tKERouteENIStaticIPHasBeenSet = true;
    }

    if (value.HasMember("TKEDirectENI") && !value["TKEDirectENI"].IsNull())
    {
        if (!value["TKEDirectENI"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PodLimitsByType.TKEDirectENI` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tKEDirectENI = value["TKEDirectENI"].GetInt64();
        m_tKEDirectENIHasBeenSet = true;
    }

    if (value.HasMember("TKESubENI") && !value["TKESubENI"].IsNull())
    {
        if (!value["TKESubENI"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PodLimitsByType.TKESubENI` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tKESubENI = value["TKESubENI"].GetInt64();
        m_tKESubENIHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodLimitsByType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tKERouteENINonStaticIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TKERouteENINonStaticIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tKERouteENINonStaticIP, allocator);
    }

    if (m_tKERouteENIStaticIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TKERouteENIStaticIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tKERouteENIStaticIP, allocator);
    }

    if (m_tKEDirectENIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TKEDirectENI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tKEDirectENI, allocator);
    }

    if (m_tKESubENIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TKESubENI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tKESubENI, allocator);
    }

}


int64_t PodLimitsByType::GetTKERouteENINonStaticIP() const
{
    return m_tKERouteENINonStaticIP;
}

void PodLimitsByType::SetTKERouteENINonStaticIP(const int64_t& _tKERouteENINonStaticIP)
{
    m_tKERouteENINonStaticIP = _tKERouteENINonStaticIP;
    m_tKERouteENINonStaticIPHasBeenSet = true;
}

bool PodLimitsByType::TKERouteENINonStaticIPHasBeenSet() const
{
    return m_tKERouteENINonStaticIPHasBeenSet;
}

int64_t PodLimitsByType::GetTKERouteENIStaticIP() const
{
    return m_tKERouteENIStaticIP;
}

void PodLimitsByType::SetTKERouteENIStaticIP(const int64_t& _tKERouteENIStaticIP)
{
    m_tKERouteENIStaticIP = _tKERouteENIStaticIP;
    m_tKERouteENIStaticIPHasBeenSet = true;
}

bool PodLimitsByType::TKERouteENIStaticIPHasBeenSet() const
{
    return m_tKERouteENIStaticIPHasBeenSet;
}

int64_t PodLimitsByType::GetTKEDirectENI() const
{
    return m_tKEDirectENI;
}

void PodLimitsByType::SetTKEDirectENI(const int64_t& _tKEDirectENI)
{
    m_tKEDirectENI = _tKEDirectENI;
    m_tKEDirectENIHasBeenSet = true;
}

bool PodLimitsByType::TKEDirectENIHasBeenSet() const
{
    return m_tKEDirectENIHasBeenSet;
}

int64_t PodLimitsByType::GetTKESubENI() const
{
    return m_tKESubENI;
}

void PodLimitsByType::SetTKESubENI(const int64_t& _tKESubENI)
{
    m_tKESubENI = _tKESubENI;
    m_tKESubENIHasBeenSet = true;
}

bool PodLimitsByType::TKESubENIHasBeenSet() const
{
    return m_tKESubENIHasBeenSet;
}

