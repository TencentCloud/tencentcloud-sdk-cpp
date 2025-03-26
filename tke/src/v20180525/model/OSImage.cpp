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

#include <tencentcloud/tke/v20180525/model/OSImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

OSImage::OSImage() :
    m_seriesNameHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_osCustomizeTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_imageIdHasBeenSet(false)
{
}

CoreInternalOutcome OSImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SeriesName") && !value["SeriesName"].IsNull())
    {
        if (!value["SeriesName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OSImage.SeriesName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seriesName = string(value["SeriesName"].GetString());
        m_seriesNameHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OSImage.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OSImage.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("OsCustomizeType") && !value["OsCustomizeType"].IsNull())
    {
        if (!value["OsCustomizeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OSImage.OsCustomizeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osCustomizeType = string(value["OsCustomizeType"].GetString());
        m_osCustomizeTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OSImage.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OSImage.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OSImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_seriesNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriesName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seriesName.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_osCustomizeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsCustomizeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osCustomizeType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

}


string OSImage::GetSeriesName() const
{
    return m_seriesName;
}

void OSImage::SetSeriesName(const string& _seriesName)
{
    m_seriesName = _seriesName;
    m_seriesNameHasBeenSet = true;
}

bool OSImage::SeriesNameHasBeenSet() const
{
    return m_seriesNameHasBeenSet;
}

string OSImage::GetAlias() const
{
    return m_alias;
}

void OSImage::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool OSImage::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string OSImage::GetOsName() const
{
    return m_osName;
}

void OSImage::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool OSImage::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string OSImage::GetOsCustomizeType() const
{
    return m_osCustomizeType;
}

void OSImage::SetOsCustomizeType(const string& _osCustomizeType)
{
    m_osCustomizeType = _osCustomizeType;
    m_osCustomizeTypeHasBeenSet = true;
}

bool OSImage::OsCustomizeTypeHasBeenSet() const
{
    return m_osCustomizeTypeHasBeenSet;
}

string OSImage::GetStatus() const
{
    return m_status;
}

void OSImage::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OSImage::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string OSImage::GetImageId() const
{
    return m_imageId;
}

void OSImage::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool OSImage::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

