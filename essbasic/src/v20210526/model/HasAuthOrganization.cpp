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

#include <tencentcloud/essbasic/v20210526/model/HasAuthOrganization.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

HasAuthOrganization::HasAuthOrganization() :
    m_organizationOpenIdHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_authorizedOrganizationOpenIdHasBeenSet(false),
    m_authorizedOrganizationNameHasBeenSet(false),
    m_authorizeTimeHasBeenSet(false)
{
}

CoreInternalOutcome HasAuthOrganization::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrganizationOpenId") && !value["OrganizationOpenId"].IsNull())
    {
        if (!value["OrganizationOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthOrganization.OrganizationOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationOpenId = string(value["OrganizationOpenId"].GetString());
        m_organizationOpenIdHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthOrganization.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedOrganizationOpenId") && !value["AuthorizedOrganizationOpenId"].IsNull())
    {
        if (!value["AuthorizedOrganizationOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthOrganization.AuthorizedOrganizationOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedOrganizationOpenId = string(value["AuthorizedOrganizationOpenId"].GetString());
        m_authorizedOrganizationOpenIdHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedOrganizationName") && !value["AuthorizedOrganizationName"].IsNull())
    {
        if (!value["AuthorizedOrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthOrganization.AuthorizedOrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedOrganizationName = string(value["AuthorizedOrganizationName"].GetString());
        m_authorizedOrganizationNameHasBeenSet = true;
    }

    if (value.HasMember("AuthorizeTime") && !value["AuthorizeTime"].IsNull())
    {
        if (!value["AuthorizeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HasAuthOrganization.AuthorizeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authorizeTime = value["AuthorizeTime"].GetInt64();
        m_authorizeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HasAuthOrganization::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_organizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedOrganizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedOrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizedOrganizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedOrganizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedOrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizedOrganizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizeTime, allocator);
    }

}


string HasAuthOrganization::GetOrganizationOpenId() const
{
    return m_organizationOpenId;
}

void HasAuthOrganization::SetOrganizationOpenId(const string& _organizationOpenId)
{
    m_organizationOpenId = _organizationOpenId;
    m_organizationOpenIdHasBeenSet = true;
}

bool HasAuthOrganization::OrganizationOpenIdHasBeenSet() const
{
    return m_organizationOpenIdHasBeenSet;
}

string HasAuthOrganization::GetOrganizationName() const
{
    return m_organizationName;
}

void HasAuthOrganization::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool HasAuthOrganization::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string HasAuthOrganization::GetAuthorizedOrganizationOpenId() const
{
    return m_authorizedOrganizationOpenId;
}

void HasAuthOrganization::SetAuthorizedOrganizationOpenId(const string& _authorizedOrganizationOpenId)
{
    m_authorizedOrganizationOpenId = _authorizedOrganizationOpenId;
    m_authorizedOrganizationOpenIdHasBeenSet = true;
}

bool HasAuthOrganization::AuthorizedOrganizationOpenIdHasBeenSet() const
{
    return m_authorizedOrganizationOpenIdHasBeenSet;
}

string HasAuthOrganization::GetAuthorizedOrganizationName() const
{
    return m_authorizedOrganizationName;
}

void HasAuthOrganization::SetAuthorizedOrganizationName(const string& _authorizedOrganizationName)
{
    m_authorizedOrganizationName = _authorizedOrganizationName;
    m_authorizedOrganizationNameHasBeenSet = true;
}

bool HasAuthOrganization::AuthorizedOrganizationNameHasBeenSet() const
{
    return m_authorizedOrganizationNameHasBeenSet;
}

int64_t HasAuthOrganization::GetAuthorizeTime() const
{
    return m_authorizeTime;
}

void HasAuthOrganization::SetAuthorizeTime(const int64_t& _authorizeTime)
{
    m_authorizeTime = _authorizeTime;
    m_authorizeTimeHasBeenSet = true;
}

bool HasAuthOrganization::AuthorizeTimeHasBeenSet() const
{
    return m_authorizeTimeHasBeenSet;
}

