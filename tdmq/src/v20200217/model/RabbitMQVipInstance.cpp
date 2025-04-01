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

#include <tencentcloud/tdmq/v20200217/model/RabbitMQVipInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RabbitMQVipInstance::RabbitMQVipInstance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_configDisplayHasBeenSet(false),
    m_maxTpsHasBeenSet(false),
    m_maxBandWidthHasBeenSet(false),
    m_maxStorageHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_exceptionInformationHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_publicAccessEndpointHasBeenSet(false),
    m_vpcsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQVipInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceVersion") && !value["InstanceVersion"].IsNull())
    {
        if (!value["InstanceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.InstanceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersion = string(value["InstanceVersion"].GetString());
        m_instanceVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("ConfigDisplay") && !value["ConfigDisplay"].IsNull())
    {
        if (!value["ConfigDisplay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.ConfigDisplay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configDisplay = string(value["ConfigDisplay"].GetString());
        m_configDisplayHasBeenSet = true;
    }

    if (value.HasMember("MaxTps") && !value["MaxTps"].IsNull())
    {
        if (!value["MaxTps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.MaxTps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTps = value["MaxTps"].GetUint64();
        m_maxTpsHasBeenSet = true;
    }

    if (value.HasMember("MaxBandWidth") && !value["MaxBandWidth"].IsNull())
    {
        if (!value["MaxBandWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.MaxBandWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandWidth = value["MaxBandWidth"].GetUint64();
        m_maxBandWidthHasBeenSet = true;
    }

    if (value.HasMember("MaxStorage") && !value["MaxStorage"].IsNull())
    {
        if (!value["MaxStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.MaxStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorage = value["MaxStorage"].GetUint64();
        m_maxStorageHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("ExceptionInformation") && !value["ExceptionInformation"].IsNull())
    {
        if (!value["ExceptionInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.ExceptionInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionInformation = string(value["ExceptionInformation"].GetString());
        m_exceptionInformationHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.ClusterStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = value["ClusterStatus"].GetInt64();
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("PublicAccessEndpoint") && !value["PublicAccessEndpoint"].IsNull())
    {
        if (!value["PublicAccessEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.PublicAccessEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicAccessEndpoint = string(value["PublicAccessEndpoint"].GetString());
        m_publicAccessEndpointHasBeenSet = true;
    }

    if (value.HasMember("Vpcs") && !value["Vpcs"].IsNull())
    {
        if (!value["Vpcs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.Vpcs` is not array type"));

        const rapidjson::Value &tmpValue = value["Vpcs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcEndpointInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcs.push_back(item);
        }
        m_vpcsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.InstanceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetUint64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQVipInstance.IsolatedTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = value["IsolatedTime"].GetUint64();
        m_isolatedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQVipInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_configDisplayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigDisplay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configDisplay.c_str(), allocator).Move(), allocator);
    }

    if (m_maxTpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTps, allocator);
    }

    if (m_maxBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandWidth, allocator);
    }

    if (m_maxStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorage, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_exceptionInformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionInformation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exceptionInformation.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterStatus, allocator);
    }

    if (m_publicAccessEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAccessEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicAccessEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vpcs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcs.begin(); itr != m_vpcs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_isolatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolatedTime, allocator);
    }

}


string RabbitMQVipInstance::GetInstanceId() const
{
    return m_instanceId;
}

void RabbitMQVipInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RabbitMQVipInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RabbitMQVipInstance::GetInstanceName() const
{
    return m_instanceName;
}

void RabbitMQVipInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool RabbitMQVipInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string RabbitMQVipInstance::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void RabbitMQVipInstance::SetInstanceVersion(const string& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool RabbitMQVipInstance::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

uint64_t RabbitMQVipInstance::GetStatus() const
{
    return m_status;
}

void RabbitMQVipInstance::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RabbitMQVipInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t RabbitMQVipInstance::GetNodeCount() const
{
    return m_nodeCount;
}

void RabbitMQVipInstance::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool RabbitMQVipInstance::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

string RabbitMQVipInstance::GetConfigDisplay() const
{
    return m_configDisplay;
}

void RabbitMQVipInstance::SetConfigDisplay(const string& _configDisplay)
{
    m_configDisplay = _configDisplay;
    m_configDisplayHasBeenSet = true;
}

bool RabbitMQVipInstance::ConfigDisplayHasBeenSet() const
{
    return m_configDisplayHasBeenSet;
}

uint64_t RabbitMQVipInstance::GetMaxTps() const
{
    return m_maxTps;
}

void RabbitMQVipInstance::SetMaxTps(const uint64_t& _maxTps)
{
    m_maxTps = _maxTps;
    m_maxTpsHasBeenSet = true;
}

bool RabbitMQVipInstance::MaxTpsHasBeenSet() const
{
    return m_maxTpsHasBeenSet;
}

uint64_t RabbitMQVipInstance::GetMaxBandWidth() const
{
    return m_maxBandWidth;
}

void RabbitMQVipInstance::SetMaxBandWidth(const uint64_t& _maxBandWidth)
{
    m_maxBandWidth = _maxBandWidth;
    m_maxBandWidthHasBeenSet = true;
}

bool RabbitMQVipInstance::MaxBandWidthHasBeenSet() const
{
    return m_maxBandWidthHasBeenSet;
}

uint64_t RabbitMQVipInstance::GetMaxStorage() const
{
    return m_maxStorage;
}

void RabbitMQVipInstance::SetMaxStorage(const uint64_t& _maxStorage)
{
    m_maxStorage = _maxStorage;
    m_maxStorageHasBeenSet = true;
}

bool RabbitMQVipInstance::MaxStorageHasBeenSet() const
{
    return m_maxStorageHasBeenSet;
}

uint64_t RabbitMQVipInstance::GetExpireTime() const
{
    return m_expireTime;
}

void RabbitMQVipInstance::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool RabbitMQVipInstance::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t RabbitMQVipInstance::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void RabbitMQVipInstance::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool RabbitMQVipInstance::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

uint64_t RabbitMQVipInstance::GetPayMode() const
{
    return m_payMode;
}

void RabbitMQVipInstance::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool RabbitMQVipInstance::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string RabbitMQVipInstance::GetRemark() const
{
    return m_remark;
}

void RabbitMQVipInstance::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RabbitMQVipInstance::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RabbitMQVipInstance::GetSpecName() const
{
    return m_specName;
}

void RabbitMQVipInstance::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool RabbitMQVipInstance::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

string RabbitMQVipInstance::GetExceptionInformation() const
{
    return m_exceptionInformation;
}

void RabbitMQVipInstance::SetExceptionInformation(const string& _exceptionInformation)
{
    m_exceptionInformation = _exceptionInformation;
    m_exceptionInformationHasBeenSet = true;
}

bool RabbitMQVipInstance::ExceptionInformationHasBeenSet() const
{
    return m_exceptionInformationHasBeenSet;
}

int64_t RabbitMQVipInstance::GetClusterStatus() const
{
    return m_clusterStatus;
}

void RabbitMQVipInstance::SetClusterStatus(const int64_t& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool RabbitMQVipInstance::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

string RabbitMQVipInstance::GetPublicAccessEndpoint() const
{
    return m_publicAccessEndpoint;
}

void RabbitMQVipInstance::SetPublicAccessEndpoint(const string& _publicAccessEndpoint)
{
    m_publicAccessEndpoint = _publicAccessEndpoint;
    m_publicAccessEndpointHasBeenSet = true;
}

bool RabbitMQVipInstance::PublicAccessEndpointHasBeenSet() const
{
    return m_publicAccessEndpointHasBeenSet;
}

vector<VpcEndpointInfo> RabbitMQVipInstance::GetVpcs() const
{
    return m_vpcs;
}

void RabbitMQVipInstance::SetVpcs(const vector<VpcEndpointInfo>& _vpcs)
{
    m_vpcs = _vpcs;
    m_vpcsHasBeenSet = true;
}

bool RabbitMQVipInstance::VpcsHasBeenSet() const
{
    return m_vpcsHasBeenSet;
}

uint64_t RabbitMQVipInstance::GetCreateTime() const
{
    return m_createTime;
}

void RabbitMQVipInstance::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RabbitMQVipInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t RabbitMQVipInstance::GetInstanceType() const
{
    return m_instanceType;
}

void RabbitMQVipInstance::SetInstanceType(const uint64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool RabbitMQVipInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t RabbitMQVipInstance::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void RabbitMQVipInstance::SetIsolatedTime(const uint64_t& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool RabbitMQVipInstance::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
}

