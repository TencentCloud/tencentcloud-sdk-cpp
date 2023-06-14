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

#ifndef TENCENTCLOUD_IRP_V20220805_MODEL_DOCITEM_H_
#define TENCENTCLOUD_IRP_V20220805_MODEL_DOCITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220805
        {
            namespace Model
            {
                /**
                * 信息流内容
                */
                class DocItem : public AbstractModel
                {
                public:
                    DocItem();
                    ~DocItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容唯一id，建议限制在128字符以内
                     * @return ItemId 内容唯一id，建议限制在128字符以内
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置内容唯一id，建议限制在128字符以内
                     * @param _itemId 内容唯一id，建议限制在128字符以内
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
                     * 获取内容类型：<br/>● article -图文<br>● text -纯文本<br/>● video -视频<br/>● short_video -时长15秒以内的视频<br/>● mini_video -竖屏视频<br/>● image -纯图片<br/>（如当前类型不满足，请登录控制台进入对应项目，在<b>物料管理->物料类型管理</b>中添加）
                     * @return ItemType 内容类型：<br/>● article -图文<br>● text -纯文本<br/>● video -视频<br/>● short_video -时长15秒以内的视频<br/>● mini_video -竖屏视频<br/>● image -纯图片<br/>（如当前类型不满足，请登录控制台进入对应项目，在<b>物料管理->物料类型管理</b>中添加）
                     * 
                     */
                    std::string GetItemType() const;

                    /**
                     * 设置内容类型：<br/>● article -图文<br>● text -纯文本<br/>● video -视频<br/>● short_video -时长15秒以内的视频<br/>● mini_video -竖屏视频<br/>● image -纯图片<br/>（如当前类型不满足，请登录控制台进入对应项目，在<b>物料管理->物料类型管理</b>中添加）
                     * @param _itemType 内容类型：<br/>● article -图文<br>● text -纯文本<br/>● video -视频<br/>● short_video -时长15秒以内的视频<br/>● mini_video -竖屏视频<br/>● image -纯图片<br/>（如当前类型不满足，请登录控制台进入对应项目，在<b>物料管理->物料类型管理</b>中添加）
                     * 
                     */
                    void SetItemType(const std::string& _itemType);

                    /**
                     * 判断参数 ItemType 是否已赋值
                     * @return ItemType 是否已赋值
                     * 
                     */
                    bool ItemTypeHasBeenSet() const;

                    /**
                     * 获取内容状态：
● 1 - 上架 
● 2 - 下架 
Status=2的内容不会在推荐结果中出现 
需要下架内容时，把Status的值修改为2即可
                     * @return Status 内容状态：
● 1 - 上架 
● 2 - 下架 
Status=2的内容不会在推荐结果中出现 
需要下架内容时，把Status的值修改为2即可
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置内容状态：
● 1 - 上架 
● 2 - 下架 
Status=2的内容不会在推荐结果中出现 
需要下架内容时，把Status的值修改为2即可
                     * @param _status 内容状态：
● 1 - 上架 
● 2 - 下架 
Status=2的内容不会在推荐结果中出现 
需要下架内容时，把Status的值修改为2即可
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
                     * 获取内容生成时间，秒级时间戳（1639624786），需大于0，<b>用作特征和物料管理</b>
                     * @return PublishTimestamp 内容生成时间，秒级时间戳（1639624786），需大于0，<b>用作特征和物料管理</b>
                     * 
                     */
                    int64_t GetPublishTimestamp() const;

                    /**
                     * 设置内容生成时间，秒级时间戳（1639624786），需大于0，<b>用作特征和物料管理</b>
                     * @param _publishTimestamp 内容生成时间，秒级时间戳（1639624786），需大于0，<b>用作特征和物料管理</b>
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
                     * 获取内容过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年，用作特征，过期则不会被推荐，<b>强烈建议</b>
                     * @return ExpireTimestamp 内容过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年，用作特征，过期则不会被推荐，<b>强烈建议</b>
                     * 
                     */
                    int64_t GetExpireTimestamp() const;

                    /**
                     * 设置内容过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年，用作特征，过期则不会被推荐，<b>强烈建议</b>
                     * @param _expireTimestamp 内容过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年，用作特征，过期则不会被推荐，<b>强烈建议</b>
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
                     * 获取类目层级数，例如3级类目，则填3，和CategoryPath字段的类数据匹配，<b>强烈建议</b>
                     * @return CategoryLevel 类目层级数，例如3级类目，则填3，和CategoryPath字段的类数据匹配，<b>强烈建议</b>
                     * 
                     */
                    int64_t GetCategoryLevel() const;

                    /**
                     * 设置类目层级数，例如3级类目，则填3，和CategoryPath字段的类数据匹配，<b>强烈建议</b>
                     * @param _categoryLevel 类目层级数，例如3级类目，则填3，和CategoryPath字段的类数据匹配，<b>强烈建议</b>
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
                     * 获取类目路径，一级二级三级等依次用英文冒号联接，和CategoryLevel字段值匹配，如体育：“足球:巴塞罗那”。<b>用于物料池管理，强烈建议</b>
                     * @return CategoryPath 类目路径，一级二级三级等依次用英文冒号联接，和CategoryLevel字段值匹配，如体育：“足球:巴塞罗那”。<b>用于物料池管理，强烈建议</b>
                     * 
                     */
                    std::string GetCategoryPath() const;

                    /**
                     * 设置类目路径，一级二级三级等依次用英文冒号联接，和CategoryLevel字段值匹配，如体育：“足球:巴塞罗那”。<b>用于物料池管理，强烈建议</b>
                     * @param _categoryPath 类目路径，一级二级三级等依次用英文冒号联接，和CategoryLevel字段值匹配，如体育：“足球:巴塞罗那”。<b>用于物料池管理，强烈建议</b>
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
                     * 获取内容标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
                     * @return Tags 内容标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置内容标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
                     * @param _tags 内容标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取作者名，需保证作者名唯一，若有重名需要加编号区分。<b>用于召回过滤、规则打散，强烈建议</b>
                     * @return Author 作者名，需保证作者名唯一，若有重名需要加编号区分。<b>用于召回过滤、规则打散，强烈建议</b>
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置作者名，需保证作者名唯一，若有重名需要加编号区分。<b>用于召回过滤、规则打散，强烈建议</b>
                     * @param _author 作者名，需保证作者名唯一，若有重名需要加编号区分。<b>用于召回过滤、规则打散，强烈建议</b>
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
                     * 获取内容来源类型，客户自定义，<b>用于物料池管理</b>
                     * @return SourceId 内容来源类型，客户自定义，<b>用于物料池管理</b>
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置内容来源类型，客户自定义，<b>用于物料池管理</b>
                     * @param _sourceId 内容来源类型，客户自定义，<b>用于物料池管理</b>
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取内容标题，<b>主要用于语义分析</b>
                     * @return Title 内容标题，<b>主要用于语义分析</b>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置内容标题，<b>主要用于语义分析</b>
                     * @param _title 内容标题，<b>主要用于语义分析</b>
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
                     * 获取正文关键片段，建议控制在500字符以内，<b>主要用于语义分析</b>
                     * @return Content 正文关键片段，建议控制在500字符以内，<b>主要用于语义分析</b>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置正文关键片段，建议控制在500字符以内，<b>主要用于语义分析</b>
                     * @param _content 正文关键片段，建议控制在500字符以内，<b>主要用于语义分析</b>
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
                     * 获取正文详情，主要用于语义分析，当内容过大时建议用ContentUrl传递，<b>与Content可二选一</b>
                     * @return ContentUrl 正文详情，主要用于语义分析，当内容过大时建议用ContentUrl传递，<b>与Content可二选一</b>
                     * 
                     */
                    std::string GetContentUrl() const;

                    /**
                     * 设置正文详情，主要用于语义分析，当内容过大时建议用ContentUrl传递，<b>与Content可二选一</b>
                     * @param _contentUrl 正文详情，主要用于语义分析，当内容过大时建议用ContentUrl传递，<b>与Content可二选一</b>
                     * 
                     */
                    void SetContentUrl(const std::string& _contentUrl);

                    /**
                     * 判断参数 ContentUrl 是否已赋值
                     * @return ContentUrl 是否已赋值
                     * 
                     */
                    bool ContentUrlHasBeenSet() const;

                    /**
                     * 获取视频时长，时间秒，大于等于0，小于 3600 * 10。<b>视频内容必填，其它内容非必填，用作特征</b>
                     * @return VideoDuration 视频时长，时间秒，大于等于0，小于 3600 * 10。<b>视频内容必填，其它内容非必填，用作特征</b>
                     * 
                     */
                    int64_t GetVideoDuration() const;

                    /**
                     * 设置视频时长，时间秒，大于等于0，小于 3600 * 10。<b>视频内容必填，其它内容非必填，用作特征</b>
                     * @param _videoDuration 视频时长，时间秒，大于等于0，小于 3600 * 10。<b>视频内容必填，其它内容非必填，用作特征</b>
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
                     * 获取国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
                     * @return Country 国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
                     * @param _country 国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
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
                     * 获取省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
                     * @return Province 省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
                     * @param _province 省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
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
                     * 获取城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
                     * @return City 城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
                     * @param _city 城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
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
                     * 获取作者粉丝数，<b>用作特征</b>
                     * @return AuthorFans 作者粉丝数，<b>用作特征</b>
                     * 
                     */
                    int64_t GetAuthorFans() const;

                    /**
                     * 设置作者粉丝数，<b>用作特征</b>
                     * @param _authorFans 作者粉丝数，<b>用作特征</b>
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
                     * 获取作者评级，<b>用作特征</b>
                     * @return AuthorLevel 作者评级，<b>用作特征</b>
                     * 
                     */
                    std::string GetAuthorLevel() const;

                    /**
                     * 设置作者评级，<b>用作特征</b>
                     * @param _authorLevel 作者评级，<b>用作特征</b>
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
                     * 获取内容累计收藏次数，<b>用作特征</b>
                     * @return CollectCnt 内容累计收藏次数，<b>用作特征</b>
                     * 
                     */
                    int64_t GetCollectCnt() const;

                    /**
                     * 设置内容累计收藏次数，<b>用作特征</b>
                     * @param _collectCnt 内容累计收藏次数，<b>用作特征</b>
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
                     * 获取内容累积点赞次数，<b>用作特征</b>
                     * @return PraiseCnt 内容累积点赞次数，<b>用作特征</b>
                     * 
                     */
                    int64_t GetPraiseCnt() const;

                    /**
                     * 设置内容累积点赞次数，<b>用作特征</b>
                     * @param _praiseCnt 内容累积点赞次数，<b>用作特征</b>
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
                     * 获取内容累计评论次数，<b>用作特征</b>
                     * @return CommentCnt 内容累计评论次数，<b>用作特征</b>
                     * 
                     */
                    int64_t GetCommentCnt() const;

                    /**
                     * 设置内容累计评论次数，<b>用作特征</b>
                     * @param _commentCnt 内容累计评论次数，<b>用作特征</b>
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
                     * 获取内容累计分享次数，<b>用作特征</b>
                     * @return ShareCnt 内容累计分享次数，<b>用作特征</b>
                     * 
                     */
                    int64_t GetShareCnt() const;

                    /**
                     * 设置内容累计分享次数，<b>用作特征</b>
                     * @param _shareCnt 内容累计分享次数，<b>用作特征</b>
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
                     * 获取内容累积打赏数，<b>用作特征</b>
                     * @return RewardCnt 内容累积打赏数，<b>用作特征</b>
                     * 
                     */
                    int64_t GetRewardCnt() const;

                    /**
                     * 设置内容累积打赏数，<b>用作特征</b>
                     * @param _rewardCnt 内容累积打赏数，<b>用作特征</b>
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
                     * 获取内容质量评分，<b>用作特征</b>
                     * @return Score 内容质量评分，<b>用作特征</b>
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置内容质量评分，<b>用作特征</b>
                     * @param _score 内容质量评分，<b>用作特征</b>
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
                     * 获取json字符串，<b>用于物料池管理的自定义扩展</b>，需要base64加密
                     * @return Extension json字符串，<b>用于物料池管理的自定义扩展</b>，需要base64加密
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置json字符串，<b>用于物料池管理的自定义扩展</b>，需要base64加密
                     * @param _extension json字符串，<b>用于物料池管理的自定义扩展</b>，需要base64加密
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
                     * 内容唯一id，建议限制在128字符以内
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 内容类型：<br/>● article -图文<br>● text -纯文本<br/>● video -视频<br/>● short_video -时长15秒以内的视频<br/>● mini_video -竖屏视频<br/>● image -纯图片<br/>（如当前类型不满足，请登录控制台进入对应项目，在<b>物料管理->物料类型管理</b>中添加）
                     */
                    std::string m_itemType;
                    bool m_itemTypeHasBeenSet;

                    /**
                     * 内容状态：
● 1 - 上架 
● 2 - 下架 
Status=2的内容不会在推荐结果中出现 
需要下架内容时，把Status的值修改为2即可
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 内容生成时间，秒级时间戳（1639624786），需大于0，<b>用作特征和物料管理</b>
                     */
                    int64_t m_publishTimestamp;
                    bool m_publishTimestampHasBeenSet;

                    /**
                     * 内容过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年，用作特征，过期则不会被推荐，<b>强烈建议</b>
                     */
                    int64_t m_expireTimestamp;
                    bool m_expireTimestampHasBeenSet;

                    /**
                     * 类目层级数，例如3级类目，则填3，和CategoryPath字段的类数据匹配，<b>强烈建议</b>
                     */
                    int64_t m_categoryLevel;
                    bool m_categoryLevelHasBeenSet;

                    /**
                     * 类目路径，一级二级三级等依次用英文冒号联接，和CategoryLevel字段值匹配，如体育：“足球:巴塞罗那”。<b>用于物料池管理，强烈建议</b>
                     */
                    std::string m_categoryPath;
                    bool m_categoryPathHasBeenSet;

                    /**
                     * 内容标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 作者名，需保证作者名唯一，若有重名需要加编号区分。<b>用于召回过滤、规则打散，强烈建议</b>
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * 内容来源类型，客户自定义，<b>用于物料池管理</b>
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 内容标题，<b>主要用于语义分析</b>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 正文关键片段，建议控制在500字符以内，<b>主要用于语义分析</b>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 正文详情，主要用于语义分析，当内容过大时建议用ContentUrl传递，<b>与Content可二选一</b>
                     */
                    std::string m_contentUrl;
                    bool m_contentUrlHasBeenSet;

                    /**
                     * 视频时长，时间秒，大于等于0，小于 3600 * 10。<b>视频内容必填，其它内容非必填，用作特征</b>
                     */
                    int64_t m_videoDuration;
                    bool m_videoDurationHasBeenSet;

                    /**
                     * 国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 作者粉丝数，<b>用作特征</b>
                     */
                    int64_t m_authorFans;
                    bool m_authorFansHasBeenSet;

                    /**
                     * 作者评级，<b>用作特征</b>
                     */
                    std::string m_authorLevel;
                    bool m_authorLevelHasBeenSet;

                    /**
                     * 内容累计收藏次数，<b>用作特征</b>
                     */
                    int64_t m_collectCnt;
                    bool m_collectCntHasBeenSet;

                    /**
                     * 内容累积点赞次数，<b>用作特征</b>
                     */
                    int64_t m_praiseCnt;
                    bool m_praiseCntHasBeenSet;

                    /**
                     * 内容累计评论次数，<b>用作特征</b>
                     */
                    int64_t m_commentCnt;
                    bool m_commentCntHasBeenSet;

                    /**
                     * 内容累计分享次数，<b>用作特征</b>
                     */
                    int64_t m_shareCnt;
                    bool m_shareCntHasBeenSet;

                    /**
                     * 内容累积打赏数，<b>用作特征</b>
                     */
                    int64_t m_rewardCnt;
                    bool m_rewardCntHasBeenSet;

                    /**
                     * 内容质量评分，<b>用作特征</b>
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * json字符串，<b>用于物料池管理的自定义扩展</b>，需要base64加密
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220805_MODEL_DOCITEM_H_
