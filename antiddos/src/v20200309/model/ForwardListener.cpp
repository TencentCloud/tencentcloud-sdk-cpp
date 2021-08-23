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

#include <tencentcloud/antiddos/v20200309/model/ForwardListener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

ForwardListener::ForwardListener() :
    m_frontendPortHasBeenSet(false),
    m_forwardProtocolHasBeenSet(false),
    m_frontendPortEndHasBeenSet(false)
{
}

CoreInternalOutcome ForwardListener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FrontendPort") && !value["FrontendPort"].IsNull())
    {
        if (!value["FrontendPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardListener.FrontendPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frontendPort = value["FrontendPort"].GetInt64();
        m_frontendPortHasBeenSet = true;
    }

    if (value.HasMember("ForwardProtocol") && !value["ForwardProtocol"].IsNull())
    {
        if (!value["ForwardProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardListener.ForwardProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardProtocol = string(value["ForwardProtocol"].GetString());
        m_forwardProtocolHasBeenSet = true;
    }

    if (value.HasMember("FrontendPortEnd") && !value["FrontendPortEnd"].IsNull())
    {
        if (!value["FrontendPortEnd"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardListener.FrontendPortEnd` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frontendPortEnd = value["FrontendPortEnd"].GetInt64();
        m_frontendPortEndHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ForwardListener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_frontendPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontendPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frontendPort, allocator);
    }

    if (m_forwardProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_frontendPortEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontendPortEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frontendPortEnd, allocator);
    }

}


int64_t ForwardListener::GetFrontendPort() const
{
    return m_frontendPort;
}

void ForwardListener::SetFrontendPort(const int64_t& _frontendPort)
{
    m_frontendPort = _frontendPort;
    m_frontendPortHasBeenSet = true;
}

bool ForwardListener::FrontendPortHasBeenSet() const
{
    return m_frontendPortHasBeenSet;
}

string ForwardListener::GetForwardProtocol() const
{
    return m_forwardProtocol;
}

void ForwardListener::SetForwardProtocol(const string& _forwardProtocol)
{
    m_forwardProtocol = _forwardProtocol;
    m_forwardProtocolHasBeenSet = true;
}

bool ForwardListener::ForwardProtocolHasBeenSet() const
{
    return m_forwardProtocolHasBeenSet;
}

int64_t ForwardListener::GetFrontendPortEnd() const
{
    return m_frontendPortEnd;
}

void ForwardListener::SetFrontendPortEnd(const int64_t& _frontendPortEnd)
{
    m_frontendPortEnd = _frontendPortEnd;
    m_frontendPortEndHasBeenSet = true;
}

bool ForwardListener::FrontendPortEndHasBeenSet() const
{
    return m_frontendPortEndHasBeenSet;
}

