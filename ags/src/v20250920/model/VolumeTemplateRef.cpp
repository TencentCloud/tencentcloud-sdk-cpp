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

#include <tencentcloud/ags/v20250920/model/VolumeTemplateRef.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

VolumeTemplateRef::VolumeTemplateRef() :
    m_volumeTemplateNameHasBeenSet(false),
    m_reuseKeyHasBeenSet(false)
{
}

CoreInternalOutcome VolumeTemplateRef::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeTemplateName") && !value["VolumeTemplateName"].IsNull())
    {
        if (!value["VolumeTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeTemplateRef.VolumeTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeTemplateName = string(value["VolumeTemplateName"].GetString());
        m_volumeTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("ReuseKey") && !value["ReuseKey"].IsNull())
    {
        if (!value["ReuseKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeTemplateRef.ReuseKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reuseKey = string(value["ReuseKey"].GetString());
        m_reuseKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeTemplateRef::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_reuseKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReuseKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reuseKey.c_str(), allocator).Move(), allocator);
    }

}


string VolumeTemplateRef::GetVolumeTemplateName() const
{
    return m_volumeTemplateName;
}

void VolumeTemplateRef::SetVolumeTemplateName(const string& _volumeTemplateName)
{
    m_volumeTemplateName = _volumeTemplateName;
    m_volumeTemplateNameHasBeenSet = true;
}

bool VolumeTemplateRef::VolumeTemplateNameHasBeenSet() const
{
    return m_volumeTemplateNameHasBeenSet;
}

string VolumeTemplateRef::GetReuseKey() const
{
    return m_reuseKey;
}

void VolumeTemplateRef::SetReuseKey(const string& _reuseKey)
{
    m_reuseKey = _reuseKey;
    m_reuseKeyHasBeenSet = true;
}

bool VolumeTemplateRef::ReuseKeyHasBeenSet() const
{
    return m_reuseKeyHasBeenSet;
}

