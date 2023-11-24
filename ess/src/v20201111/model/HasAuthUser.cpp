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

#include <tencentcloud/ess/v20201111/model/HasAuthUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

HasAuthUser::HasAuthUser() :
    m_userIdHasBeenSet(false),
    m_belongToHasBeenSet(false),
    m_mainOrganizationIdHasBeenSet(false)
{
}

CoreInternalOutcome HasAuthUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthUser.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("BelongTo") && !value["BelongTo"].IsNull())
    {
        if (!value["BelongTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthUser.BelongTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_belongTo = string(value["BelongTo"].GetString());
        m_belongToHasBeenSet = true;
    }

    if (value.HasMember("MainOrganizationId") && !value["MainOrganizationId"].IsNull())
    {
        if (!value["MainOrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthUser.MainOrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainOrganizationId = string(value["MainOrganizationId"].GetString());
        m_mainOrganizationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HasAuthUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_belongToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_belongTo.c_str(), allocator).Move(), allocator);
    }

    if (m_mainOrganizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainOrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainOrganizationId.c_str(), allocator).Move(), allocator);
    }

}


string HasAuthUser::GetUserId() const
{
    return m_userId;
}

void HasAuthUser::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool HasAuthUser::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string HasAuthUser::GetBelongTo() const
{
    return m_belongTo;
}

void HasAuthUser::SetBelongTo(const string& _belongTo)
{
    m_belongTo = _belongTo;
    m_belongToHasBeenSet = true;
}

bool HasAuthUser::BelongToHasBeenSet() const
{
    return m_belongToHasBeenSet;
}

string HasAuthUser::GetMainOrganizationId() const
{
    return m_mainOrganizationId;
}

void HasAuthUser::SetMainOrganizationId(const string& _mainOrganizationId)
{
    m_mainOrganizationId = _mainOrganizationId;
    m_mainOrganizationIdHasBeenSet = true;
}

bool HasAuthUser::MainOrganizationIdHasBeenSet() const
{
    return m_mainOrganizationIdHasBeenSet;
}

