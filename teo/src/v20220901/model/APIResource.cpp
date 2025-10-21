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

#include <tencentcloud/teo/v20220901/model/APIResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

APIResource::APIResource() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_aPIServiceIdsHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodsHasBeenSet(false),
    m_requestConstraintHasBeenSet(false)
{
}

CoreInternalOutcome APIResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIResource.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIResource.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("APIServiceIds") && !value["APIServiceIds"].IsNull())
    {
        if (!value["APIServiceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `APIResource.APIServiceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["APIServiceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aPIServiceIds.push_back((*itr).GetString());
        }
        m_aPIServiceIdsHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIResource.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Methods") && !value["Methods"].IsNull())
    {
        if (!value["Methods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `APIResource.Methods` is not array type"));

        const rapidjson::Value &tmpValue = value["Methods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_methods.push_back((*itr).GetString());
        }
        m_methodsHasBeenSet = true;
    }

    if (value.HasMember("RequestConstraint") && !value["RequestConstraint"].IsNull())
    {
        if (!value["RequestConstraint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIResource.RequestConstraint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestConstraint = string(value["RequestConstraint"].GetString());
        m_requestConstraintHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void APIResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIServiceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIServiceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aPIServiceIds.begin(); itr != m_aPIServiceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Methods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_methods.begin(); itr != m_methods.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_requestConstraintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestConstraint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestConstraint.c_str(), allocator).Move(), allocator);
    }

}


string APIResource::GetId() const
{
    return m_id;
}

void APIResource::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool APIResource::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string APIResource::GetName() const
{
    return m_name;
}

void APIResource::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool APIResource::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> APIResource::GetAPIServiceIds() const
{
    return m_aPIServiceIds;
}

void APIResource::SetAPIServiceIds(const vector<string>& _aPIServiceIds)
{
    m_aPIServiceIds = _aPIServiceIds;
    m_aPIServiceIdsHasBeenSet = true;
}

bool APIResource::APIServiceIdsHasBeenSet() const
{
    return m_aPIServiceIdsHasBeenSet;
}

string APIResource::GetPath() const
{
    return m_path;
}

void APIResource::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool APIResource::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

vector<string> APIResource::GetMethods() const
{
    return m_methods;
}

void APIResource::SetMethods(const vector<string>& _methods)
{
    m_methods = _methods;
    m_methodsHasBeenSet = true;
}

bool APIResource::MethodsHasBeenSet() const
{
    return m_methodsHasBeenSet;
}

string APIResource::GetRequestConstraint() const
{
    return m_requestConstraint;
}

void APIResource::SetRequestConstraint(const string& _requestConstraint)
{
    m_requestConstraint = _requestConstraint;
    m_requestConstraintHasBeenSet = true;
}

bool APIResource::RequestConstraintHasBeenSet() const
{
    return m_requestConstraintHasBeenSet;
}

