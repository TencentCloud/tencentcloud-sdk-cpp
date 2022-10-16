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

#include <tencentcloud/trtc/v20190722/model/McuSeiParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuSeiParams::McuSeiParams() :
    m_layoutVolumeHasBeenSet(false),
    m_passThroughHasBeenSet(false)
{
}

CoreInternalOutcome McuSeiParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LayoutVolume") && !value["LayoutVolume"].IsNull())
    {
        if (!value["LayoutVolume"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuSeiParams.LayoutVolume` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_layoutVolume.Deserialize(value["LayoutVolume"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_layoutVolumeHasBeenSet = true;
    }

    if (value.HasMember("PassThrough") && !value["PassThrough"].IsNull())
    {
        if (!value["PassThrough"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuSeiParams.PassThrough` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_passThrough.Deserialize(value["PassThrough"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_passThroughHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuSeiParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_layoutVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayoutVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_layoutVolume.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_passThroughHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassThrough";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_passThrough.ToJsonObject(value[key.c_str()], allocator);
    }

}


McuLayoutVolume McuSeiParams::GetLayoutVolume() const
{
    return m_layoutVolume;
}

void McuSeiParams::SetLayoutVolume(const McuLayoutVolume& _layoutVolume)
{
    m_layoutVolume = _layoutVolume;
    m_layoutVolumeHasBeenSet = true;
}

bool McuSeiParams::LayoutVolumeHasBeenSet() const
{
    return m_layoutVolumeHasBeenSet;
}

McuPassThrough McuSeiParams::GetPassThrough() const
{
    return m_passThrough;
}

void McuSeiParams::SetPassThrough(const McuPassThrough& _passThrough)
{
    m_passThrough = _passThrough;
    m_passThroughHasBeenSet = true;
}

bool McuSeiParams::PassThroughHasBeenSet() const
{
    return m_passThroughHasBeenSet;
}

