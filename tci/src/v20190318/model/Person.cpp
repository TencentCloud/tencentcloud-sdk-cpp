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

#include <tencentcloud/tci/v20190318/model/Person.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

Person::Person() :
    m_libraryIdHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_personNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_jobNumberHasBeenSet(false),
    m_mailHasBeenSet(false),
    m_maleHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_studentNumberHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome Person::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LibraryId") && !value["LibraryId"].IsNull())
    {
        if (!value["LibraryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.LibraryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libraryId = string(value["LibraryId"].GetString());
        m_libraryIdHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("PersonName") && !value["PersonName"].IsNull())
    {
        if (!value["PersonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.PersonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personName = string(value["PersonName"].GetString());
        m_personNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("JobNumber") && !value["JobNumber"].IsNull())
    {
        if (!value["JobNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.JobNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobNumber = string(value["JobNumber"].GetString());
        m_jobNumberHasBeenSet = true;
    }

    if (value.HasMember("Mail") && !value["Mail"].IsNull())
    {
        if (!value["Mail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.Mail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mail = string(value["Mail"].GetString());
        m_mailHasBeenSet = true;
    }

    if (value.HasMember("Male") && !value["Male"].IsNull())
    {
        if (!value["Male"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Person.Male` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_male = value["Male"].GetInt64();
        m_maleHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("StudentNumber") && !value["StudentNumber"].IsNull())
    {
        if (!value["StudentNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.StudentNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_studentNumber = string(value["StudentNumber"].GetString());
        m_studentNumberHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Person.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Person::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_libraryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_personNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_mailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mail.c_str(), allocator).Move(), allocator);
    }

    if (m_maleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Male";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_male, allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_studentNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StudentNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_studentNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string Person::GetLibraryId() const
{
    return m_libraryId;
}

void Person::SetLibraryId(const string& _libraryId)
{
    m_libraryId = _libraryId;
    m_libraryIdHasBeenSet = true;
}

bool Person::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}

string Person::GetPersonId() const
{
    return m_personId;
}

void Person::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool Person::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string Person::GetPersonName() const
{
    return m_personName;
}

void Person::SetPersonName(const string& _personName)
{
    m_personName = _personName;
    m_personNameHasBeenSet = true;
}

bool Person::PersonNameHasBeenSet() const
{
    return m_personNameHasBeenSet;
}

string Person::GetCreateTime() const
{
    return m_createTime;
}

void Person::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Person::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Person::GetJobNumber() const
{
    return m_jobNumber;
}

void Person::SetJobNumber(const string& _jobNumber)
{
    m_jobNumber = _jobNumber;
    m_jobNumberHasBeenSet = true;
}

bool Person::JobNumberHasBeenSet() const
{
    return m_jobNumberHasBeenSet;
}

string Person::GetMail() const
{
    return m_mail;
}

void Person::SetMail(const string& _mail)
{
    m_mail = _mail;
    m_mailHasBeenSet = true;
}

bool Person::MailHasBeenSet() const
{
    return m_mailHasBeenSet;
}

int64_t Person::GetMale() const
{
    return m_male;
}

void Person::SetMale(const int64_t& _male)
{
    m_male = _male;
    m_maleHasBeenSet = true;
}

bool Person::MaleHasBeenSet() const
{
    return m_maleHasBeenSet;
}

string Person::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void Person::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool Person::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string Person::GetStudentNumber() const
{
    return m_studentNumber;
}

void Person::SetStudentNumber(const string& _studentNumber)
{
    m_studentNumber = _studentNumber;
    m_studentNumberHasBeenSet = true;
}

bool Person::StudentNumberHasBeenSet() const
{
    return m_studentNumberHasBeenSet;
}

string Person::GetUpdateTime() const
{
    return m_updateTime;
}

void Person::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Person::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

