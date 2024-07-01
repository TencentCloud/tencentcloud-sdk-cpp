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

#include <tencentcloud/vpc/v20170312/model/PrivateNatGatewayLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

PrivateNatGatewayLimit::PrivateNatGatewayLimit() :
    m_uniqVpcIdHasBeenSet(false),
    m_totalLimitHasBeenSet(false),
    m_availableHasBeenSet(false)
{
}

CoreInternalOutcome PrivateNatGatewayLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatGatewayLimit.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("TotalLimit") && !value["TotalLimit"].IsNull())
    {
        if (!value["TotalLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatGatewayLimit.TotalLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalLimit = value["TotalLimit"].GetUint64();
        m_totalLimitHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateNatGatewayLimit.Available` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetUint64();
        m_availableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivateNatGatewayLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalLimit, allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

}


string PrivateNatGatewayLimit::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void PrivateNatGatewayLimit::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool PrivateNatGatewayLimit::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

uint64_t PrivateNatGatewayLimit::GetTotalLimit() const
{
    return m_totalLimit;
}

void PrivateNatGatewayLimit::SetTotalLimit(const uint64_t& _totalLimit)
{
    m_totalLimit = _totalLimit;
    m_totalLimitHasBeenSet = true;
}

bool PrivateNatGatewayLimit::TotalLimitHasBeenSet() const
{
    return m_totalLimitHasBeenSet;
}

uint64_t PrivateNatGatewayLimit::GetAvailable() const
{
    return m_available;
}

void PrivateNatGatewayLimit::SetAvailable(const uint64_t& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool PrivateNatGatewayLimit::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

