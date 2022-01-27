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

#include <tencentcloud/cme/v20191029/model/ClassDeletedEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

ClassDeletedEvent::ClassDeletedEvent() :
    m_ownerHasBeenSet(false),
    m_classPathSetHasBeenSet(false)
{
}

CoreInternalOutcome ClassDeletedEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClassDeletedEvent.Owner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_owner.Deserialize(value["Owner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("ClassPathSet") && !value["ClassPathSet"].IsNull())
    {
        if (!value["ClassPathSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClassDeletedEvent.ClassPathSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ClassPathSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_classPathSet.push_back((*itr).GetString());
        }
        m_classPathSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClassDeletedEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_owner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_classPathSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassPathSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_classPathSet.begin(); itr != m_classPathSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


Entity ClassDeletedEvent::GetOwner() const
{
    return m_owner;
}

void ClassDeletedEvent::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool ClassDeletedEvent::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

vector<string> ClassDeletedEvent::GetClassPathSet() const
{
    return m_classPathSet;
}

void ClassDeletedEvent::SetClassPathSet(const vector<string>& _classPathSet)
{
    m_classPathSet = _classPathSet;
    m_classPathSetHasBeenSet = true;
}

bool ClassDeletedEvent::ClassPathSetHasBeenSet() const
{
    return m_classPathSetHasBeenSet;
}

