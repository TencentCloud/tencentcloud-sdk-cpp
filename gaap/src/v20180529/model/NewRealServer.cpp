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

#include <tencentcloud/gaap/v20180529/model/NewRealServer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

NewRealServer::NewRealServer() :
    m_realServerIdHasBeenSet(false),
    m_realServerIPHasBeenSet(false)
{
}

CoreInternalOutcome NewRealServer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RealServerId") && !value["RealServerId"].IsNull())
    {
        if (!value["RealServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewRealServer.RealServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerId = string(value["RealServerId"].GetString());
        m_realServerIdHasBeenSet = true;
    }

    if (value.HasMember("RealServerIP") && !value["RealServerIP"].IsNull())
    {
        if (!value["RealServerIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewRealServer.RealServerIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerIP = string(value["RealServerIP"].GetString());
        m_realServerIPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NewRealServer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_realServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerIP.c_str(), allocator).Move(), allocator);
    }

}


string NewRealServer::GetRealServerId() const
{
    return m_realServerId;
}

void NewRealServer::SetRealServerId(const string& _realServerId)
{
    m_realServerId = _realServerId;
    m_realServerIdHasBeenSet = true;
}

bool NewRealServer::RealServerIdHasBeenSet() const
{
    return m_realServerIdHasBeenSet;
}

string NewRealServer::GetRealServerIP() const
{
    return m_realServerIP;
}

void NewRealServer::SetRealServerIP(const string& _realServerIP)
{
    m_realServerIP = _realServerIP;
    m_realServerIPHasBeenSet = true;
}

bool NewRealServer::RealServerIPHasBeenSet() const
{
    return m_realServerIPHasBeenSet;
}

