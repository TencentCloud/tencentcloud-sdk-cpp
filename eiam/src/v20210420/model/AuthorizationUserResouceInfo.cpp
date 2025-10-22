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

#include <tencentcloud/eiam/v20210420/model/AuthorizationUserResouceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

AuthorizationUserResouceInfo::AuthorizationUserResouceInfo() :
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_inheritedFormHasBeenSet(false),
    m_applicationAccountsHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

CoreInternalOutcome AuthorizationUserResouceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationUserResouceInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationUserResouceInfo.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationUserResouceInfo.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("InheritedForm") && !value["InheritedForm"].IsNull())
    {
        if (!value["InheritedForm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationUserResouceInfo.InheritedForm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inheritedForm.Deserialize(value["InheritedForm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inheritedFormHasBeenSet = true;
    }

    if (value.HasMember("ApplicationAccounts") && !value["ApplicationAccounts"].IsNull())
    {
        if (!value["ApplicationAccounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuthorizationUserResouceInfo.ApplicationAccounts` is not array type"));

        const rapidjson::Value &tmpValue = value["ApplicationAccounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_applicationAccounts.push_back((*itr).GetString());
        }
        m_applicationAccountsHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationUserResouceInfo.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthorizationUserResouceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_inheritedFormHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InheritedForm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inheritedForm.ToJsonObject(value[key.c_str()], allocator);
    }

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

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

}


string AuthorizationUserResouceInfo::GetResourceId() const
{
    return m_resourceId;
}

void AuthorizationUserResouceInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool AuthorizationUserResouceInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string AuthorizationUserResouceInfo::GetResourceType() const
{
    return m_resourceType;
}

void AuthorizationUserResouceInfo::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool AuthorizationUserResouceInfo::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string AuthorizationUserResouceInfo::GetResource() const
{
    return m_resource;
}

void AuthorizationUserResouceInfo::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool AuthorizationUserResouceInfo::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

InheritedForm AuthorizationUserResouceInfo::GetInheritedForm() const
{
    return m_inheritedForm;
}

void AuthorizationUserResouceInfo::SetInheritedForm(const InheritedForm& _inheritedForm)
{
    m_inheritedForm = _inheritedForm;
    m_inheritedFormHasBeenSet = true;
}

bool AuthorizationUserResouceInfo::InheritedFormHasBeenSet() const
{
    return m_inheritedFormHasBeenSet;
}

vector<string> AuthorizationUserResouceInfo::GetApplicationAccounts() const
{
    return m_applicationAccounts;
}

void AuthorizationUserResouceInfo::SetApplicationAccounts(const vector<string>& _applicationAccounts)
{
    m_applicationAccounts = _applicationAccounts;
    m_applicationAccountsHasBeenSet = true;
}

bool AuthorizationUserResouceInfo::ApplicationAccountsHasBeenSet() const
{
    return m_applicationAccountsHasBeenSet;
}

string AuthorizationUserResouceInfo::GetResourceName() const
{
    return m_resourceName;
}

void AuthorizationUserResouceInfo::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool AuthorizationUserResouceInfo::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

