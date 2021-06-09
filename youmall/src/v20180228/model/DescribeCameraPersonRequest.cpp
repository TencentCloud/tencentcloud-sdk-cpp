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

#include <tencentcloud/youmall/v20180228/model/DescribeCameraPersonRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DescribeCameraPersonRequest::DescribeCameraPersonRequest() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_cameraIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_posIdHasBeenSet(false),
    m_numHasBeenSet(false),
    m_isNeedPicHasBeenSet(false)
{
}

string DescribeCameraPersonRequest::ToJsonString() const
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

    if (m_cameraIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cameraId, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_posIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_posId.c_str(), allocator).Move(), allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_num, allocator);
    }

    if (m_isNeedPicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNeedPic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNeedPic, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCameraPersonRequest::GetCompanyId() const
{
    return m_companyId;
}

void DescribeCameraPersonRequest::SetCompanyId(const string& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool DescribeCameraPersonRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t DescribeCameraPersonRequest::GetShopId() const
{
    return m_shopId;
}

void DescribeCameraPersonRequest::SetShopId(const int64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool DescribeCameraPersonRequest::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

int64_t DescribeCameraPersonRequest::GetCameraId() const
{
    return m_cameraId;
}

void DescribeCameraPersonRequest::SetCameraId(const int64_t& _cameraId)
{
    m_cameraId = _cameraId;
    m_cameraIdHasBeenSet = true;
}

bool DescribeCameraPersonRequest::CameraIdHasBeenSet() const
{
    return m_cameraIdHasBeenSet;
}

int64_t DescribeCameraPersonRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCameraPersonRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCameraPersonRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeCameraPersonRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCameraPersonRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCameraPersonRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeCameraPersonRequest::GetPosId() const
{
    return m_posId;
}

void DescribeCameraPersonRequest::SetPosId(const string& _posId)
{
    m_posId = _posId;
    m_posIdHasBeenSet = true;
}

bool DescribeCameraPersonRequest::PosIdHasBeenSet() const
{
    return m_posIdHasBeenSet;
}

int64_t DescribeCameraPersonRequest::GetNum() const
{
    return m_num;
}

void DescribeCameraPersonRequest::SetNum(const int64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool DescribeCameraPersonRequest::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

int64_t DescribeCameraPersonRequest::GetIsNeedPic() const
{
    return m_isNeedPic;
}

void DescribeCameraPersonRequest::SetIsNeedPic(const int64_t& _isNeedPic)
{
    m_isNeedPic = _isNeedPic;
    m_isNeedPicHasBeenSet = true;
}

bool DescribeCameraPersonRequest::IsNeedPicHasBeenSet() const
{
    return m_isNeedPicHasBeenSet;
}


