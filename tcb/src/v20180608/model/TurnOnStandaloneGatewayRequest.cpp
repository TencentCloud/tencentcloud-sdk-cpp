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

#include <tencentcloud/tcb/v20180608/model/TurnOnStandaloneGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

TurnOnStandaloneGatewayRequest::TurnOnStandaloneGatewayRequest() :
    m_envIdHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_serviceNameListHasBeenSet(false)
{
}

string TurnOnStandaloneGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceNameList.begin(); itr != m_serviceNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TurnOnStandaloneGatewayRequest::GetEnvId() const
{
    return m_envId;
}

void TurnOnStandaloneGatewayRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool TurnOnStandaloneGatewayRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string TurnOnStandaloneGatewayRequest::GetGatewayName() const
{
    return m_gatewayName;
}

void TurnOnStandaloneGatewayRequest::SetGatewayName(const string& _gatewayName)
{
    m_gatewayName = _gatewayName;
    m_gatewayNameHasBeenSet = true;
}

bool TurnOnStandaloneGatewayRequest::GatewayNameHasBeenSet() const
{
    return m_gatewayNameHasBeenSet;
}

vector<string> TurnOnStandaloneGatewayRequest::GetServiceNameList() const
{
    return m_serviceNameList;
}

void TurnOnStandaloneGatewayRequest::SetServiceNameList(const vector<string>& _serviceNameList)
{
    m_serviceNameList = _serviceNameList;
    m_serviceNameListHasBeenSet = true;
}

bool TurnOnStandaloneGatewayRequest::ServiceNameListHasBeenSet() const
{
    return m_serviceNameListHasBeenSet;
}


