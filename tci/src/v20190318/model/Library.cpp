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

#include <tencentcloud/tci/v20190318/model/Library.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

Library::Library() :
    m_createTimeHasBeenSet(false),
    m_libraryIdHasBeenSet(false),
    m_libraryNameHasBeenSet(false),
    m_personCountHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome Library::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Library.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LibraryId") && !value["LibraryId"].IsNull())
    {
        if (!value["LibraryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Library.LibraryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libraryId = string(value["LibraryId"].GetString());
        m_libraryIdHasBeenSet = true;
    }

    if (value.HasMember("LibraryName") && !value["LibraryName"].IsNull())
    {
        if (!value["LibraryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Library.LibraryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libraryName = string(value["LibraryName"].GetString());
        m_libraryNameHasBeenSet = true;
    }

    if (value.HasMember("PersonCount") && !value["PersonCount"].IsNull())
    {
        if (!value["PersonCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Library.PersonCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_personCount = value["PersonCount"].GetInt64();
        m_personCountHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Library.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Library::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_libraryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_libraryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libraryName.c_str(), allocator).Move(), allocator);
    }

    if (m_personCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_personCount, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string Library::GetCreateTime() const
{
    return m_createTime;
}

void Library::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Library::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Library::GetLibraryId() const
{
    return m_libraryId;
}

void Library::SetLibraryId(const string& _libraryId)
{
    m_libraryId = _libraryId;
    m_libraryIdHasBeenSet = true;
}

bool Library::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}

string Library::GetLibraryName() const
{
    return m_libraryName;
}

void Library::SetLibraryName(const string& _libraryName)
{
    m_libraryName = _libraryName;
    m_libraryNameHasBeenSet = true;
}

bool Library::LibraryNameHasBeenSet() const
{
    return m_libraryNameHasBeenSet;
}

int64_t Library::GetPersonCount() const
{
    return m_personCount;
}

void Library::SetPersonCount(const int64_t& _personCount)
{
    m_personCount = _personCount;
    m_personCountHasBeenSet = true;
}

bool Library::PersonCountHasBeenSet() const
{
    return m_personCountHasBeenSet;
}

string Library::GetUpdateTime() const
{
    return m_updateTime;
}

void Library::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Library::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

