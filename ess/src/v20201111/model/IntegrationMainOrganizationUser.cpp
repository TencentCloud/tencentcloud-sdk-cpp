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

#include <tencentcloud/ess/v20201111/model/IntegrationMainOrganizationUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

IntegrationMainOrganizationUser::IntegrationMainOrganizationUser() :
    m_mainOrganizationIdHasBeenSet(false),
    m_mainUserIdHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

CoreInternalOutcome IntegrationMainOrganizationUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MainOrganizationId") && !value["MainOrganizationId"].IsNull())
    {
        if (!value["MainOrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationMainOrganizationUser.MainOrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainOrganizationId = string(value["MainOrganizationId"].GetString());
        m_mainOrganizationIdHasBeenSet = true;
    }

    if (value.HasMember("MainUserId") && !value["MainUserId"].IsNull())
    {
        if (!value["MainUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationMainOrganizationUser.MainUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainUserId = string(value["MainUserId"].GetString());
        m_mainUserIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationMainOrganizationUser.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntegrationMainOrganizationUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mainOrganizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainOrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainOrganizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_mainUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

}


string IntegrationMainOrganizationUser::GetMainOrganizationId() const
{
    return m_mainOrganizationId;
}

void IntegrationMainOrganizationUser::SetMainOrganizationId(const string& _mainOrganizationId)
{
    m_mainOrganizationId = _mainOrganizationId;
    m_mainOrganizationIdHasBeenSet = true;
}

bool IntegrationMainOrganizationUser::MainOrganizationIdHasBeenSet() const
{
    return m_mainOrganizationIdHasBeenSet;
}

string IntegrationMainOrganizationUser::GetMainUserId() const
{
    return m_mainUserId;
}

void IntegrationMainOrganizationUser::SetMainUserId(const string& _mainUserId)
{
    m_mainUserId = _mainUserId;
    m_mainUserIdHasBeenSet = true;
}

bool IntegrationMainOrganizationUser::MainUserIdHasBeenSet() const
{
    return m_mainUserIdHasBeenSet;
}

string IntegrationMainOrganizationUser::GetUserName() const
{
    return m_userName;
}

void IntegrationMainOrganizationUser::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool IntegrationMainOrganizationUser::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

