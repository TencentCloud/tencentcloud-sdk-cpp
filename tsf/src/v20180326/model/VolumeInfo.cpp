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

#include <tencentcloud/tsf/v20180326/model/VolumeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

VolumeInfo::VolumeInfo() :
    m_volumeTypeHasBeenSet(false),
    m_volumeNameHasBeenSet(false),
    m_volumeConfigHasBeenSet(false),
    m_configMapOptionsHasBeenSet(false),
    m_emptyDirOptionHasBeenSet(false)
{
}

CoreInternalOutcome VolumeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeType") && !value["VolumeType"].IsNull())
    {
        if (!value["VolumeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeInfo.VolumeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeType = string(value["VolumeType"].GetString());
        m_volumeTypeHasBeenSet = true;
    }

    if (value.HasMember("VolumeName") && !value["VolumeName"].IsNull())
    {
        if (!value["VolumeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeInfo.VolumeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeName = string(value["VolumeName"].GetString());
        m_volumeNameHasBeenSet = true;
    }

    if (value.HasMember("VolumeConfig") && !value["VolumeConfig"].IsNull())
    {
        if (!value["VolumeConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeInfo.VolumeConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeConfig = string(value["VolumeConfig"].GetString());
        m_volumeConfigHasBeenSet = true;
    }

    if (value.HasMember("ConfigMapOptions") && !value["ConfigMapOptions"].IsNull())
    {
        if (!value["ConfigMapOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VolumeInfo.ConfigMapOptions` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigMapOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConfigMapOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configMapOptions.push_back(item);
        }
        m_configMapOptionsHasBeenSet = true;
    }

    if (value.HasMember("EmptyDirOption") && !value["EmptyDirOption"].IsNull())
    {
        if (!value["EmptyDirOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeInfo.EmptyDirOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_emptyDirOption.Deserialize(value["EmptyDirOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_emptyDirOptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeType.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeName.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_configMapOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigMapOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configMapOptions.begin(); itr != m_configMapOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_emptyDirOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmptyDirOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_emptyDirOption.ToJsonObject(value[key.c_str()], allocator);
    }

}


string VolumeInfo::GetVolumeType() const
{
    return m_volumeType;
}

void VolumeInfo::SetVolumeType(const string& _volumeType)
{
    m_volumeType = _volumeType;
    m_volumeTypeHasBeenSet = true;
}

bool VolumeInfo::VolumeTypeHasBeenSet() const
{
    return m_volumeTypeHasBeenSet;
}

string VolumeInfo::GetVolumeName() const
{
    return m_volumeName;
}

void VolumeInfo::SetVolumeName(const string& _volumeName)
{
    m_volumeName = _volumeName;
    m_volumeNameHasBeenSet = true;
}

bool VolumeInfo::VolumeNameHasBeenSet() const
{
    return m_volumeNameHasBeenSet;
}

string VolumeInfo::GetVolumeConfig() const
{
    return m_volumeConfig;
}

void VolumeInfo::SetVolumeConfig(const string& _volumeConfig)
{
    m_volumeConfig = _volumeConfig;
    m_volumeConfigHasBeenSet = true;
}

bool VolumeInfo::VolumeConfigHasBeenSet() const
{
    return m_volumeConfigHasBeenSet;
}

vector<ConfigMapOption> VolumeInfo::GetConfigMapOptions() const
{
    return m_configMapOptions;
}

void VolumeInfo::SetConfigMapOptions(const vector<ConfigMapOption>& _configMapOptions)
{
    m_configMapOptions = _configMapOptions;
    m_configMapOptionsHasBeenSet = true;
}

bool VolumeInfo::ConfigMapOptionsHasBeenSet() const
{
    return m_configMapOptionsHasBeenSet;
}

EmptyDirOption VolumeInfo::GetEmptyDirOption() const
{
    return m_emptyDirOption;
}

void VolumeInfo::SetEmptyDirOption(const EmptyDirOption& _emptyDirOption)
{
    m_emptyDirOption = _emptyDirOption;
    m_emptyDirOptionHasBeenSet = true;
}

bool VolumeInfo::EmptyDirOptionHasBeenSet() const
{
    return m_emptyDirOptionHasBeenSet;
}

