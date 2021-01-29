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

#include <tencentcloud/tbaas/v20180416/model/LogDetailForUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace rapidjson;
using namespace std;

LogDetailForUser::LogDetailForUser() :
    m_lineNumberHasBeenSet(false),
    m_logMessageHasBeenSet(false)
{
}

CoreInternalOutcome LogDetailForUser::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("LineNumber") && !value["LineNumber"].IsNull())
    {
        if (!value["LineNumber"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LogDetailForUser.LineNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lineNumber = value["LineNumber"].GetUint64();
        m_lineNumberHasBeenSet = true;
    }

    if (value.HasMember("LogMessage") && !value["LogMessage"].IsNull())
    {
        if (!value["LogMessage"].IsString())
        {
            return CoreInternalOutcome(Error("response `LogDetailForUser.LogMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logMessage = string(value["LogMessage"].GetString());
        m_logMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogDetailForUser::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_lineNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LineNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineNumber, allocator);
    }

    if (m_logMessageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_logMessage.c_str(), allocator).Move(), allocator);
    }

}


uint64_t LogDetailForUser::GetLineNumber() const
{
    return m_lineNumber;
}

void LogDetailForUser::SetLineNumber(const uint64_t& _lineNumber)
{
    m_lineNumber = _lineNumber;
    m_lineNumberHasBeenSet = true;
}

bool LogDetailForUser::LineNumberHasBeenSet() const
{
    return m_lineNumberHasBeenSet;
}

string LogDetailForUser::GetLogMessage() const
{
    return m_logMessage;
}

void LogDetailForUser::SetLogMessage(const string& _logMessage)
{
    m_logMessage = _logMessage;
    m_logMessageHasBeenSet = true;
}

bool LogDetailForUser::LogMessageHasBeenSet() const
{
    return m_logMessageHasBeenSet;
}

