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

#include <tencentcloud/tci/v20190318/model/AbsenceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

AbsenceInfo::AbsenceInfo() :
    m_libraryIdsHasBeenSet(false),
    m_personIdHasBeenSet(false)
{
}

CoreInternalOutcome AbsenceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LibraryIds") && !value["LibraryIds"].IsNull())
    {
        if (!value["LibraryIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbsenceInfo.LibraryIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libraryIds = string(value["LibraryIds"].GetString());
        m_libraryIdsHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbsenceInfo.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbsenceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_libraryIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libraryIds.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

}


string AbsenceInfo::GetLibraryIds() const
{
    return m_libraryIds;
}

void AbsenceInfo::SetLibraryIds(const string& _libraryIds)
{
    m_libraryIds = _libraryIds;
    m_libraryIdsHasBeenSet = true;
}

bool AbsenceInfo::LibraryIdsHasBeenSet() const
{
    return m_libraryIdsHasBeenSet;
}

string AbsenceInfo::GetPersonId() const
{
    return m_personId;
}

void AbsenceInfo::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool AbsenceInfo::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

