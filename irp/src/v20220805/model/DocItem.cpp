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

#include <tencentcloud/irp/v20220805/model/DocItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Irp::V20220805::Model;
using namespace std;

DocItem::DocItem() :
    m_itemIdHasBeenSet(false),
    m_itemTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_publishTimestampHasBeenSet(false),
    m_expireTimestampHasBeenSet(false),
    m_categoryLevelHasBeenSet(false),
    m_categoryPathHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentUrlHasBeenSet(false),
    m_videoDurationHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_authorFansHasBeenSet(false),
    m_authorLevelHasBeenSet(false),
    m_collectCntHasBeenSet(false),
    m_praiseCntHasBeenSet(false),
    m_commentCntHasBeenSet(false),
    m_shareCntHasBeenSet(false),
    m_rewardCntHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_extensionHasBeenSet(false)
{
}

CoreInternalOutcome DocItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(value["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("ItemType") && !value["ItemType"].IsNull())
    {
        if (!value["ItemType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.ItemType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemType = string(value["ItemType"].GetString());
        m_itemTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PublishTimestamp") && !value["PublishTimestamp"].IsNull())
    {
        if (!value["PublishTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.PublishTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publishTimestamp = value["PublishTimestamp"].GetInt64();
        m_publishTimestampHasBeenSet = true;
    }

    if (value.HasMember("ExpireTimestamp") && !value["ExpireTimestamp"].IsNull())
    {
        if (!value["ExpireTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.ExpireTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTimestamp = value["ExpireTimestamp"].GetInt64();
        m_expireTimestampHasBeenSet = true;
    }

    if (value.HasMember("CategoryLevel") && !value["CategoryLevel"].IsNull())
    {
        if (!value["CategoryLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.CategoryLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryLevel = value["CategoryLevel"].GetInt64();
        m_categoryLevelHasBeenSet = true;
    }

    if (value.HasMember("CategoryPath") && !value["CategoryPath"].IsNull())
    {
        if (!value["CategoryPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.CategoryPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryPath = string(value["CategoryPath"].GetString());
        m_categoryPathHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Author") && !value["Author"].IsNull())
    {
        if (!value["Author"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.Author` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_author = string(value["Author"].GetString());
        m_authorHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ContentUrl") && !value["ContentUrl"].IsNull())
    {
        if (!value["ContentUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.ContentUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentUrl = string(value["ContentUrl"].GetString());
        m_contentUrlHasBeenSet = true;
    }

    if (value.HasMember("VideoDuration") && !value["VideoDuration"].IsNull())
    {
        if (!value["VideoDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.VideoDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoDuration = value["VideoDuration"].GetInt64();
        m_videoDurationHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("AuthorFans") && !value["AuthorFans"].IsNull())
    {
        if (!value["AuthorFans"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.AuthorFans` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authorFans = value["AuthorFans"].GetInt64();
        m_authorFansHasBeenSet = true;
    }

    if (value.HasMember("AuthorLevel") && !value["AuthorLevel"].IsNull())
    {
        if (!value["AuthorLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.AuthorLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorLevel = string(value["AuthorLevel"].GetString());
        m_authorLevelHasBeenSet = true;
    }

    if (value.HasMember("CollectCnt") && !value["CollectCnt"].IsNull())
    {
        if (!value["CollectCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.CollectCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_collectCnt = value["CollectCnt"].GetInt64();
        m_collectCntHasBeenSet = true;
    }

    if (value.HasMember("PraiseCnt") && !value["PraiseCnt"].IsNull())
    {
        if (!value["PraiseCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.PraiseCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_praiseCnt = value["PraiseCnt"].GetInt64();
        m_praiseCntHasBeenSet = true;
    }

    if (value.HasMember("CommentCnt") && !value["CommentCnt"].IsNull())
    {
        if (!value["CommentCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.CommentCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commentCnt = value["CommentCnt"].GetInt64();
        m_commentCntHasBeenSet = true;
    }

    if (value.HasMember("ShareCnt") && !value["ShareCnt"].IsNull())
    {
        if (!value["ShareCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.ShareCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shareCnt = value["ShareCnt"].GetInt64();
        m_shareCntHasBeenSet = true;
    }

    if (value.HasMember("RewardCnt") && !value["RewardCnt"].IsNull())
    {
        if (!value["RewardCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.RewardCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rewardCnt = value["RewardCnt"].GetInt64();
        m_rewardCntHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Extension") && !value["Extension"].IsNull())
    {
        if (!value["Extension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.Extension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extension = string(value["Extension"].GetString());
        m_extensionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
    }

    if (m_itemTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_publishTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publishTimestamp, allocator);
    }

    if (m_expireTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTimestamp, allocator);
    }

    if (m_categoryLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryLevel, allocator);
    }

    if (m_categoryPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryPath.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_author.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
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

    if (m_contentUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_videoDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoDuration, allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_authorFansHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorFans";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorFans, allocator);
    }

    if (m_authorLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_collectCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_collectCnt, allocator);
    }

    if (m_praiseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PraiseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_praiseCnt, allocator);
    }

    if (m_commentCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommentCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commentCnt, allocator);
    }

    if (m_shareCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareCnt, allocator);
    }

    if (m_rewardCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewardCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rewardCnt, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_extensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extension.c_str(), allocator).Move(), allocator);
    }

}


string DocItem::GetItemId() const
{
    return m_itemId;
}

void DocItem::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool DocItem::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string DocItem::GetItemType() const
{
    return m_itemType;
}

void DocItem::SetItemType(const string& _itemType)
{
    m_itemType = _itemType;
    m_itemTypeHasBeenSet = true;
}

bool DocItem::ItemTypeHasBeenSet() const
{
    return m_itemTypeHasBeenSet;
}

uint64_t DocItem::GetStatus() const
{
    return m_status;
}

void DocItem::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DocItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DocItem::GetPublishTimestamp() const
{
    return m_publishTimestamp;
}

void DocItem::SetPublishTimestamp(const int64_t& _publishTimestamp)
{
    m_publishTimestamp = _publishTimestamp;
    m_publishTimestampHasBeenSet = true;
}

bool DocItem::PublishTimestampHasBeenSet() const
{
    return m_publishTimestampHasBeenSet;
}

int64_t DocItem::GetExpireTimestamp() const
{
    return m_expireTimestamp;
}

void DocItem::SetExpireTimestamp(const int64_t& _expireTimestamp)
{
    m_expireTimestamp = _expireTimestamp;
    m_expireTimestampHasBeenSet = true;
}

bool DocItem::ExpireTimestampHasBeenSet() const
{
    return m_expireTimestampHasBeenSet;
}

int64_t DocItem::GetCategoryLevel() const
{
    return m_categoryLevel;
}

void DocItem::SetCategoryLevel(const int64_t& _categoryLevel)
{
    m_categoryLevel = _categoryLevel;
    m_categoryLevelHasBeenSet = true;
}

bool DocItem::CategoryLevelHasBeenSet() const
{
    return m_categoryLevelHasBeenSet;
}

string DocItem::GetCategoryPath() const
{
    return m_categoryPath;
}

void DocItem::SetCategoryPath(const string& _categoryPath)
{
    m_categoryPath = _categoryPath;
    m_categoryPathHasBeenSet = true;
}

bool DocItem::CategoryPathHasBeenSet() const
{
    return m_categoryPathHasBeenSet;
}

string DocItem::GetTags() const
{
    return m_tags;
}

void DocItem::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DocItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DocItem::GetAuthor() const
{
    return m_author;
}

void DocItem::SetAuthor(const string& _author)
{
    m_author = _author;
    m_authorHasBeenSet = true;
}

bool DocItem::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

string DocItem::GetSourceId() const
{
    return m_sourceId;
}

void DocItem::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool DocItem::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string DocItem::GetTitle() const
{
    return m_title;
}

void DocItem::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool DocItem::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string DocItem::GetContent() const
{
    return m_content;
}

void DocItem::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DocItem::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string DocItem::GetContentUrl() const
{
    return m_contentUrl;
}

void DocItem::SetContentUrl(const string& _contentUrl)
{
    m_contentUrl = _contentUrl;
    m_contentUrlHasBeenSet = true;
}

bool DocItem::ContentUrlHasBeenSet() const
{
    return m_contentUrlHasBeenSet;
}

int64_t DocItem::GetVideoDuration() const
{
    return m_videoDuration;
}

void DocItem::SetVideoDuration(const int64_t& _videoDuration)
{
    m_videoDuration = _videoDuration;
    m_videoDurationHasBeenSet = true;
}

bool DocItem::VideoDurationHasBeenSet() const
{
    return m_videoDurationHasBeenSet;
}

string DocItem::GetCountry() const
{
    return m_country;
}

void DocItem::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool DocItem::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string DocItem::GetProvince() const
{
    return m_province;
}

void DocItem::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool DocItem::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string DocItem::GetCity() const
{
    return m_city;
}

void DocItem::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool DocItem::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

int64_t DocItem::GetAuthorFans() const
{
    return m_authorFans;
}

void DocItem::SetAuthorFans(const int64_t& _authorFans)
{
    m_authorFans = _authorFans;
    m_authorFansHasBeenSet = true;
}

bool DocItem::AuthorFansHasBeenSet() const
{
    return m_authorFansHasBeenSet;
}

string DocItem::GetAuthorLevel() const
{
    return m_authorLevel;
}

void DocItem::SetAuthorLevel(const string& _authorLevel)
{
    m_authorLevel = _authorLevel;
    m_authorLevelHasBeenSet = true;
}

bool DocItem::AuthorLevelHasBeenSet() const
{
    return m_authorLevelHasBeenSet;
}

int64_t DocItem::GetCollectCnt() const
{
    return m_collectCnt;
}

void DocItem::SetCollectCnt(const int64_t& _collectCnt)
{
    m_collectCnt = _collectCnt;
    m_collectCntHasBeenSet = true;
}

bool DocItem::CollectCntHasBeenSet() const
{
    return m_collectCntHasBeenSet;
}

int64_t DocItem::GetPraiseCnt() const
{
    return m_praiseCnt;
}

void DocItem::SetPraiseCnt(const int64_t& _praiseCnt)
{
    m_praiseCnt = _praiseCnt;
    m_praiseCntHasBeenSet = true;
}

bool DocItem::PraiseCntHasBeenSet() const
{
    return m_praiseCntHasBeenSet;
}

int64_t DocItem::GetCommentCnt() const
{
    return m_commentCnt;
}

void DocItem::SetCommentCnt(const int64_t& _commentCnt)
{
    m_commentCnt = _commentCnt;
    m_commentCntHasBeenSet = true;
}

bool DocItem::CommentCntHasBeenSet() const
{
    return m_commentCntHasBeenSet;
}

int64_t DocItem::GetShareCnt() const
{
    return m_shareCnt;
}

void DocItem::SetShareCnt(const int64_t& _shareCnt)
{
    m_shareCnt = _shareCnt;
    m_shareCntHasBeenSet = true;
}

bool DocItem::ShareCntHasBeenSet() const
{
    return m_shareCntHasBeenSet;
}

int64_t DocItem::GetRewardCnt() const
{
    return m_rewardCnt;
}

void DocItem::SetRewardCnt(const int64_t& _rewardCnt)
{
    m_rewardCnt = _rewardCnt;
    m_rewardCntHasBeenSet = true;
}

bool DocItem::RewardCntHasBeenSet() const
{
    return m_rewardCntHasBeenSet;
}

double DocItem::GetScore() const
{
    return m_score;
}

void DocItem::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool DocItem::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string DocItem::GetExtension() const
{
    return m_extension;
}

void DocItem::SetExtension(const string& _extension)
{
    m_extension = _extension;
    m_extensionHasBeenSet = true;
}

bool DocItem::ExtensionHasBeenSet() const
{
    return m_extensionHasBeenSet;
}

