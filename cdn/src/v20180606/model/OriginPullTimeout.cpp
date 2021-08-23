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

#include <tencentcloud/cdn/v20180606/model/OriginPullTimeout.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

OriginPullTimeout::OriginPullTimeout() :
    m_connectTimeoutHasBeenSet(false),
    m_receiveTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome OriginPullTimeout::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConnectTimeout") && !value["ConnectTimeout"].IsNull())
    {
        if (!value["ConnectTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginPullTimeout.ConnectTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connectTimeout = value["ConnectTimeout"].GetUint64();
        m_connectTimeoutHasBeenSet = true;
    }

    if (value.HasMember("ReceiveTimeout") && !value["ReceiveTimeout"].IsNull())
    {
        if (!value["ReceiveTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginPullTimeout.ReceiveTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_receiveTimeout = value["ReceiveTimeout"].GetUint64();
        m_receiveTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginPullTimeout::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_connectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectTimeout, allocator);
    }

    if (m_receiveTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_receiveTimeout, allocator);
    }

}


uint64_t OriginPullTimeout::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void OriginPullTimeout::SetConnectTimeout(const uint64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool OriginPullTimeout::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

uint64_t OriginPullTimeout::GetReceiveTimeout() const
{
    return m_receiveTimeout;
}

void OriginPullTimeout::SetReceiveTimeout(const uint64_t& _receiveTimeout)
{
    m_receiveTimeout = _receiveTimeout;
    m_receiveTimeoutHasBeenSet = true;
}

bool OriginPullTimeout::ReceiveTimeoutHasBeenSet() const
{
    return m_receiveTimeoutHasBeenSet;
}

