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

#include <tencentcloud/hunyuan/v20230901/model/Multimedia.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Multimedia::Multimedia() :
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descHasBeenSet(false),
    m_singerHasBeenSet(false),
    m_extHasBeenSet(false)
{
}

CoreInternalOutcome Multimedia::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("JumpUrl") && !value["JumpUrl"].IsNull())
    {
        if (!value["JumpUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.JumpUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jumpUrl = string(value["JumpUrl"].GetString());
        m_jumpUrlHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Singer") && !value["Singer"].IsNull())
    {
        if (!value["Singer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.Singer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_singer = string(value["Singer"].GetString());
        m_singerHasBeenSet = true;
    }

    if (value.HasMember("Ext") && !value["Ext"].IsNull())
    {
        if (!value["Ext"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.Ext` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ext.Deserialize(value["Ext"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Multimedia::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_singerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Singer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_singer.c_str(), allocator).Move(), allocator);
    }

    if (m_extHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ext.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Multimedia::GetType() const
{
    return m_type;
}

void Multimedia::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Multimedia::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Multimedia::GetUrl() const
{
    return m_url;
}

void Multimedia::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool Multimedia::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string Multimedia::GetJumpUrl() const
{
    return m_jumpUrl;
}

void Multimedia::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool Multimedia::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

string Multimedia::GetTitle() const
{
    return m_title;
}

void Multimedia::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool Multimedia::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string Multimedia::GetDesc() const
{
    return m_desc;
}

void Multimedia::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool Multimedia::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string Multimedia::GetSinger() const
{
    return m_singer;
}

void Multimedia::SetSinger(const string& _singer)
{
    m_singer = _singer;
    m_singerHasBeenSet = true;
}

bool Multimedia::SingerHasBeenSet() const
{
    return m_singerHasBeenSet;
}

SongExt Multimedia::GetExt() const
{
    return m_ext;
}

void Multimedia::SetExt(const SongExt& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool Multimedia::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}

