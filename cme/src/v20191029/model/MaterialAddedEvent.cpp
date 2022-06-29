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

#include <tencentcloud/cme/v20191029/model/MaterialAddedEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MaterialAddedEvent::MaterialAddedEvent() :
    m_materialIdSetHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_classPathHasBeenSet(false)
{
}

CoreInternalOutcome MaterialAddedEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaterialIdSet") && !value["MaterialIdSet"].IsNull())
    {
        if (!value["MaterialIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaterialAddedEvent.MaterialIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MaterialIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_materialIdSet.push_back((*itr).GetString());
        }
        m_materialIdSetHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialAddedEvent.Owner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_owner.Deserialize(value["Owner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("ClassPath") && !value["ClassPath"].IsNull())
    {
        if (!value["ClassPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialAddedEvent.ClassPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classPath = string(value["ClassPath"].GetString());
        m_classPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaterialAddedEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_materialIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_materialIdSet.begin(); itr != m_materialIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_owner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_classPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classPath.c_str(), allocator).Move(), allocator);
    }

}


vector<string> MaterialAddedEvent::GetMaterialIdSet() const
{
    return m_materialIdSet;
}

void MaterialAddedEvent::SetMaterialIdSet(const vector<string>& _materialIdSet)
{
    m_materialIdSet = _materialIdSet;
    m_materialIdSetHasBeenSet = true;
}

bool MaterialAddedEvent::MaterialIdSetHasBeenSet() const
{
    return m_materialIdSetHasBeenSet;
}

Entity MaterialAddedEvent::GetOwner() const
{
    return m_owner;
}

void MaterialAddedEvent::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool MaterialAddedEvent::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string MaterialAddedEvent::GetClassPath() const
{
    return m_classPath;
}

void MaterialAddedEvent::SetClassPath(const string& _classPath)
{
    m_classPath = _classPath;
    m_classPathHasBeenSet = true;
}

bool MaterialAddedEvent::ClassPathHasBeenSet() const
{
    return m_classPathHasBeenSet;
}

