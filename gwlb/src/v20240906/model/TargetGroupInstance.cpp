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

#include <tencentcloud/gwlb/v20240906/model/TargetGroupInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

TargetGroupInstance::TargetGroupInstance() :
    m_bindIPHasBeenSet(false),
    m_portHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CoreInternalOutcome TargetGroupInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BindIP") && !value["BindIP"].IsNull())
    {
        if (!value["BindIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInstance.BindIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindIP = string(value["BindIP"].GetString());
        m_bindIPHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInstance.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInstance.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetGroupInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bindIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindIP.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

}


string TargetGroupInstance::GetBindIP() const
{
    return m_bindIP;
}

void TargetGroupInstance::SetBindIP(const string& _bindIP)
{
    m_bindIP = _bindIP;
    m_bindIPHasBeenSet = true;
}

bool TargetGroupInstance::BindIPHasBeenSet() const
{
    return m_bindIPHasBeenSet;
}

uint64_t TargetGroupInstance::GetPort() const
{
    return m_port;
}

void TargetGroupInstance::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool TargetGroupInstance::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t TargetGroupInstance::GetWeight() const
{
    return m_weight;
}

void TargetGroupInstance::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool TargetGroupInstance::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

