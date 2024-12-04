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
    m_qosPolicyIdHasBeenSet(false)
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

