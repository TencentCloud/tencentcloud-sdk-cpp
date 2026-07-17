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

#include <tencentcloud/teo/v20220901/model/InferenceTCRRepositoryConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceTCRRepositoryConfig::InferenceTCRRepositoryConfig() :
    m_tCRTypeHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_regionNameHasBeenSet(false)
{
}

CoreInternalOutcome InferenceTCRRepositoryConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TCRType") && !value["TCRType"].IsNull())
    {
        if (!value["TCRType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceTCRRepositoryConfig.TCRType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tCRType = string(value["TCRType"].GetString());
        m_tCRTypeHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceTCRRepositoryConfig.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceTCRRepositoryConfig.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceTCRRepositoryConfig.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceTCRRepositoryConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tCRTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCRType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tCRType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

}


string InferenceTCRRepositoryConfig::GetTCRType() const
{
    return m_tCRType;
}

void InferenceTCRRepositoryConfig::SetTCRType(const string& _tCRType)
{
    m_tCRType = _tCRType;
    m_tCRTypeHasBeenSet = true;
}

bool InferenceTCRRepositoryConfig::TCRTypeHasBeenSet() const
{
    return m_tCRTypeHasBeenSet;
}

string InferenceTCRRepositoryConfig::GetImage() const
{
    return m_image;
}

void InferenceTCRRepositoryConfig::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool InferenceTCRRepositoryConfig::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string InferenceTCRRepositoryConfig::GetRegistryId() const
{
    return m_registryId;
}

void InferenceTCRRepositoryConfig::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool InferenceTCRRepositoryConfig::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string InferenceTCRRepositoryConfig::GetRegionName() const
{
    return m_regionName;
}

void InferenceTCRRepositoryConfig::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool InferenceTCRRepositoryConfig::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

