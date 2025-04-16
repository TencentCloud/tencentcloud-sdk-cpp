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

#include <tencentcloud/emr/v20190103/model/ModifySLInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifySLInstanceRequest::ModifySLInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string ModifySLInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySLInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifySLInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifySLInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifySLInstanceRequest::GetZone() const
{
    return m_zone;
}

void ModifySLInstanceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ModifySLInstanceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t ModifySLInstanceRequest::GetNodeNum() const
{
    return m_nodeNum;
}

void ModifySLInstanceRequest::SetNodeNum(const int64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool ModifySLInstanceRequest::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

string ModifySLInstanceRequest::GetClientToken() const
{
    return m_clientToken;
}

void ModifySLInstanceRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool ModifySLInstanceRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


