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

#include <tencentcloud/mongodb/v20190725/model/ClientConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

ClientConnection::ClientConnection() :
    m_iPHasBeenSet(false),
    m_countHasBeenSet(false),
    m_internalServiceHasBeenSet(false)
{
}

CoreInternalOutcome ClientConnection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientConnection.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClientConnection.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("InternalService") && !value["InternalService"].IsNull())
    {
        if (!value["InternalService"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClientConnection.InternalService` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_internalService = value["InternalService"].GetBool();
        m_internalServiceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientConnection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_internalServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internalService, allocator);
    }

}


string ClientConnection::GetIP() const
{
    return m_iP;
}

void ClientConnection::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool ClientConnection::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

uint64_t ClientConnection::GetCount() const
{
    return m_count;
}

void ClientConnection::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ClientConnection::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

bool ClientConnection::GetInternalService() const
{
    return m_internalService;
}

void ClientConnection::SetInternalService(const bool& _internalService)
{
    m_internalService = _internalService;
    m_internalServiceHasBeenSet = true;
}

bool ClientConnection::InternalServiceHasBeenSet() const
{
    return m_internalServiceHasBeenSet;
}

