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

#include <tencentcloud/postgres/v20170312/model/DatabasePrivilege.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DatabasePrivilege::DatabasePrivilege() :
    m_objectHasBeenSet(false),
    m_privilegeSetHasBeenSet(false)
{
}

CoreInternalOutcome DatabasePrivilege::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Object") && !value["Object"].IsNull())
    {
        if (!value["Object"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatabasePrivilege.Object` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_object.Deserialize(value["Object"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_objectHasBeenSet = true;
    }

    if (value.HasMember("PrivilegeSet") && !value["PrivilegeSet"].IsNull())
    {
        if (!value["PrivilegeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatabasePrivilege.PrivilegeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivilegeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privilegeSet.push_back((*itr).GetString());
        }
        m_privilegeSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabasePrivilege::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_objectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Object";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_object.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_privilegeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privilegeSet.begin(); itr != m_privilegeSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


DatabaseObject DatabasePrivilege::GetObject() const
{
    return m_object;
}

void DatabasePrivilege::SetObject(const DatabaseObject& _object)
{
    m_object = _object;
    m_objectHasBeenSet = true;
}

bool DatabasePrivilege::ObjectHasBeenSet() const
{
    return m_objectHasBeenSet;
}

vector<string> DatabasePrivilege::GetPrivilegeSet() const
{
    return m_privilegeSet;
}

void DatabasePrivilege::SetPrivilegeSet(const vector<string>& _privilegeSet)
{
    m_privilegeSet = _privilegeSet;
    m_privilegeSetHasBeenSet = true;
}

bool DatabasePrivilege::PrivilegeSetHasBeenSet() const
{
    return m_privilegeSetHasBeenSet;
}

