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

#include <tencentcloud/tdmq/v20200217/model/PrometheusEndpointInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

PrometheusEndpointInfo::PrometheusEndpointInfo() :
    m_prometheusEndpointStatusHasBeenSet(false),
    m_vpcPrometheusEndpointHasBeenSet(false),
    m_nodePrometheusAddressHasBeenSet(false),
    m_vpcEndpointInfoHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusEndpointInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrometheusEndpointStatus") && !value["PrometheusEndpointStatus"].IsNull())
    {
        if (!value["PrometheusEndpointStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusEndpointInfo.PrometheusEndpointStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prometheusEndpointStatus = string(value["PrometheusEndpointStatus"].GetString());
        m_prometheusEndpointStatusHasBeenSet = true;
    }

    if (value.HasMember("VpcPrometheusEndpoint") && !value["VpcPrometheusEndpoint"].IsNull())
    {
        if (!value["VpcPrometheusEndpoint"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusEndpointInfo.VpcPrometheusEndpoint` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcPrometheusEndpoint"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vpcPrometheusEndpoint.push_back((*itr).GetString());
        }
        m_vpcPrometheusEndpointHasBeenSet = true;
    }

    if (value.HasMember("NodePrometheusAddress") && !value["NodePrometheusAddress"].IsNull())
    {
        if (!value["NodePrometheusAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusEndpointInfo.NodePrometheusAddress` is not array type"));

        const rapidjson::Value &tmpValue = value["NodePrometheusAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nodePrometheusAddress.push_back((*itr).GetString());
        }
        m_nodePrometheusAddressHasBeenSet = true;
    }

    if (value.HasMember("VpcEndpointInfo") && !value["VpcEndpointInfo"].IsNull())
    {
        if (!value["VpcEndpointInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusEndpointInfo.VpcEndpointInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vpcEndpointInfo.Deserialize(value["VpcEndpointInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vpcEndpointInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusEndpointInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_prometheusEndpointStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrometheusEndpointStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prometheusEndpointStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcPrometheusEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcPrometheusEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcPrometheusEndpoint.begin(); itr != m_vpcPrometheusEndpoint.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nodePrometheusAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePrometheusAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodePrometheusAddress.begin(); itr != m_nodePrometheusAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcEndpointInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcEndpointInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcEndpointInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string PrometheusEndpointInfo::GetPrometheusEndpointStatus() const
{
    return m_prometheusEndpointStatus;
}

void PrometheusEndpointInfo::SetPrometheusEndpointStatus(const string& _prometheusEndpointStatus)
{
    m_prometheusEndpointStatus = _prometheusEndpointStatus;
    m_prometheusEndpointStatusHasBeenSet = true;
}

bool PrometheusEndpointInfo::PrometheusEndpointStatusHasBeenSet() const
{
    return m_prometheusEndpointStatusHasBeenSet;
}

vector<string> PrometheusEndpointInfo::GetVpcPrometheusEndpoint() const
{
    return m_vpcPrometheusEndpoint;
}

void PrometheusEndpointInfo::SetVpcPrometheusEndpoint(const vector<string>& _vpcPrometheusEndpoint)
{
    m_vpcPrometheusEndpoint = _vpcPrometheusEndpoint;
    m_vpcPrometheusEndpointHasBeenSet = true;
}

bool PrometheusEndpointInfo::VpcPrometheusEndpointHasBeenSet() const
{
    return m_vpcPrometheusEndpointHasBeenSet;
}

vector<string> PrometheusEndpointInfo::GetNodePrometheusAddress() const
{
    return m_nodePrometheusAddress;
}

void PrometheusEndpointInfo::SetNodePrometheusAddress(const vector<string>& _nodePrometheusAddress)
{
    m_nodePrometheusAddress = _nodePrometheusAddress;
    m_nodePrometheusAddressHasBeenSet = true;
}

bool PrometheusEndpointInfo::NodePrometheusAddressHasBeenSet() const
{
    return m_nodePrometheusAddressHasBeenSet;
}

VpcEndpointInfo PrometheusEndpointInfo::GetVpcEndpointInfo() const
{
    return m_vpcEndpointInfo;
}

void PrometheusEndpointInfo::SetVpcEndpointInfo(const VpcEndpointInfo& _vpcEndpointInfo)
{
    m_vpcEndpointInfo = _vpcEndpointInfo;
    m_vpcEndpointInfoHasBeenSet = true;
}

bool PrometheusEndpointInfo::VpcEndpointInfoHasBeenSet() const
{
    return m_vpcEndpointInfoHasBeenSet;
}

