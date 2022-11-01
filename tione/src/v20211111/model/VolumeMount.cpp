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

#include <tencentcloud/tione/v20211111/model/VolumeMount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

VolumeMount::VolumeMount() :
    m_cFSConfigHasBeenSet(false),
    m_volumeSourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome VolumeMount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CFSConfig") && !value["CFSConfig"].IsNull())
    {
        if (!value["CFSConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMount.CFSConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cFSConfig.Deserialize(value["CFSConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cFSConfigHasBeenSet = true;
    }

    if (value.HasMember("VolumeSourceType") && !value["VolumeSourceType"].IsNull())
    {
        if (!value["VolumeSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMount.VolumeSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeSourceType = string(value["VolumeSourceType"].GetString());
        m_volumeSourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeMount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cFSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cFSConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_volumeSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeSourceType.c_str(), allocator).Move(), allocator);
    }

}


CFSConfig VolumeMount::GetCFSConfig() const
{
    return m_cFSConfig;
}

void VolumeMount::SetCFSConfig(const CFSConfig& _cFSConfig)
{
    m_cFSConfig = _cFSConfig;
    m_cFSConfigHasBeenSet = true;
}

bool VolumeMount::CFSConfigHasBeenSet() const
{
    return m_cFSConfigHasBeenSet;
}

string VolumeMount::GetVolumeSourceType() const
{
    return m_volumeSourceType;
}

void VolumeMount::SetVolumeSourceType(const string& _volumeSourceType)
{
    m_volumeSourceType = _volumeSourceType;
    m_volumeSourceTypeHasBeenSet = true;
}

bool VolumeMount::VolumeSourceTypeHasBeenSet() const
{
    return m_volumeSourceTypeHasBeenSet;
}

