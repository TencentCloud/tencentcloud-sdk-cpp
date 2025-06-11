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

#include <tencentcloud/ccc/v20200210/model/ClientInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

ClientInfo::ClientInfo() :
    m_clientTypeHasBeenSet(false),
    m_isConnectedHasBeenSet(false)
{
}

CoreInternalOutcome ClientInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientType") && !value["ClientType"].IsNull())
    {
        if (!value["ClientType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientInfo.ClientType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientType = string(value["ClientType"].GetString());
        m_clientTypeHasBeenSet = true;
    }

    if (value.HasMember("IsConnected") && !value["IsConnected"].IsNull())
    {
        if (!value["IsConnected"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClientInfo.IsConnected` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isConnected = value["IsConnected"].GetBool();
        m_isConnectedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientType.c_str(), allocator).Move(), allocator);
    }

    if (m_isConnectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsConnected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isConnected, allocator);
    }

}


string ClientInfo::GetClientType() const
{
    return m_clientType;
}

void ClientInfo::SetClientType(const string& _clientType)
{
    m_clientType = _clientType;
    m_clientTypeHasBeenSet = true;
}

bool ClientInfo::ClientTypeHasBeenSet() const
{
    return m_clientTypeHasBeenSet;
}

bool ClientInfo::GetIsConnected() const
{
    return m_isConnected;
}

void ClientInfo::SetIsConnected(const bool& _isConnected)
{
    m_isConnected = _isConnected;
    m_isConnectedHasBeenSet = true;
}

bool ClientInfo::IsConnectedHasBeenSet() const
{
    return m_isConnectedHasBeenSet;
}

