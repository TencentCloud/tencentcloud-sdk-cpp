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

#include <tencentcloud/cwp/v20180228/model/DescribeMachineInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeMachineInfoResponse::DescribeMachineInfoResponse() :
    m_machineIpHasBeenSet(false),
    m_protectDaysHasBeenSet(false),
    m_machineOsHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_machineStatusHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_isProVersionHasBeenSet(false),
    m_proVersionOpenDateHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_machineRegionHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_freeMalwaresLeftHasBeenSet(false),
    m_freeVulsLeftHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_proVersionDeadlineHasBeenSet(false),
    m_hasAssetScanHasBeenSet(false),
    m_protectTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMachineInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("MachineIp") && !rsp["MachineIp"].IsNull())
    {
        if (!rsp["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(rsp["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectDays") && !rsp["ProtectDays"].IsNull())
    {
        if (!rsp["ProtectDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectDays = rsp["ProtectDays"].GetUint64();
        m_protectDaysHasBeenSet = true;
    }

    if (rsp.HasMember("MachineOs") && !rsp["MachineOs"].IsNull())
    {
        if (!rsp["MachineOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineOs = string(rsp["MachineOs"].GetString());
        m_machineOsHasBeenSet = true;
    }

    if (rsp.HasMember("MachineName") && !rsp["MachineName"].IsNull())
    {
        if (!rsp["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(rsp["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (rsp.HasMember("MachineStatus") && !rsp["MachineStatus"].IsNull())
    {
        if (!rsp["MachineStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineStatus = string(rsp["MachineStatus"].GetString());
        m_machineStatusHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("MachineWanIp") && !rsp["MachineWanIp"].IsNull())
    {
        if (!rsp["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(rsp["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (rsp.HasMember("Quuid") && !rsp["Quuid"].IsNull())
    {
        if (!rsp["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(rsp["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (rsp.HasMember("Uuid") && !rsp["Uuid"].IsNull())
    {
        if (!rsp["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(rsp["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (rsp.HasMember("IsProVersion") && !rsp["IsProVersion"].IsNull())
    {
        if (!rsp["IsProVersion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsProVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isProVersion = rsp["IsProVersion"].GetBool();
        m_isProVersionHasBeenSet = true;
    }

    if (rsp.HasMember("ProVersionOpenDate") && !rsp["ProVersionOpenDate"].IsNull())
    {
        if (!rsp["ProVersionOpenDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProVersionOpenDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proVersionOpenDate = string(rsp["ProVersionOpenDate"].GetString());
        m_proVersionOpenDateHasBeenSet = true;
    }

    if (rsp.HasMember("MachineType") && !rsp["MachineType"].IsNull())
    {
        if (!rsp["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(rsp["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (rsp.HasMember("MachineRegion") && !rsp["MachineRegion"].IsNull())
    {
        if (!rsp["MachineRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineRegion = string(rsp["MachineRegion"].GetString());
        m_machineRegionHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(rsp["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (rsp.HasMember("FreeMalwaresLeft") && !rsp["FreeMalwaresLeft"].IsNull())
    {
        if (!rsp["FreeMalwaresLeft"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FreeMalwaresLeft` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_freeMalwaresLeft = rsp["FreeMalwaresLeft"].GetUint64();
        m_freeMalwaresLeftHasBeenSet = true;
    }

    if (rsp.HasMember("FreeVulsLeft") && !rsp["FreeVulsLeft"].IsNull())
    {
        if (!rsp["FreeVulsLeft"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FreeVulsLeft` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_freeVulsLeft = rsp["FreeVulsLeft"].GetUint64();
        m_freeVulsLeftHasBeenSet = true;
    }

    if (rsp.HasMember("AgentVersion") && !rsp["AgentVersion"].IsNull())
    {
        if (!rsp["AgentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentVersion = string(rsp["AgentVersion"].GetString());
        m_agentVersionHasBeenSet = true;
    }

    if (rsp.HasMember("ProVersionDeadline") && !rsp["ProVersionDeadline"].IsNull())
    {
        if (!rsp["ProVersionDeadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProVersionDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proVersionDeadline = string(rsp["ProVersionDeadline"].GetString());
        m_proVersionDeadlineHasBeenSet = true;
    }

    if (rsp.HasMember("HasAssetScan") && !rsp["HasAssetScan"].IsNull())
    {
        if (!rsp["HasAssetScan"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HasAssetScan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hasAssetScan = rsp["HasAssetScan"].GetUint64();
        m_hasAssetScanHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectType") && !rsp["ProtectType"].IsNull())
    {
        if (!rsp["ProtectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectType = string(rsp["ProtectType"].GetString());
        m_protectTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMachineInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_protectDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectDays, allocator);
    }

    if (m_machineOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineOs.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_isProVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProVersion, allocator);
    }

    if (m_proVersionOpenDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProVersionOpenDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proVersionOpenDate.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_machineRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_freeMalwaresLeftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeMalwaresLeft";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeMalwaresLeft, allocator);
    }

    if (m_freeVulsLeftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeVulsLeft";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeVulsLeft, allocator);
    }

    if (m_agentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_proVersionDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProVersionDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proVersionDeadline.c_str(), allocator).Move(), allocator);
    }

    if (m_hasAssetScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasAssetScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasAssetScan, allocator);
    }

    if (m_protectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectType.c_str(), allocator).Move(), allocator);
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


string DescribeMachineInfoResponse::GetMachineIp() const
{
    return m_machineIp;
}

bool DescribeMachineInfoResponse::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

uint64_t DescribeMachineInfoResponse::GetProtectDays() const
{
    return m_protectDays;
}

bool DescribeMachineInfoResponse::ProtectDaysHasBeenSet() const
{
    return m_protectDaysHasBeenSet;
}

string DescribeMachineInfoResponse::GetMachineOs() const
{
    return m_machineOs;
}

bool DescribeMachineInfoResponse::MachineOsHasBeenSet() const
{
    return m_machineOsHasBeenSet;
}

string DescribeMachineInfoResponse::GetMachineName() const
{
    return m_machineName;
}

bool DescribeMachineInfoResponse::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string DescribeMachineInfoResponse::GetMachineStatus() const
{
    return m_machineStatus;
}

bool DescribeMachineInfoResponse::MachineStatusHasBeenSet() const
{
    return m_machineStatusHasBeenSet;
}

string DescribeMachineInfoResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeMachineInfoResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeMachineInfoResponse::GetMachineWanIp() const
{
    return m_machineWanIp;
}

bool DescribeMachineInfoResponse::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string DescribeMachineInfoResponse::GetQuuid() const
{
    return m_quuid;
}

bool DescribeMachineInfoResponse::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string DescribeMachineInfoResponse::GetUuid() const
{
    return m_uuid;
}

bool DescribeMachineInfoResponse::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

bool DescribeMachineInfoResponse::GetIsProVersion() const
{
    return m_isProVersion;
}

bool DescribeMachineInfoResponse::IsProVersionHasBeenSet() const
{
    return m_isProVersionHasBeenSet;
}

string DescribeMachineInfoResponse::GetProVersionOpenDate() const
{
    return m_proVersionOpenDate;
}

bool DescribeMachineInfoResponse::ProVersionOpenDateHasBeenSet() const
{
    return m_proVersionOpenDateHasBeenSet;
}

string DescribeMachineInfoResponse::GetMachineType() const
{
    return m_machineType;
}

bool DescribeMachineInfoResponse::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string DescribeMachineInfoResponse::GetMachineRegion() const
{
    return m_machineRegion;
}

bool DescribeMachineInfoResponse::MachineRegionHasBeenSet() const
{
    return m_machineRegionHasBeenSet;
}

string DescribeMachineInfoResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeMachineInfoResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t DescribeMachineInfoResponse::GetFreeMalwaresLeft() const
{
    return m_freeMalwaresLeft;
}

bool DescribeMachineInfoResponse::FreeMalwaresLeftHasBeenSet() const
{
    return m_freeMalwaresLeftHasBeenSet;
}

uint64_t DescribeMachineInfoResponse::GetFreeVulsLeft() const
{
    return m_freeVulsLeft;
}

bool DescribeMachineInfoResponse::FreeVulsLeftHasBeenSet() const
{
    return m_freeVulsLeftHasBeenSet;
}

string DescribeMachineInfoResponse::GetAgentVersion() const
{
    return m_agentVersion;
}

bool DescribeMachineInfoResponse::AgentVersionHasBeenSet() const
{
    return m_agentVersionHasBeenSet;
}

string DescribeMachineInfoResponse::GetProVersionDeadline() const
{
    return m_proVersionDeadline;
}

bool DescribeMachineInfoResponse::ProVersionDeadlineHasBeenSet() const
{
    return m_proVersionDeadlineHasBeenSet;
}

uint64_t DescribeMachineInfoResponse::GetHasAssetScan() const
{
    return m_hasAssetScan;
}

bool DescribeMachineInfoResponse::HasAssetScanHasBeenSet() const
{
    return m_hasAssetScanHasBeenSet;
}

string DescribeMachineInfoResponse::GetProtectType() const
{
    return m_protectType;
}

bool DescribeMachineInfoResponse::ProtectTypeHasBeenSet() const
{
    return m_protectTypeHasBeenSet;
}


