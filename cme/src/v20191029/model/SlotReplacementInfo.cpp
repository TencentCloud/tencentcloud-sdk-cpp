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

#include <tencentcloud/cme/v20191029/model/SlotReplacementInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

SlotReplacementInfo::SlotReplacementInfo() :
    m_idHasBeenSet(false),
    m_replacementTypeHasBeenSet(false),
    m_mediaReplacementInfoHasBeenSet(false),
    m_textReplacementInfoHasBeenSet(false)
{
}

CoreInternalOutcome SlotReplacementInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlotReplacementInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ReplacementType") && !value["ReplacementType"].IsNull())
    {
        if (!value["ReplacementType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlotReplacementInfo.ReplacementType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replacementType = string(value["ReplacementType"].GetString());
        m_replacementTypeHasBeenSet = true;
    }

    if (value.HasMember("MediaReplacementInfo") && !value["MediaReplacementInfo"].IsNull())
    {
        if (!value["MediaReplacementInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SlotReplacementInfo.MediaReplacementInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaReplacementInfo.Deserialize(value["MediaReplacementInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaReplacementInfoHasBeenSet = true;
    }

    if (value.HasMember("TextReplacementInfo") && !value["TextReplacementInfo"].IsNull())
    {
        if (!value["TextReplacementInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SlotReplacementInfo.TextReplacementInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textReplacementInfo.Deserialize(value["TextReplacementInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textReplacementInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlotReplacementInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_replacementTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplacementType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replacementType.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaReplacementInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaReplacementInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaReplacementInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_textReplacementInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextReplacementInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textReplacementInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t SlotReplacementInfo::GetId() const
{
    return m_id;
}

void SlotReplacementInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SlotReplacementInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SlotReplacementInfo::GetReplacementType() const
{
    return m_replacementType;
}

void SlotReplacementInfo::SetReplacementType(const string& _replacementType)
{
    m_replacementType = _replacementType;
    m_replacementTypeHasBeenSet = true;
}

bool SlotReplacementInfo::ReplacementTypeHasBeenSet() const
{
    return m_replacementTypeHasBeenSet;
}

MediaReplacementInfo SlotReplacementInfo::GetMediaReplacementInfo() const
{
    return m_mediaReplacementInfo;
}

void SlotReplacementInfo::SetMediaReplacementInfo(const MediaReplacementInfo& _mediaReplacementInfo)
{
    m_mediaReplacementInfo = _mediaReplacementInfo;
    m_mediaReplacementInfoHasBeenSet = true;
}

bool SlotReplacementInfo::MediaReplacementInfoHasBeenSet() const
{
    return m_mediaReplacementInfoHasBeenSet;
}

TextReplacementInfo SlotReplacementInfo::GetTextReplacementInfo() const
{
    return m_textReplacementInfo;
}

void SlotReplacementInfo::SetTextReplacementInfo(const TextReplacementInfo& _textReplacementInfo)
{
    m_textReplacementInfo = _textReplacementInfo;
    m_textReplacementInfoHasBeenSet = true;
}

bool SlotReplacementInfo::TextReplacementInfoHasBeenSet() const
{
    return m_textReplacementInfoHasBeenSet;
}

