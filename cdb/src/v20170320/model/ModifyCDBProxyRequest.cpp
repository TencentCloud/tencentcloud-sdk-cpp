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

#include <tencentcloud/cdb/v20170320/model/ModifyCDBProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyCDBProxyRequest::ModifyCDBProxyRequest() :
    m_proxyGroupIdHasBeenSet(false),
    m_isKickoutHasBeenSet(false),
    m_minCountHasBeenSet(false),
    m_maxDelayHasBeenSet(false),
    m_weightModeHasBeenSet(false),
    m_roWeightValuesHasBeenSet(false),
    m_failOverHasBeenSet(false),
    m_autoAddRoHasBeenSet(false)
{
}

string ModifyCDBProxyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_isKickoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKickout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isKickout, allocator);
    }

    if (m_minCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minCount, allocator);
    }

    if (m_maxDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDelay, allocator);
    }

    if (m_weightModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_weightMode.c_str(), allocator).Move(), allocator);
    }

    if (m_roWeightValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoWeightValues";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_roWeightValues.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_failOverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailOver";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_failOver, allocator);
    }

    if (m_autoAddRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAddRo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoAddRo, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCDBProxyRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void ModifyCDBProxyRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool ModifyCDBProxyRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

bool ModifyCDBProxyRequest::GetIsKickout() const
{
    return m_isKickout;
}

void ModifyCDBProxyRequest::SetIsKickout(const bool& _isKickout)
{
    m_isKickout = _isKickout;
    m_isKickoutHasBeenSet = true;
}

bool ModifyCDBProxyRequest::IsKickoutHasBeenSet() const
{
    return m_isKickoutHasBeenSet;
}

uint64_t ModifyCDBProxyRequest::GetMinCount() const
{
    return m_minCount;
}

void ModifyCDBProxyRequest::SetMinCount(const uint64_t& _minCount)
{
    m_minCount = _minCount;
    m_minCountHasBeenSet = true;
}

bool ModifyCDBProxyRequest::MinCountHasBeenSet() const
{
    return m_minCountHasBeenSet;
}

uint64_t ModifyCDBProxyRequest::GetMaxDelay() const
{
    return m_maxDelay;
}

void ModifyCDBProxyRequest::SetMaxDelay(const uint64_t& _maxDelay)
{
    m_maxDelay = _maxDelay;
    m_maxDelayHasBeenSet = true;
}

bool ModifyCDBProxyRequest::MaxDelayHasBeenSet() const
{
    return m_maxDelayHasBeenSet;
}

string ModifyCDBProxyRequest::GetWeightMode() const
{
    return m_weightMode;
}

void ModifyCDBProxyRequest::SetWeightMode(const string& _weightMode)
{
    m_weightMode = _weightMode;
    m_weightModeHasBeenSet = true;
}

bool ModifyCDBProxyRequest::WeightModeHasBeenSet() const
{
    return m_weightModeHasBeenSet;
}

RoWeight ModifyCDBProxyRequest::GetRoWeightValues() const
{
    return m_roWeightValues;
}

void ModifyCDBProxyRequest::SetRoWeightValues(const RoWeight& _roWeightValues)
{
    m_roWeightValues = _roWeightValues;
    m_roWeightValuesHasBeenSet = true;
}

bool ModifyCDBProxyRequest::RoWeightValuesHasBeenSet() const
{
    return m_roWeightValuesHasBeenSet;
}

bool ModifyCDBProxyRequest::GetFailOver() const
{
    return m_failOver;
}

void ModifyCDBProxyRequest::SetFailOver(const bool& _failOver)
{
    m_failOver = _failOver;
    m_failOverHasBeenSet = true;
}

bool ModifyCDBProxyRequest::FailOverHasBeenSet() const
{
    return m_failOverHasBeenSet;
}

bool ModifyCDBProxyRequest::GetAutoAddRo() const
{
    return m_autoAddRo;
}

void ModifyCDBProxyRequest::SetAutoAddRo(const bool& _autoAddRo)
{
    m_autoAddRo = _autoAddRo;
    m_autoAddRoHasBeenSet = true;
}

bool ModifyCDBProxyRequest::AutoAddRoHasBeenSet() const
{
    return m_autoAddRoHasBeenSet;
}


