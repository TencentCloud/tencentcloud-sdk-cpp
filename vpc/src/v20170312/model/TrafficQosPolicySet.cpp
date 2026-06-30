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

#include <tencentcloud/vpc/v20170312/model/TrafficQosPolicySet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

TrafficQosPolicySet::TrafficQosPolicySet() :
    m_ccnIdHasBeenSet(false),
    m_qosIdHasBeenSet(false),
    m_qosPolicyDescriptionHasBeenSet(false),
    m_qosPolicyNameHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_qosPolicyIdHasBeenSet(false),
    m_qosLevelHasBeenSet(false),
    m_serviceLevelHasBeenSet(false),
    m_regionFlowControlIdHasBeenSet(false),
    m_localRegionHasBeenSet(false),
    m_remoteRegionHasBeenSet(false),
    m_trafficMatchPolicyIdHasBeenSet(false)
{
}

CoreInternalOutcome TrafficQosPolicySet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficQosPolicySet.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("QosId") && !value["QosId"].IsNull())
    {
        if (!value["QosId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficQosPolicySet.QosId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qosId = value["QosId"].GetUint64();
        m_qosIdHasBeenSet = true;
    }

    if (value.HasMember("QosPolicyDescription") && !value["QosPolicyDescription"].IsNull())
    {
        if (!value["QosPolicyDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficQosPolicySet.QosPolicyDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qosPolicyDescription = string(value["QosPolicyDescription"].GetString());
        m_qosPolicyDescriptionHasBeenSet = true;
    }

    if (value.HasMember("QosPolicyName") && !value["QosPolicyName"].IsNull())
    {
        if (!value["QosPolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficQosPolicySet.QosPolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qosPolicyName = string(value["QosPolicyName"].GetString());
        m_qosPolicyNameHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficQosPolicySet.Bandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetUint64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("QosPolicyId") && !value["QosPolicyId"].IsNull())
    {
        if (!value["QosPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficQosPolicySet.QosPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qosPolicyId = string(value["QosPolicyId"].GetString());
        m_qosPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("QosLevel") && !value["QosLevel"].IsNull())
    {
        if (!value["QosLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficQosPolicySet.QosLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qosLevel = string(value["QosLevel"].GetString());
        m_qosLevelHasBeenSet = true;
    }

    if (value.HasMember("ServiceLevel") && !value["ServiceLevel"].IsNull())
    {
        if (!value["ServiceLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficQosPolicySet.ServiceLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceLevel = string(value["ServiceLevel"].GetString());
        m_serviceLevelHasBeenSet = true;
    }

    if (value.HasMember("RegionFlowControlId") && !value["RegionFlowControlId"].IsNull())
    {
        if (!value["RegionFlowControlId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficQosPolicySet.RegionFlowControlId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionFlowControlId = string(value["RegionFlowControlId"].GetString());
        m_regionFlowControlIdHasBeenSet = true;
    }

    if (value.HasMember("LocalRegion") && !value["LocalRegion"].IsNull())
    {
        if (!value["LocalRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficQosPolicySet.LocalRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localRegion = string(value["LocalRegion"].GetString());
        m_localRegionHasBeenSet = true;
    }

    if (value.HasMember("RemoteRegion") && !value["RemoteRegion"].IsNull())
    {
        if (!value["RemoteRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficQosPolicySet.RemoteRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteRegion = string(value["RemoteRegion"].GetString());
        m_remoteRegionHasBeenSet = true;
    }

    if (value.HasMember("TrafficMatchPolicyId") && !value["TrafficMatchPolicyId"].IsNull())
    {
        if (!value["TrafficMatchPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficQosPolicySet.TrafficMatchPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMatchPolicyId = string(value["TrafficMatchPolicyId"].GetString());
        m_trafficMatchPolicyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficQosPolicySet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_qosIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QosId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qosId, allocator);
    }

    if (m_qosPolicyDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QosPolicyDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qosPolicyDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_qosPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QosPolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qosPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_qosPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QosPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qosPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_qosLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QosLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qosLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_regionFlowControlIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionFlowControlId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionFlowControlId.c_str(), allocator).Move(), allocator);
    }

    if (m_localRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficMatchPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMatchPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficMatchPolicyId.c_str(), allocator).Move(), allocator);
    }

}


string TrafficQosPolicySet::GetCcnId() const
{
    return m_ccnId;
}

void TrafficQosPolicySet::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool TrafficQosPolicySet::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

uint64_t TrafficQosPolicySet::GetQosId() const
{
    return m_qosId;
}

void TrafficQosPolicySet::SetQosId(const uint64_t& _qosId)
{
    m_qosId = _qosId;
    m_qosIdHasBeenSet = true;
}

bool TrafficQosPolicySet::QosIdHasBeenSet() const
{
    return m_qosIdHasBeenSet;
}

string TrafficQosPolicySet::GetQosPolicyDescription() const
{
    return m_qosPolicyDescription;
}

void TrafficQosPolicySet::SetQosPolicyDescription(const string& _qosPolicyDescription)
{
    m_qosPolicyDescription = _qosPolicyDescription;
    m_qosPolicyDescriptionHasBeenSet = true;
}

bool TrafficQosPolicySet::QosPolicyDescriptionHasBeenSet() const
{
    return m_qosPolicyDescriptionHasBeenSet;
}

string TrafficQosPolicySet::GetQosPolicyName() const
{
    return m_qosPolicyName;
}

void TrafficQosPolicySet::SetQosPolicyName(const string& _qosPolicyName)
{
    m_qosPolicyName = _qosPolicyName;
    m_qosPolicyNameHasBeenSet = true;
}

bool TrafficQosPolicySet::QosPolicyNameHasBeenSet() const
{
    return m_qosPolicyNameHasBeenSet;
}

uint64_t TrafficQosPolicySet::GetBandwidth() const
{
    return m_bandwidth;
}

void TrafficQosPolicySet::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool TrafficQosPolicySet::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string TrafficQosPolicySet::GetQosPolicyId() const
{
    return m_qosPolicyId;
}

void TrafficQosPolicySet::SetQosPolicyId(const string& _qosPolicyId)
{
    m_qosPolicyId = _qosPolicyId;
    m_qosPolicyIdHasBeenSet = true;
}

bool TrafficQosPolicySet::QosPolicyIdHasBeenSet() const
{
    return m_qosPolicyIdHasBeenSet;
}

string TrafficQosPolicySet::GetQosLevel() const
{
    return m_qosLevel;
}

void TrafficQosPolicySet::SetQosLevel(const string& _qosLevel)
{
    m_qosLevel = _qosLevel;
    m_qosLevelHasBeenSet = true;
}

bool TrafficQosPolicySet::QosLevelHasBeenSet() const
{
    return m_qosLevelHasBeenSet;
}

string TrafficQosPolicySet::GetServiceLevel() const
{
    return m_serviceLevel;
}

void TrafficQosPolicySet::SetServiceLevel(const string& _serviceLevel)
{
    m_serviceLevel = _serviceLevel;
    m_serviceLevelHasBeenSet = true;
}

bool TrafficQosPolicySet::ServiceLevelHasBeenSet() const
{
    return m_serviceLevelHasBeenSet;
}

string TrafficQosPolicySet::GetRegionFlowControlId() const
{
    return m_regionFlowControlId;
}

void TrafficQosPolicySet::SetRegionFlowControlId(const string& _regionFlowControlId)
{
    m_regionFlowControlId = _regionFlowControlId;
    m_regionFlowControlIdHasBeenSet = true;
}

bool TrafficQosPolicySet::RegionFlowControlIdHasBeenSet() const
{
    return m_regionFlowControlIdHasBeenSet;
}

string TrafficQosPolicySet::GetLocalRegion() const
{
    return m_localRegion;
}

void TrafficQosPolicySet::SetLocalRegion(const string& _localRegion)
{
    m_localRegion = _localRegion;
    m_localRegionHasBeenSet = true;
}

bool TrafficQosPolicySet::LocalRegionHasBeenSet() const
{
    return m_localRegionHasBeenSet;
}

string TrafficQosPolicySet::GetRemoteRegion() const
{
    return m_remoteRegion;
}

void TrafficQosPolicySet::SetRemoteRegion(const string& _remoteRegion)
{
    m_remoteRegion = _remoteRegion;
    m_remoteRegionHasBeenSet = true;
}

bool TrafficQosPolicySet::RemoteRegionHasBeenSet() const
{
    return m_remoteRegionHasBeenSet;
}

string TrafficQosPolicySet::GetTrafficMatchPolicyId() const
{
    return m_trafficMatchPolicyId;
}

void TrafficQosPolicySet::SetTrafficMatchPolicyId(const string& _trafficMatchPolicyId)
{
    m_trafficMatchPolicyId = _trafficMatchPolicyId;
    m_trafficMatchPolicyIdHasBeenSet = true;
}

bool TrafficQosPolicySet::TrafficMatchPolicyIdHasBeenSet() const
{
    return m_trafficMatchPolicyIdHasBeenSet;
}

