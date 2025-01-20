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

#include <tencentcloud/vpc/v20170312/model/ModifyNetworkInterfaceQosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyNetworkInterfaceQosRequest::ModifyNetworkInterfaceQosRequest() :
    m_networkInterfaceIdsHasBeenSet(false),
    m_qosLevelHasBeenSet(false),
    m_directSendMaxPortHasBeenSet(false)
{
}

string ModifyNetworkInterfaceQosRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkInterfaceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_networkInterfaceIds.begin(); itr != m_networkInterfaceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_qosLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QosLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qosLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_directSendMaxPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectSendMaxPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_directSendMaxPort, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyNetworkInterfaceQosRequest::GetNetworkInterfaceIds() const
{
    return m_networkInterfaceIds;
}

void ModifyNetworkInterfaceQosRequest::SetNetworkInterfaceIds(const vector<string>& _networkInterfaceIds)
{
    m_networkInterfaceIds = _networkInterfaceIds;
    m_networkInterfaceIdsHasBeenSet = true;
}

bool ModifyNetworkInterfaceQosRequest::NetworkInterfaceIdsHasBeenSet() const
{
    return m_networkInterfaceIdsHasBeenSet;
}

string ModifyNetworkInterfaceQosRequest::GetQosLevel() const
{
    return m_qosLevel;
}

void ModifyNetworkInterfaceQosRequest::SetQosLevel(const string& _qosLevel)
{
    m_qosLevel = _qosLevel;
    m_qosLevelHasBeenSet = true;
}

bool ModifyNetworkInterfaceQosRequest::QosLevelHasBeenSet() const
{
    return m_qosLevelHasBeenSet;
}

uint64_t ModifyNetworkInterfaceQosRequest::GetDirectSendMaxPort() const
{
    return m_directSendMaxPort;
}

void ModifyNetworkInterfaceQosRequest::SetDirectSendMaxPort(const uint64_t& _directSendMaxPort)
{
    m_directSendMaxPort = _directSendMaxPort;
    m_directSendMaxPortHasBeenSet = true;
}

bool ModifyNetworkInterfaceQosRequest::DirectSendMaxPortHasBeenSet() const
{
    return m_directSendMaxPortHasBeenSet;
}


