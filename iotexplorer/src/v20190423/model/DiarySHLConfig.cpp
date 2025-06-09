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

#include <tencentcloud/iotexplorer/v20190423/model/DiarySHLConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DiarySHLConfig::DiarySHLConfig() :
    m_startOffsetHasBeenSet(false),
    m_playSpeedHasBeenSet(false),
    m_miniExtractHasBeenSet(false),
    m_outDurationHasBeenSet(false)
{
}

CoreInternalOutcome DiarySHLConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartOffset") && !value["StartOffset"].IsNull())
    {
        if (!value["StartOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiarySHLConfig.StartOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startOffset = value["StartOffset"].GetUint64();
        m_startOffsetHasBeenSet = true;
    }

    if (value.HasMember("PlaySpeed") && !value["PlaySpeed"].IsNull())
    {
        if (!value["PlaySpeed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiarySHLConfig.PlaySpeed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_playSpeed = value["PlaySpeed"].GetUint64();
        m_playSpeedHasBeenSet = true;
    }

    if (value.HasMember("MiniExtract") && !value["MiniExtract"].IsNull())
    {
        if (!value["MiniExtract"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiarySHLConfig.MiniExtract` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_miniExtract = value["MiniExtract"].GetUint64();
        m_miniExtractHasBeenSet = true;
    }

    if (value.HasMember("OutDuration") && !value["OutDuration"].IsNull())
    {
        if (!value["OutDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiarySHLConfig.OutDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outDuration = value["OutDuration"].GetUint64();
        m_outDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiarySHLConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startOffset, allocator);
    }

    if (m_playSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaySpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_playSpeed, allocator);
    }

    if (m_miniExtractHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniExtract";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_miniExtract, allocator);
    }

    if (m_outDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outDuration, allocator);
    }

}


uint64_t DiarySHLConfig::GetStartOffset() const
{
    return m_startOffset;
}

void DiarySHLConfig::SetStartOffset(const uint64_t& _startOffset)
{
    m_startOffset = _startOffset;
    m_startOffsetHasBeenSet = true;
}

bool DiarySHLConfig::StartOffsetHasBeenSet() const
{
    return m_startOffsetHasBeenSet;
}

uint64_t DiarySHLConfig::GetPlaySpeed() const
{
    return m_playSpeed;
}

void DiarySHLConfig::SetPlaySpeed(const uint64_t& _playSpeed)
{
    m_playSpeed = _playSpeed;
    m_playSpeedHasBeenSet = true;
}

bool DiarySHLConfig::PlaySpeedHasBeenSet() const
{
    return m_playSpeedHasBeenSet;
}

uint64_t DiarySHLConfig::GetMiniExtract() const
{
    return m_miniExtract;
}

void DiarySHLConfig::SetMiniExtract(const uint64_t& _miniExtract)
{
    m_miniExtract = _miniExtract;
    m_miniExtractHasBeenSet = true;
}

bool DiarySHLConfig::MiniExtractHasBeenSet() const
{
    return m_miniExtractHasBeenSet;
}

uint64_t DiarySHLConfig::GetOutDuration() const
{
    return m_outDuration;
}

void DiarySHLConfig::SetOutDuration(const uint64_t& _outDuration)
{
    m_outDuration = _outDuration;
    m_outDurationHasBeenSet = true;
}

bool DiarySHLConfig::OutDurationHasBeenSet() const
{
    return m_outDurationHasBeenSet;
}

