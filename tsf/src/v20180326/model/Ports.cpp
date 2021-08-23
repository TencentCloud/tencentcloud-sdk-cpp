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

#include <tencentcloud/tsf/v20180326/model/Ports.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

Ports::Ports() :
    m_targetPortHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

CoreInternalOutcome Ports::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetPort") && !value["TargetPort"].IsNull())
    {
        if (!value["TargetPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Ports.TargetPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetPort = value["TargetPort"].GetUint64();
        m_targetPortHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ports.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Ports::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetPort, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Ports::GetTargetPort() const
{
    return m_targetPort;
}

void Ports::SetTargetPort(const uint64_t& _targetPort)
{
    m_targetPort = _targetPort;
    m_targetPortHasBeenSet = true;
}

bool Ports::TargetPortHasBeenSet() const
{
    return m_targetPortHasBeenSet;
}

string Ports::GetProtocol() const
{
    return m_protocol;
}

void Ports::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool Ports::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

