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

#include <tencentcloud/tse/v20201207/model/KongUpstreamInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

KongUpstreamInfo::KongUpstreamInfo() :
    m_hostHasBeenSet(false),
    m_portHasBeenSet(false),
    m_sourceIDHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_scfTypeHasBeenSet(false),
    m_scfNamespaceHasBeenSet(false),
    m_scfLambdaNameHasBeenSet(false),
    m_scfLambdaQualifierHasBeenSet(false),
    m_slowStartHasBeenSet(false),
    m_algorithmHasBeenSet(false),
    m_autoScalingGroupIDHasBeenSet(false),
    m_autoScalingCvmPortHasBeenSet(false),
    m_autoScalingTatCmdStatusHasBeenSet(false),
    m_autoScalingHookStatusHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_realSourceTypeHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_scfCamAuthEnableHasBeenSet(false),
    m_scfIsBase64EncodedHasBeenSet(false),
    m_scfIsIntegratedResponseHasBeenSet(false)
{
}

CoreInternalOutcome KongUpstreamInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("SourceID") && !value["SourceID"].IsNull())
    {
        if (!value["SourceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.SourceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceID = string(value["SourceID"].GetString());
        m_sourceIDHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("Targets") && !value["Targets"].IsNull())
    {
        if (!value["Targets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.Targets` is not array type"));

        const rapidjson::Value &tmpValue = value["Targets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KongTarget item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targets.push_back(item);
        }
        m_targetsHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ScfType") && !value["ScfType"].IsNull())
    {
        if (!value["ScfType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.ScfType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scfType = string(value["ScfType"].GetString());
        m_scfTypeHasBeenSet = true;
    }

    if (value.HasMember("ScfNamespace") && !value["ScfNamespace"].IsNull())
    {
        if (!value["ScfNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.ScfNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scfNamespace = string(value["ScfNamespace"].GetString());
        m_scfNamespaceHasBeenSet = true;
    }

    if (value.HasMember("ScfLambdaName") && !value["ScfLambdaName"].IsNull())
    {
        if (!value["ScfLambdaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.ScfLambdaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scfLambdaName = string(value["ScfLambdaName"].GetString());
        m_scfLambdaNameHasBeenSet = true;
    }

    if (value.HasMember("ScfLambdaQualifier") && !value["ScfLambdaQualifier"].IsNull())
    {
        if (!value["ScfLambdaQualifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.ScfLambdaQualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scfLambdaQualifier = string(value["ScfLambdaQualifier"].GetString());
        m_scfLambdaQualifierHasBeenSet = true;
    }

    if (value.HasMember("SlowStart") && !value["SlowStart"].IsNull())
    {
        if (!value["SlowStart"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.SlowStart` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_slowStart = value["SlowStart"].GetInt64();
        m_slowStartHasBeenSet = true;
    }

    if (value.HasMember("Algorithm") && !value["Algorithm"].IsNull())
    {
        if (!value["Algorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.Algorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algorithm = string(value["Algorithm"].GetString());
        m_algorithmHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingGroupID") && !value["AutoScalingGroupID"].IsNull())
    {
        if (!value["AutoScalingGroupID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.AutoScalingGroupID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupID = string(value["AutoScalingGroupID"].GetString());
        m_autoScalingGroupIDHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingCvmPort") && !value["AutoScalingCvmPort"].IsNull())
    {
        if (!value["AutoScalingCvmPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.AutoScalingCvmPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingCvmPort = value["AutoScalingCvmPort"].GetUint64();
        m_autoScalingCvmPortHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingTatCmdStatus") && !value["AutoScalingTatCmdStatus"].IsNull())
    {
        if (!value["AutoScalingTatCmdStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.AutoScalingTatCmdStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingTatCmdStatus = string(value["AutoScalingTatCmdStatus"].GetString());
        m_autoScalingTatCmdStatusHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingHookStatus") && !value["AutoScalingHookStatus"].IsNull())
    {
        if (!value["AutoScalingHookStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.AutoScalingHookStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingHookStatus = string(value["AutoScalingHookStatus"].GetString());
        m_autoScalingHookStatusHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("RealSourceType") && !value["RealSourceType"].IsNull())
    {
        if (!value["RealSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.RealSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realSourceType = string(value["RealSourceType"].GetString());
        m_realSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("HealthStatus") && !value["HealthStatus"].IsNull())
    {
        if (!value["HealthStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.HealthStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthStatus = string(value["HealthStatus"].GetString());
        m_healthStatusHasBeenSet = true;
    }

    if (value.HasMember("ScfCamAuthEnable") && !value["ScfCamAuthEnable"].IsNull())
    {
        if (!value["ScfCamAuthEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.ScfCamAuthEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scfCamAuthEnable = value["ScfCamAuthEnable"].GetBool();
        m_scfCamAuthEnableHasBeenSet = true;
    }

    if (value.HasMember("ScfIsBase64Encoded") && !value["ScfIsBase64Encoded"].IsNull())
    {
        if (!value["ScfIsBase64Encoded"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.ScfIsBase64Encoded` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scfIsBase64Encoded = value["ScfIsBase64Encoded"].GetBool();
        m_scfIsBase64EncodedHasBeenSet = true;
    }

    if (value.HasMember("ScfIsIntegratedResponse") && !value["ScfIsIntegratedResponse"].IsNull())
    {
        if (!value["ScfIsIntegratedResponse"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamInfo.ScfIsIntegratedResponse` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scfIsIntegratedResponse = value["ScfIsIntegratedResponse"].GetBool();
        m_scfIsIntegratedResponseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KongUpstreamInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_sourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Targets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targets.begin(); itr != m_targets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_scfTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScfType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scfType.c_str(), allocator).Move(), allocator);
    }

    if (m_scfNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScfNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scfNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_scfLambdaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScfLambdaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scfLambdaName.c_str(), allocator).Move(), allocator);
    }

    if (m_scfLambdaQualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScfLambdaQualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scfLambdaQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_slowStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlowStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_slowStart, allocator);
    }

    if (m_algorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Algorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalingGroupIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingGroupID.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalingCvmPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingCvmPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoScalingCvmPort, allocator);
    }

    if (m_autoScalingTatCmdStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingTatCmdStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingTatCmdStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalingHookStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingHookStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingHookStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_realSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_healthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_scfCamAuthEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScfCamAuthEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scfCamAuthEnable, allocator);
    }

    if (m_scfIsBase64EncodedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScfIsBase64Encoded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scfIsBase64Encoded, allocator);
    }

    if (m_scfIsIntegratedResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScfIsIntegratedResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scfIsIntegratedResponse, allocator);
    }

}


string KongUpstreamInfo::GetHost() const
{
    return m_host;
}

void KongUpstreamInfo::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool KongUpstreamInfo::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t KongUpstreamInfo::GetPort() const
{
    return m_port;
}

void KongUpstreamInfo::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool KongUpstreamInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string KongUpstreamInfo::GetSourceID() const
{
    return m_sourceID;
}

void KongUpstreamInfo::SetSourceID(const string& _sourceID)
{
    m_sourceID = _sourceID;
    m_sourceIDHasBeenSet = true;
}

bool KongUpstreamInfo::SourceIDHasBeenSet() const
{
    return m_sourceIDHasBeenSet;
}

string KongUpstreamInfo::GetNamespace() const
{
    return m_namespace;
}

void KongUpstreamInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool KongUpstreamInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string KongUpstreamInfo::GetServiceName() const
{
    return m_serviceName;
}

void KongUpstreamInfo::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool KongUpstreamInfo::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

vector<KongTarget> KongUpstreamInfo::GetTargets() const
{
    return m_targets;
}

void KongUpstreamInfo::SetTargets(const vector<KongTarget>& _targets)
{
    m_targets = _targets;
    m_targetsHasBeenSet = true;
}

bool KongUpstreamInfo::TargetsHasBeenSet() const
{
    return m_targetsHasBeenSet;
}

string KongUpstreamInfo::GetSourceType() const
{
    return m_sourceType;
}

void KongUpstreamInfo::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool KongUpstreamInfo::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string KongUpstreamInfo::GetScfType() const
{
    return m_scfType;
}

void KongUpstreamInfo::SetScfType(const string& _scfType)
{
    m_scfType = _scfType;
    m_scfTypeHasBeenSet = true;
}

bool KongUpstreamInfo::ScfTypeHasBeenSet() const
{
    return m_scfTypeHasBeenSet;
}

string KongUpstreamInfo::GetScfNamespace() const
{
    return m_scfNamespace;
}

void KongUpstreamInfo::SetScfNamespace(const string& _scfNamespace)
{
    m_scfNamespace = _scfNamespace;
    m_scfNamespaceHasBeenSet = true;
}

bool KongUpstreamInfo::ScfNamespaceHasBeenSet() const
{
    return m_scfNamespaceHasBeenSet;
}

string KongUpstreamInfo::GetScfLambdaName() const
{
    return m_scfLambdaName;
}

void KongUpstreamInfo::SetScfLambdaName(const string& _scfLambdaName)
{
    m_scfLambdaName = _scfLambdaName;
    m_scfLambdaNameHasBeenSet = true;
}

bool KongUpstreamInfo::ScfLambdaNameHasBeenSet() const
{
    return m_scfLambdaNameHasBeenSet;
}

string KongUpstreamInfo::GetScfLambdaQualifier() const
{
    return m_scfLambdaQualifier;
}

void KongUpstreamInfo::SetScfLambdaQualifier(const string& _scfLambdaQualifier)
{
    m_scfLambdaQualifier = _scfLambdaQualifier;
    m_scfLambdaQualifierHasBeenSet = true;
}

bool KongUpstreamInfo::ScfLambdaQualifierHasBeenSet() const
{
    return m_scfLambdaQualifierHasBeenSet;
}

int64_t KongUpstreamInfo::GetSlowStart() const
{
    return m_slowStart;
}

void KongUpstreamInfo::SetSlowStart(const int64_t& _slowStart)
{
    m_slowStart = _slowStart;
    m_slowStartHasBeenSet = true;
}

bool KongUpstreamInfo::SlowStartHasBeenSet() const
{
    return m_slowStartHasBeenSet;
}

string KongUpstreamInfo::GetAlgorithm() const
{
    return m_algorithm;
}

void KongUpstreamInfo::SetAlgorithm(const string& _algorithm)
{
    m_algorithm = _algorithm;
    m_algorithmHasBeenSet = true;
}

bool KongUpstreamInfo::AlgorithmHasBeenSet() const
{
    return m_algorithmHasBeenSet;
}

string KongUpstreamInfo::GetAutoScalingGroupID() const
{
    return m_autoScalingGroupID;
}

void KongUpstreamInfo::SetAutoScalingGroupID(const string& _autoScalingGroupID)
{
    m_autoScalingGroupID = _autoScalingGroupID;
    m_autoScalingGroupIDHasBeenSet = true;
}

bool KongUpstreamInfo::AutoScalingGroupIDHasBeenSet() const
{
    return m_autoScalingGroupIDHasBeenSet;
}

uint64_t KongUpstreamInfo::GetAutoScalingCvmPort() const
{
    return m_autoScalingCvmPort;
}

void KongUpstreamInfo::SetAutoScalingCvmPort(const uint64_t& _autoScalingCvmPort)
{
    m_autoScalingCvmPort = _autoScalingCvmPort;
    m_autoScalingCvmPortHasBeenSet = true;
}

bool KongUpstreamInfo::AutoScalingCvmPortHasBeenSet() const
{
    return m_autoScalingCvmPortHasBeenSet;
}

string KongUpstreamInfo::GetAutoScalingTatCmdStatus() const
{
    return m_autoScalingTatCmdStatus;
}

void KongUpstreamInfo::SetAutoScalingTatCmdStatus(const string& _autoScalingTatCmdStatus)
{
    m_autoScalingTatCmdStatus = _autoScalingTatCmdStatus;
    m_autoScalingTatCmdStatusHasBeenSet = true;
}

bool KongUpstreamInfo::AutoScalingTatCmdStatusHasBeenSet() const
{
    return m_autoScalingTatCmdStatusHasBeenSet;
}

string KongUpstreamInfo::GetAutoScalingHookStatus() const
{
    return m_autoScalingHookStatus;
}

void KongUpstreamInfo::SetAutoScalingHookStatus(const string& _autoScalingHookStatus)
{
    m_autoScalingHookStatus = _autoScalingHookStatus;
    m_autoScalingHookStatusHasBeenSet = true;
}

bool KongUpstreamInfo::AutoScalingHookStatusHasBeenSet() const
{
    return m_autoScalingHookStatusHasBeenSet;
}

string KongUpstreamInfo::GetSourceName() const
{
    return m_sourceName;
}

void KongUpstreamInfo::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool KongUpstreamInfo::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string KongUpstreamInfo::GetRealSourceType() const
{
    return m_realSourceType;
}

void KongUpstreamInfo::SetRealSourceType(const string& _realSourceType)
{
    m_realSourceType = _realSourceType;
    m_realSourceTypeHasBeenSet = true;
}

bool KongUpstreamInfo::RealSourceTypeHasBeenSet() const
{
    return m_realSourceTypeHasBeenSet;
}

string KongUpstreamInfo::GetHealthStatus() const
{
    return m_healthStatus;
}

void KongUpstreamInfo::SetHealthStatus(const string& _healthStatus)
{
    m_healthStatus = _healthStatus;
    m_healthStatusHasBeenSet = true;
}

bool KongUpstreamInfo::HealthStatusHasBeenSet() const
{
    return m_healthStatusHasBeenSet;
}

bool KongUpstreamInfo::GetScfCamAuthEnable() const
{
    return m_scfCamAuthEnable;
}

void KongUpstreamInfo::SetScfCamAuthEnable(const bool& _scfCamAuthEnable)
{
    m_scfCamAuthEnable = _scfCamAuthEnable;
    m_scfCamAuthEnableHasBeenSet = true;
}

bool KongUpstreamInfo::ScfCamAuthEnableHasBeenSet() const
{
    return m_scfCamAuthEnableHasBeenSet;
}

bool KongUpstreamInfo::GetScfIsBase64Encoded() const
{
    return m_scfIsBase64Encoded;
}

void KongUpstreamInfo::SetScfIsBase64Encoded(const bool& _scfIsBase64Encoded)
{
    m_scfIsBase64Encoded = _scfIsBase64Encoded;
    m_scfIsBase64EncodedHasBeenSet = true;
}

bool KongUpstreamInfo::ScfIsBase64EncodedHasBeenSet() const
{
    return m_scfIsBase64EncodedHasBeenSet;
}

bool KongUpstreamInfo::GetScfIsIntegratedResponse() const
{
    return m_scfIsIntegratedResponse;
}

void KongUpstreamInfo::SetScfIsIntegratedResponse(const bool& _scfIsIntegratedResponse)
{
    m_scfIsIntegratedResponse = _scfIsIntegratedResponse;
    m_scfIsIntegratedResponseHasBeenSet = true;
}

bool KongUpstreamInfo::ScfIsIntegratedResponseHasBeenSet() const
{
    return m_scfIsIntegratedResponseHasBeenSet;
}

