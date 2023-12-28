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

#include <tencentcloud/tse/v20201207/model/ModifyConsoleNetworkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ModifyConsoleNetworkRequest::ModifyConsoleNetworkRequest() :
    m_gatewayIdHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_operateHasBeenSet(false),
    m_accessControlHasBeenSet(false)
{
}

string ModifyConsoleNetworkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_operateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operate.c_str(), allocator).Move(), allocator);
    }

    if (m_accessControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessControl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accessControl.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyConsoleNetworkRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyConsoleNetworkRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyConsoleNetworkRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyConsoleNetworkRequest::GetNetworkType() const
{
    return m_networkType;
}

void ModifyConsoleNetworkRequest::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool ModifyConsoleNetworkRequest::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string ModifyConsoleNetworkRequest::GetOperate() const
{
    return m_operate;
}

void ModifyConsoleNetworkRequest::SetOperate(const string& _operate)
{
    m_operate = _operate;
    m_operateHasBeenSet = true;
}

bool ModifyConsoleNetworkRequest::OperateHasBeenSet() const
{
    return m_operateHasBeenSet;
}

NetworkAccessControl ModifyConsoleNetworkRequest::GetAccessControl() const
{
    return m_accessControl;
}

void ModifyConsoleNetworkRequest::SetAccessControl(const NetworkAccessControl& _accessControl)
{
    m_accessControl = _accessControl;
    m_accessControlHasBeenSet = true;
}

bool ModifyConsoleNetworkRequest::AccessControlHasBeenSet() const
{
    return m_accessControlHasBeenSet;
}


