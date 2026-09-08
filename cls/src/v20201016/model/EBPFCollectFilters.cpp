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

#include <tencentcloud/cls/v20201016/model/EBPFCollectFilters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

EBPFCollectFilters::EBPFCollectFilters() :
    m_processNameHasBeenSet(false),
    m_destEndpointHasBeenSet(false),
    m_dNSHasBeenSet(false)
{
}

CoreInternalOutcome EBPFCollectFilters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EBPFCollectFilters.ProcessName` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_processName.Deserialize(value["ProcessName"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("DestEndpoint") && !value["DestEndpoint"].IsNull())
    {
        if (!value["DestEndpoint"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EBPFCollectFilters.DestEndpoint` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_destEndpoint.Deserialize(value["DestEndpoint"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_destEndpointHasBeenSet = true;
    }

    if (value.HasMember("DNS") && !value["DNS"].IsNull())
    {
        if (!value["DNS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EBPFCollectFilters.DNS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dNS.Deserialize(value["DNS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dNSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EBPFCollectFilters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_processName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_destEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_destEndpoint.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dNSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DNS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dNS.ToJsonObject(value[key.c_str()], allocator);
    }

}


EBPFProcessNameFilter EBPFCollectFilters::GetProcessName() const
{
    return m_processName;
}

void EBPFCollectFilters::SetProcessName(const EBPFProcessNameFilter& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool EBPFCollectFilters::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

EBPFDestEndpointFilter EBPFCollectFilters::GetDestEndpoint() const
{
    return m_destEndpoint;
}

void EBPFCollectFilters::SetDestEndpoint(const EBPFDestEndpointFilter& _destEndpoint)
{
    m_destEndpoint = _destEndpoint;
    m_destEndpointHasBeenSet = true;
}

bool EBPFCollectFilters::DestEndpointHasBeenSet() const
{
    return m_destEndpointHasBeenSet;
}

EBPFDNSFilter EBPFCollectFilters::GetDNS() const
{
    return m_dNS;
}

void EBPFCollectFilters::SetDNS(const EBPFDNSFilter& _dNS)
{
    m_dNS = _dNS;
    m_dNSHasBeenSet = true;
}

bool EBPFCollectFilters::DNSHasBeenSet() const
{
    return m_dNSHasBeenSet;
}

