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

#include <tencentcloud/cfw/v20190904/model/SearchLogErrors.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

SearchLogErrors::SearchLogErrors() :
    m_topicIdHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_errorCodeStrHasBeenSet(false)
{
}

CoreInternalOutcome SearchLogErrors::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchLogErrors.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchLogErrors.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeStr") && !value["ErrorCodeStr"].IsNull())
    {
        if (!value["ErrorCodeStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchLogErrors.ErrorCodeStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCodeStr = string(value["ErrorCodeStr"].GetString());
        m_errorCodeStrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchLogErrors::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string SearchLogErrors::GetTopicId() const
{
    return m_topicId;
}

void SearchLogErrors::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool SearchLogErrors::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string SearchLogErrors::GetErrorMsg() const
{
    return m_errorMsg;
}

void SearchLogErrors::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool SearchLogErrors::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

string SearchLogErrors::GetErrorCodeStr() const
{
    return m_errorCodeStr;
}

void SearchLogErrors::SetErrorCodeStr(const string& _errorCodeStr)
{
    m_errorCodeStr = _errorCodeStr;
    m_errorCodeStrHasBeenSet = true;
}

bool SearchLogErrors::ErrorCodeStrHasBeenSet() const
{
    return m_errorCodeStrHasBeenSet;
}

