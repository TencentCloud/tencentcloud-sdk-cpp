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

#include <tencentcloud/tbaas/v20180416/model/PeerSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

PeerSet::PeerSet() :
    m_peerNameHasBeenSet(false),
    m_orgNameHasBeenSet(false)
{
}

CoreInternalOutcome PeerSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PeerName") && !value["PeerName"].IsNull())
    {
        if (!value["PeerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerSet.PeerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerName = string(value["PeerName"].GetString());
        m_peerNameHasBeenSet = true;
    }

    if (value.HasMember("OrgName") && !value["OrgName"].IsNull())
    {
        if (!value["OrgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerSet.OrgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgName = string(value["OrgName"].GetString());
        m_orgNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PeerSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_peerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerName.c_str(), allocator).Move(), allocator);
    }

    if (m_orgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgName.c_str(), allocator).Move(), allocator);
    }

}


string PeerSet::GetPeerName() const
{
    return m_peerName;
}

void PeerSet::SetPeerName(const string& _peerName)
{
    m_peerName = _peerName;
    m_peerNameHasBeenSet = true;
}

bool PeerSet::PeerNameHasBeenSet() const
{
    return m_peerNameHasBeenSet;
}

string PeerSet::GetOrgName() const
{
    return m_orgName;
}

void PeerSet::SetOrgName(const string& _orgName)
{
    m_orgName = _orgName;
    m_orgNameHasBeenSet = true;
}

bool PeerSet::OrgNameHasBeenSet() const
{
    return m_orgNameHasBeenSet;
}

