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

#include <tencentcloud/cfw/v20190904/model/FwGroupIpFlowStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

FwGroupIpFlowStat::FwGroupIpFlowStat() :
    m_ipHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_flowMaxHasBeenSet(false),
    m_flowAvgHasBeenSet(false),
    m_tcRuleStatusHasBeenSet(false),
    m_fwInsIdHasBeenSet(false),
    m_ipVersionHasBeenSet(false)
{
}

CoreInternalOutcome FwGroupIpFlowStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupIpFlowStat.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupIpFlowStat.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupIpFlowStat.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupIpFlowStat.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupIpFlowStat.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("FlowMax") && !value["FlowMax"].IsNull())
    {
        if (!value["FlowMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupIpFlowStat.FlowMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowMax = value["FlowMax"].GetInt64();
        m_flowMaxHasBeenSet = true;
    }

    if (value.HasMember("FlowAvg") && !value["FlowAvg"].IsNull())
    {
        if (!value["FlowAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupIpFlowStat.FlowAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_flowAvg = value["FlowAvg"].GetDouble();
        m_flowAvgHasBeenSet = true;
    }

    if (value.HasMember("TcRuleStatus") && !value["TcRuleStatus"].IsNull())
    {
        if (!value["TcRuleStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupIpFlowStat.TcRuleStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tcRuleStatus = value["TcRuleStatus"].GetInt64();
        m_tcRuleStatusHasBeenSet = true;
    }

    if (value.HasMember("FwInsId") && !value["FwInsId"].IsNull())
    {
        if (!value["FwInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupIpFlowStat.FwInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwInsId = string(value["FwInsId"].GetString());
        m_fwInsIdHasBeenSet = true;
    }

    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupIpFlowStat.IpVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = value["IpVersion"].GetInt64();
        m_ipVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FwGroupIpFlowStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowMax, allocator);
    }

    if (m_flowAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowAvg, allocator);
    }

    if (m_tcRuleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcRuleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tcRuleStatus, allocator);
    }

    if (m_fwInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipVersion, allocator);
    }

}


string FwGroupIpFlowStat::GetIp() const
{
    return m_ip;
}

void FwGroupIpFlowStat::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool FwGroupIpFlowStat::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string FwGroupIpFlowStat::GetInstanceId() const
{
    return m_instanceId;
}

void FwGroupIpFlowStat::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool FwGroupIpFlowStat::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string FwGroupIpFlowStat::GetInstanceName() const
{
    return m_instanceName;
}

void FwGroupIpFlowStat::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool FwGroupIpFlowStat::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string FwGroupIpFlowStat::GetVpcId() const
{
    return m_vpcId;
}

void FwGroupIpFlowStat::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool FwGroupIpFlowStat::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string FwGroupIpFlowStat::GetVpcName() const
{
    return m_vpcName;
}

void FwGroupIpFlowStat::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool FwGroupIpFlowStat::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

int64_t FwGroupIpFlowStat::GetFlowMax() const
{
    return m_flowMax;
}

void FwGroupIpFlowStat::SetFlowMax(const int64_t& _flowMax)
{
    m_flowMax = _flowMax;
    m_flowMaxHasBeenSet = true;
}

bool FwGroupIpFlowStat::FlowMaxHasBeenSet() const
{
    return m_flowMaxHasBeenSet;
}

double FwGroupIpFlowStat::GetFlowAvg() const
{
    return m_flowAvg;
}

void FwGroupIpFlowStat::SetFlowAvg(const double& _flowAvg)
{
    m_flowAvg = _flowAvg;
    m_flowAvgHasBeenSet = true;
}

bool FwGroupIpFlowStat::FlowAvgHasBeenSet() const
{
    return m_flowAvgHasBeenSet;
}

int64_t FwGroupIpFlowStat::GetTcRuleStatus() const
{
    return m_tcRuleStatus;
}

void FwGroupIpFlowStat::SetTcRuleStatus(const int64_t& _tcRuleStatus)
{
    m_tcRuleStatus = _tcRuleStatus;
    m_tcRuleStatusHasBeenSet = true;
}

bool FwGroupIpFlowStat::TcRuleStatusHasBeenSet() const
{
    return m_tcRuleStatusHasBeenSet;
}

string FwGroupIpFlowStat::GetFwInsId() const
{
    return m_fwInsId;
}

void FwGroupIpFlowStat::SetFwInsId(const string& _fwInsId)
{
    m_fwInsId = _fwInsId;
    m_fwInsIdHasBeenSet = true;
}

bool FwGroupIpFlowStat::FwInsIdHasBeenSet() const
{
    return m_fwInsIdHasBeenSet;
}

int64_t FwGroupIpFlowStat::GetIpVersion() const
{
    return m_ipVersion;
}

void FwGroupIpFlowStat::SetIpVersion(const int64_t& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool FwGroupIpFlowStat::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

