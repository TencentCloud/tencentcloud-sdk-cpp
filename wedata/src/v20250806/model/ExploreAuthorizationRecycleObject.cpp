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

#include <tencentcloud/wedata/v20250806/model/ExploreAuthorizationRecycleObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ExploreAuthorizationRecycleObject::ExploreAuthorizationRecycleObject() :
    m_resourceHasBeenSet(false),
    m_recycleSubjectsHasBeenSet(false)
{
}

CoreInternalOutcome ExploreAuthorizationRecycleObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExploreAuthorizationRecycleObject.Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(value["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("RecycleSubjects") && !value["RecycleSubjects"].IsNull())
    {
        if (!value["RecycleSubjects"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExploreAuthorizationRecycleObject.RecycleSubjects` is not array type"));

        const rapidjson::Value &tmpValue = value["RecycleSubjects"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExploreAuthorizeSubject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recycleSubjects.push_back(item);
        }
        m_recycleSubjectsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExploreAuthorizationRecycleObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_recycleSubjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecycleSubjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recycleSubjects.begin(); itr != m_recycleSubjects.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


ExploreFileResource ExploreAuthorizationRecycleObject::GetResource() const
{
    return m_resource;
}

void ExploreAuthorizationRecycleObject::SetResource(const ExploreFileResource& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ExploreAuthorizationRecycleObject::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

vector<ExploreAuthorizeSubject> ExploreAuthorizationRecycleObject::GetRecycleSubjects() const
{
    return m_recycleSubjects;
}

void ExploreAuthorizationRecycleObject::SetRecycleSubjects(const vector<ExploreAuthorizeSubject>& _recycleSubjects)
{
    m_recycleSubjects = _recycleSubjects;
    m_recycleSubjectsHasBeenSet = true;
}

bool ExploreAuthorizationRecycleObject::RecycleSubjectsHasBeenSet() const
{
    return m_recycleSubjectsHasBeenSet;
}

