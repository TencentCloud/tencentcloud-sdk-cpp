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

#include <tencentcloud/vod/v20180717/model/AudioTransform.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AudioTransform::AudioTransform() :
    m_typeHasBeenSet(false),
    m_volumeParamHasBeenSet(false)
{
}

CoreInternalOutcome AudioTransform::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTransform.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("VolumeParam") && !value["VolumeParam"].IsNull())
    {
        if (!value["VolumeParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTransform.VolumeParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_volumeParam.Deserialize(value["VolumeParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_volumeParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioTransform::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeParam.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AudioTransform::GetType() const
{
    return m_type;
}

void AudioTransform::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AudioTransform::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

AudioVolumeParam AudioTransform::GetVolumeParam() const
{
    return m_volumeParam;
}

void AudioTransform::SetVolumeParam(const AudioVolumeParam& _volumeParam)
{
    m_volumeParam = _volumeParam;
    m_volumeParamHasBeenSet = true;
}

bool AudioTransform::VolumeParamHasBeenSet() const
{
    return m_volumeParamHasBeenSet;
}

