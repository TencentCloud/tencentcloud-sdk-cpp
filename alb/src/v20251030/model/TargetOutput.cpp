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

#include <tencentcloud/alb/v20251030/model/TargetOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

TargetOutput::TargetOutput() :
    m_eniIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetIpHasBeenSet(false),
    m_targetNameHasBeenSet(false),
    m_targetStatusHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CoreInternalOutcome TargetOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EniId") && !value["EniId"].IsNull())
    {
        if (!value["EniId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetOutput.EniId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eniId = string(value["EniId"].GetString());
        m_eniIdHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetOutput.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("TargetId") && !value["TargetId"].IsNull())
    {
        if (!value["TargetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetOutput.TargetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetId = string(value["TargetId"].GetString());
        m_targetIdHasBeenSet = true;
    }

    if (value.HasMember("TargetIp") && !value["TargetIp"].IsNull())
    {
        if (!value["TargetIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetOutput.TargetIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetIp = string(value["TargetIp"].GetString());
        m_targetIpHasBeenSet = true;
    }

    if (value.HasMember("TargetName") && !value["TargetName"].IsNull())
    {
        if (!value["TargetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetOutput.TargetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetName = string(value["TargetName"].GetString());
        m_targetNameHasBeenSet = true;
    }

    if (value.HasMember("TargetStatus") && !value["TargetStatus"].IsNull())
    {
        if (!value["TargetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetOutput.TargetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetStatus = string(value["TargetStatus"].GetString());
        m_targetStatusHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetOutput.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetOutput.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eniIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eniId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_targetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetIp.c_str(), allocator).Move(), allocator);
    }

    if (m_targetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

}


string TargetOutput::GetEniId() const
{
    return m_eniId;
}

void TargetOutput::SetEniId(const string& _eniId)
{
    m_eniId = _eniId;
    m_eniIdHasBeenSet = true;
}

bool TargetOutput::EniIdHasBeenSet() const
{
    return m_eniIdHasBeenSet;
}

uint64_t TargetOutput::GetPort() const
{
    return m_port;
}

void TargetOutput::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool TargetOutput::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string TargetOutput::GetTargetId() const
{
    return m_targetId;
}

void TargetOutput::SetTargetId(const string& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool TargetOutput::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

string TargetOutput::GetTargetIp() const
{
    return m_targetIp;
}

void TargetOutput::SetTargetIp(const string& _targetIp)
{
    m_targetIp = _targetIp;
    m_targetIpHasBeenSet = true;
}

bool TargetOutput::TargetIpHasBeenSet() const
{
    return m_targetIpHasBeenSet;
}

string TargetOutput::GetTargetName() const
{
    return m_targetName;
}

void TargetOutput::SetTargetName(const string& _targetName)
{
    m_targetName = _targetName;
    m_targetNameHasBeenSet = true;
}

bool TargetOutput::TargetNameHasBeenSet() const
{
    return m_targetNameHasBeenSet;
}

string TargetOutput::GetTargetStatus() const
{
    return m_targetStatus;
}

void TargetOutput::SetTargetStatus(const string& _targetStatus)
{
    m_targetStatus = _targetStatus;
    m_targetStatusHasBeenSet = true;
}

bool TargetOutput::TargetStatusHasBeenSet() const
{
    return m_targetStatusHasBeenSet;
}

string TargetOutput::GetTargetType() const
{
    return m_targetType;
}

void TargetOutput::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool TargetOutput::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

uint64_t TargetOutput::GetWeight() const
{
    return m_weight;
}

void TargetOutput::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool TargetOutput::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

