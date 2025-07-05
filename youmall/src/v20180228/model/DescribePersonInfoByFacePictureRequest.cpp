/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/youmall/v20180228/model/DescribePersonInfoByFacePictureRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DescribePersonInfoByFacePictureRequest::DescribePersonInfoByFacePictureRequest() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_pictureHasBeenSet(false)
{
}

string DescribePersonInfoByFacePictureRequest::ToJsonString() const
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

    if (m_pictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Picture";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_picture.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePersonInfoByFacePictureRequest::GetCompanyId() const
{
    return m_companyId;
}

void DescribePersonInfoByFacePictureRequest::SetCompanyId(const string& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool DescribePersonInfoByFacePictureRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t DescribePersonInfoByFacePictureRequest::GetShopId() const
{
    return m_shopId;
}

void DescribePersonInfoByFacePictureRequest::SetShopId(const int64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool DescribePersonInfoByFacePictureRequest::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

string DescribePersonInfoByFacePictureRequest::GetPicture() const
{
    return m_picture;
}

void DescribePersonInfoByFacePictureRequest::SetPicture(const string& _picture)
{
    m_picture = _picture;
    m_pictureHasBeenSet = true;
}

bool DescribePersonInfoByFacePictureRequest::PictureHasBeenSet() const
{
    return m_pictureHasBeenSet;
}


