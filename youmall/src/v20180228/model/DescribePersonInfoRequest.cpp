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

#include <tencentcloud/youmall/v20180228/model/DescribePersonInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DescribePersonInfoRequest::DescribePersonInfoRequest() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_startPersonIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_pictureExpiresHasBeenSet(false),
    m_personTypeHasBeenSet(false)
{
}

string DescribePersonInfoRequest::ToJsonString() const
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

    if (m_shopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shopId, allocator);
    }

    if (m_startPersonIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartPersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startPersonId, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_pictureExpiresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureExpires";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pictureExpires, allocator);
    }

    if (m_personTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_personType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePersonInfoRequest::GetCompanyId() const
{
    return m_companyId;
}

void DescribePersonInfoRequest::SetCompanyId(const string& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool DescribePersonInfoRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

uint64_t DescribePersonInfoRequest::GetShopId() const
{
    return m_shopId;
}

void DescribePersonInfoRequest::SetShopId(const uint64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool DescribePersonInfoRequest::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

uint64_t DescribePersonInfoRequest::GetStartPersonId() const
{
    return m_startPersonId;
}

void DescribePersonInfoRequest::SetStartPersonId(const uint64_t& _startPersonId)
{
    m_startPersonId = _startPersonId;
    m_startPersonIdHasBeenSet = true;
}

bool DescribePersonInfoRequest::StartPersonIdHasBeenSet() const
{
    return m_startPersonIdHasBeenSet;
}

uint64_t DescribePersonInfoRequest::GetOffset() const
{
    return m_offset;
}

void DescribePersonInfoRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribePersonInfoRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribePersonInfoRequest::GetLimit() const
{
    return m_limit;
}

void DescribePersonInfoRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePersonInfoRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribePersonInfoRequest::GetPictureExpires() const
{
    return m_pictureExpires;
}

void DescribePersonInfoRequest::SetPictureExpires(const uint64_t& _pictureExpires)
{
    m_pictureExpires = _pictureExpires;
    m_pictureExpiresHasBeenSet = true;
}

bool DescribePersonInfoRequest::PictureExpiresHasBeenSet() const
{
    return m_pictureExpiresHasBeenSet;
}

uint64_t DescribePersonInfoRequest::GetPersonType() const
{
    return m_personType;
}

void DescribePersonInfoRequest::SetPersonType(const uint64_t& _personType)
{
    m_personType = _personType;
    m_personTypeHasBeenSet = true;
}

bool DescribePersonInfoRequest::PersonTypeHasBeenSet() const
{
    return m_personTypeHasBeenSet;
}


