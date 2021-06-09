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

#include <tencentcloud/youmall/v20180228/model/DescribeFaceIdByTempIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DescribeFaceIdByTempIdRequest::DescribeFaceIdByTempIdRequest() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_tempIdHasBeenSet(false),
    m_cameraIdHasBeenSet(false),
    m_posIdHasBeenSet(false),
    m_pictureExpiresHasBeenSet(false)
{
}

string DescribeFaceIdByTempIdRequest::ToJsonString() const
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

    if (m_tempIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TempId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tempId.c_str(), allocator).Move(), allocator);
    }

    if (m_cameraIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cameraId, allocator);
    }

    if (m_posIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_posId.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureExpiresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureExpires";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pictureExpires, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFaceIdByTempIdRequest::GetCompanyId() const
{
    return m_companyId;
}

void DescribeFaceIdByTempIdRequest::SetCompanyId(const string& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool DescribeFaceIdByTempIdRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t DescribeFaceIdByTempIdRequest::GetShopId() const
{
    return m_shopId;
}

void DescribeFaceIdByTempIdRequest::SetShopId(const int64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool DescribeFaceIdByTempIdRequest::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

string DescribeFaceIdByTempIdRequest::GetTempId() const
{
    return m_tempId;
}

void DescribeFaceIdByTempIdRequest::SetTempId(const string& _tempId)
{
    m_tempId = _tempId;
    m_tempIdHasBeenSet = true;
}

bool DescribeFaceIdByTempIdRequest::TempIdHasBeenSet() const
{
    return m_tempIdHasBeenSet;
}

int64_t DescribeFaceIdByTempIdRequest::GetCameraId() const
{
    return m_cameraId;
}

void DescribeFaceIdByTempIdRequest::SetCameraId(const int64_t& _cameraId)
{
    m_cameraId = _cameraId;
    m_cameraIdHasBeenSet = true;
}

bool DescribeFaceIdByTempIdRequest::CameraIdHasBeenSet() const
{
    return m_cameraIdHasBeenSet;
}

string DescribeFaceIdByTempIdRequest::GetPosId() const
{
    return m_posId;
}

void DescribeFaceIdByTempIdRequest::SetPosId(const string& _posId)
{
    m_posId = _posId;
    m_posIdHasBeenSet = true;
}

bool DescribeFaceIdByTempIdRequest::PosIdHasBeenSet() const
{
    return m_posIdHasBeenSet;
}

int64_t DescribeFaceIdByTempIdRequest::GetPictureExpires() const
{
    return m_pictureExpires;
}

void DescribeFaceIdByTempIdRequest::SetPictureExpires(const int64_t& _pictureExpires)
{
    m_pictureExpires = _pictureExpires;
    m_pictureExpiresHasBeenSet = true;
}

bool DescribeFaceIdByTempIdRequest::PictureExpiresHasBeenSet() const
{
    return m_pictureExpiresHasBeenSet;
}


