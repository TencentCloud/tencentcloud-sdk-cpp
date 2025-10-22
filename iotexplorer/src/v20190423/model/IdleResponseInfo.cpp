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

#include <tencentcloud/iotexplorer/v20190423/model/IdleResponseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

IdleResponseInfo::IdleResponseInfo() :
    m_retryCountHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome IdleResponseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RetryCount") && !value["RetryCount"].IsNull())
    {
        if (!value["RetryCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IdleResponseInfo.RetryCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryCount = value["RetryCount"].GetInt64();
        m_retryCountHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdleResponseInfo.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IdleResponseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_retryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryCount, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


int64_t IdleResponseInfo::GetRetryCount() const
{
    return m_retryCount;
}

void IdleResponseInfo::SetRetryCount(const int64_t& _retryCount)
{
    m_retryCount = _retryCount;
    m_retryCountHasBeenSet = true;
}

bool IdleResponseInfo::RetryCountHasBeenSet() const
{
    return m_retryCountHasBeenSet;
}

string IdleResponseInfo::GetMessage() const
{
    return m_message;
}

void IdleResponseInfo::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool IdleResponseInfo::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

