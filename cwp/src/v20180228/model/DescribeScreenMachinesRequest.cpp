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

#include <tencentcloud/cwp/v20180228/model/DescribeScreenMachinesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeScreenMachinesRequest::DescribeScreenMachinesRequest() :
    m_machineRegionHasBeenSet(false),
    m_machineIpOrAliasHasBeenSet(false),
    m_securityStatusHasBeenSet(false)
{
}

string DescribeScreenMachinesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_machineRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machineRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_machineIpOrAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIpOrAlias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machineIpOrAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_securityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_securityStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeScreenMachinesRequest::GetMachineRegion() const
{
    return m_machineRegion;
}

void DescribeScreenMachinesRequest::SetMachineRegion(const string& _machineRegion)
{
    m_machineRegion = _machineRegion;
    m_machineRegionHasBeenSet = true;
}

bool DescribeScreenMachinesRequest::MachineRegionHasBeenSet() const
{
    return m_machineRegionHasBeenSet;
}

string DescribeScreenMachinesRequest::GetMachineIpOrAlias() const
{
    return m_machineIpOrAlias;
}

void DescribeScreenMachinesRequest::SetMachineIpOrAlias(const string& _machineIpOrAlias)
{
    m_machineIpOrAlias = _machineIpOrAlias;
    m_machineIpOrAliasHasBeenSet = true;
}

bool DescribeScreenMachinesRequest::MachineIpOrAliasHasBeenSet() const
{
    return m_machineIpOrAliasHasBeenSet;
}

uint64_t DescribeScreenMachinesRequest::GetSecurityStatus() const
{
    return m_securityStatus;
}

void DescribeScreenMachinesRequest::SetSecurityStatus(const uint64_t& _securityStatus)
{
    m_securityStatus = _securityStatus;
    m_securityStatusHasBeenSet = true;
}

bool DescribeScreenMachinesRequest::SecurityStatusHasBeenSet() const
{
    return m_securityStatusHasBeenSet;
}


