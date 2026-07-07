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

#include <tencentcloud/alb/v20251030/model/TargetHealthStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

TargetHealthStatusInfo::TargetHealthStatusInfo() :
    m_statusHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetIpHasBeenSet(false),
    m_targetPortHasBeenSet(false)
{
}

CoreInternalOutcome TargetHealthStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetHealthStatusInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TargetId") && !value["TargetId"].IsNull())
    {
        if (!value["TargetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetHealthStatusInfo.TargetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetId = string(value["TargetId"].GetString());
        m_targetIdHasBeenSet = true;
    }

    if (value.HasMember("TargetIp") && !value["TargetIp"].IsNull())
    {
        if (!value["TargetIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetHealthStatusInfo.TargetIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetIp = string(value["TargetIp"].GetString());
        m_targetIpHasBeenSet = true;
    }

    if (value.HasMember("TargetPort") && !value["TargetPort"].IsNull())
    {
        if (!value["TargetPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetHealthStatusInfo.TargetPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetPort = value["TargetPort"].GetUint64();
        m_targetPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetHealthStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_targetPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetPort, allocator);
    }

}


string TargetHealthStatusInfo::GetStatus() const
{
    return m_status;
}

void TargetHealthStatusInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TargetHealthStatusInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TargetHealthStatusInfo::GetTargetId() const
{
    return m_targetId;
}

void TargetHealthStatusInfo::SetTargetId(const string& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool TargetHealthStatusInfo::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

string TargetHealthStatusInfo::GetTargetIp() const
{
    return m_targetIp;
}

void TargetHealthStatusInfo::SetTargetIp(const string& _targetIp)
{
    m_targetIp = _targetIp;
    m_targetIpHasBeenSet = true;
}

bool TargetHealthStatusInfo::TargetIpHasBeenSet() const
{
    return m_targetIpHasBeenSet;
}

uint64_t TargetHealthStatusInfo::GetTargetPort() const
{
    return m_targetPort;
}

void TargetHealthStatusInfo::SetTargetPort(const uint64_t& _targetPort)
{
    m_targetPort = _targetPort;
    m_targetPortHasBeenSet = true;
}

bool TargetHealthStatusInfo::TargetPortHasBeenSet() const
{
    return m_targetPortHasBeenSet;
}

