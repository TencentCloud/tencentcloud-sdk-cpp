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

#include <tencentcloud/teo/v20220901/model/InferenceServiceDeploymentLogInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceServiceDeploymentLogInfo::InferenceServiceDeploymentLogInfo() :
    m_logMessageHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

CoreInternalOutcome InferenceServiceDeploymentLogInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogMessage") && !value["LogMessage"].IsNull())
    {
        if (!value["LogMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceDeploymentLogInfo.LogMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logMessage = string(value["LogMessage"].GetString());
        m_logMessageHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceDeploymentLogInfo.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceServiceDeploymentLogInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

}


string InferenceServiceDeploymentLogInfo::GetLogMessage() const
{
    return m_logMessage;
}

void InferenceServiceDeploymentLogInfo::SetLogMessage(const string& _logMessage)
{
    m_logMessage = _logMessage;
    m_logMessageHasBeenSet = true;
}

bool InferenceServiceDeploymentLogInfo::LogMessageHasBeenSet() const
{
    return m_logMessageHasBeenSet;
}

string InferenceServiceDeploymentLogInfo::GetTimestamp() const
{
    return m_timestamp;
}

void InferenceServiceDeploymentLogInfo::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool InferenceServiceDeploymentLogInfo::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

