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

#include <tencentcloud/cwp/v20180228/model/DescribeGeneralStatResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeGeneralStatResponse::DescribeGeneralStatResponse() :
    m_machinesAllHasBeenSet(false),
    m_machinesUninstalledHasBeenSet(false),
    m_agentsAllHasBeenSet(false),
    m_agentsOnlineHasBeenSet(false),
    m_agentsOfflineHasBeenSet(false),
    m_agentsProHasBeenSet(false),
    m_agentsBasicHasBeenSet(false),
    m_agentsProExpireWithInSevenDaysHasBeenSet(false),
    m_riskMachineHasBeenSet(false)
{
}

CoreInternalOutcome DescribeGeneralStatResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("MachinesAll") && !rsp["MachinesAll"].IsNull())
    {
        if (!rsp["MachinesAll"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MachinesAll` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machinesAll = rsp["MachinesAll"].GetUint64();
        m_machinesAllHasBeenSet = true;
    }

    if (rsp.HasMember("MachinesUninstalled") && !rsp["MachinesUninstalled"].IsNull())
    {
        if (!rsp["MachinesUninstalled"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MachinesUninstalled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machinesUninstalled = rsp["MachinesUninstalled"].GetUint64();
        m_machinesUninstalledHasBeenSet = true;
    }

    if (rsp.HasMember("AgentsAll") && !rsp["AgentsAll"].IsNull())
    {
        if (!rsp["AgentsAll"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AgentsAll` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentsAll = rsp["AgentsAll"].GetUint64();
        m_agentsAllHasBeenSet = true;
    }

    if (rsp.HasMember("AgentsOnline") && !rsp["AgentsOnline"].IsNull())
    {
        if (!rsp["AgentsOnline"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AgentsOnline` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentsOnline = rsp["AgentsOnline"].GetUint64();
        m_agentsOnlineHasBeenSet = true;
    }

    if (rsp.HasMember("AgentsOffline") && !rsp["AgentsOffline"].IsNull())
    {
        if (!rsp["AgentsOffline"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AgentsOffline` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentsOffline = rsp["AgentsOffline"].GetUint64();
        m_agentsOfflineHasBeenSet = true;
    }

    if (rsp.HasMember("AgentsPro") && !rsp["AgentsPro"].IsNull())
    {
        if (!rsp["AgentsPro"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AgentsPro` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentsPro = rsp["AgentsPro"].GetUint64();
        m_agentsProHasBeenSet = true;
    }

    if (rsp.HasMember("AgentsBasic") && !rsp["AgentsBasic"].IsNull())
    {
        if (!rsp["AgentsBasic"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AgentsBasic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentsBasic = rsp["AgentsBasic"].GetUint64();
        m_agentsBasicHasBeenSet = true;
    }

    if (rsp.HasMember("AgentsProExpireWithInSevenDays") && !rsp["AgentsProExpireWithInSevenDays"].IsNull())
    {
        if (!rsp["AgentsProExpireWithInSevenDays"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AgentsProExpireWithInSevenDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentsProExpireWithInSevenDays = rsp["AgentsProExpireWithInSevenDays"].GetUint64();
        m_agentsProExpireWithInSevenDaysHasBeenSet = true;
    }

    if (rsp.HasMember("RiskMachine") && !rsp["RiskMachine"].IsNull())
    {
        if (!rsp["RiskMachine"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RiskMachine` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskMachine = rsp["RiskMachine"].GetUint64();
        m_riskMachineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeGeneralStatResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_machinesAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachinesAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machinesAll, allocator);
    }

    if (m_machinesUninstalledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachinesUninstalled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machinesUninstalled, allocator);
    }

    if (m_agentsAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentsAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentsAll, allocator);
    }

    if (m_agentsOnlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentsOnline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentsOnline, allocator);
    }

    if (m_agentsOfflineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentsOffline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentsOffline, allocator);
    }

    if (m_agentsProHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentsPro";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentsPro, allocator);
    }

    if (m_agentsBasicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentsBasic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentsBasic, allocator);
    }

    if (m_agentsProExpireWithInSevenDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentsProExpireWithInSevenDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentsProExpireWithInSevenDays, allocator);
    }

    if (m_riskMachineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskMachine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskMachine, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeGeneralStatResponse::GetMachinesAll() const
{
    return m_machinesAll;
}

bool DescribeGeneralStatResponse::MachinesAllHasBeenSet() const
{
    return m_machinesAllHasBeenSet;
}

uint64_t DescribeGeneralStatResponse::GetMachinesUninstalled() const
{
    return m_machinesUninstalled;
}

bool DescribeGeneralStatResponse::MachinesUninstalledHasBeenSet() const
{
    return m_machinesUninstalledHasBeenSet;
}

uint64_t DescribeGeneralStatResponse::GetAgentsAll() const
{
    return m_agentsAll;
}

bool DescribeGeneralStatResponse::AgentsAllHasBeenSet() const
{
    return m_agentsAllHasBeenSet;
}

uint64_t DescribeGeneralStatResponse::GetAgentsOnline() const
{
    return m_agentsOnline;
}

bool DescribeGeneralStatResponse::AgentsOnlineHasBeenSet() const
{
    return m_agentsOnlineHasBeenSet;
}

uint64_t DescribeGeneralStatResponse::GetAgentsOffline() const
{
    return m_agentsOffline;
}

bool DescribeGeneralStatResponse::AgentsOfflineHasBeenSet() const
{
    return m_agentsOfflineHasBeenSet;
}

uint64_t DescribeGeneralStatResponse::GetAgentsPro() const
{
    return m_agentsPro;
}

bool DescribeGeneralStatResponse::AgentsProHasBeenSet() const
{
    return m_agentsProHasBeenSet;
}

uint64_t DescribeGeneralStatResponse::GetAgentsBasic() const
{
    return m_agentsBasic;
}

bool DescribeGeneralStatResponse::AgentsBasicHasBeenSet() const
{
    return m_agentsBasicHasBeenSet;
}

uint64_t DescribeGeneralStatResponse::GetAgentsProExpireWithInSevenDays() const
{
    return m_agentsProExpireWithInSevenDays;
}

bool DescribeGeneralStatResponse::AgentsProExpireWithInSevenDaysHasBeenSet() const
{
    return m_agentsProExpireWithInSevenDaysHasBeenSet;
}

uint64_t DescribeGeneralStatResponse::GetRiskMachine() const
{
    return m_riskMachine;
}

bool DescribeGeneralStatResponse::RiskMachineHasBeenSet() const
{
    return m_riskMachineHasBeenSet;
}


