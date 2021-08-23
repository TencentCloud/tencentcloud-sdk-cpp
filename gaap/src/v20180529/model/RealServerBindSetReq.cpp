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

#include <tencentcloud/gaap/v20180529/model/RealServerBindSetReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

RealServerBindSetReq::RealServerBindSetReq() :
    m_realServerIdHasBeenSet(false),
    m_realServerPortHasBeenSet(false),
    m_realServerIPHasBeenSet(false),
    m_realServerWeightHasBeenSet(false),
    m_realServerFailoverRoleHasBeenSet(false)
{
}

CoreInternalOutcome RealServerBindSetReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RealServerId") && !value["RealServerId"].IsNull())
    {
        if (!value["RealServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealServerBindSetReq.RealServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerId = string(value["RealServerId"].GetString());
        m_realServerIdHasBeenSet = true;
    }

    if (value.HasMember("RealServerPort") && !value["RealServerPort"].IsNull())
    {
        if (!value["RealServerPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RealServerBindSetReq.RealServerPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_realServerPort = value["RealServerPort"].GetUint64();
        m_realServerPortHasBeenSet = true;
    }

    if (value.HasMember("RealServerIP") && !value["RealServerIP"].IsNull())
    {
        if (!value["RealServerIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealServerBindSetReq.RealServerIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerIP = string(value["RealServerIP"].GetString());
        m_realServerIPHasBeenSet = true;
    }

    if (value.HasMember("RealServerWeight") && !value["RealServerWeight"].IsNull())
    {
        if (!value["RealServerWeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RealServerBindSetReq.RealServerWeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_realServerWeight = value["RealServerWeight"].GetUint64();
        m_realServerWeightHasBeenSet = true;
    }

    if (value.HasMember("RealServerFailoverRole") && !value["RealServerFailoverRole"].IsNull())
    {
        if (!value["RealServerFailoverRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealServerBindSetReq.RealServerFailoverRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerFailoverRole = string(value["RealServerFailoverRole"].GetString());
        m_realServerFailoverRoleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RealServerBindSetReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_realServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realServerPort, allocator);
    }

    if (m_realServerIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerIP.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realServerWeight, allocator);
    }

    if (m_realServerFailoverRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerFailoverRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerFailoverRole.c_str(), allocator).Move(), allocator);
    }

}


string RealServerBindSetReq::GetRealServerId() const
{
    return m_realServerId;
}

void RealServerBindSetReq::SetRealServerId(const string& _realServerId)
{
    m_realServerId = _realServerId;
    m_realServerIdHasBeenSet = true;
}

bool RealServerBindSetReq::RealServerIdHasBeenSet() const
{
    return m_realServerIdHasBeenSet;
}

uint64_t RealServerBindSetReq::GetRealServerPort() const
{
    return m_realServerPort;
}

void RealServerBindSetReq::SetRealServerPort(const uint64_t& _realServerPort)
{
    m_realServerPort = _realServerPort;
    m_realServerPortHasBeenSet = true;
}

bool RealServerBindSetReq::RealServerPortHasBeenSet() const
{
    return m_realServerPortHasBeenSet;
}

string RealServerBindSetReq::GetRealServerIP() const
{
    return m_realServerIP;
}

void RealServerBindSetReq::SetRealServerIP(const string& _realServerIP)
{
    m_realServerIP = _realServerIP;
    m_realServerIPHasBeenSet = true;
}

bool RealServerBindSetReq::RealServerIPHasBeenSet() const
{
    return m_realServerIPHasBeenSet;
}

uint64_t RealServerBindSetReq::GetRealServerWeight() const
{
    return m_realServerWeight;
}

void RealServerBindSetReq::SetRealServerWeight(const uint64_t& _realServerWeight)
{
    m_realServerWeight = _realServerWeight;
    m_realServerWeightHasBeenSet = true;
}

bool RealServerBindSetReq::RealServerWeightHasBeenSet() const
{
    return m_realServerWeightHasBeenSet;
}

string RealServerBindSetReq::GetRealServerFailoverRole() const
{
    return m_realServerFailoverRole;
}

void RealServerBindSetReq::SetRealServerFailoverRole(const string& _realServerFailoverRole)
{
    m_realServerFailoverRole = _realServerFailoverRole;
    m_realServerFailoverRoleHasBeenSet = true;
}

bool RealServerBindSetReq::RealServerFailoverRoleHasBeenSet() const
{
    return m_realServerFailoverRoleHasBeenSet;
}

