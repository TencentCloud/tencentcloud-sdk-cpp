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

#include <tencentcloud/ess/v20201111/model/OrganizationAuthUrl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

OrganizationAuthUrl::OrganizationAuthUrl() :
    m_authUrlHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_subTaskIdHasBeenSet(false)
{
}

CoreInternalOutcome OrganizationAuthUrl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthUrl") && !value["AuthUrl"].IsNull())
    {
        if (!value["AuthUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationAuthUrl.AuthUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authUrl = string(value["AuthUrl"].GetString());
        m_authUrlHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationAuthUrl.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("SubTaskId") && !value["SubTaskId"].IsNull())
    {
        if (!value["SubTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationAuthUrl.SubTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTaskId = string(value["SubTaskId"].GetString());
        m_subTaskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrganizationAuthUrl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_subTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTaskId.c_str(), allocator).Move(), allocator);
    }

}


string OrganizationAuthUrl::GetAuthUrl() const
{
    return m_authUrl;
}

void OrganizationAuthUrl::SetAuthUrl(const string& _authUrl)
{
    m_authUrl = _authUrl;
    m_authUrlHasBeenSet = true;
}

bool OrganizationAuthUrl::AuthUrlHasBeenSet() const
{
    return m_authUrlHasBeenSet;
}

string OrganizationAuthUrl::GetErrorMessage() const
{
    return m_errorMessage;
}

void OrganizationAuthUrl::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool OrganizationAuthUrl::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string OrganizationAuthUrl::GetSubTaskId() const
{
    return m_subTaskId;
}

void OrganizationAuthUrl::SetSubTaskId(const string& _subTaskId)
{
    m_subTaskId = _subTaskId;
    m_subTaskIdHasBeenSet = true;
}

bool OrganizationAuthUrl::SubTaskIdHasBeenSet() const
{
    return m_subTaskIdHasBeenSet;
}

