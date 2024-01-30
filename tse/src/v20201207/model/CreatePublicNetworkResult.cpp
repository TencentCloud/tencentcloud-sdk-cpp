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

#include <tencentcloud/tse/v20201207/model/CreatePublicNetworkResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreatePublicNetworkResult::CreatePublicNetworkResult() :
    m_gatewayIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_networkIdHasBeenSet(false)
{
}

CoreInternalOutcome CreatePublicNetworkResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatePublicNetworkResult.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatePublicNetworkResult.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("NetworkId") && !value["NetworkId"].IsNull())
    {
        if (!value["NetworkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatePublicNetworkResult.NetworkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkId = string(value["NetworkId"].GetString());
        m_networkIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreatePublicNetworkResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkId.c_str(), allocator).Move(), allocator);
    }

}


string CreatePublicNetworkResult::GetGatewayId() const
{
    return m_gatewayId;
}

void CreatePublicNetworkResult::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreatePublicNetworkResult::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreatePublicNetworkResult::GetGroupId() const
{
    return m_groupId;
}

void CreatePublicNetworkResult::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreatePublicNetworkResult::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string CreatePublicNetworkResult::GetNetworkId() const
{
    return m_networkId;
}

void CreatePublicNetworkResult::SetNetworkId(const string& _networkId)
{
    m_networkId = _networkId;
    m_networkIdHasBeenSet = true;
}

bool CreatePublicNetworkResult::NetworkIdHasBeenSet() const
{
    return m_networkIdHasBeenSet;
}

