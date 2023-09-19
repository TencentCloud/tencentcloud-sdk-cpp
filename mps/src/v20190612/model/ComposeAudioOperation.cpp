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

#include <tencentcloud/mps/v20190612/model/ComposeAudioOperation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ComposeAudioOperation::ComposeAudioOperation() :
    m_typeHasBeenSet(false),
    m_volumeHasBeenSet(false)
{
}

CoreInternalOutcome ComposeAudioOperation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeAudioOperation.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeAudioOperation.Volume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetDouble();
        m_volumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeAudioOperation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volume, allocator);
    }

}


string ComposeAudioOperation::GetType() const
{
    return m_type;
}

void ComposeAudioOperation::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ComposeAudioOperation::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double ComposeAudioOperation::GetVolume() const
{
    return m_volume;
}

void ComposeAudioOperation::SetVolume(const double& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool ComposeAudioOperation::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

