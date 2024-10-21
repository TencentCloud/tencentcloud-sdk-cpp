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

#include <tencentcloud/trocket/v20230308/model/Endpoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

Endpoint::Endpoint() :
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_endpointUrlHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_ipRulesHasBeenSet(false),
    m_billingFlowHasBeenSet(false)
{
}

CoreInternalOutcome Endpoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("EndpointUrl") && !value["EndpointUrl"].IsNull())
    {
        if (!value["EndpointUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.EndpointUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointUrl = string(value["EndpointUrl"].GetString());
        m_endpointUrlHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("IpRules") && !value["IpRules"].IsNull())
    {
        if (!value["IpRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Endpoint.IpRules` is not array type"));

        const rapidjson::Value &tmpValue = value["IpRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IpRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ipRules.push_back(item);
        }
        m_ipRulesHasBeenSet = true;
    }

    if (value.HasMember("BillingFlow") && !value["BillingFlow"].IsNull())
    {
        if (!value["BillingFlow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.BillingFlow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_billingFlow = value["BillingFlow"].GetBool();
        m_billingFlowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Endpoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_ipRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipRules.begin(); itr != m_ipRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_billingFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingFlow, allocator);
    }

}


string Endpoint::GetType() const
{
    return m_type;
}

void Endpoint::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Endpoint::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Endpoint::GetStatus() const
{
    return m_status;
}

void Endpoint::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Endpoint::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Endpoint::GetPayMode() const
{
    return m_payMode;
}

void Endpoint::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Endpoint::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string Endpoint::GetEndpointUrl() const
{
    return m_endpointUrl;
}

void Endpoint::SetEndpointUrl(const string& _endpointUrl)
{
    m_endpointUrl = _endpointUrl;
    m_endpointUrlHasBeenSet = true;
}

bool Endpoint::EndpointUrlHasBeenSet() const
{
    return m_endpointUrlHasBeenSet;
}

string Endpoint::GetVpcId() const
{
    return m_vpcId;
}

void Endpoint::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool Endpoint::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string Endpoint::GetSubnetId() const
{
    return m_subnetId;
}

void Endpoint::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool Endpoint::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t Endpoint::GetBandwidth() const
{
    return m_bandwidth;
}

void Endpoint::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool Endpoint::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

vector<IpRule> Endpoint::GetIpRules() const
{
    return m_ipRules;
}

void Endpoint::SetIpRules(const vector<IpRule>& _ipRules)
{
    m_ipRules = _ipRules;
    m_ipRulesHasBeenSet = true;
}

bool Endpoint::IpRulesHasBeenSet() const
{
    return m_ipRulesHasBeenSet;
}

bool Endpoint::GetBillingFlow() const
{
    return m_billingFlow;
}

void Endpoint::SetBillingFlow(const bool& _billingFlow)
{
    m_billingFlow = _billingFlow;
    m_billingFlowHasBeenSet = true;
}

bool Endpoint::BillingFlowHasBeenSet() const
{
    return m_billingFlowHasBeenSet;
}

