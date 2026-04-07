/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tke/v20180525/model/ClientConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClientConnection::ClientConnection() :
    m_qPSHasBeenSet(false),
    m_burstHasBeenSet(false)
{
}

CoreInternalOutcome ClientConnection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QPS") && !value["QPS"].IsNull())
    {
        if (!value["QPS"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClientConnection.QPS` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_qPS = value["QPS"].GetDouble();
        m_qPSHasBeenSet = true;
    }

    if (value.HasMember("Burst") && !value["Burst"].IsNull())
    {
        if (!value["Burst"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClientConnection.Burst` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_burst = value["Burst"].GetUint64();
        m_burstHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientConnection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qPS, allocator);
    }

    if (m_burstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Burst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_burst, allocator);
    }

}


double ClientConnection::GetQPS() const
{
    return m_qPS;
}

void ClientConnection::SetQPS(const double& _qPS)
{
    m_qPS = _qPS;
    m_qPSHasBeenSet = true;
}

bool ClientConnection::QPSHasBeenSet() const
{
    return m_qPSHasBeenSet;
}

uint64_t ClientConnection::GetBurst() const
{
    return m_burst;
}

void ClientConnection::SetBurst(const uint64_t& _burst)
{
    m_burst = _burst;
    m_burstHasBeenSet = true;
}

bool ClientConnection::BurstHasBeenSet() const
{
    return m_burstHasBeenSet;
}

