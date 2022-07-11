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

#include <tencentcloud/irp/v20220324/model/DocItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Irp::V20220324::Model;
using namespace std;

DocItem::DocItem() :
    m_itemIdHasBeenSet(false),
    m_itemTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_publishTimestampHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_authorIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_descHasBeenSet(false),
    m_picUrlListHasBeenSet(false),
    m_videoUrlListHasBeenSet(false),
    m_videoDurationHasBeenSet(false),
    m_categoryLevelHasBeenSet(false),
    m_categoryPathHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_districtHasBeenSet(false),
    m_expireTimestampHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_authorFansHasBeenSet(false),
    m_authorLevelHasBeenSet(false),
    m_collectCntHasBeenSet(false),
    m_praiseCntHasBeenSet(false),
    m_commentCntHasBeenSet(false),
    m_shareCntHasBeenSet(false),
    m_rewardCntHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_poolIdListHasBeenSet(false),
    m_tagInfoListHasBeenSet(false),
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
        if (!value["ItemType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.ItemType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_itemType = value["ItemType"].GetUint64();
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

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.SourceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = value["SourceId"].GetInt64();
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

    if (value.HasMember("Author") && !value["Author"].IsNull())
    {
        if (!value["Author"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.Author` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_author = string(value["Author"].GetString());
        m_authorHasBeenSet = true;
    }

    if (value.HasMember("AuthorId") && !value["AuthorId"].IsNull())
    {
        if (!value["AuthorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.AuthorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorId = string(value["AuthorId"].GetString());
        m_authorIdHasBeenSet = true;
    }

    if (value.HasMember("Keyword") && !value["Keyword"].IsNull())
    {
        if (!value["Keyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("PicUrlList") && !value["PicUrlList"].IsNull())
    {
        if (!value["PicUrlList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocItem.PicUrlList` is not array type"));

        const rapidjson::Value &tmpValue = value["PicUrlList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_picUrlList.push_back((*itr).GetString());
        }
        m_picUrlListHasBeenSet = true;
    }

    if (value.HasMember("VideoUrlList") && !value["VideoUrlList"].IsNull())
    {
        if (!value["VideoUrlList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocItem.VideoUrlList` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoUrlList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_videoUrlList.push_back((*itr).GetString());
        }
        m_videoUrlListHasBeenSet = true;
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

    if (value.HasMember("District") && !value["District"].IsNull())
    {
        if (!value["District"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.District` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_district = string(value["District"].GetString());
        m_districtHasBeenSet = true;
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

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
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

    if (value.HasMember("PoolIdList") && !value["PoolIdList"].IsNull())
    {
        if (!value["PoolIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocItem.PoolIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["PoolIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_poolIdList.push_back((*itr).GetString());
        }
        m_poolIdListHasBeenSet = true;
    }

    if (value.HasMember("TagInfoList") && !value["TagInfoList"].IsNull())
    {
        if (!value["TagInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocItem.TagInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagInfoList.push_back(item);
        }
        m_tagInfoListHasBeenSet = true;
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
        value.AddMember(iKey, m_itemType, allocator);
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

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceId, allocator);
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

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_author.c_str(), allocator).Move(), allocator);
    }

    if (m_authorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorId.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_picUrlListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicUrlList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_picUrlList.begin(); itr != m_picUrlList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_videoUrlListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrlList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_videoUrlList.begin(); itr != m_videoUrlList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_videoDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoDuration, allocator);
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

    if (m_districtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "District";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_district.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTimestamp, allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
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

    if (m_poolIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_poolIdList.begin(); itr != m_poolIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagInfoList.begin(); itr != m_tagInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

uint64_t DocItem::GetItemType() const
{
    return m_itemType;
}

void DocItem::SetItemType(const uint64_t& _itemType)
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

int64_t DocItem::GetSourceId() const
{
    return m_sourceId;
}

void DocItem::SetSourceId(const int64_t& _sourceId)
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

string DocItem::GetAuthorId() const
{
    return m_authorId;
}

void DocItem::SetAuthorId(const string& _authorId)
{
    m_authorId = _authorId;
    m_authorIdHasBeenSet = true;
}

bool DocItem::AuthorIdHasBeenSet() const
{
    return m_authorIdHasBeenSet;
}

string DocItem::GetKeyword() const
{
    return m_keyword;
}

void DocItem::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DocItem::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DocItem::GetDesc() const
{
    return m_desc;
}

void DocItem::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool DocItem::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

vector<string> DocItem::GetPicUrlList() const
{
    return m_picUrlList;
}

void DocItem::SetPicUrlList(const vector<string>& _picUrlList)
{
    m_picUrlList = _picUrlList;
    m_picUrlListHasBeenSet = true;
}

bool DocItem::PicUrlListHasBeenSet() const
{
    return m_picUrlListHasBeenSet;
}

vector<string> DocItem::GetVideoUrlList() const
{
    return m_videoUrlList;
}

void DocItem::SetVideoUrlList(const vector<string>& _videoUrlList)
{
    m_videoUrlList = _videoUrlList;
    m_videoUrlListHasBeenSet = true;
}

bool DocItem::VideoUrlListHasBeenSet() const
{
    return m_videoUrlListHasBeenSet;
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

string DocItem::GetDistrict() const
{
    return m_district;
}

void DocItem::SetDistrict(const string& _district)
{
    m_district = _district;
    m_districtHasBeenSet = true;
}

bool DocItem::DistrictHasBeenSet() const
{
    return m_districtHasBeenSet;
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

string DocItem::GetTopic() const
{
    return m_topic;
}

void DocItem::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool DocItem::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
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

vector<string> DocItem::GetPoolIdList() const
{
    return m_poolIdList;
}

void DocItem::SetPoolIdList(const vector<string>& _poolIdList)
{
    m_poolIdList = _poolIdList;
    m_poolIdListHasBeenSet = true;
}

bool DocItem::PoolIdListHasBeenSet() const
{
    return m_poolIdListHasBeenSet;
}

vector<TagInfo> DocItem::GetTagInfoList() const
{
    return m_tagInfoList;
}

void DocItem::SetTagInfoList(const vector<TagInfo>& _tagInfoList)
{
    m_tagInfoList = _tagInfoList;
    m_tagInfoListHasBeenSet = true;
}

bool DocItem::TagInfoListHasBeenSet() const
{
    return m_tagInfoListHasBeenSet;
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

