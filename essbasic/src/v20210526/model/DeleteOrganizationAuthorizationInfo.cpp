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

#include <tencentcloud/essbasic/v20210526/model/DeleteOrganizationAuthorizationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

DeleteOrganizationAuthorizationInfo::DeleteOrganizationAuthorizationInfo() :
    m_authorizationIdHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_organizationOpenIdHasBeenSet(false),
    m_errormessageHasBeenSet(false)
{
}

CoreInternalOutcome DeleteOrganizationAuthorizationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthorizationId") && !value["AuthorizationId"].IsNull())
    {
        if (!value["AuthorizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteOrganizationAuthorizationInfo.AuthorizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationId = string(value["AuthorizationId"].GetString());
        m_authorizationIdHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteOrganizationAuthorizationInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("OrganizationOpenId") && !value["OrganizationOpenId"].IsNull())
    {
        if (!value["OrganizationOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteOrganizationAuthorizationInfo.OrganizationOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationOpenId = string(value["OrganizationOpenId"].GetString());
        m_organizationOpenIdHasBeenSet = true;
    }

    if (value.HasMember("Errormessage") && !value["Errormessage"].IsNull())
    {
        if (!value["Errormessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteOrganizationAuthorizationInfo.Errormessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errormessage = string(value["Errormessage"].GetString());
        m_errormessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteOrganizationAuthorizationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authorizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_errormessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Errormessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errormessage.c_str(), allocator).Move(), allocator);
    }

}


string DeleteOrganizationAuthorizationInfo::GetAuthorizationId() const
{
    return m_authorizationId;
}

void DeleteOrganizationAuthorizationInfo::SetAuthorizationId(const string& _authorizationId)
{
    m_authorizationId = _authorizationId;
    m_authorizationIdHasBeenSet = true;
}

bool DeleteOrganizationAuthorizationInfo::AuthorizationIdHasBeenSet() const
{
    return m_authorizationIdHasBeenSet;
}

string DeleteOrganizationAuthorizationInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void DeleteOrganizationAuthorizationInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool DeleteOrganizationAuthorizationInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string DeleteOrganizationAuthorizationInfo::GetOrganizationOpenId() const
{
    return m_organizationOpenId;
}

void DeleteOrganizationAuthorizationInfo::SetOrganizationOpenId(const string& _organizationOpenId)
{
    m_organizationOpenId = _organizationOpenId;
    m_organizationOpenIdHasBeenSet = true;
}

bool DeleteOrganizationAuthorizationInfo::OrganizationOpenIdHasBeenSet() const
{
    return m_organizationOpenIdHasBeenSet;
}

string DeleteOrganizationAuthorizationInfo::GetErrormessage() const
{
    return m_errormessage;
}

void DeleteOrganizationAuthorizationInfo::SetErrormessage(const string& _errormessage)
{
    m_errormessage = _errormessage;
    m_errormessageHasBeenSet = true;
}

bool DeleteOrganizationAuthorizationInfo::ErrormessageHasBeenSet() const
{
    return m_errormessageHasBeenSet;
}

