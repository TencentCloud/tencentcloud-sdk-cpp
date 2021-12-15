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

#include <tencentcloud/eiam/v20210420/model/ApplicationAuthorizationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

ApplicationAuthorizationInfo::ApplicationAuthorizationInfo() :
    m_applicationAccountsHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_inheritedFormHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationAuthorizationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationAccounts") && !value["ApplicationAccounts"].IsNull())
    {
        if (!value["ApplicationAccounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationAuthorizationInfo.ApplicationAccounts` is not array type"));

        const rapidjson::Value &tmpValue = value["ApplicationAccounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_applicationAccounts.push_back((*itr).GetString());
        }
        m_applicationAccountsHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationAuthorizationInfo.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("InheritedForm") && !value["InheritedForm"].IsNull())
    {
        if (!value["InheritedForm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationAuthorizationInfo.InheritedForm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inheritedForm.Deserialize(value["InheritedForm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inheritedFormHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationAuthorizationInfo.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedDate") && !value["CreatedDate"].IsNull())
    {
        if (!value["CreatedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationAuthorizationInfo.CreatedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdDate = string(value["CreatedDate"].GetString());
        m_createdDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationAuthorizationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationAccountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationAccounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_applicationAccounts.begin(); itr != m_applicationAccounts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_inheritedFormHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InheritedForm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inheritedForm.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdDate.c_str(), allocator).Move(), allocator);
    }

}


vector<string> ApplicationAuthorizationInfo::GetApplicationAccounts() const
{
    return m_applicationAccounts;
}

void ApplicationAuthorizationInfo::SetApplicationAccounts(const vector<string>& _applicationAccounts)
{
    m_applicationAccounts = _applicationAccounts;
    m_applicationAccountsHasBeenSet = true;
}

bool ApplicationAuthorizationInfo::ApplicationAccountsHasBeenSet() const
{
    return m_applicationAccountsHasBeenSet;
}

string ApplicationAuthorizationInfo::GetApplicationId() const
{
    return m_applicationId;
}

void ApplicationAuthorizationInfo::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ApplicationAuthorizationInfo::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

InheritedForm ApplicationAuthorizationInfo::GetInheritedForm() const
{
    return m_inheritedForm;
}

void ApplicationAuthorizationInfo::SetInheritedForm(const InheritedForm& _inheritedForm)
{
    m_inheritedForm = _inheritedForm;
    m_inheritedFormHasBeenSet = true;
}

bool ApplicationAuthorizationInfo::InheritedFormHasBeenSet() const
{
    return m_inheritedFormHasBeenSet;
}

string ApplicationAuthorizationInfo::GetApplicationName() const
{
    return m_applicationName;
}

void ApplicationAuthorizationInfo::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ApplicationAuthorizationInfo::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string ApplicationAuthorizationInfo::GetCreatedDate() const
{
    return m_createdDate;
}

void ApplicationAuthorizationInfo::SetCreatedDate(const string& _createdDate)
{
    m_createdDate = _createdDate;
    m_createdDateHasBeenSet = true;
}

bool ApplicationAuthorizationInfo::CreatedDateHasBeenSet() const
{
    return m_createdDateHasBeenSet;
}

