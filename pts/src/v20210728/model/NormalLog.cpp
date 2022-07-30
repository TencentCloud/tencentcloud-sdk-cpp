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

#include <tencentcloud/pts/v20210728/model/NormalLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

NormalLog::NormalLog() :
    m_timestampHasBeenSet(false),
    m_severityTextHasBeenSet(false),
    m_bodyHasBeenSet(false)
{
}

CoreInternalOutcome NormalLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalLog.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("SeverityText") && !value["SeverityText"].IsNull())
    {
        if (!value["SeverityText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalLog.SeverityText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severityText = string(value["SeverityText"].GetString());
        m_severityTextHasBeenSet = true;
    }

    if (value.HasMember("Body") && !value["Body"].IsNull())
    {
        if (!value["Body"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormalLog.Body` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_body = string(value["Body"].GetString());
        m_bodyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NormalLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_severityTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeverityText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_severityText.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_body.c_str(), allocator).Move(), allocator);
    }

}


string NormalLog::GetTimestamp() const
{
    return m_timestamp;
}

void NormalLog::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool NormalLog::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string NormalLog::GetSeverityText() const
{
    return m_severityText;
}

void NormalLog::SetSeverityText(const string& _severityText)
{
    m_severityText = _severityText;
    m_severityTextHasBeenSet = true;
}

bool NormalLog::SeverityTextHasBeenSet() const
{
    return m_severityTextHasBeenSet;
}

string NormalLog::GetBody() const
{
    return m_body;
}

void NormalLog::SetBody(const string& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool NormalLog::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

