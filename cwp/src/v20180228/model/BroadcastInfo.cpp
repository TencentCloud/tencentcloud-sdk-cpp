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

#include <tencentcloud/cwp/v20180228/model/BroadcastInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BroadcastInfo::BroadcastInfo() :
    m_titleHasBeenSet(false),
    m_gotoTypeHasBeenSet(false),
    m_subtitleHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome BroadcastInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BroadcastInfo.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("GotoType") && !value["GotoType"].IsNull())
    {
        if (!value["GotoType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BroadcastInfo.GotoType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gotoType = value["GotoType"].GetUint64();
        m_gotoTypeHasBeenSet = true;
    }

    if (value.HasMember("Subtitle") && !value["Subtitle"].IsNull())
    {
        if (!value["Subtitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BroadcastInfo.Subtitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitle = string(value["Subtitle"].GetString());
        m_subtitleHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BroadcastInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BroadcastInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BroadcastInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BroadcastInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BroadcastInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_gotoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GotoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gotoType, allocator);
    }

    if (m_subtitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subtitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitle.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


string BroadcastInfo::GetTitle() const
{
    return m_title;
}

void BroadcastInfo::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool BroadcastInfo::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

uint64_t BroadcastInfo::GetGotoType() const
{
    return m_gotoType;
}

void BroadcastInfo::SetGotoType(const uint64_t& _gotoType)
{
    m_gotoType = _gotoType;
    m_gotoTypeHasBeenSet = true;
}

bool BroadcastInfo::GotoTypeHasBeenSet() const
{
    return m_gotoTypeHasBeenSet;
}

string BroadcastInfo::GetSubtitle() const
{
    return m_subtitle;
}

void BroadcastInfo::SetSubtitle(const string& _subtitle)
{
    m_subtitle = _subtitle;
    m_subtitleHasBeenSet = true;
}

bool BroadcastInfo::SubtitleHasBeenSet() const
{
    return m_subtitleHasBeenSet;
}

string BroadcastInfo::GetCreateTime() const
{
    return m_createTime;
}

void BroadcastInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BroadcastInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BroadcastInfo::GetContent() const
{
    return m_content;
}

void BroadcastInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool BroadcastInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

uint64_t BroadcastInfo::GetId() const
{
    return m_id;
}

void BroadcastInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BroadcastInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t BroadcastInfo::GetType() const
{
    return m_type;
}

void BroadcastInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BroadcastInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

