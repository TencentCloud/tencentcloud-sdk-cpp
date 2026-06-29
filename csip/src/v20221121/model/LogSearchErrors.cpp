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

#include <tencentcloud/csip/v20221121/model/LogSearchErrors.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LogSearchErrors::LogSearchErrors() :
    m_topicIdHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_errorCodeStrHasBeenSet(false)
{
}

CoreInternalOutcome LogSearchErrors::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSearchErrors.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSearchErrors.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeStr") && !value["ErrorCodeStr"].IsNull())
    {
        if (!value["ErrorCodeStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSearchErrors.ErrorCodeStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCodeStr = string(value["ErrorCodeStr"].GetString());
        m_errorCodeStrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogSearchErrors::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCodeStr.c_str(), allocator).Move(), allocator);
    }

}


string LogSearchErrors::GetTopicId() const
{
    return m_topicId;
}

void LogSearchErrors::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool LogSearchErrors::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string LogSearchErrors::GetErrorMsg() const
{
    return m_errorMsg;
}

void LogSearchErrors::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool LogSearchErrors::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

string LogSearchErrors::GetErrorCodeStr() const
{
    return m_errorCodeStr;
}

void LogSearchErrors::SetErrorCodeStr(const string& _errorCodeStr)
{
    m_errorCodeStr = _errorCodeStr;
    m_errorCodeStrHasBeenSet = true;
}

bool LogSearchErrors::ErrorCodeStrHasBeenSet() const
{
    return m_errorCodeStrHasBeenSet;
}

