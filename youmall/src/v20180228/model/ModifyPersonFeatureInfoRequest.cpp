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

#include <tencentcloud/youmall/v20180228/model/ModifyPersonFeatureInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

ModifyPersonFeatureInfoRequest::ModifyPersonFeatureInfoRequest() :
    m_companyIdHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_pictureHasBeenSet(false),
    m_pictureNameHasBeenSet(false),
    m_personTypeHasBeenSet(false),
    m_shopIdHasBeenSet(false)
{
}

string ModifyPersonFeatureInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyId.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_personId, allocator);
    }

    if (m_pictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Picture";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_picture.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pictureName.c_str(), allocator).Move(), allocator);
    }

    if (m_personTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_personType, allocator);
    }

    if (m_shopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shopId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPersonFeatureInfoRequest::GetCompanyId() const
{
    return m_companyId;
}

void ModifyPersonFeatureInfoRequest::SetCompanyId(const string& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool ModifyPersonFeatureInfoRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t ModifyPersonFeatureInfoRequest::GetPersonId() const
{
    return m_personId;
}

void ModifyPersonFeatureInfoRequest::SetPersonId(const int64_t& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool ModifyPersonFeatureInfoRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string ModifyPersonFeatureInfoRequest::GetPicture() const
{
    return m_picture;
}

void ModifyPersonFeatureInfoRequest::SetPicture(const string& _picture)
{
    m_picture = _picture;
    m_pictureHasBeenSet = true;
}

bool ModifyPersonFeatureInfoRequest::PictureHasBeenSet() const
{
    return m_pictureHasBeenSet;
}

string ModifyPersonFeatureInfoRequest::GetPictureName() const
{
    return m_pictureName;
}

void ModifyPersonFeatureInfoRequest::SetPictureName(const string& _pictureName)
{
    m_pictureName = _pictureName;
    m_pictureNameHasBeenSet = true;
}

bool ModifyPersonFeatureInfoRequest::PictureNameHasBeenSet() const
{
    return m_pictureNameHasBeenSet;
}

int64_t ModifyPersonFeatureInfoRequest::GetPersonType() const
{
    return m_personType;
}

void ModifyPersonFeatureInfoRequest::SetPersonType(const int64_t& _personType)
{
    m_personType = _personType;
    m_personTypeHasBeenSet = true;
}

bool ModifyPersonFeatureInfoRequest::PersonTypeHasBeenSet() const
{
    return m_personTypeHasBeenSet;
}

int64_t ModifyPersonFeatureInfoRequest::GetShopId() const
{
    return m_shopId;
}

void ModifyPersonFeatureInfoRequest::SetShopId(const int64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool ModifyPersonFeatureInfoRequest::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}


