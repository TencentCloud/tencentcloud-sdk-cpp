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

#include <tencentcloud/tci/v20190318/model/CreatePersonRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

CreatePersonRequest::CreatePersonRequest() :
    m_libraryIdHasBeenSet(false),
    m_personNameHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_jobNumberHasBeenSet(false),
    m_mailHasBeenSet(false),
    m_maleHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_studentNumberHasBeenSet(false),
    m_urlsHasBeenSet(false)
{
}

string CreatePersonRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_libraryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_personNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_personName.c_str(), allocator).Move(), allocator);
    }

    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_jobNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_mailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mail.c_str(), allocator).Move(), allocator);
    }

    if (m_maleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Male";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_male, allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_studentNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StudentNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_studentNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_urlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Urls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_urls.begin(); itr != m_urls.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePersonRequest::GetLibraryId() const
{
    return m_libraryId;
}

void CreatePersonRequest::SetLibraryId(const string& _libraryId)
{
    m_libraryId = _libraryId;
    m_libraryIdHasBeenSet = true;
}

bool CreatePersonRequest::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}

string CreatePersonRequest::GetPersonName() const
{
    return m_personName;
}

void CreatePersonRequest::SetPersonName(const string& _personName)
{
    m_personName = _personName;
    m_personNameHasBeenSet = true;
}

bool CreatePersonRequest::PersonNameHasBeenSet() const
{
    return m_personNameHasBeenSet;
}

vector<string> CreatePersonRequest::GetImages() const
{
    return m_images;
}

void CreatePersonRequest::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool CreatePersonRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

string CreatePersonRequest::GetJobNumber() const
{
    return m_jobNumber;
}

void CreatePersonRequest::SetJobNumber(const string& _jobNumber)
{
    m_jobNumber = _jobNumber;
    m_jobNumberHasBeenSet = true;
}

bool CreatePersonRequest::JobNumberHasBeenSet() const
{
    return m_jobNumberHasBeenSet;
}

string CreatePersonRequest::GetMail() const
{
    return m_mail;
}

void CreatePersonRequest::SetMail(const string& _mail)
{
    m_mail = _mail;
    m_mailHasBeenSet = true;
}

bool CreatePersonRequest::MailHasBeenSet() const
{
    return m_mailHasBeenSet;
}

int64_t CreatePersonRequest::GetMale() const
{
    return m_male;
}

void CreatePersonRequest::SetMale(const int64_t& _male)
{
    m_male = _male;
    m_maleHasBeenSet = true;
}

bool CreatePersonRequest::MaleHasBeenSet() const
{
    return m_maleHasBeenSet;
}

string CreatePersonRequest::GetPersonId() const
{
    return m_personId;
}

void CreatePersonRequest::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool CreatePersonRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string CreatePersonRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void CreatePersonRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool CreatePersonRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string CreatePersonRequest::GetStudentNumber() const
{
    return m_studentNumber;
}

void CreatePersonRequest::SetStudentNumber(const string& _studentNumber)
{
    m_studentNumber = _studentNumber;
    m_studentNumberHasBeenSet = true;
}

bool CreatePersonRequest::StudentNumberHasBeenSet() const
{
    return m_studentNumberHasBeenSet;
}

vector<string> CreatePersonRequest::GetUrls() const
{
    return m_urls;
}

void CreatePersonRequest::SetUrls(const vector<string>& _urls)
{
    m_urls = _urls;
    m_urlsHasBeenSet = true;
}

bool CreatePersonRequest::UrlsHasBeenSet() const
{
    return m_urlsHasBeenSet;
}


