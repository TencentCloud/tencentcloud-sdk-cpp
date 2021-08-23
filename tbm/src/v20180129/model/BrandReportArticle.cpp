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

#include <tencentcloud/tbm/v20180129/model/BrandReportArticle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbm::V20180129::Model;
using namespace std;

BrandReportArticle::BrandReportArticle() :
    m_titleHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_fromSiteHasBeenSet(false),
    m_pubTimeHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_hotHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_abstractHasBeenSet(false),
    m_articleIdHasBeenSet(false)
{
}

CoreInternalOutcome BrandReportArticle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandReportArticle.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandReportArticle.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("FromSite") && !value["FromSite"].IsNull())
    {
        if (!value["FromSite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandReportArticle.FromSite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromSite = string(value["FromSite"].GetString());
        m_fromSiteHasBeenSet = true;
    }

    if (value.HasMember("PubTime") && !value["PubTime"].IsNull())
    {
        if (!value["PubTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandReportArticle.PubTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pubTime = string(value["PubTime"].GetString());
        m_pubTimeHasBeenSet = true;
    }

    if (value.HasMember("Flag") && !value["Flag"].IsNull())
    {
        if (!value["Flag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BrandReportArticle.Flag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flag = value["Flag"].GetUint64();
        m_flagHasBeenSet = true;
    }

    if (value.HasMember("Hot") && !value["Hot"].IsNull())
    {
        if (!value["Hot"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BrandReportArticle.Hot` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hot = value["Hot"].GetUint64();
        m_hotHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BrandReportArticle.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Abstract") && !value["Abstract"].IsNull())
    {
        if (!value["Abstract"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandReportArticle.Abstract` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_abstract = string(value["Abstract"].GetString());
        m_abstractHasBeenSet = true;
    }

    if (value.HasMember("ArticleId") && !value["ArticleId"].IsNull())
    {
        if (!value["ArticleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandReportArticle.ArticleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_articleId = string(value["ArticleId"].GetString());
        m_articleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BrandReportArticle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_fromSiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromSite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromSite.c_str(), allocator).Move(), allocator);
    }

    if (m_pubTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PubTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pubTime.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flag, allocator);
    }

    if (m_hotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hot, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_abstractHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Abstract";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_abstract.c_str(), allocator).Move(), allocator);
    }

    if (m_articleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArticleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_articleId.c_str(), allocator).Move(), allocator);
    }

}


string BrandReportArticle::GetTitle() const
{
    return m_title;
}

void BrandReportArticle::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool BrandReportArticle::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string BrandReportArticle::GetUrl() const
{
    return m_url;
}

void BrandReportArticle::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool BrandReportArticle::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string BrandReportArticle::GetFromSite() const
{
    return m_fromSite;
}

void BrandReportArticle::SetFromSite(const string& _fromSite)
{
    m_fromSite = _fromSite;
    m_fromSiteHasBeenSet = true;
}

bool BrandReportArticle::FromSiteHasBeenSet() const
{
    return m_fromSiteHasBeenSet;
}

string BrandReportArticle::GetPubTime() const
{
    return m_pubTime;
}

void BrandReportArticle::SetPubTime(const string& _pubTime)
{
    m_pubTime = _pubTime;
    m_pubTimeHasBeenSet = true;
}

bool BrandReportArticle::PubTimeHasBeenSet() const
{
    return m_pubTimeHasBeenSet;
}

uint64_t BrandReportArticle::GetFlag() const
{
    return m_flag;
}

void BrandReportArticle::SetFlag(const uint64_t& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool BrandReportArticle::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

uint64_t BrandReportArticle::GetHot() const
{
    return m_hot;
}

void BrandReportArticle::SetHot(const uint64_t& _hot)
{
    m_hot = _hot;
    m_hotHasBeenSet = true;
}

bool BrandReportArticle::HotHasBeenSet() const
{
    return m_hotHasBeenSet;
}

uint64_t BrandReportArticle::GetLevel() const
{
    return m_level;
}

void BrandReportArticle::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool BrandReportArticle::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string BrandReportArticle::GetAbstract() const
{
    return m_abstract;
}

void BrandReportArticle::SetAbstract(const string& _abstract)
{
    m_abstract = _abstract;
    m_abstractHasBeenSet = true;
}

bool BrandReportArticle::AbstractHasBeenSet() const
{
    return m_abstractHasBeenSet;
}

string BrandReportArticle::GetArticleId() const
{
    return m_articleId;
}

void BrandReportArticle::SetArticleId(const string& _articleId)
{
    m_articleId = _articleId;
    m_articleIdHasBeenSet = true;
}

bool BrandReportArticle::ArticleIdHasBeenSet() const
{
    return m_articleIdHasBeenSet;
}

