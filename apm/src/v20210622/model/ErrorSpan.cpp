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

#include <tencentcloud/apm/v20210622/model/ErrorSpan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ErrorSpan::ErrorSpan() :
    m_spanIDHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome ErrorSpan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpanID") && !value["SpanID"].IsNull())
    {
        if (!value["SpanID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorSpan.SpanID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spanID = string(value["SpanID"].GetString());
        m_spanIDHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorSpan.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrorSpan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spanIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpanID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spanID.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

}


string ErrorSpan::GetSpanID() const
{
    return m_spanID;
}

void ErrorSpan::SetSpanID(const string& _spanID)
{
    m_spanID = _spanID;
    m_spanIDHasBeenSet = true;
}

bool ErrorSpan::SpanIDHasBeenSet() const
{
    return m_spanIDHasBeenSet;
}

string ErrorSpan::GetErrorMessage() const
{
    return m_errorMessage;
}

void ErrorSpan::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool ErrorSpan::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

