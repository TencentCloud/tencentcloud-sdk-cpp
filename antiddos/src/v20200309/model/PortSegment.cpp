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

#include <tencentcloud/antiddos/v20200309/model/PortSegment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

PortSegment::PortSegment() :
    m_beginPortHasBeenSet(false),
    m_endPortHasBeenSet(false)
{
}

CoreInternalOutcome PortSegment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BeginPort") && !value["BeginPort"].IsNull())
    {
        if (!value["BeginPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortSegment.BeginPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_beginPort = value["BeginPort"].GetUint64();
        m_beginPortHasBeenSet = true;
    }

    if (value.HasMember("EndPort") && !value["EndPort"].IsNull())
    {
        if (!value["EndPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortSegment.EndPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endPort = value["EndPort"].GetUint64();
        m_endPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PortSegment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_beginPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginPort, allocator);
    }

    if (m_endPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPort, allocator);
    }

}


uint64_t PortSegment::GetBeginPort() const
{
    return m_beginPort;
}

void PortSegment::SetBeginPort(const uint64_t& _beginPort)
{
    m_beginPort = _beginPort;
    m_beginPortHasBeenSet = true;
}

bool PortSegment::BeginPortHasBeenSet() const
{
    return m_beginPortHasBeenSet;
}

uint64_t PortSegment::GetEndPort() const
{
    return m_endPort;
}

void PortSegment::SetEndPort(const uint64_t& _endPort)
{
    m_endPort = _endPort;
    m_endPortHasBeenSet = true;
}

bool PortSegment::EndPortHasBeenSet() const
{
    return m_endPortHasBeenSet;
}

