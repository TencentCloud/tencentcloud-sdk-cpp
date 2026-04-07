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

#include <tencentcloud/live/v20180801/model/AvatarScriptInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AvatarScriptInfo::AvatarScriptInfo() :
    m_scriptIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AvatarScriptInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScriptId") && !value["ScriptId"].IsNull())
    {
        if (!value["ScriptId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarScriptInfo.ScriptId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptId = string(value["ScriptId"].GetString());
        m_scriptIdHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarScriptInfo.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarScriptInfo.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarScriptInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarScriptInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarScriptInfo.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarScriptInfo.Position` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetInt64();
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarScriptInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarScriptInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvatarScriptInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scriptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_position, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string AvatarScriptInfo::GetScriptId() const
{
    return m_scriptId;
}

void AvatarScriptInfo::SetScriptId(const string& _scriptId)
{
    m_scriptId = _scriptId;
    m_scriptIdHasBeenSet = true;
}

bool AvatarScriptInfo::ScriptIdHasBeenSet() const
{
    return m_scriptIdHasBeenSet;
}

string AvatarScriptInfo::GetProductId() const
{
    return m_productId;
}

void AvatarScriptInfo::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool AvatarScriptInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string AvatarScriptInfo::GetTitle() const
{
    return m_title;
}

void AvatarScriptInfo::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool AvatarScriptInfo::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string AvatarScriptInfo::GetContent() const
{
    return m_content;
}

void AvatarScriptInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool AvatarScriptInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string AvatarScriptInfo::GetStatus() const
{
    return m_status;
}

void AvatarScriptInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AvatarScriptInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AvatarScriptInfo::GetDuration() const
{
    return m_duration;
}

void AvatarScriptInfo::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool AvatarScriptInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t AvatarScriptInfo::GetPosition() const
{
    return m_position;
}

void AvatarScriptInfo::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool AvatarScriptInfo::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string AvatarScriptInfo::GetCreateTime() const
{
    return m_createTime;
}

void AvatarScriptInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AvatarScriptInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AvatarScriptInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AvatarScriptInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AvatarScriptInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

