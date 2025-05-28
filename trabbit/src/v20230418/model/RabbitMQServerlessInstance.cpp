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

#include <tencentcloud/trabbit/v20230418/model/RabbitMQServerlessInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

RabbitMQServerlessInstance::RabbitMQServerlessInstance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_maxTpsHasBeenSet(false),
    m_maxBandWidthHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_exceptionInformationHasBeenSet(false),
    m_publicAccessEndpointHasBeenSet(false),
    m_vpcsHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_maxStorageHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false),
    m_serverlessExtHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQServerlessInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceVersion") && !value["InstanceVersion"].IsNull())
    {
        if (!value["InstanceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.InstanceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersion = string(value["InstanceVersion"].GetString());
        m_instanceVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MaxTps") && !value["MaxTps"].IsNull())
    {
        if (!value["MaxTps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.MaxTps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTps = value["MaxTps"].GetInt64();
        m_maxTpsHasBeenSet = true;
    }

    if (value.HasMember("MaxBandWidth") && !value["MaxBandWidth"].IsNull())
    {
        if (!value["MaxBandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.MaxBandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandWidth = value["MaxBandWidth"].GetInt64();
        m_maxBandWidthHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("ExceptionInformation") && !value["ExceptionInformation"].IsNull())
    {
        if (!value["ExceptionInformation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.ExceptionInformation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionInformation = string(value["ExceptionInformation"].GetString());
        m_exceptionInformationHasBeenSet = true;
    }

    if (value.HasMember("PublicAccessEndpoint") && !value["PublicAccessEndpoint"].IsNull())
    {
        if (!value["PublicAccessEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.PublicAccessEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicAccessEndpoint = string(value["PublicAccessEndpoint"].GetString());
        m_publicAccessEndpointHasBeenSet = true;
    }

    if (value.HasMember("Vpcs") && !value["Vpcs"].IsNull())
    {
        if (!value["Vpcs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.Vpcs` is not array type"));

        const rapidjson::Value &tmpValue = value["Vpcs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RabbitMQServerlessEndpoint item;
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

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.ClusterStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = value["ClusterStatus"].GetInt64();
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.InstanceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetUint64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.NodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetInt64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("MaxStorage") && !value["MaxStorage"].IsNull())
    {
        if (!value["MaxStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.MaxStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorage = value["MaxStorage"].GetInt64();
        m_maxStorageHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.IsolatedTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = value["IsolatedTime"].GetUint64();
        m_isolatedTimeHasBeenSet = true;
    }

    if (value.HasMember("ServerlessExt") && !value["ServerlessExt"].IsNull())
    {
        if (!value["ServerlessExt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessInstance.ServerlessExt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverlessExt = string(value["ServerlessExt"].GetString());
        m_serverlessExtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQServerlessInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterStatus, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_maxStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorage, allocator);
    }

    if (m_isolatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolatedTime, allocator);
    }

    if (m_serverlessExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerlessExt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverlessExt.c_str(), allocator).Move(), allocator);
    }

}


string RabbitMQServerlessInstance::GetInstanceId() const
{
    return m_instanceId;
}

void RabbitMQServerlessInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RabbitMQServerlessInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RabbitMQServerlessInstance::GetInstanceName() const
{
    return m_instanceName;
}

void RabbitMQServerlessInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool RabbitMQServerlessInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string RabbitMQServerlessInstance::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void RabbitMQServerlessInstance::SetInstanceVersion(const string& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool RabbitMQServerlessInstance::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

int64_t RabbitMQServerlessInstance::GetStatus() const
{
    return m_status;
}

void RabbitMQServerlessInstance::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RabbitMQServerlessInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RabbitMQServerlessInstance::GetMaxTps() const
{
    return m_maxTps;
}

void RabbitMQServerlessInstance::SetMaxTps(const int64_t& _maxTps)
{
    m_maxTps = _maxTps;
    m_maxTpsHasBeenSet = true;
}

bool RabbitMQServerlessInstance::MaxTpsHasBeenSet() const
{
    return m_maxTpsHasBeenSet;
}

int64_t RabbitMQServerlessInstance::GetMaxBandWidth() const
{
    return m_maxBandWidth;
}

void RabbitMQServerlessInstance::SetMaxBandWidth(const int64_t& _maxBandWidth)
{
    m_maxBandWidth = _maxBandWidth;
    m_maxBandWidthHasBeenSet = true;
}

bool RabbitMQServerlessInstance::MaxBandWidthHasBeenSet() const
{
    return m_maxBandWidthHasBeenSet;
}

uint64_t RabbitMQServerlessInstance::GetExpireTime() const
{
    return m_expireTime;
}

void RabbitMQServerlessInstance::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool RabbitMQServerlessInstance::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t RabbitMQServerlessInstance::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void RabbitMQServerlessInstance::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool RabbitMQServerlessInstance::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

uint64_t RabbitMQServerlessInstance::GetPayMode() const
{
    return m_payMode;
}

void RabbitMQServerlessInstance::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool RabbitMQServerlessInstance::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string RabbitMQServerlessInstance::GetRemark() const
{
    return m_remark;
}

void RabbitMQServerlessInstance::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RabbitMQServerlessInstance::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RabbitMQServerlessInstance::GetSpecName() const
{
    return m_specName;
}

void RabbitMQServerlessInstance::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool RabbitMQServerlessInstance::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

string RabbitMQServerlessInstance::GetExceptionInformation() const
{
    return m_exceptionInformation;
}

void RabbitMQServerlessInstance::SetExceptionInformation(const string& _exceptionInformation)
{
    m_exceptionInformation = _exceptionInformation;
    m_exceptionInformationHasBeenSet = true;
}

bool RabbitMQServerlessInstance::ExceptionInformationHasBeenSet() const
{
    return m_exceptionInformationHasBeenSet;
}

string RabbitMQServerlessInstance::GetPublicAccessEndpoint() const
{
    return m_publicAccessEndpoint;
}

void RabbitMQServerlessInstance::SetPublicAccessEndpoint(const string& _publicAccessEndpoint)
{
    m_publicAccessEndpoint = _publicAccessEndpoint;
    m_publicAccessEndpointHasBeenSet = true;
}

bool RabbitMQServerlessInstance::PublicAccessEndpointHasBeenSet() const
{
    return m_publicAccessEndpointHasBeenSet;
}

vector<RabbitMQServerlessEndpoint> RabbitMQServerlessInstance::GetVpcs() const
{
    return m_vpcs;
}

void RabbitMQServerlessInstance::SetVpcs(const vector<RabbitMQServerlessEndpoint>& _vpcs)
{
    m_vpcs = _vpcs;
    m_vpcsHasBeenSet = true;
}

bool RabbitMQServerlessInstance::VpcsHasBeenSet() const
{
    return m_vpcsHasBeenSet;
}

int64_t RabbitMQServerlessInstance::GetClusterStatus() const
{
    return m_clusterStatus;
}

void RabbitMQServerlessInstance::SetClusterStatus(const int64_t& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool RabbitMQServerlessInstance::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

uint64_t RabbitMQServerlessInstance::GetInstanceType() const
{
    return m_instanceType;
}

void RabbitMQServerlessInstance::SetInstanceType(const uint64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool RabbitMQServerlessInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t RabbitMQServerlessInstance::GetCreateTime() const
{
    return m_createTime;
}

void RabbitMQServerlessInstance::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RabbitMQServerlessInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t RabbitMQServerlessInstance::GetNodeCount() const
{
    return m_nodeCount;
}

void RabbitMQServerlessInstance::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool RabbitMQServerlessInstance::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

int64_t RabbitMQServerlessInstance::GetMaxStorage() const
{
    return m_maxStorage;
}

void RabbitMQServerlessInstance::SetMaxStorage(const int64_t& _maxStorage)
{
    m_maxStorage = _maxStorage;
    m_maxStorageHasBeenSet = true;
}

bool RabbitMQServerlessInstance::MaxStorageHasBeenSet() const
{
    return m_maxStorageHasBeenSet;
}

uint64_t RabbitMQServerlessInstance::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void RabbitMQServerlessInstance::SetIsolatedTime(const uint64_t& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool RabbitMQServerlessInstance::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
}

string RabbitMQServerlessInstance::GetServerlessExt() const
{
    return m_serverlessExt;
}

void RabbitMQServerlessInstance::SetServerlessExt(const string& _serverlessExt)
{
    m_serverlessExt = _serverlessExt;
    m_serverlessExtHasBeenSet = true;
}

bool RabbitMQServerlessInstance::ServerlessExtHasBeenSet() const
{
    return m_serverlessExtHasBeenSet;
}

