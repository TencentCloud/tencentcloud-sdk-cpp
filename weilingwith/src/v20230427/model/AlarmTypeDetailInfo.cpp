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

#include <tencentcloud/weilingwith/v20230427/model/AlarmTypeDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

AlarmTypeDetailInfo::AlarmTypeDetailInfo() :
    m_idHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_englishNameHasBeenSet(false)
{
}

CoreInternalOutcome AlarmTypeDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTypeDetailInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTypeDetailInfo.ParentId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = value["ParentId"].GetInt64();
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTypeDetailInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTypeDetailInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("EnglishName") && !value["EnglishName"].IsNull())
    {
        if (!value["EnglishName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmTypeDetailInfo.EnglishName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_englishName = string(value["EnglishName"].GetString());
        m_englishNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmTypeDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentId, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_englishNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnglishName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_englishName.c_str(), allocator).Move(), allocator);
    }

}


int64_t AlarmTypeDetailInfo::GetId() const
{
    return m_id;
}

void AlarmTypeDetailInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AlarmTypeDetailInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t AlarmTypeDetailInfo::GetParentId() const
{
    return m_parentId;
}

void AlarmTypeDetailInfo::SetParentId(const int64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool AlarmTypeDetailInfo::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

int64_t AlarmTypeDetailInfo::GetType() const
{
    return m_type;
}

void AlarmTypeDetailInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AlarmTypeDetailInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AlarmTypeDetailInfo::GetName() const
{
    return m_name;
}

void AlarmTypeDetailInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AlarmTypeDetailInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AlarmTypeDetailInfo::GetEnglishName() const
{
    return m_englishName;
}

void AlarmTypeDetailInfo::SetEnglishName(const string& _englishName)
{
    m_englishName = _englishName;
    m_englishNameHasBeenSet = true;
}

bool AlarmTypeDetailInfo::EnglishNameHasBeenSet() const
{
    return m_englishNameHasBeenSet;
}

