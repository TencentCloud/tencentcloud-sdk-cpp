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

#include <tencentcloud/vpc/v20170312/model/PrivateNatCrossDomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

PrivateNatCrossDomainInfo::PrivateNatCrossDomainInfo() :
    m_ccnIdHasBeenSet(false),
    m_localVpcIdHasBeenSet(false),
    m_peerVpcIdHasBeenSet(false)
{
}

CoreInternalOutcome PrivateNatCrossDomainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatCrossDomainInfo.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("LocalVpcId") && !value["LocalVpcId"].IsNull())
    {
        if (!value["LocalVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatCrossDomainInfo.LocalVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localVpcId = string(value["LocalVpcId"].GetString());
        m_localVpcIdHasBeenSet = true;
    }

    if (value.HasMember("PeerVpcId") && !value["PeerVpcId"].IsNull())
    {
        if (!value["PeerVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatCrossDomainInfo.PeerVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerVpcId = string(value["PeerVpcId"].GetString());
        m_peerVpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivateNatCrossDomainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_localVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_peerVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerVpcId.c_str(), allocator).Move(), allocator);
    }

}


string PrivateNatCrossDomainInfo::GetCcnId() const
{
    return m_ccnId;
}

void PrivateNatCrossDomainInfo::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool PrivateNatCrossDomainInfo::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string PrivateNatCrossDomainInfo::GetLocalVpcId() const
{
    return m_localVpcId;
}

void PrivateNatCrossDomainInfo::SetLocalVpcId(const string& _localVpcId)
{
    m_localVpcId = _localVpcId;
    m_localVpcIdHasBeenSet = true;
}

bool PrivateNatCrossDomainInfo::LocalVpcIdHasBeenSet() const
{
    return m_localVpcIdHasBeenSet;
}

string PrivateNatCrossDomainInfo::GetPeerVpcId() const
{
    return m_peerVpcId;
}

void PrivateNatCrossDomainInfo::SetPeerVpcId(const string& _peerVpcId)
{
    m_peerVpcId = _peerVpcId;
    m_peerVpcIdHasBeenSet = true;
}

bool PrivateNatCrossDomainInfo::PeerVpcIdHasBeenSet() const
{
    return m_peerVpcIdHasBeenSet;
}

