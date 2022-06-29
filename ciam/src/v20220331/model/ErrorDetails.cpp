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

#include <tencentcloud/ciam/v20220331/model/ErrorDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

ErrorDetails::ErrorDetails() :
    m_userIdHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome ErrorDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorDetails.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorDetails.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrorDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
    }

}


string ErrorDetails::GetUserId() const
{
    return m_userId;
}

void ErrorDetails::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ErrorDetails::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string ErrorDetails::GetError() const
{
    return m_error;
}

void ErrorDetails::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool ErrorDetails::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

