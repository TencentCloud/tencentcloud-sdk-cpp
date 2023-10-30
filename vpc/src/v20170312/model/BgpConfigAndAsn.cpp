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

#include <tencentcloud/vpc/v20170312/model/BgpConfigAndAsn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

BgpConfigAndAsn::BgpConfigAndAsn() :
    m_tunnelCidrHasBeenSet(false),
    m_localBgpIpHasBeenSet(false),
    m_remoteBgpIpHasBeenSet(false),
    m_localBgpAsnHasBeenSet(false),
    m_remoteBgpAsnHasBeenSet(false)
{
}

CoreInternalOutcome BgpConfigAndAsn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TunnelCidr") && !value["TunnelCidr"].IsNull())
    {
        if (!value["TunnelCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BgpConfigAndAsn.TunnelCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tunnelCidr = string(value["TunnelCidr"].GetString());
        m_tunnelCidrHasBeenSet = true;
    }

    if (value.HasMember("LocalBgpIp") && !value["LocalBgpIp"].IsNull())
    {
        if (!value["LocalBgpIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BgpConfigAndAsn.LocalBgpIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localBgpIp = string(value["LocalBgpIp"].GetString());
        m_localBgpIpHasBeenSet = true;
    }

    if (value.HasMember("RemoteBgpIp") && !value["RemoteBgpIp"].IsNull())
    {
        if (!value["RemoteBgpIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BgpConfigAndAsn.RemoteBgpIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteBgpIp = string(value["RemoteBgpIp"].GetString());
        m_remoteBgpIpHasBeenSet = true;
    }

    if (value.HasMember("LocalBgpAsn") && !value["LocalBgpAsn"].IsNull())
    {
        if (!value["LocalBgpAsn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BgpConfigAndAsn.LocalBgpAsn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localBgpAsn = string(value["LocalBgpAsn"].GetString());
        m_localBgpAsnHasBeenSet = true;
    }

    if (value.HasMember("RemoteBgpAsn") && !value["RemoteBgpAsn"].IsNull())
    {
        if (!value["RemoteBgpAsn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BgpConfigAndAsn.RemoteBgpAsn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteBgpAsn = string(value["RemoteBgpAsn"].GetString());
        m_remoteBgpAsnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BgpConfigAndAsn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tunnelCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TunnelCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tunnelCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_localBgpIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalBgpIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localBgpIp.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteBgpIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteBgpIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteBgpIp.c_str(), allocator).Move(), allocator);
    }

    if (m_localBgpAsnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalBgpAsn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localBgpAsn.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteBgpAsnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteBgpAsn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteBgpAsn.c_str(), allocator).Move(), allocator);
    }

}


string BgpConfigAndAsn::GetTunnelCidr() const
{
    return m_tunnelCidr;
}

void BgpConfigAndAsn::SetTunnelCidr(const string& _tunnelCidr)
{
    m_tunnelCidr = _tunnelCidr;
    m_tunnelCidrHasBeenSet = true;
}

bool BgpConfigAndAsn::TunnelCidrHasBeenSet() const
{
    return m_tunnelCidrHasBeenSet;
}

string BgpConfigAndAsn::GetLocalBgpIp() const
{
    return m_localBgpIp;
}

void BgpConfigAndAsn::SetLocalBgpIp(const string& _localBgpIp)
{
    m_localBgpIp = _localBgpIp;
    m_localBgpIpHasBeenSet = true;
}

bool BgpConfigAndAsn::LocalBgpIpHasBeenSet() const
{
    return m_localBgpIpHasBeenSet;
}

string BgpConfigAndAsn::GetRemoteBgpIp() const
{
    return m_remoteBgpIp;
}

void BgpConfigAndAsn::SetRemoteBgpIp(const string& _remoteBgpIp)
{
    m_remoteBgpIp = _remoteBgpIp;
    m_remoteBgpIpHasBeenSet = true;
}

bool BgpConfigAndAsn::RemoteBgpIpHasBeenSet() const
{
    return m_remoteBgpIpHasBeenSet;
}

string BgpConfigAndAsn::GetLocalBgpAsn() const
{
    return m_localBgpAsn;
}

void BgpConfigAndAsn::SetLocalBgpAsn(const string& _localBgpAsn)
{
    m_localBgpAsn = _localBgpAsn;
    m_localBgpAsnHasBeenSet = true;
}

bool BgpConfigAndAsn::LocalBgpAsnHasBeenSet() const
{
    return m_localBgpAsnHasBeenSet;
}

string BgpConfigAndAsn::GetRemoteBgpAsn() const
{
    return m_remoteBgpAsn;
}

void BgpConfigAndAsn::SetRemoteBgpAsn(const string& _remoteBgpAsn)
{
    m_remoteBgpAsn = _remoteBgpAsn;
    m_remoteBgpAsnHasBeenSet = true;
}

bool BgpConfigAndAsn::RemoteBgpAsnHasBeenSet() const
{
    return m_remoteBgpAsnHasBeenSet;
}

