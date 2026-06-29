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

#include <tencentcloud/adp/v20260520/model/SkillNotice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SkillNotice::SkillNotice() :
    m_levelHasBeenSet(false),
    m_noticeContentHasBeenSet(false),
    m_triggerVersionIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome SkillNotice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillNotice.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("NoticeContent") && !value["NoticeContent"].IsNull())
    {
        if (!value["NoticeContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillNotice.NoticeContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeContent = string(value["NoticeContent"].GetString());
        m_noticeContentHasBeenSet = true;
    }

    if (value.HasMember("TriggerVersionId") && !value["TriggerVersionId"].IsNull())
    {
        if (!value["TriggerVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillNotice.TriggerVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerVersionId = string(value["TriggerVersionId"].GetString());
        m_triggerVersionIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillNotice.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillNotice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_noticeContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeContent.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


int64_t SkillNotice::GetLevel() const
{
    return m_level;
}

void SkillNotice::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool SkillNotice::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string SkillNotice::GetNoticeContent() const
{
    return m_noticeContent;
}

void SkillNotice::SetNoticeContent(const string& _noticeContent)
{
    m_noticeContent = _noticeContent;
    m_noticeContentHasBeenSet = true;
}

bool SkillNotice::NoticeContentHasBeenSet() const
{
    return m_noticeContentHasBeenSet;
}

string SkillNotice::GetTriggerVersionId() const
{
    return m_triggerVersionId;
}

void SkillNotice::SetTriggerVersionId(const string& _triggerVersionId)
{
    m_triggerVersionId = _triggerVersionId;
    m_triggerVersionIdHasBeenSet = true;
}

bool SkillNotice::TriggerVersionIdHasBeenSet() const
{
    return m_triggerVersionIdHasBeenSet;
}

int64_t SkillNotice::GetType() const
{
    return m_type;
}

void SkillNotice::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SkillNotice::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

