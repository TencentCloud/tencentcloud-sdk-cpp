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

#ifndef TENCENTCLOUD_IRP_V20220324_MODEL_DOCITEM_H_
#define TENCENTCLOUD_IRP_V20220324_MODEL_DOCITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/irp/v20220324/model/TagInfo.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220324
        {
            namespace Model
            {
                /**
                * 推荐物料信息
                */
                class DocItem : public AbstractModel
                {
                public:
                    DocItem();
                    ~DocItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容唯一id
                     * @return ItemId 内容唯一id
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置内容唯一id
                     * @param _itemId 内容唯一id
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取内容类型
                     * @return ItemType 内容类型
                     * 
                     */
                    uint64_t GetItemType() const;

                    /**
                     * 设置内容类型
                     * @param _itemType 内容类型
                     * 
                     */
                    void SetItemType(const uint64_t& _itemType);

                    /**
                     * 判断参数 ItemType 是否已赋值
                     * @return ItemType 是否已赋值
                     * 
                     */
                    bool ItemTypeHasBeenSet() const;

                    /**
                     * 获取内容状态：1 - 上架， 2 - 下架
                     * @return Status 内容状态：1 - 上架， 2 - 下架
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置内容状态：1 - 上架， 2 - 下架
                     * @param _status 内容状态：1 - 上架， 2 - 下架
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取内容生成时间，秒级时间戳（1639624786），需大于0
                     * @return PublishTimestamp 内容生成时间，秒级时间戳（1639624786），需大于0
                     * 
                     */
                    int64_t GetPublishTimestamp() const;

                    /**
                     * 设置内容生成时间，秒级时间戳（1639624786），需大于0
                     * @param _publishTimestamp 内容生成时间，秒级时间戳（1639624786），需大于0
                     * 
                     */
                    void SetPublishTimestamp(const int64_t& _publishTimestamp);

                    /**
                     * 判断参数 PublishTimestamp 是否已赋值
                     * @return PublishTimestamp 是否已赋值
                     * 
                     */
                    bool PublishTimestampHasBeenSet() const;

                    /**
                     * 获取物料来源ID
                     * @return SourceId 物料来源ID
                     * 
                     */
                    int64_t GetSourceId() const;

                    /**
                     * 设置物料来源ID
                     * @param _sourceId 物料来源ID
                     * 
                     */
                    void SetSourceId(const int64_t& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取标题名称
                     * @return Title 标题名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置标题名称
                     * @param _title 标题名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取内容正文
                     * @return Content 内容正文
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置内容正文
                     * @param _content 内容正文
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取作者
                     * @return Author 作者
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置作者
                     * @param _author 作者
                     * 
                     */
                    void SetAuthor(const std::string& _author);

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取作者id
                     * @return AuthorId 作者id
                     * 
                     */
                    std::string GetAuthorId() const;

                    /**
                     * 设置作者id
                     * @param _authorId 作者id
                     * 
                     */
                    void SetAuthorId(const std::string& _authorId);

                    /**
                     * 判断参数 AuthorId 是否已赋值
                     * @return AuthorId 是否已赋值
                     * 
                     */
                    bool AuthorIdHasBeenSet() const;

                    /**
                     * 获取标签关键词，多个用英文分号分割
                     * @return Keyword 标签关键词，多个用英文分号分割
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置标签关键词，多个用英文分号分割
                     * @param _keyword 标签关键词，多个用英文分号分割
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取内容物料描述：物料的描述信息，推荐系统会对内容的描述信息，使用否LP技术，进行分词、提取关键词，作为news的特征使用。
                     * @return Desc 内容物料描述：物料的描述信息，推荐系统会对内容的描述信息，使用否LP技术，进行分词、提取关键词，作为news的特征使用。
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置内容物料描述：物料的描述信息，推荐系统会对内容的描述信息，使用否LP技术，进行分词、提取关键词，作为news的特征使用。
                     * @param _desc 内容物料描述：物料的描述信息，推荐系统会对内容的描述信息，使用否LP技术，进行分词、提取关键词，作为news的特征使用。
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取图片url
                     * @return PicUrlList 图片url
                     * 
                     */
                    std::vector<std::string> GetPicUrlList() const;

                    /**
                     * 设置图片url
                     * @param _picUrlList 图片url
                     * 
                     */
                    void SetPicUrlList(const std::vector<std::string>& _picUrlList);

                    /**
                     * 判断参数 PicUrlList 是否已赋值
                     * @return PicUrlList 是否已赋值
                     * 
                     */
                    bool PicUrlListHasBeenSet() const;

                    /**
                     * 获取视频url
                     * @return VideoUrlList 视频url
                     * 
                     */
                    std::vector<std::string> GetVideoUrlList() const;

                    /**
                     * 设置视频url
                     * @param _videoUrlList 视频url
                     * 
                     */
                    void SetVideoUrlList(const std::vector<std::string>& _videoUrlList);

                    /**
                     * 判断参数 VideoUrlList 是否已赋值
                     * @return VideoUrlList 是否已赋值
                     * 
                     */
                    bool VideoUrlListHasBeenSet() const;

                    /**
                     * 获取视频时长，时间秒
                     * @return VideoDuration 视频时长，时间秒
                     * 
                     */
                    int64_t GetVideoDuration() const;

                    /**
                     * 设置视频时长，时间秒
                     * @param _videoDuration 视频时长，时间秒
                     * 
                     */
                    void SetVideoDuration(const int64_t& _videoDuration);

                    /**
                     * 判断参数 VideoDuration 是否已赋值
                     * @return VideoDuration 是否已赋值
                     * 
                     */
                    bool VideoDurationHasBeenSet() const;

                    /**
                     * 获取类目层级数，例如3级类目，则填3，和CategoryPath字段的类数据匹配
                     * @return CategoryLevel 类目层级数，例如3级类目，则填3，和CategoryPath字段的类数据匹配
                     * 
                     */
                    int64_t GetCategoryLevel() const;

                    /**
                     * 设置类目层级数，例如3级类目，则填3，和CategoryPath字段的类数据匹配
                     * @param _categoryLevel 类目层级数，例如3级类目，则填3，和CategoryPath字段的类数据匹配
                     * 
                     */
                    void SetCategoryLevel(const int64_t& _categoryLevel);

                    /**
                     * 判断参数 CategoryLevel 是否已赋值
                     * @return CategoryLevel 是否已赋值
                     * 
                     */
                    bool CategoryLevelHasBeenSet() const;

                    /**
                     * 获取类目路径，一级二级三级等依次用英文冒号联接，如体育：“足球:巴塞罗那”
                     * @return CategoryPath 类目路径，一级二级三级等依次用英文冒号联接，如体育：“足球:巴塞罗那”
                     * 
                     */
                    std::string GetCategoryPath() const;

                    /**
                     * 设置类目路径，一级二级三级等依次用英文冒号联接，如体育：“足球:巴塞罗那”
                     * @param _categoryPath 类目路径，一级二级三级等依次用英文冒号联接，如体育：“足球:巴塞罗那”
                     * 
                     */
                    void SetCategoryPath(const std::string& _categoryPath);

                    /**
                     * 判断参数 CategoryPath 是否已赋值
                     * @return CategoryPath 是否已赋值
                     * 
                     */
                    bool CategoryPathHasBeenSet() const;

                    /**
                     * 获取国家，统一用简写，比如中国则填写CN
                     * @return Country 国家，统一用简写，比如中国则填写CN
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家，统一用简写，比如中国则填写CN
                     * @param _country 国家，统一用简写，比如中国则填写CN
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取省
                     * @return Province 省
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省
                     * @param _province 省
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取城市
                     * @return City 城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置城市
                     * @param _city 城市
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取区县
                     * @return District 区县
                     * 
                     */
                    std::string GetDistrict() const;

                    /**
                     * 设置区县
                     * @param _district 区县
                     * 
                     */
                    void SetDistrict(const std::string& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取内容过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年
                     * @return ExpireTimestamp 内容过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年
                     * 
                     */
                    int64_t GetExpireTimestamp() const;

                    /**
                     * 设置内容过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年
                     * @param _expireTimestamp 内容过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年
                     * 
                     */
                    void SetExpireTimestamp(const int64_t& _expireTimestamp);

                    /**
                     * 判断参数 ExpireTimestamp 是否已赋值
                     * @return ExpireTimestamp 是否已赋值
                     * 
                     */
                    bool ExpireTimestampHasBeenSet() const;

                    /**
                     * 获取所属话题
                     * @return Topic 所属话题
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置所属话题
                     * @param _topic 所属话题
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取作者粉丝数
                     * @return AuthorFans 作者粉丝数
                     * 
                     */
                    int64_t GetAuthorFans() const;

                    /**
                     * 设置作者粉丝数
                     * @param _authorFans 作者粉丝数
                     * 
                     */
                    void SetAuthorFans(const int64_t& _authorFans);

                    /**
                     * 判断参数 AuthorFans 是否已赋值
                     * @return AuthorFans 是否已赋值
                     * 
                     */
                    bool AuthorFansHasBeenSet() const;

                    /**
                     * 获取作者评级
                     * @return AuthorLevel 作者评级
                     * 
                     */
                    std::string GetAuthorLevel() const;

                    /**
                     * 设置作者评级
                     * @param _authorLevel 作者评级
                     * 
                     */
                    void SetAuthorLevel(const std::string& _authorLevel);

                    /**
                     * 判断参数 AuthorLevel 是否已赋值
                     * @return AuthorLevel 是否已赋值
                     * 
                     */
                    bool AuthorLevelHasBeenSet() const;

                    /**
                     * 获取内容累计收藏次数
                     * @return CollectCnt 内容累计收藏次数
                     * 
                     */
                    int64_t GetCollectCnt() const;

                    /**
                     * 设置内容累计收藏次数
                     * @param _collectCnt 内容累计收藏次数
                     * 
                     */
                    void SetCollectCnt(const int64_t& _collectCnt);

                    /**
                     * 判断参数 CollectCnt 是否已赋值
                     * @return CollectCnt 是否已赋值
                     * 
                     */
                    bool CollectCntHasBeenSet() const;

                    /**
                     * 获取内容累积点赞次数
                     * @return PraiseCnt 内容累积点赞次数
                     * 
                     */
                    int64_t GetPraiseCnt() const;

                    /**
                     * 设置内容累积点赞次数
                     * @param _praiseCnt 内容累积点赞次数
                     * 
                     */
                    void SetPraiseCnt(const int64_t& _praiseCnt);

                    /**
                     * 判断参数 PraiseCnt 是否已赋值
                     * @return PraiseCnt 是否已赋值
                     * 
                     */
                    bool PraiseCntHasBeenSet() const;

                    /**
                     * 获取内容累计评论次数
                     * @return CommentCnt 内容累计评论次数
                     * 
                     */
                    int64_t GetCommentCnt() const;

                    /**
                     * 设置内容累计评论次数
                     * @param _commentCnt 内容累计评论次数
                     * 
                     */
                    void SetCommentCnt(const int64_t& _commentCnt);

                    /**
                     * 判断参数 CommentCnt 是否已赋值
                     * @return CommentCnt 是否已赋值
                     * 
                     */
                    bool CommentCntHasBeenSet() const;

                    /**
                     * 获取内容累计分享次数
                     * @return ShareCnt 内容累计分享次数
                     * 
                     */
                    int64_t GetShareCnt() const;

                    /**
                     * 设置内容累计分享次数
                     * @param _shareCnt 内容累计分享次数
                     * 
                     */
                    void SetShareCnt(const int64_t& _shareCnt);

                    /**
                     * 判断参数 ShareCnt 是否已赋值
                     * @return ShareCnt 是否已赋值
                     * 
                     */
                    bool ShareCntHasBeenSet() const;

                    /**
                     * 获取内容累积打赏数
                     * @return RewardCnt 内容累积打赏数
                     * 
                     */
                    int64_t GetRewardCnt() const;

                    /**
                     * 设置内容累积打赏数
                     * @param _rewardCnt 内容累积打赏数
                     * 
                     */
                    void SetRewardCnt(const int64_t& _rewardCnt);

                    /**
                     * 判断参数 RewardCnt 是否已赋值
                     * @return RewardCnt 是否已赋值
                     * 
                     */
                    bool RewardCntHasBeenSet() const;

                    /**
                     * 获取内容质量评分，类似豆瓣电影的评分，这里为100分制，比如97分，满分100分，最低0分，范围外的将会被拦截
                     * @return Score 内容质量评分，类似豆瓣电影的评分，这里为100分制，比如97分，满分100分，最低0分，范围外的将会被拦截
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置内容质量评分，类似豆瓣电影的评分，这里为100分制，比如97分，满分100分，最低0分，范围外的将会被拦截
                     * @param _score 内容质量评分，类似豆瓣电影的评分，这里为100分制，比如97分，满分100分，最低0分，范围外的将会被拦截
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取内容池id，用于分内容池召回，一个内容支持指定一个或多个内容池， 内容池id不建议使用0（0表示不区分内容池）
                     * @return PoolIdList 内容池id，用于分内容池召回，一个内容支持指定一个或多个内容池， 内容池id不建议使用0（0表示不区分内容池）
                     * 
                     */
                    std::vector<std::string> GetPoolIdList() const;

                    /**
                     * 设置内容池id，用于分内容池召回，一个内容支持指定一个或多个内容池， 内容池id不建议使用0（0表示不区分内容池）
                     * @param _poolIdList 内容池id，用于分内容池召回，一个内容支持指定一个或多个内容池， 内容池id不建议使用0（0表示不区分内容池）
                     * 
                     */
                    void SetPoolIdList(const std::vector<std::string>& _poolIdList);

                    /**
                     * 判断参数 PoolIdList 是否已赋值
                     * @return PoolIdList 是否已赋值
                     * 
                     */
                    bool PoolIdListHasBeenSet() const;

                    /**
                     * 获取描述用户标签
                     * @return TagInfoList 描述用户标签
                     * 
                     */
                    std::vector<TagInfo> GetTagInfoList() const;

                    /**
                     * 设置描述用户标签
                     * @param _tagInfoList 描述用户标签
                     * 
                     */
                    void SetTagInfoList(const std::vector<TagInfo>& _tagInfoList);

                    /**
                     * 判断参数 TagInfoList 是否已赋值
                     * @return TagInfoList 是否已赋值
                     * 
                     */
                    bool TagInfoListHasBeenSet() const;

                    /**
                     * 获取json字符串，用于物料数据的扩展
                     * @return Extension json字符串，用于物料数据的扩展
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置json字符串，用于物料数据的扩展
                     * @param _extension json字符串，用于物料数据的扩展
                     * 
                     */
                    void SetExtension(const std::string& _extension);

                    /**
                     * 判断参数 Extension 是否已赋值
                     * @return Extension 是否已赋值
                     * 
                     */
                    bool ExtensionHasBeenSet() const;

                private:

                    /**
                     * 内容唯一id
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 内容类型
                     */
                    uint64_t m_itemType;
                    bool m_itemTypeHasBeenSet;

                    /**
                     * 内容状态：1 - 上架， 2 - 下架
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 内容生成时间，秒级时间戳（1639624786），需大于0
                     */
                    int64_t m_publishTimestamp;
                    bool m_publishTimestampHasBeenSet;

                    /**
                     * 物料来源ID
                     */
                    int64_t m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 标题名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 内容正文
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 作者
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * 作者id
                     */
                    std::string m_authorId;
                    bool m_authorIdHasBeenSet;

                    /**
                     * 标签关键词，多个用英文分号分割
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 内容物料描述：物料的描述信息，推荐系统会对内容的描述信息，使用否LP技术，进行分词、提取关键词，作为news的特征使用。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 图片url
                     */
                    std::vector<std::string> m_picUrlList;
                    bool m_picUrlListHasBeenSet;

                    /**
                     * 视频url
                     */
                    std::vector<std::string> m_videoUrlList;
                    bool m_videoUrlListHasBeenSet;

                    /**
                     * 视频时长，时间秒
                     */
                    int64_t m_videoDuration;
                    bool m_videoDurationHasBeenSet;

                    /**
                     * 类目层级数，例如3级类目，则填3，和CategoryPath字段的类数据匹配
                     */
                    int64_t m_categoryLevel;
                    bool m_categoryLevelHasBeenSet;

                    /**
                     * 类目路径，一级二级三级等依次用英文冒号联接，如体育：“足球:巴塞罗那”
                     */
                    std::string m_categoryPath;
                    bool m_categoryPathHasBeenSet;

                    /**
                     * 国家，统一用简写，比如中国则填写CN
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 省
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 区县
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * 内容过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年
                     */
                    int64_t m_expireTimestamp;
                    bool m_expireTimestampHasBeenSet;

                    /**
                     * 所属话题
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 作者粉丝数
                     */
                    int64_t m_authorFans;
                    bool m_authorFansHasBeenSet;

                    /**
                     * 作者评级
                     */
                    std::string m_authorLevel;
                    bool m_authorLevelHasBeenSet;

                    /**
                     * 内容累计收藏次数
                     */
                    int64_t m_collectCnt;
                    bool m_collectCntHasBeenSet;

                    /**
                     * 内容累积点赞次数
                     */
                    int64_t m_praiseCnt;
                    bool m_praiseCntHasBeenSet;

                    /**
                     * 内容累计评论次数
                     */
                    int64_t m_commentCnt;
                    bool m_commentCntHasBeenSet;

                    /**
                     * 内容累计分享次数
                     */
                    int64_t m_shareCnt;
                    bool m_shareCntHasBeenSet;

                    /**
                     * 内容累积打赏数
                     */
                    int64_t m_rewardCnt;
                    bool m_rewardCntHasBeenSet;

                    /**
                     * 内容质量评分，类似豆瓣电影的评分，这里为100分制，比如97分，满分100分，最低0分，范围外的将会被拦截
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 内容池id，用于分内容池召回，一个内容支持指定一个或多个内容池， 内容池id不建议使用0（0表示不区分内容池）
                     */
                    std::vector<std::string> m_poolIdList;
                    bool m_poolIdListHasBeenSet;

                    /**
                     * 描述用户标签
                     */
                    std::vector<TagInfo> m_tagInfoList;
                    bool m_tagInfoListHasBeenSet;

                    /**
                     * json字符串，用于物料数据的扩展
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220324_MODEL_DOCITEM_H_
