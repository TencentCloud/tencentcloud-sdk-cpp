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

#include <tencentcloud/ivld/v20210903/model/UpdateCustomPersonRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

UpdateCustomPersonRequest::UpdateCustomPersonRequest() :
    m_personIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_basicInfoHasBeenSet(false),
    m_categoryIdHasBeenSet(false)
{
}

string UpdateCustomPersonRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_basicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_basicInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateCustomPersonRequest::GetPersonId() const
{
    return m_personId;
}

void UpdateCustomPersonRequest::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool UpdateCustomPersonRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string UpdateCustomPersonRequest::GetName() const
{
    return m_name;
}

void UpdateCustomPersonRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateCustomPersonRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateCustomPersonRequest::GetBasicInfo() const
{
    return m_basicInfo;
}

void UpdateCustomPersonRequest::SetBasicInfo(const string& _basicInfo)
{
    m_basicInfo = _basicInfo;
    m_basicInfoHasBeenSet = true;
}

bool UpdateCustomPersonRequest::BasicInfoHasBeenSet() const
{
    return m_basicInfoHasBeenSet;
}

string UpdateCustomPersonRequest::GetCategoryId() const
{
    return m_categoryId;
}

void UpdateCustomPersonRequest::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool UpdateCustomPersonRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}


