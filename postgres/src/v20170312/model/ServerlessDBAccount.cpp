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

#include <tencentcloud/postgres/v20170312/model/ServerlessDBAccount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ServerlessDBAccount::ServerlessDBAccount() :
    m_dBUserHasBeenSet(false),
    m_dBPasswordHasBeenSet(false),
    m_dBConnLimitHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessDBAccount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DBUser") && !value["DBUser"].IsNull())
    {
        if (!value["DBUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBAccount.DBUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBUser = string(value["DBUser"].GetString());
        m_dBUserHasBeenSet = true;
    }

    if (value.HasMember("DBPassword") && !value["DBPassword"].IsNull())
    {
        if (!value["DBPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBAccount.DBPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBPassword = string(value["DBPassword"].GetString());
        m_dBPasswordHasBeenSet = true;
    }

    if (value.HasMember("DBConnLimit") && !value["DBConnLimit"].IsNull())
    {
        if (!value["DBConnLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBAccount.DBConnLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dBConnLimit = value["DBConnLimit"].GetInt64();
        m_dBConnLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessDBAccount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dBUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBUser.c_str(), allocator).Move(), allocator);
    }

    if (m_dBPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_dBConnLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBConnLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dBConnLimit, allocator);
    }

}


string ServerlessDBAccount::GetDBUser() const
{
    return m_dBUser;
}

void ServerlessDBAccount::SetDBUser(const string& _dBUser)
{
    m_dBUser = _dBUser;
    m_dBUserHasBeenSet = true;
}

bool ServerlessDBAccount::DBUserHasBeenSet() const
{
    return m_dBUserHasBeenSet;
}

string ServerlessDBAccount::GetDBPassword() const
{
    return m_dBPassword;
}

void ServerlessDBAccount::SetDBPassword(const string& _dBPassword)
{
    m_dBPassword = _dBPassword;
    m_dBPasswordHasBeenSet = true;
}

bool ServerlessDBAccount::DBPasswordHasBeenSet() const
{
    return m_dBPasswordHasBeenSet;
}

int64_t ServerlessDBAccount::GetDBConnLimit() const
{
    return m_dBConnLimit;
}

void ServerlessDBAccount::SetDBConnLimit(const int64_t& _dBConnLimit)
{
    m_dBConnLimit = _dBConnLimit;
    m_dBConnLimitHasBeenSet = true;
}

bool ServerlessDBAccount::DBConnLimitHasBeenSet() const
{
    return m_dBConnLimitHasBeenSet;
}

