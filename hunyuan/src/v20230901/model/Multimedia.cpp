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

#include <tencentcloud/hunyuan/v20230901/model/Multimedia.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Multimedia::Multimedia() :
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_thumbURLHasBeenSet(false),
    m_thumbWidthHasBeenSet(false),
    m_thumbHeightHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descHasBeenSet(false),
    m_singerHasBeenSet(false),
    m_extHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_siteNameHasBeenSet(false),
    m_siteIconHasBeenSet(false)
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

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
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

    if (value.HasMember("ThumbURL") && !value["ThumbURL"].IsNull())
    {
        if (!value["ThumbURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.ThumbURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thumbURL = string(value["ThumbURL"].GetString());
        m_thumbURLHasBeenSet = true;
    }

    if (value.HasMember("ThumbWidth") && !value["ThumbWidth"].IsNull())
    {
        if (!value["ThumbWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.ThumbWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_thumbWidth = value["ThumbWidth"].GetInt64();
        m_thumbWidthHasBeenSet = true;
    }

    if (value.HasMember("ThumbHeight") && !value["ThumbHeight"].IsNull())
    {
        if (!value["ThumbHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.ThumbHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_thumbHeight = value["ThumbHeight"].GetInt64();
        m_thumbHeightHasBeenSet = true;
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

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("SiteName") && !value["SiteName"].IsNull())
    {
        if (!value["SiteName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.SiteName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_siteName = string(value["SiteName"].GetString());
        m_siteNameHasBeenSet = true;
    }

    if (value.HasMember("SiteIcon") && !value["SiteIcon"].IsNull())
    {
        if (!value["SiteIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Multimedia.SiteIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_siteIcon = string(value["SiteIcon"].GetString());
        m_siteIconHasBeenSet = true;
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

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_thumbURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThumbURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thumbURL.c_str(), allocator).Move(), allocator);
    }

    if (m_thumbWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThumbWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thumbWidth, allocator);
    }

    if (m_thumbHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThumbHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thumbHeight, allocator);
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

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_siteNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_siteName.c_str(), allocator).Move(), allocator);
    }

    if (m_siteIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_siteIcon.c_str(), allocator).Move(), allocator);
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

int64_t Multimedia::GetWidth() const
{
    return m_width;
}

void Multimedia::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool Multimedia::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t Multimedia::GetHeight() const
{
    return m_height;
}

void Multimedia::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool Multimedia::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
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

string Multimedia::GetThumbURL() const
{
    return m_thumbURL;
}

void Multimedia::SetThumbURL(const string& _thumbURL)
{
    m_thumbURL = _thumbURL;
    m_thumbURLHasBeenSet = true;
}

bool Multimedia::ThumbURLHasBeenSet() const
{
    return m_thumbURLHasBeenSet;
}

int64_t Multimedia::GetThumbWidth() const
{
    return m_thumbWidth;
}

void Multimedia::SetThumbWidth(const int64_t& _thumbWidth)
{
    m_thumbWidth = _thumbWidth;
    m_thumbWidthHasBeenSet = true;
}

bool Multimedia::ThumbWidthHasBeenSet() const
{
    return m_thumbWidthHasBeenSet;
}

int64_t Multimedia::GetThumbHeight() const
{
    return m_thumbHeight;
}

void Multimedia::SetThumbHeight(const int64_t& _thumbHeight)
{
    m_thumbHeight = _thumbHeight;
    m_thumbHeightHasBeenSet = true;
}

bool Multimedia::ThumbHeightHasBeenSet() const
{
    return m_thumbHeightHasBeenSet;
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

string Multimedia::GetPublishTime() const
{
    return m_publishTime;
}

void Multimedia::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool Multimedia::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

string Multimedia::GetSiteName() const
{
    return m_siteName;
}

void Multimedia::SetSiteName(const string& _siteName)
{
    m_siteName = _siteName;
    m_siteNameHasBeenSet = true;
}

bool Multimedia::SiteNameHasBeenSet() const
{
    return m_siteNameHasBeenSet;
}

string Multimedia::GetSiteIcon() const
{
    return m_siteIcon;
}

void Multimedia::SetSiteIcon(const string& _siteIcon)
{
    m_siteIcon = _siteIcon;
    m_siteIconHasBeenSet = true;
}

bool Multimedia::SiteIconHasBeenSet() const
{
    return m_siteIconHasBeenSet;
}

