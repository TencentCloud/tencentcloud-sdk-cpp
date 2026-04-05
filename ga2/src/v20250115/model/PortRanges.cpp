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

#include <tencentcloud/ga2/v20250115/model/PortRanges.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

PortRanges::PortRanges() :
    m_fromPortHasBeenSet(false),
    m_toPortHasBeenSet(false)
{
}

CoreInternalOutcome PortRanges::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FromPort") && !value["FromPort"].IsNull())
    {
        if (!value["FromPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortRanges.FromPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fromPort = value["FromPort"].GetUint64();
        m_fromPortHasBeenSet = true;
    }

    if (value.HasMember("ToPort") && !value["ToPort"].IsNull())
    {
        if (!value["ToPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortRanges.ToPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_toPort = value["ToPort"].GetUint64();
        m_toPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PortRanges::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fromPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fromPort, allocator);
    }

    if (m_toPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_toPort, allocator);
    }

}


uint64_t PortRanges::GetFromPort() const
{
    return m_fromPort;
}

void PortRanges::SetFromPort(const uint64_t& _fromPort)
{
    m_fromPort = _fromPort;
    m_fromPortHasBeenSet = true;
}

bool PortRanges::FromPortHasBeenSet() const
{
    return m_fromPortHasBeenSet;
}

uint64_t PortRanges::GetToPort() const
{
    return m_toPort;
}

void PortRanges::SetToPort(const uint64_t& _toPort)
{
    m_toPort = _toPort;
    m_toPortHasBeenSet = true;
}

bool PortRanges::ToPortHasBeenSet() const
{
    return m_toPortHasBeenSet;
}

