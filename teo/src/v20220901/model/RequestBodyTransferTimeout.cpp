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

#include <tencentcloud/teo/v20220901/model/RequestBodyTransferTimeout.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RequestBodyTransferTimeout::RequestBodyTransferTimeout() :
    m_idleTimeoutHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome RequestBodyTransferTimeout::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdleTimeout") && !value["IdleTimeout"].IsNull())
    {
        if (!value["IdleTimeout"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestBodyTransferTimeout.IdleTimeout` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idleTimeout = string(value["IdleTimeout"].GetString());
        m_idleTimeoutHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestBodyTransferTimeout.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RequestBodyTransferTimeout::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idleTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idleTimeout.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

}


string RequestBodyTransferTimeout::GetIdleTimeout() const
{
    return m_idleTimeout;
}

void RequestBodyTransferTimeout::SetIdleTimeout(const string& _idleTimeout)
{
    m_idleTimeout = _idleTimeout;
    m_idleTimeoutHasBeenSet = true;
}

bool RequestBodyTransferTimeout::IdleTimeoutHasBeenSet() const
{
    return m_idleTimeoutHasBeenSet;
}

string RequestBodyTransferTimeout::GetEnabled() const
{
    return m_enabled;
}

void RequestBodyTransferTimeout::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool RequestBodyTransferTimeout::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

