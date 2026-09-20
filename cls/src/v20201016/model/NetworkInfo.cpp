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

#include <tencentcloud/cls/v20201016/model/NetworkInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

NetworkInfo::NetworkInfo() :
    m_networkTypeHasBeenSet(false),
    m_vpcIDHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_virtualGatewayTypeHasBeenSet(false),
    m_vpcGatewayIndexHasBeenSet(false),
    m_privateDomainNamesHasBeenSet(false)
{
}

CoreInternalOutcome NetworkInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.NetworkType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = value["NetworkType"].GetUint64();
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcID") && !value["VpcID"].IsNull())
    {
        if (!value["VpcID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.VpcID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcID = string(value["VpcID"].GetString());
        m_vpcIDHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("VirtualGatewayType") && !value["VirtualGatewayType"].IsNull())
    {
        if (!value["VirtualGatewayType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.VirtualGatewayType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virtualGatewayType = value["VirtualGatewayType"].GetUint64();
        m_virtualGatewayTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcGatewayIndex") && !value["VpcGatewayIndex"].IsNull())
    {
        if (!value["VpcGatewayIndex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.VpcGatewayIndex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcGatewayIndex = string(value["VpcGatewayIndex"].GetString());
        m_vpcGatewayIndexHasBeenSet = true;
    }

    if (value.HasMember("PrivateDomainNames") && !value["PrivateDomainNames"].IsNull())
    {
        if (!value["PrivateDomainNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.PrivateDomainNames` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateDomainNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrivateDomainNames item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_privateDomainNames.push_back(item);
        }
        m_privateDomainNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkType, allocator);
    }

    if (m_vpcIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcID.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_virtualGatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualGatewayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualGatewayType, allocator);
    }

    if (m_vpcGatewayIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcGatewayIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcGatewayIndex.c_str(), allocator).Move(), allocator);
    }

    if (m_privateDomainNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateDomainNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privateDomainNames.begin(); itr != m_privateDomainNames.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t NetworkInfo::GetNetworkType() const
{
    return m_networkType;
}

void NetworkInfo::SetNetworkType(const uint64_t& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool NetworkInfo::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string NetworkInfo::GetVpcID() const
{
    return m_vpcID;
}

void NetworkInfo::SetVpcID(const string& _vpcID)
{
    m_vpcID = _vpcID;
    m_vpcIDHasBeenSet = true;
}

bool NetworkInfo::VpcIDHasBeenSet() const
{
    return m_vpcIDHasBeenSet;
}

uint64_t NetworkInfo::GetAppID() const
{
    return m_appID;
}

void NetworkInfo::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool NetworkInfo::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

uint64_t NetworkInfo::GetVirtualGatewayType() const
{
    return m_virtualGatewayType;
}

void NetworkInfo::SetVirtualGatewayType(const uint64_t& _virtualGatewayType)
{
    m_virtualGatewayType = _virtualGatewayType;
    m_virtualGatewayTypeHasBeenSet = true;
}

bool NetworkInfo::VirtualGatewayTypeHasBeenSet() const
{
    return m_virtualGatewayTypeHasBeenSet;
}

string NetworkInfo::GetVpcGatewayIndex() const
{
    return m_vpcGatewayIndex;
}

void NetworkInfo::SetVpcGatewayIndex(const string& _vpcGatewayIndex)
{
    m_vpcGatewayIndex = _vpcGatewayIndex;
    m_vpcGatewayIndexHasBeenSet = true;
}

bool NetworkInfo::VpcGatewayIndexHasBeenSet() const
{
    return m_vpcGatewayIndexHasBeenSet;
}

vector<PrivateDomainNames> NetworkInfo::GetPrivateDomainNames() const
{
    return m_privateDomainNames;
}

void NetworkInfo::SetPrivateDomainNames(const vector<PrivateDomainNames>& _privateDomainNames)
{
    m_privateDomainNames = _privateDomainNames;
    m_privateDomainNamesHasBeenSet = true;
}

bool NetworkInfo::PrivateDomainNamesHasBeenSet() const
{
    return m_privateDomainNamesHasBeenSet;
}

