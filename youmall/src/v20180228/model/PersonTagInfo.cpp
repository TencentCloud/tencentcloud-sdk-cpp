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

#include <tencentcloud/youmall/v20180228/model/PersonTagInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

PersonTagInfo::PersonTagInfo() :
    m_oldTypeHasBeenSet(false),
    m_newTypeHasBeenSet(false),
    m_personIdHasBeenSet(false)
{
}

CoreInternalOutcome PersonTagInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OldType") && !value["OldType"].IsNull())
    {
        if (!value["OldType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonTagInfo.OldType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oldType = value["OldType"].GetInt64();
        m_oldTypeHasBeenSet = true;
    }

    if (value.HasMember("NewType") && !value["NewType"].IsNull())
    {
        if (!value["NewType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonTagInfo.NewType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newType = value["NewType"].GetInt64();
        m_newTypeHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonTagInfo.PersonId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_personId = value["PersonId"].GetInt64();
        m_personIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonTagInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_oldTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oldType, allocator);
    }

    if (m_newTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newType, allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_personId, allocator);
    }

}


int64_t PersonTagInfo::GetOldType() const
{
    return m_oldType;
}

void PersonTagInfo::SetOldType(const int64_t& _oldType)
{
    m_oldType = _oldType;
    m_oldTypeHasBeenSet = true;
}

bool PersonTagInfo::OldTypeHasBeenSet() const
{
    return m_oldTypeHasBeenSet;
}

int64_t PersonTagInfo::GetNewType() const
{
    return m_newType;
}

void PersonTagInfo::SetNewType(const int64_t& _newType)
{
    m_newType = _newType;
    m_newTypeHasBeenSet = true;
}

bool PersonTagInfo::NewTypeHasBeenSet() const
{
    return m_newTypeHasBeenSet;
}

int64_t PersonTagInfo::GetPersonId() const
{
    return m_personId;
}

void PersonTagInfo::SetPersonId(const int64_t& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool PersonTagInfo::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

