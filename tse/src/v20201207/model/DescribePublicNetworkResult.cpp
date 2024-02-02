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

#include <tencentcloud/tse/v20201207/model/DescribePublicNetworkResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribePublicNetworkResult::DescribePublicNetworkResult() :
    m_gatewayIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_publicNetworkHasBeenSet(false)
{
}

CoreInternalOutcome DescribePublicNetworkResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePublicNetworkResult.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePublicNetworkResult.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("PublicNetwork") && !value["PublicNetwork"].IsNull())
    {
        if (!value["PublicNetwork"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePublicNetworkResult.PublicNetwork` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_publicNetwork.Deserialize(value["PublicNetwork"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_publicNetworkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePublicNetworkResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_publicNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetwork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_publicNetwork.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DescribePublicNetworkResult::GetGatewayId() const
{
    return m_gatewayId;
}

void DescribePublicNetworkResult::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DescribePublicNetworkResult::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DescribePublicNetworkResult::GetGroupId() const
{
    return m_groupId;
}

void DescribePublicNetworkResult::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribePublicNetworkResult::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

CloudNativeAPIGatewayConfig DescribePublicNetworkResult::GetPublicNetwork() const
{
    return m_publicNetwork;
}

void DescribePublicNetworkResult::SetPublicNetwork(const CloudNativeAPIGatewayConfig& _publicNetwork)
{
    m_publicNetwork = _publicNetwork;
    m_publicNetworkHasBeenSet = true;
}

bool DescribePublicNetworkResult::PublicNetworkHasBeenSet() const
{
    return m_publicNetworkHasBeenSet;
}

