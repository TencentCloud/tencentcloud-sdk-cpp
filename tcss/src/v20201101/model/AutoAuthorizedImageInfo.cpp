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

#include <tencentcloud/tcss/v20201101/model/AutoAuthorizedImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AutoAuthorizedImageInfo::AutoAuthorizedImageInfo() :
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_authorizedTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isAuthorizedHasBeenSet(false)
{
}

CoreInternalOutcome AutoAuthorizedImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedImageInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedImageInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedTime") && !value["AuthorizedTime"].IsNull())
    {
        if (!value["AuthorizedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedImageInfo.AuthorizedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedTime = string(value["AuthorizedTime"].GetString());
        m_authorizedTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedImageInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsAuthorized") && !value["IsAuthorized"].IsNull())
    {
        if (!value["IsAuthorized"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedImageInfo.IsAuthorized` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthorized = value["IsAuthorized"].GetUint64();
        m_isAuthorizedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoAuthorizedImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_isAuthorizedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthorized";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuthorized, allocator);
    }

}


string AutoAuthorizedImageInfo::GetImageId() const
{
    return m_imageId;
}

void AutoAuthorizedImageInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool AutoAuthorizedImageInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string AutoAuthorizedImageInfo::GetImageName() const
{
    return m_imageName;
}

void AutoAuthorizedImageInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool AutoAuthorizedImageInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string AutoAuthorizedImageInfo::GetAuthorizedTime() const
{
    return m_authorizedTime;
}

void AutoAuthorizedImageInfo::SetAuthorizedTime(const string& _authorizedTime)
{
    m_authorizedTime = _authorizedTime;
    m_authorizedTimeHasBeenSet = true;
}

bool AutoAuthorizedImageInfo::AuthorizedTimeHasBeenSet() const
{
    return m_authorizedTimeHasBeenSet;
}

string AutoAuthorizedImageInfo::GetStatus() const
{
    return m_status;
}

void AutoAuthorizedImageInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AutoAuthorizedImageInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t AutoAuthorizedImageInfo::GetIsAuthorized() const
{
    return m_isAuthorized;
}

void AutoAuthorizedImageInfo::SetIsAuthorized(const uint64_t& _isAuthorized)
{
    m_isAuthorized = _isAuthorized;
    m_isAuthorizedHasBeenSet = true;
}

bool AutoAuthorizedImageInfo::IsAuthorizedHasBeenSet() const
{
    return m_isAuthorizedHasBeenSet;
}

