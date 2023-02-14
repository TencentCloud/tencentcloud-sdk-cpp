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

#include <tencentcloud/tione/v20211111/model/EngineVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

EngineVersion::EngineVersion() :
    m_versionHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_isSupportIntEightQuantizationHasBeenSet(false)
{
}

CoreInternalOutcome EngineVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineVersion.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineVersion.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("IsSupportIntEightQuantization") && !value["IsSupportIntEightQuantization"].IsNull())
    {
        if (!value["IsSupportIntEightQuantization"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EngineVersion.IsSupportIntEightQuantization` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportIntEightQuantization = value["IsSupportIntEightQuantization"].GetBool();
        m_isSupportIntEightQuantizationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EngineVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportIntEightQuantizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportIntEightQuantization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportIntEightQuantization, allocator);
    }

}


string EngineVersion::GetVersion() const
{
    return m_version;
}

void EngineVersion::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool EngineVersion::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string EngineVersion::GetImage() const
{
    return m_image;
}

void EngineVersion::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool EngineVersion::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

bool EngineVersion::GetIsSupportIntEightQuantization() const
{
    return m_isSupportIntEightQuantization;
}

void EngineVersion::SetIsSupportIntEightQuantization(const bool& _isSupportIntEightQuantization)
{
    m_isSupportIntEightQuantization = _isSupportIntEightQuantization;
    m_isSupportIntEightQuantizationHasBeenSet = true;
}

bool EngineVersion::IsSupportIntEightQuantizationHasBeenSet() const
{
    return m_isSupportIntEightQuantizationHasBeenSet;
}

