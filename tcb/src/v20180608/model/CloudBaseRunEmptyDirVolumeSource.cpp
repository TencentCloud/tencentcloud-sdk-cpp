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

#include <tencentcloud/tcb/v20180608/model/CloudBaseRunEmptyDirVolumeSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseRunEmptyDirVolumeSource::CloudBaseRunEmptyDirVolumeSource() :
    m_enableEmptyDirVolumeHasBeenSet(false),
    m_mediumHasBeenSet(false),
    m_sizeLimitHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseRunEmptyDirVolumeSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableEmptyDirVolume") && !value["EnableEmptyDirVolume"].IsNull())
    {
        if (!value["EnableEmptyDirVolume"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunEmptyDirVolumeSource.EnableEmptyDirVolume` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableEmptyDirVolume = value["EnableEmptyDirVolume"].GetBool();
        m_enableEmptyDirVolumeHasBeenSet = true;
    }

    if (value.HasMember("Medium") && !value["Medium"].IsNull())
    {
        if (!value["Medium"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunEmptyDirVolumeSource.Medium` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_medium = string(value["Medium"].GetString());
        m_mediumHasBeenSet = true;
    }

    if (value.HasMember("SizeLimit") && !value["SizeLimit"].IsNull())
    {
        if (!value["SizeLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunEmptyDirVolumeSource.SizeLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sizeLimit = string(value["SizeLimit"].GetString());
        m_sizeLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseRunEmptyDirVolumeSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableEmptyDirVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableEmptyDirVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableEmptyDirVolume, allocator);
    }

    if (m_mediumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Medium";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_medium.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sizeLimit.c_str(), allocator).Move(), allocator);
    }

}


bool CloudBaseRunEmptyDirVolumeSource::GetEnableEmptyDirVolume() const
{
    return m_enableEmptyDirVolume;
}

void CloudBaseRunEmptyDirVolumeSource::SetEnableEmptyDirVolume(const bool& _enableEmptyDirVolume)
{
    m_enableEmptyDirVolume = _enableEmptyDirVolume;
    m_enableEmptyDirVolumeHasBeenSet = true;
}

bool CloudBaseRunEmptyDirVolumeSource::EnableEmptyDirVolumeHasBeenSet() const
{
    return m_enableEmptyDirVolumeHasBeenSet;
}

string CloudBaseRunEmptyDirVolumeSource::GetMedium() const
{
    return m_medium;
}

void CloudBaseRunEmptyDirVolumeSource::SetMedium(const string& _medium)
{
    m_medium = _medium;
    m_mediumHasBeenSet = true;
}

bool CloudBaseRunEmptyDirVolumeSource::MediumHasBeenSet() const
{
    return m_mediumHasBeenSet;
}

string CloudBaseRunEmptyDirVolumeSource::GetSizeLimit() const
{
    return m_sizeLimit;
}

void CloudBaseRunEmptyDirVolumeSource::SetSizeLimit(const string& _sizeLimit)
{
    m_sizeLimit = _sizeLimit;
    m_sizeLimitHasBeenSet = true;
}

bool CloudBaseRunEmptyDirVolumeSource::SizeLimitHasBeenSet() const
{
    return m_sizeLimitHasBeenSet;
}

