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

#include <tencentcloud/cdc/v20201214/model/LocalNetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

LocalNetInfo::LocalNetInfo() :
    m_protocolHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_bGPRouteHasBeenSet(false),
    m_localIpHasBeenSet(false)
{
}

CoreInternalOutcome LocalNetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalNetInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalNetInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("BGPRoute") && !value["BGPRoute"].IsNull())
    {
        if (!value["BGPRoute"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalNetInfo.BGPRoute` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bGPRoute = string(value["BGPRoute"].GetString());
        m_bGPRouteHasBeenSet = true;
    }

    if (value.HasMember("LocalIp") && !value["LocalIp"].IsNull())
    {
        if (!value["LocalIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalNetInfo.LocalIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localIp = string(value["LocalIp"].GetString());
        m_localIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LocalNetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_bGPRouteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BGPRoute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bGPRoute.c_str(), allocator).Move(), allocator);
    }

    if (m_localIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localIp.c_str(), allocator).Move(), allocator);
    }

}


string LocalNetInfo::GetProtocol() const
{
    return m_protocol;
}

void LocalNetInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool LocalNetInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string LocalNetInfo::GetVpcId() const
{
    return m_vpcId;
}

void LocalNetInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool LocalNetInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string LocalNetInfo::GetBGPRoute() const
{
    return m_bGPRoute;
}

void LocalNetInfo::SetBGPRoute(const string& _bGPRoute)
{
    m_bGPRoute = _bGPRoute;
    m_bGPRouteHasBeenSet = true;
}

bool LocalNetInfo::BGPRouteHasBeenSet() const
{
    return m_bGPRouteHasBeenSet;
}

string LocalNetInfo::GetLocalIp() const
{
    return m_localIp;
}

void LocalNetInfo::SetLocalIp(const string& _localIp)
{
    m_localIp = _localIp;
    m_localIpHasBeenSet = true;
}

bool LocalNetInfo::LocalIpHasBeenSet() const
{
    return m_localIpHasBeenSet;
}

