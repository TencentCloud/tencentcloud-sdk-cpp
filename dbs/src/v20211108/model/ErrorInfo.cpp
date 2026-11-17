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

#include <tencentcloud/dbs/v20211108/model/ErrorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

ErrorInfo::ErrorInfo() :
    m_errorTypeHasBeenSet(false),
    m_errorMsgHasBeenSet(false)
{
}

CoreInternalOutcome ErrorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrorType") && !value["ErrorType"].IsNull())
    {
        if (!value["ErrorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfo.ErrorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorType = string(value["ErrorType"].GetString());
        m_errorTypeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfo.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorType.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

}


string ErrorInfo::GetErrorType() const
{
    return m_errorType;
}

void ErrorInfo::SetErrorType(const string& _errorType)
{
    m_errorType = _errorType;
    m_errorTypeHasBeenSet = true;
}

bool ErrorInfo::ErrorTypeHasBeenSet() const
{
    return m_errorTypeHasBeenSet;
}

string ErrorInfo::GetErrorMsg() const
{
    return m_errorMsg;
}

void ErrorInfo::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool ErrorInfo::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

