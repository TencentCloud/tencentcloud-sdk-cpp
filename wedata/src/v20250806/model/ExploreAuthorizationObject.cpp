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

#include <tencentcloud/wedata/v20250806/model/ExploreAuthorizationObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ExploreAuthorizationObject::ExploreAuthorizationObject() :
    m_resourceHasBeenSet(false),
    m_authorizeSubjectsHasBeenSet(false)
{
}

CoreInternalOutcome ExploreAuthorizationObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExploreAuthorizationObject.Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(value["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("AuthorizeSubjects") && !value["AuthorizeSubjects"].IsNull())
    {
        if (!value["AuthorizeSubjects"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExploreAuthorizationObject.AuthorizeSubjects` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthorizeSubjects"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExploreAuthorizeSubject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authorizeSubjects.push_back(item);
        }
        m_authorizeSubjectsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExploreAuthorizationObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_authorizeSubjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizeSubjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authorizeSubjects.begin(); itr != m_authorizeSubjects.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


ExploreFileResource ExploreAuthorizationObject::GetResource() const
{
    return m_resource;
}

void ExploreAuthorizationObject::SetResource(const ExploreFileResource& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ExploreAuthorizationObject::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

vector<ExploreAuthorizeSubject> ExploreAuthorizationObject::GetAuthorizeSubjects() const
{
    return m_authorizeSubjects;
}

void ExploreAuthorizationObject::SetAuthorizeSubjects(const vector<ExploreAuthorizeSubject>& _authorizeSubjects)
{
    m_authorizeSubjects = _authorizeSubjects;
    m_authorizeSubjectsHasBeenSet = true;
}

bool ExploreAuthorizationObject::AuthorizeSubjectsHasBeenSet() const
{
    return m_authorizeSubjectsHasBeenSet;
}

