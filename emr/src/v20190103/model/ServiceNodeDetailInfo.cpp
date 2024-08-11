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

#include <tencentcloud/emr/v20190103/model/ServiceNodeDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ServiceNodeDetailInfo::ServiceNodeDetailInfo() :
    m_ipHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_serviceStatusHasBeenSet(false),
    m_monitorStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_portsInfoHasBeenSet(false),
    m_lastRestartTimeHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_confGroupIdHasBeenSet(false),
    m_confGroupNameHasBeenSet(false),
    m_confStatusHasBeenSet(false),
    m_serviceDetectionInfoHasBeenSet(false),
    m_nodeFlagFilterHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_isSupportRoleMonitorHasBeenSet(false),
    m_stopPoliciesHasBeenSet(false),
    m_hAStateHasBeenSet(false),
    m_nameServiceHasBeenSet(false),
    m_isFederationHasBeenSet(false),
    m_dataNodeMaintenanceStateHasBeenSet(false)
{
}

CoreInternalOutcome ServiceNodeDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.NodeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = value["NodeType"].GetInt64();
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceStatus") && !value["ServiceStatus"].IsNull())
    {
        if (!value["ServiceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.ServiceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceStatus = value["ServiceStatus"].GetInt64();
        m_serviceStatusHasBeenSet = true;
    }

    if (value.HasMember("MonitorStatus") && !value["MonitorStatus"].IsNull())
    {
        if (!value["MonitorStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.MonitorStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorStatus = value["MonitorStatus"].GetInt64();
        m_monitorStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PortsInfo") && !value["PortsInfo"].IsNull())
    {
        if (!value["PortsInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.PortsInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portsInfo = string(value["PortsInfo"].GetString());
        m_portsInfoHasBeenSet = true;
    }

    if (value.HasMember("LastRestartTime") && !value["LastRestartTime"].IsNull())
    {
        if (!value["LastRestartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.LastRestartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRestartTime = string(value["LastRestartTime"].GetString());
        m_lastRestartTimeHasBeenSet = true;
    }

    if (value.HasMember("Flag") && !value["Flag"].IsNull())
    {
        if (!value["Flag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.Flag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flag = value["Flag"].GetInt64();
        m_flagHasBeenSet = true;
    }

    if (value.HasMember("ConfGroupId") && !value["ConfGroupId"].IsNull())
    {
        if (!value["ConfGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.ConfGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confGroupId = value["ConfGroupId"].GetInt64();
        m_confGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ConfGroupName") && !value["ConfGroupName"].IsNull())
    {
        if (!value["ConfGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.ConfGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confGroupName = string(value["ConfGroupName"].GetString());
        m_confGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ConfStatus") && !value["ConfStatus"].IsNull())
    {
        if (!value["ConfStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.ConfStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confStatus = value["ConfStatus"].GetInt64();
        m_confStatusHasBeenSet = true;
    }

    if (value.HasMember("ServiceDetectionInfo") && !value["ServiceDetectionInfo"].IsNull())
    {
        if (!value["ServiceDetectionInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.ServiceDetectionInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceDetectionInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceProcessFunctionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceDetectionInfo.push_back(item);
        }
        m_serviceDetectionInfoHasBeenSet = true;
    }

    if (value.HasMember("NodeFlagFilter") && !value["NodeFlagFilter"].IsNull())
    {
        if (!value["NodeFlagFilter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.NodeFlagFilter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeFlagFilter = string(value["NodeFlagFilter"].GetString());
        m_nodeFlagFilterHasBeenSet = true;
    }

    if (value.HasMember("HealthStatus") && !value["HealthStatus"].IsNull())
    {
        if (!value["HealthStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.HealthStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthStatus.Deserialize(value["HealthStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthStatusHasBeenSet = true;
    }

    if (value.HasMember("IsSupportRoleMonitor") && !value["IsSupportRoleMonitor"].IsNull())
    {
        if (!value["IsSupportRoleMonitor"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.IsSupportRoleMonitor` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportRoleMonitor = value["IsSupportRoleMonitor"].GetBool();
        m_isSupportRoleMonitorHasBeenSet = true;
    }

    if (value.HasMember("StopPolicies") && !value["StopPolicies"].IsNull())
    {
        if (!value["StopPolicies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.StopPolicies` is not array type"));

        const rapidjson::Value &tmpValue = value["StopPolicies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RestartPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_stopPolicies.push_back(item);
        }
        m_stopPoliciesHasBeenSet = true;
    }

    if (value.HasMember("HAState") && !value["HAState"].IsNull())
    {
        if (!value["HAState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.HAState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hAState = string(value["HAState"].GetString());
        m_hAStateHasBeenSet = true;
    }

    if (value.HasMember("NameService") && !value["NameService"].IsNull())
    {
        if (!value["NameService"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.NameService` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameService = string(value["NameService"].GetString());
        m_nameServiceHasBeenSet = true;
    }

    if (value.HasMember("IsFederation") && !value["IsFederation"].IsNull())
    {
        if (!value["IsFederation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.IsFederation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFederation = value["IsFederation"].GetBool();
        m_isFederationHasBeenSet = true;
    }

    if (value.HasMember("DataNodeMaintenanceState") && !value["DataNodeMaintenanceState"].IsNull())
    {
        if (!value["DataNodeMaintenanceState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceNodeDetailInfo.DataNodeMaintenanceState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataNodeMaintenanceState = value["DataNodeMaintenanceState"].GetInt64();
        m_dataNodeMaintenanceStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceNodeDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeType, allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceStatus, allocator);
    }

    if (m_monitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorStatus, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_portsInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portsInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_lastRestartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRestartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRestartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flag, allocator);
    }

    if (m_confGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confGroupId, allocator);
    }

    if (m_confGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_confStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confStatus, allocator);
    }

    if (m_serviceDetectionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceDetectionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceDetectionInfo.begin(); itr != m_serviceDetectionInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nodeFlagFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeFlagFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeFlagFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_healthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isSupportRoleMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportRoleMonitor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportRoleMonitor, allocator);
    }

    if (m_stopPoliciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopPolicies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stopPolicies.begin(); itr != m_stopPolicies.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hAStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HAState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hAState.c_str(), allocator).Move(), allocator);
    }

    if (m_nameServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameService.c_str(), allocator).Move(), allocator);
    }

    if (m_isFederationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFederation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFederation, allocator);
    }

    if (m_dataNodeMaintenanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataNodeMaintenanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataNodeMaintenanceState, allocator);
    }

}


string ServiceNodeDetailInfo::GetIp() const
{
    return m_ip;
}

void ServiceNodeDetailInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool ServiceNodeDetailInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t ServiceNodeDetailInfo::GetNodeType() const
{
    return m_nodeType;
}

void ServiceNodeDetailInfo::SetNodeType(const int64_t& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ServiceNodeDetailInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string ServiceNodeDetailInfo::GetNodeName() const
{
    return m_nodeName;
}

void ServiceNodeDetailInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool ServiceNodeDetailInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

int64_t ServiceNodeDetailInfo::GetServiceStatus() const
{
    return m_serviceStatus;
}

void ServiceNodeDetailInfo::SetServiceStatus(const int64_t& _serviceStatus)
{
    m_serviceStatus = _serviceStatus;
    m_serviceStatusHasBeenSet = true;
}

bool ServiceNodeDetailInfo::ServiceStatusHasBeenSet() const
{
    return m_serviceStatusHasBeenSet;
}

int64_t ServiceNodeDetailInfo::GetMonitorStatus() const
{
    return m_monitorStatus;
}

void ServiceNodeDetailInfo::SetMonitorStatus(const int64_t& _monitorStatus)
{
    m_monitorStatus = _monitorStatus;
    m_monitorStatusHasBeenSet = true;
}

bool ServiceNodeDetailInfo::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}

int64_t ServiceNodeDetailInfo::GetStatus() const
{
    return m_status;
}

void ServiceNodeDetailInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServiceNodeDetailInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ServiceNodeDetailInfo::GetPortsInfo() const
{
    return m_portsInfo;
}

void ServiceNodeDetailInfo::SetPortsInfo(const string& _portsInfo)
{
    m_portsInfo = _portsInfo;
    m_portsInfoHasBeenSet = true;
}

bool ServiceNodeDetailInfo::PortsInfoHasBeenSet() const
{
    return m_portsInfoHasBeenSet;
}

string ServiceNodeDetailInfo::GetLastRestartTime() const
{
    return m_lastRestartTime;
}

void ServiceNodeDetailInfo::SetLastRestartTime(const string& _lastRestartTime)
{
    m_lastRestartTime = _lastRestartTime;
    m_lastRestartTimeHasBeenSet = true;
}

bool ServiceNodeDetailInfo::LastRestartTimeHasBeenSet() const
{
    return m_lastRestartTimeHasBeenSet;
}

int64_t ServiceNodeDetailInfo::GetFlag() const
{
    return m_flag;
}

void ServiceNodeDetailInfo::SetFlag(const int64_t& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool ServiceNodeDetailInfo::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

int64_t ServiceNodeDetailInfo::GetConfGroupId() const
{
    return m_confGroupId;
}

void ServiceNodeDetailInfo::SetConfGroupId(const int64_t& _confGroupId)
{
    m_confGroupId = _confGroupId;
    m_confGroupIdHasBeenSet = true;
}

bool ServiceNodeDetailInfo::ConfGroupIdHasBeenSet() const
{
    return m_confGroupIdHasBeenSet;
}

string ServiceNodeDetailInfo::GetConfGroupName() const
{
    return m_confGroupName;
}

void ServiceNodeDetailInfo::SetConfGroupName(const string& _confGroupName)
{
    m_confGroupName = _confGroupName;
    m_confGroupNameHasBeenSet = true;
}

bool ServiceNodeDetailInfo::ConfGroupNameHasBeenSet() const
{
    return m_confGroupNameHasBeenSet;
}

int64_t ServiceNodeDetailInfo::GetConfStatus() const
{
    return m_confStatus;
}

void ServiceNodeDetailInfo::SetConfStatus(const int64_t& _confStatus)
{
    m_confStatus = _confStatus;
    m_confStatusHasBeenSet = true;
}

bool ServiceNodeDetailInfo::ConfStatusHasBeenSet() const
{
    return m_confStatusHasBeenSet;
}

vector<ServiceProcessFunctionInfo> ServiceNodeDetailInfo::GetServiceDetectionInfo() const
{
    return m_serviceDetectionInfo;
}

void ServiceNodeDetailInfo::SetServiceDetectionInfo(const vector<ServiceProcessFunctionInfo>& _serviceDetectionInfo)
{
    m_serviceDetectionInfo = _serviceDetectionInfo;
    m_serviceDetectionInfoHasBeenSet = true;
}

bool ServiceNodeDetailInfo::ServiceDetectionInfoHasBeenSet() const
{
    return m_serviceDetectionInfoHasBeenSet;
}

string ServiceNodeDetailInfo::GetNodeFlagFilter() const
{
    return m_nodeFlagFilter;
}

void ServiceNodeDetailInfo::SetNodeFlagFilter(const string& _nodeFlagFilter)
{
    m_nodeFlagFilter = _nodeFlagFilter;
    m_nodeFlagFilterHasBeenSet = true;
}

bool ServiceNodeDetailInfo::NodeFlagFilterHasBeenSet() const
{
    return m_nodeFlagFilterHasBeenSet;
}

HealthStatus ServiceNodeDetailInfo::GetHealthStatus() const
{
    return m_healthStatus;
}

void ServiceNodeDetailInfo::SetHealthStatus(const HealthStatus& _healthStatus)
{
    m_healthStatus = _healthStatus;
    m_healthStatusHasBeenSet = true;
}

bool ServiceNodeDetailInfo::HealthStatusHasBeenSet() const
{
    return m_healthStatusHasBeenSet;
}

bool ServiceNodeDetailInfo::GetIsSupportRoleMonitor() const
{
    return m_isSupportRoleMonitor;
}

void ServiceNodeDetailInfo::SetIsSupportRoleMonitor(const bool& _isSupportRoleMonitor)
{
    m_isSupportRoleMonitor = _isSupportRoleMonitor;
    m_isSupportRoleMonitorHasBeenSet = true;
}

bool ServiceNodeDetailInfo::IsSupportRoleMonitorHasBeenSet() const
{
    return m_isSupportRoleMonitorHasBeenSet;
}

vector<RestartPolicy> ServiceNodeDetailInfo::GetStopPolicies() const
{
    return m_stopPolicies;
}

void ServiceNodeDetailInfo::SetStopPolicies(const vector<RestartPolicy>& _stopPolicies)
{
    m_stopPolicies = _stopPolicies;
    m_stopPoliciesHasBeenSet = true;
}

bool ServiceNodeDetailInfo::StopPoliciesHasBeenSet() const
{
    return m_stopPoliciesHasBeenSet;
}

string ServiceNodeDetailInfo::GetHAState() const
{
    return m_hAState;
}

void ServiceNodeDetailInfo::SetHAState(const string& _hAState)
{
    m_hAState = _hAState;
    m_hAStateHasBeenSet = true;
}

bool ServiceNodeDetailInfo::HAStateHasBeenSet() const
{
    return m_hAStateHasBeenSet;
}

string ServiceNodeDetailInfo::GetNameService() const
{
    return m_nameService;
}

void ServiceNodeDetailInfo::SetNameService(const string& _nameService)
{
    m_nameService = _nameService;
    m_nameServiceHasBeenSet = true;
}

bool ServiceNodeDetailInfo::NameServiceHasBeenSet() const
{
    return m_nameServiceHasBeenSet;
}

bool ServiceNodeDetailInfo::GetIsFederation() const
{
    return m_isFederation;
}

void ServiceNodeDetailInfo::SetIsFederation(const bool& _isFederation)
{
    m_isFederation = _isFederation;
    m_isFederationHasBeenSet = true;
}

bool ServiceNodeDetailInfo::IsFederationHasBeenSet() const
{
    return m_isFederationHasBeenSet;
}

int64_t ServiceNodeDetailInfo::GetDataNodeMaintenanceState() const
{
    return m_dataNodeMaintenanceState;
}

void ServiceNodeDetailInfo::SetDataNodeMaintenanceState(const int64_t& _dataNodeMaintenanceState)
{
    m_dataNodeMaintenanceState = _dataNodeMaintenanceState;
    m_dataNodeMaintenanceStateHasBeenSet = true;
}

bool ServiceNodeDetailInfo::DataNodeMaintenanceStateHasBeenSet() const
{
    return m_dataNodeMaintenanceStateHasBeenSet;
}

