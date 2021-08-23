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

#include <tencentcloud/vms/v20200902/model/SendStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vms::V20200902::Model;
using namespace std;

SendStatus::SendStatus() :
    m_callIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

CoreInternalOutcome SendStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallId") && !value["CallId"].IsNull())
    {
        if (!value["CallId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendStatus.CallId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callId = string(value["CallId"].GetString());
        m_callIdHasBeenSet = true;
    }

    if (value.HasMember("SessionContext") && !value["SessionContext"].IsNull())
    {
        if (!value["SessionContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendStatus.SessionContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionContext = string(value["SessionContext"].GetString());
        m_sessionContextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SendStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

}


string SendStatus::GetCallId() const
{
    return m_callId;
}

void SendStatus::SetCallId(const string& _callId)
{
    m_callId = _callId;
    m_callIdHasBeenSet = true;
}

bool SendStatus::CallIdHasBeenSet() const
{
    return m_callIdHasBeenSet;
}

string SendStatus::GetSessionContext() const
{
    return m_sessionContext;
}

void SendStatus::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool SendStatus::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

