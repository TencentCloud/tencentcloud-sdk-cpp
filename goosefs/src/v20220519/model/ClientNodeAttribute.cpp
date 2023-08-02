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

#include <tencentcloud/goosefs/v20220519/model/ClientNodeAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

ClientNodeAttribute::ClientNodeAttribute() :
    m_clientNodeIpHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clientTypeHasBeenSet(false)
{
}

CoreInternalOutcome ClientNodeAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientNodeIp") && !value["ClientNodeIp"].IsNull())
    {
        if (!value["ClientNodeIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientNodeAttribute.ClientNodeIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientNodeIp = string(value["ClientNodeIp"].GetString());
        m_clientNodeIpHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientNodeAttribute.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ClientType") && !value["ClientType"].IsNull())
    {
        if (!value["ClientType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientNodeAttribute.ClientType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientType = string(value["ClientType"].GetString());
        m_clientTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientNodeAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientNodeIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientNodeIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientNodeIp.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientType.c_str(), allocator).Move(), allocator);
    }

}


string ClientNodeAttribute::GetClientNodeIp() const
{
    return m_clientNodeIp;
}

void ClientNodeAttribute::SetClientNodeIp(const string& _clientNodeIp)
{
    m_clientNodeIp = _clientNodeIp;
    m_clientNodeIpHasBeenSet = true;
}

bool ClientNodeAttribute::ClientNodeIpHasBeenSet() const
{
    return m_clientNodeIpHasBeenSet;
}

string ClientNodeAttribute::GetStatus() const
{
    return m_status;
}

void ClientNodeAttribute::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClientNodeAttribute::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ClientNodeAttribute::GetClientType() const
{
    return m_clientType;
}

void ClientNodeAttribute::SetClientType(const string& _clientType)
{
    m_clientType = _clientType;
    m_clientTypeHasBeenSet = true;
}

bool ClientNodeAttribute::ClientTypeHasBeenSet() const
{
    return m_clientTypeHasBeenSet;
}

