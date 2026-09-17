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

#include <tencentcloud/edgezone/v20260401/model/PublicNetworkSegment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Edgezone::V20260401::Model;
using namespace std;

PublicNetworkSegment::PublicNetworkSegment() :
    m_cidrHasBeenSet(false),
    m_gatewayHasBeenSet(false)
{
}

CoreInternalOutcome PublicNetworkSegment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cidr") && !value["Cidr"].IsNull())
    {
        if (!value["Cidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetworkSegment.Cidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidr = string(value["Cidr"].GetString());
        m_cidrHasBeenSet = true;
    }

    if (value.HasMember("Gateway") && !value["Gateway"].IsNull())
    {
        if (!value["Gateway"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetworkSegment.Gateway` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gateway = string(value["Gateway"].GetString());
        m_gatewayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PublicNetworkSegment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidr.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gateway";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gateway.c_str(), allocator).Move(), allocator);
    }

}


string PublicNetworkSegment::GetCidr() const
{
    return m_cidr;
}

void PublicNetworkSegment::SetCidr(const string& _cidr)
{
    m_cidr = _cidr;
    m_cidrHasBeenSet = true;
}

bool PublicNetworkSegment::CidrHasBeenSet() const
{
    return m_cidrHasBeenSet;
}

string PublicNetworkSegment::GetGateway() const
{
    return m_gateway;
}

void PublicNetworkSegment::SetGateway(const string& _gateway)
{
    m_gateway = _gateway;
    m_gatewayHasBeenSet = true;
}

bool PublicNetworkSegment::GatewayHasBeenSet() const
{
    return m_gatewayHasBeenSet;
}

