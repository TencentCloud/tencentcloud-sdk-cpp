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

#include <tencentcloud/tcr/v20190924/model/PeerReplicationOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

PeerReplicationOption::PeerReplicationOption() :
    m_peerRegistryUinHasBeenSet(false),
    m_peerRegistryTokenHasBeenSet(false),
    m_enablePeerReplicationHasBeenSet(false)
{
}

CoreInternalOutcome PeerReplicationOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PeerRegistryUin") && !value["PeerRegistryUin"].IsNull())
    {
        if (!value["PeerRegistryUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerReplicationOption.PeerRegistryUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerRegistryUin = string(value["PeerRegistryUin"].GetString());
        m_peerRegistryUinHasBeenSet = true;
    }

    if (value.HasMember("PeerRegistryToken") && !value["PeerRegistryToken"].IsNull())
    {
        if (!value["PeerRegistryToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeerReplicationOption.PeerRegistryToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerRegistryToken = string(value["PeerRegistryToken"].GetString());
        m_peerRegistryTokenHasBeenSet = true;
    }

    if (value.HasMember("EnablePeerReplication") && !value["EnablePeerReplication"].IsNull())
    {
        if (!value["EnablePeerReplication"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PeerReplicationOption.EnablePeerReplication` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enablePeerReplication = value["EnablePeerReplication"].GetBool();
        m_enablePeerReplicationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PeerReplicationOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_peerRegistryUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerRegistryUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerRegistryUin.c_str(), allocator).Move(), allocator);
    }

    if (m_peerRegistryTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerRegistryToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerRegistryToken.c_str(), allocator).Move(), allocator);
    }

    if (m_enablePeerReplicationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePeerReplication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enablePeerReplication, allocator);
    }

}


string PeerReplicationOption::GetPeerRegistryUin() const
{
    return m_peerRegistryUin;
}

void PeerReplicationOption::SetPeerRegistryUin(const string& _peerRegistryUin)
{
    m_peerRegistryUin = _peerRegistryUin;
    m_peerRegistryUinHasBeenSet = true;
}

bool PeerReplicationOption::PeerRegistryUinHasBeenSet() const
{
    return m_peerRegistryUinHasBeenSet;
}

string PeerReplicationOption::GetPeerRegistryToken() const
{
    return m_peerRegistryToken;
}

void PeerReplicationOption::SetPeerRegistryToken(const string& _peerRegistryToken)
{
    m_peerRegistryToken = _peerRegistryToken;
    m_peerRegistryTokenHasBeenSet = true;
}

bool PeerReplicationOption::PeerRegistryTokenHasBeenSet() const
{
    return m_peerRegistryTokenHasBeenSet;
}

bool PeerReplicationOption::GetEnablePeerReplication() const
{
    return m_enablePeerReplication;
}

void PeerReplicationOption::SetEnablePeerReplication(const bool& _enablePeerReplication)
{
    m_enablePeerReplication = _enablePeerReplication;
    m_enablePeerReplicationHasBeenSet = true;
}

bool PeerReplicationOption::EnablePeerReplicationHasBeenSet() const
{
    return m_enablePeerReplicationHasBeenSet;
}

