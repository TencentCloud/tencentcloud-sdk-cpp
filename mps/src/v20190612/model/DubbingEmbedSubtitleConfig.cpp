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

#include <tencentcloud/mps/v20190612/model/DubbingEmbedSubtitleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DubbingEmbedSubtitleConfig::DubbingEmbedSubtitleConfig() :
    m_subtitleEmbedIdHasBeenSet(false),
    m_useOriginalPosHasBeenSet(false),
    m_useOriginalSizeHasBeenSet(false)
{
}

CoreInternalOutcome DubbingEmbedSubtitleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleEmbedId") && !value["SubtitleEmbedId"].IsNull())
    {
        if (!value["SubtitleEmbedId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingEmbedSubtitleConfig.SubtitleEmbedId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleEmbedId = value["SubtitleEmbedId"].GetInt64();
        m_subtitleEmbedIdHasBeenSet = true;
    }

    if (value.HasMember("UseOriginalPos") && !value["UseOriginalPos"].IsNull())
    {
        if (!value["UseOriginalPos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingEmbedSubtitleConfig.UseOriginalPos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useOriginalPos = value["UseOriginalPos"].GetInt64();
        m_useOriginalPosHasBeenSet = true;
    }

    if (value.HasMember("UseOriginalSize") && !value["UseOriginalSize"].IsNull())
    {
        if (!value["UseOriginalSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingEmbedSubtitleConfig.UseOriginalSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useOriginalSize = value["UseOriginalSize"].GetInt64();
        m_useOriginalSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DubbingEmbedSubtitleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subtitleEmbedIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleEmbedId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subtitleEmbedId, allocator);
    }

    if (m_useOriginalPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseOriginalPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useOriginalPos, allocator);
    }

    if (m_useOriginalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseOriginalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useOriginalSize, allocator);
    }

}


int64_t DubbingEmbedSubtitleConfig::GetSubtitleEmbedId() const
{
    return m_subtitleEmbedId;
}

void DubbingEmbedSubtitleConfig::SetSubtitleEmbedId(const int64_t& _subtitleEmbedId)
{
    m_subtitleEmbedId = _subtitleEmbedId;
    m_subtitleEmbedIdHasBeenSet = true;
}

bool DubbingEmbedSubtitleConfig::SubtitleEmbedIdHasBeenSet() const
{
    return m_subtitleEmbedIdHasBeenSet;
}

int64_t DubbingEmbedSubtitleConfig::GetUseOriginalPos() const
{
    return m_useOriginalPos;
}

void DubbingEmbedSubtitleConfig::SetUseOriginalPos(const int64_t& _useOriginalPos)
{
    m_useOriginalPos = _useOriginalPos;
    m_useOriginalPosHasBeenSet = true;
}

bool DubbingEmbedSubtitleConfig::UseOriginalPosHasBeenSet() const
{
    return m_useOriginalPosHasBeenSet;
}

int64_t DubbingEmbedSubtitleConfig::GetUseOriginalSize() const
{
    return m_useOriginalSize;
}

void DubbingEmbedSubtitleConfig::SetUseOriginalSize(const int64_t& _useOriginalSize)
{
    m_useOriginalSize = _useOriginalSize;
    m_useOriginalSizeHasBeenSet = true;
}

bool DubbingEmbedSubtitleConfig::UseOriginalSizeHasBeenSet() const
{
    return m_useOriginalSizeHasBeenSet;
}

