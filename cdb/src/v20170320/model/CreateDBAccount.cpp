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

#include <tencentcloud/cdb/v20170320/model/CreateDBAccount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CreateDBAccount::CreateDBAccount() :
    m_userHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_sSMInfosHasBeenSet(false)
{
}

CoreInternalOutcome CreateDBAccount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDBAccount.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDBAccount.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("SSMInfos") && !value["SSMInfos"].IsNull())
    {
        if (!value["SSMInfos"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDBAccount.SSMInfos` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sSMInfos.Deserialize(value["SSMInfos"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sSMInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateDBAccount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_sSMInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSMInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sSMInfos.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CreateDBAccount::GetUser() const
{
    return m_user;
}

void CreateDBAccount::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool CreateDBAccount::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string CreateDBAccount::GetHost() const
{
    return m_host;
}

void CreateDBAccount::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool CreateDBAccount::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

SSMCreateAccountInfos CreateDBAccount::GetSSMInfos() const
{
    return m_sSMInfos;
}

void CreateDBAccount::SetSSMInfos(const SSMCreateAccountInfos& _sSMInfos)
{
    m_sSMInfos = _sSMInfos;
    m_sSMInfosHasBeenSet = true;
}

bool CreateDBAccount::SSMInfosHasBeenSet() const
{
    return m_sSMInfosHasBeenSet;
}

