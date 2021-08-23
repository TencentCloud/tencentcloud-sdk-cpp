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

#include <tencentcloud/gse/v20191112/model/AssetSupportSys.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

AssetSupportSys::AssetSupportSys() :
    m_imageIdHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_osBitHasBeenSet(false),
    m_osVersionHasBeenSet(false)
{
}

CoreInternalOutcome AssetSupportSys::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetSupportSys.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetSupportSys.OsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osType = string(value["OsType"].GetString());
        m_osTypeHasBeenSet = true;
    }

    if (value.HasMember("OsBit") && !value["OsBit"].IsNull())
    {
        if (!value["OsBit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetSupportSys.OsBit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_osBit = value["OsBit"].GetInt64();
        m_osBitHasBeenSet = true;
    }

    if (value.HasMember("OsVersion") && !value["OsVersion"].IsNull())
    {
        if (!value["OsVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetSupportSys.OsVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osVersion = string(value["OsVersion"].GetString());
        m_osVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetSupportSys::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osType.c_str(), allocator).Move(), allocator);
    }

    if (m_osBitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsBit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osBit, allocator);
    }

    if (m_osVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osVersion.c_str(), allocator).Move(), allocator);
    }

}


string AssetSupportSys::GetImageId() const
{
    return m_imageId;
}

void AssetSupportSys::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool AssetSupportSys::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string AssetSupportSys::GetOsType() const
{
    return m_osType;
}

void AssetSupportSys::SetOsType(const string& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool AssetSupportSys::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

int64_t AssetSupportSys::GetOsBit() const
{
    return m_osBit;
}

void AssetSupportSys::SetOsBit(const int64_t& _osBit)
{
    m_osBit = _osBit;
    m_osBitHasBeenSet = true;
}

bool AssetSupportSys::OsBitHasBeenSet() const
{
    return m_osBitHasBeenSet;
}

string AssetSupportSys::GetOsVersion() const
{
    return m_osVersion;
}

void AssetSupportSys::SetOsVersion(const string& _osVersion)
{
    m_osVersion = _osVersion;
    m_osVersionHasBeenSet = true;
}

bool AssetSupportSys::OsVersionHasBeenSet() const
{
    return m_osVersionHasBeenSet;
}

