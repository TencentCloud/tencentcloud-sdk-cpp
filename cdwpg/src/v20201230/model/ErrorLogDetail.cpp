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

#include <tencentcloud/cdwpg/v20201230/model/ErrorLogDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

ErrorLogDetail::ErrorLogDetail() :
    m_userNameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_errorTimeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome ErrorLogDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorLogDetail.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorLogDetail.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("ErrorTime") && !value["ErrorTime"].IsNull())
    {
        if (!value["ErrorTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorLogDetail.ErrorTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorTime = string(value["ErrorTime"].GetString());
        m_errorTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorLogDetail.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrorLogDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_errorTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorTime.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

}


string ErrorLogDetail::GetUserName() const
{
    return m_userName;
}

void ErrorLogDetail::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ErrorLogDetail::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ErrorLogDetail::GetDatabase() const
{
    return m_database;
}

void ErrorLogDetail::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool ErrorLogDetail::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string ErrorLogDetail::GetErrorTime() const
{
    return m_errorTime;
}

void ErrorLogDetail::SetErrorTime(const string& _errorTime)
{
    m_errorTime = _errorTime;
    m_errorTimeHasBeenSet = true;
}

bool ErrorLogDetail::ErrorTimeHasBeenSet() const
{
    return m_errorTimeHasBeenSet;
}

string ErrorLogDetail::GetErrorMessage() const
{
    return m_errorMessage;
}

void ErrorLogDetail::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool ErrorLogDetail::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

