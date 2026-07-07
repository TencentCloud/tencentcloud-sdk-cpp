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

#include <tencentcloud/alb/v20251030/model/AccessLogConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

AccessLogConfig::AccessLogConfig() :
    m_logSetIdHasBeenSet(false),
    m_logTopicIdHasBeenSet(false)
{
}

CoreInternalOutcome AccessLogConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogSetId") && !value["LogSetId"].IsNull())
    {
        if (!value["LogSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.LogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetId = string(value["LogSetId"].GetString());
        m_logSetIdHasBeenSet = true;
    }

    if (value.HasMember("LogTopicId") && !value["LogTopicId"].IsNull())
    {
        if (!value["LogTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.LogTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicId = string(value["LogTopicId"].GetString());
        m_logTopicIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessLogConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTopicId.c_str(), allocator).Move(), allocator);
    }

}


string AccessLogConfig::GetLogSetId() const
{
    return m_logSetId;
}

void AccessLogConfig::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool AccessLogConfig::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string AccessLogConfig::GetLogTopicId() const
{
    return m_logTopicId;
}

void AccessLogConfig::SetLogTopicId(const string& _logTopicId)
{
    m_logTopicId = _logTopicId;
    m_logTopicIdHasBeenSet = true;
}

bool AccessLogConfig::LogTopicIdHasBeenSet() const
{
    return m_logTopicIdHasBeenSet;
}

