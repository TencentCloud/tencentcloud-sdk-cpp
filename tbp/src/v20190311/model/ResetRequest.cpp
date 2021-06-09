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

#include <tencentcloud/tbp/v20190311/model/ResetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbp::V20190311::Model;
using namespace std;

ResetRequest::ResetRequest() :
    m_botIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_botEnvHasBeenSet(false)
{
}

string ResetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_botVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_botEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotEnv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botEnv.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResetRequest::GetBotId() const
{
    return m_botId;
}

void ResetRequest::SetBotId(const string& _botId)
{
    m_botId = _botId;
    m_botIdHasBeenSet = true;
}

bool ResetRequest::BotIdHasBeenSet() const
{
    return m_botIdHasBeenSet;
}

string ResetRequest::GetUserId() const
{
    return m_userId;
}

void ResetRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ResetRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string ResetRequest::GetBotVersion() const
{
    return m_botVersion;
}

void ResetRequest::SetBotVersion(const string& _botVersion)
{
    m_botVersion = _botVersion;
    m_botVersionHasBeenSet = true;
}

bool ResetRequest::BotVersionHasBeenSet() const
{
    return m_botVersionHasBeenSet;
}

string ResetRequest::GetBotEnv() const
{
    return m_botEnv;
}

void ResetRequest::SetBotEnv(const string& _botEnv)
{
    m_botEnv = _botEnv;
    m_botEnvHasBeenSet = true;
}

bool ResetRequest::BotEnvHasBeenSet() const
{
    return m_botEnvHasBeenSet;
}


