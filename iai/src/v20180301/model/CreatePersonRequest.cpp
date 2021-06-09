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

#include <tencentcloud/iai/v20180301/model/CreatePersonRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

CreatePersonRequest::CreatePersonRequest() :
    m_groupIdHasBeenSet(false),
    m_personNameHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_personExDescriptionInfosHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_uniquePersonControlHasBeenSet(false),
    m_qualityControlHasBeenSet(false),
    m_needRotateDetectionHasBeenSet(false)
{
}

string CreatePersonRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_personNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_personName.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gender, allocator);
    }

    if (m_personExDescriptionInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonExDescriptionInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_personExDescriptionInfos.begin(); itr != m_personExDescriptionInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_uniquePersonControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniquePersonControl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uniquePersonControl, allocator);
    }

    if (m_qualityControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityControl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qualityControl, allocator);
    }

    if (m_needRotateDetectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRotateDetection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needRotateDetection, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePersonRequest::GetGroupId() const
{
    return m_groupId;
}

void CreatePersonRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreatePersonRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
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

int64_t CreatePersonRequest::GetGender() const
{
    return m_gender;
}

void CreatePersonRequest::SetGender(const int64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool CreatePersonRequest::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

vector<PersonExDescriptionInfo> CreatePersonRequest::GetPersonExDescriptionInfos() const
{
    return m_personExDescriptionInfos;
}

void CreatePersonRequest::SetPersonExDescriptionInfos(const vector<PersonExDescriptionInfo>& _personExDescriptionInfos)
{
    m_personExDescriptionInfos = _personExDescriptionInfos;
    m_personExDescriptionInfosHasBeenSet = true;
}

bool CreatePersonRequest::PersonExDescriptionInfosHasBeenSet() const
{
    return m_personExDescriptionInfosHasBeenSet;
}

string CreatePersonRequest::GetImage() const
{
    return m_image;
}

void CreatePersonRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool CreatePersonRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string CreatePersonRequest::GetUrl() const
{
    return m_url;
}

void CreatePersonRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreatePersonRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t CreatePersonRequest::GetUniquePersonControl() const
{
    return m_uniquePersonControl;
}

void CreatePersonRequest::SetUniquePersonControl(const uint64_t& _uniquePersonControl)
{
    m_uniquePersonControl = _uniquePersonControl;
    m_uniquePersonControlHasBeenSet = true;
}

bool CreatePersonRequest::UniquePersonControlHasBeenSet() const
{
    return m_uniquePersonControlHasBeenSet;
}

uint64_t CreatePersonRequest::GetQualityControl() const
{
    return m_qualityControl;
}

void CreatePersonRequest::SetQualityControl(const uint64_t& _qualityControl)
{
    m_qualityControl = _qualityControl;
    m_qualityControlHasBeenSet = true;
}

bool CreatePersonRequest::QualityControlHasBeenSet() const
{
    return m_qualityControlHasBeenSet;
}

uint64_t CreatePersonRequest::GetNeedRotateDetection() const
{
    return m_needRotateDetection;
}

void CreatePersonRequest::SetNeedRotateDetection(const uint64_t& _needRotateDetection)
{
    m_needRotateDetection = _needRotateDetection;
    m_needRotateDetectionHasBeenSet = true;
}

bool CreatePersonRequest::NeedRotateDetectionHasBeenSet() const
{
    return m_needRotateDetectionHasBeenSet;
}


