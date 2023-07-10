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

#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayBalancedService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CloudNativeAPIGatewayBalancedService::CloudNativeAPIGatewayBalancedService() :
    m_serviceIDHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_upstreamNameHasBeenSet(false),
    m_percentHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayBalancedService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceID") && !value["ServiceID"].IsNull())
    {
        if (!value["ServiceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayBalancedService.ServiceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceID = string(value["ServiceID"].GetString());
        m_serviceIDHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayBalancedService.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("UpstreamName") && !value["UpstreamName"].IsNull())
    {
        if (!value["UpstreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayBalancedService.UpstreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamName = string(value["UpstreamName"].GetString());
        m_upstreamNameHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayBalancedService.Percent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetDouble();
        m_percentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayBalancedService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceID.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamName.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

}


string CloudNativeAPIGatewayBalancedService::GetServiceID() const
{
    return m_serviceID;
}

void CloudNativeAPIGatewayBalancedService::SetServiceID(const string& _serviceID)
{
    m_serviceID = _serviceID;
    m_serviceIDHasBeenSet = true;
}

bool CloudNativeAPIGatewayBalancedService::ServiceIDHasBeenSet() const
{
    return m_serviceIDHasBeenSet;
}

string CloudNativeAPIGatewayBalancedService::GetServiceName() const
{
    return m_serviceName;
}

void CloudNativeAPIGatewayBalancedService::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool CloudNativeAPIGatewayBalancedService::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string CloudNativeAPIGatewayBalancedService::GetUpstreamName() const
{
    return m_upstreamName;
}

void CloudNativeAPIGatewayBalancedService::SetUpstreamName(const string& _upstreamName)
{
    m_upstreamName = _upstreamName;
    m_upstreamNameHasBeenSet = true;
}

bool CloudNativeAPIGatewayBalancedService::UpstreamNameHasBeenSet() const
{
    return m_upstreamNameHasBeenSet;
}

double CloudNativeAPIGatewayBalancedService::GetPercent() const
{
    return m_percent;
}

void CloudNativeAPIGatewayBalancedService::SetPercent(const double& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool CloudNativeAPIGatewayBalancedService::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

