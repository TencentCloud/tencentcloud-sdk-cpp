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

#ifndef TENCENTCLOUD_IRP_V20220805_MODEL_GOODSINFO_H_
#define TENCENTCLOUD_IRP_V20220805_MODEL_GOODSINFO_H_

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
                * 电商物料内容
                */
                class GoodsInfo : public AbstractModel
                {
                public:
                    GoodsInfo();
                    ~GoodsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商品唯一ID，skuId或spuId，客户根据需求自行决定商品主键粒度。建议限制在128字符以内
                     * @return GoodsId 商品唯一ID，skuId或spuId，客户根据需求自行决定商品主键粒度。建议限制在128字符以内
                     * 
                     */
                    std::string GetGoodsId() const;

                    /**
                     * 设置商品唯一ID，skuId或spuId，客户根据需求自行决定商品主键粒度。建议限制在128字符以内
                     * @param _goodsId 商品唯一ID，skuId或spuId，客户根据需求自行决定商品主键粒度。建议限制在128字符以内
                     * 
                     */
                    void SetGoodsId(const std::string& _goodsId);

                    /**
                     * 判断参数 GoodsId 是否已赋值
                     * @return GoodsId 是否已赋值
                     * 
                     */
                    bool GoodsIdHasBeenSet() const;

                    /**
                     * 获取商品物料展示类型：<br/>● article -图文<br>● text -纯文本<br/>● video -视频<br/>● short_video -时长15秒以内的视频<br/>● mini_video -竖屏视频<br/>● image -纯图片<br/>（如当前类型不满足，请<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决方案）
                     * @return GoodsType 商品物料展示类型：<br/>● article -图文<br>● text -纯文本<br/>● video -视频<br/>● short_video -时长15秒以内的视频<br/>● mini_video -竖屏视频<br/>● image -纯图片<br/>（如当前类型不满足，请<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决方案）
                     * 
                     */
                    std::string GetGoodsType() const;

                    /**
                     * 设置商品物料展示类型：<br/>● article -图文<br>● text -纯文本<br/>● video -视频<br/>● short_video -时长15秒以内的视频<br/>● mini_video -竖屏视频<br/>● image -纯图片<br/>（如当前类型不满足，请<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决方案）
                     * @param _goodsType 商品物料展示类型：<br/>● article -图文<br>● text -纯文本<br/>● video -视频<br/>● short_video -时长15秒以内的视频<br/>● mini_video -竖屏视频<br/>● image -纯图片<br/>（如当前类型不满足，请<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决方案）
                     * 
                     */
                    void SetGoodsType(const std::string& _goodsType);

                    /**
                     * 判断参数 GoodsType 是否已赋值
                     * @return GoodsType 是否已赋值
                     * 
                     */
                    bool GoodsTypeHasBeenSet() const;

                    /**
                     * 获取商品状态：
● 1 - 上架 
● 2 - 下架 
Status=2的内容不会在推荐结果中出现 
需要下架内容时，把Status的值修改为2即可
                     * @return Status 商品状态：
● 1 - 上架 
● 2 - 下架 
Status=2的内容不会在推荐结果中出现 
需要下架内容时，把Status的值修改为2即可
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置商品状态：
● 1 - 上架 
● 2 - 下架 
Status=2的内容不会在推荐结果中出现 
需要下架内容时，把Status的值修改为2即可
                     * @param _status 商品状态：
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
                     * 获取商品生成时间，秒级时间戳（1639624786），需大于0，<b>用作特征和物料管理</b>
                     * @return PublishTimestamp 商品生成时间，秒级时间戳（1639624786），需大于0，<b>用作特征和物料管理</b>
                     * 
                     */
                    int64_t GetPublishTimestamp() const;

                    /**
                     * 设置商品生成时间，秒级时间戳（1639624786），需大于0，<b>用作特征和物料管理</b>
                     * @param _publishTimestamp 商品生成时间，秒级时间戳（1639624786），需大于0，<b>用作特征和物料管理</b>
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
                     * 获取商品过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年，<b>用作特征</b>，过期则不会被推荐，<b>强烈建议</b>
                     * @return ExpireTimestamp 商品过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年，<b>用作特征</b>，过期则不会被推荐，<b>强烈建议</b>
                     * 
                     */
                    int64_t GetExpireTimestamp() const;

                    /**
                     * 设置商品过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年，<b>用作特征</b>，过期则不会被推荐，<b>强烈建议</b>
                     * @param _expireTimestamp 商品过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年，<b>用作特征</b>，过期则不会被推荐，<b>强烈建议</b>
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
                     * 获取spu((Standard Product Unit))维度id，商品聚合信息的最小单位，<b>强烈建议</b>
                     * @return SpuId spu((Standard Product Unit))维度id，商品聚合信息的最小单位，<b>强烈建议</b>
                     * 
                     */
                    std::string GetSpuId() const;

                    /**
                     * 设置spu((Standard Product Unit))维度id，商品聚合信息的最小单位，<b>强烈建议</b>
                     * @param _spuId spu((Standard Product Unit))维度id，商品聚合信息的最小单位，<b>强烈建议</b>
                     * 
                     */
                    void SetSpuId(const std::string& _spuId);

                    /**
                     * 判断参数 SpuId 是否已赋值
                     * @return SpuId 是否已赋值
                     * 
                     */
                    bool SpuIdHasBeenSet() const;

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
                     * 获取类目路径，一级二级三级等依次用英文冒号联接，和CategoryLevel字段值匹配，如体育：“女装:裙子:半身裙”。<b>用于物料池管理，强烈建议</b>
                     * @return CategoryPath 类目路径，一级二级三级等依次用英文冒号联接，和CategoryLevel字段值匹配，如体育：“女装:裙子:半身裙”。<b>用于物料池管理，强烈建议</b>
                     * 
                     */
                    std::string GetCategoryPath() const;

                    /**
                     * 设置类目路径，一级二级三级等依次用英文冒号联接，和CategoryLevel字段值匹配，如体育：“女装:裙子:半身裙”。<b>用于物料池管理，强烈建议</b>
                     * @param _categoryPath 类目路径，一级二级三级等依次用英文冒号联接，和CategoryLevel字段值匹配，如体育：“女装:裙子:半身裙”。<b>用于物料池管理，强烈建议</b>
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
                     * 获取商品标题，<b>主要用于语义分析</b>，<b>强烈建议</b>
                     * @return Title 商品标题，<b>主要用于语义分析</b>，<b>强烈建议</b>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置商品标题，<b>主要用于语义分析</b>，<b>强烈建议</b>
                     * @param _title 商品标题，<b>主要用于语义分析</b>，<b>强烈建议</b>
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
                     * 获取商品标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
                     * @return Tags 商品标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置商品标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
                     * @param _tags 商品标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
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
                     * 获取商品对应的品牌，取值用户自定义，可以是品牌id或品牌明文，<b>用作特征以及打散/过滤规则，强烈建议</b>
                     * @return Brand 商品对应的品牌，取值用户自定义，可以是品牌id或品牌明文，<b>用作特征以及打散/过滤规则，强烈建议</b>
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置商品对应的品牌，取值用户自定义，可以是品牌id或品牌明文，<b>用作特征以及打散/过滤规则，强烈建议</b>
                     * @param _brand 商品对应的品牌，取值用户自定义，可以是品牌id或品牌明文，<b>用作特征以及打散/过滤规则，强烈建议</b>
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取商品所属店铺ID，取值客户自定义，<b>用作特征，强烈建议</b>
                     * @return ShopId 商品所属店铺ID，取值客户自定义，<b>用作特征，强烈建议</b>
                     * 
                     */
                    std::string GetShopId() const;

                    /**
                     * 设置商品所属店铺ID，取值客户自定义，<b>用作特征，强烈建议</b>
                     * @param _shopId 商品所属店铺ID，取值客户自定义，<b>用作特征，强烈建议</b>
                     * 
                     */
                    void SetShopId(const std::string& _shopId);

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取商品原始价格（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征，强烈建议</b>
                     * @return OrgPrice 商品原始价格（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征，强烈建议</b>
                     * 
                     */
                    double GetOrgPrice() const;

                    /**
                     * 设置商品原始价格（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征，强烈建议</b>
                     * @param _orgPrice 商品原始价格（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征，强烈建议</b>
                     * 
                     */
                    void SetOrgPrice(const double& _orgPrice);

                    /**
                     * 判断参数 OrgPrice 是否已赋值
                     * @return OrgPrice 是否已赋值
                     * 
                     */
                    bool OrgPriceHasBeenSet() const;

                    /**
                     * 获取商品当前价格（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征，强烈建议</b>
                     * @return CurPrice 商品当前价格（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征，强烈建议</b>
                     * 
                     */
                    double GetCurPrice() const;

                    /**
                     * 设置商品当前价格（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征，强烈建议</b>
                     * @param _curPrice 商品当前价格（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征，强烈建议</b>
                     * 
                     */
                    void SetCurPrice(const double& _curPrice);

                    /**
                     * 判断参数 CurPrice 是否已赋值
                     * @return CurPrice 是否已赋值
                     * 
                     */
                    bool CurPriceHasBeenSet() const;

                    /**
                     * 获取商品来源类型，客户自定义，<b>用于物料池管理</b>
                     * @return SourceId 商品来源类型，客户自定义，<b>用于物料池管理</b>
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置商品来源类型，客户自定义，<b>用于物料池管理</b>
                     * @param _sourceId 商品来源类型，客户自定义，<b>用于物料池管理</b>
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
                     * 获取商品正文关键片段，建议控制在500字符以内，<b>主要用于语义分析</b>
                     * @return Content 商品正文关键片段，建议控制在500字符以内，<b>主要用于语义分析</b>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置商品正文关键片段，建议控制在500字符以内，<b>主要用于语义分析</b>
                     * @param _content 商品正文关键片段，建议控制在500字符以内，<b>主要用于语义分析</b>
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
                     * 获取商品正文详情，主要用于语义分析，当内容过大时建议用ContentUrl传递，<b>与Content可二选一</b>
                     * @return ContentUrl 商品正文详情，主要用于语义分析，当内容过大时建议用ContentUrl传递，<b>与Content可二选一</b>
                     * 
                     */
                    std::string GetContentUrl() const;

                    /**
                     * 设置商品正文详情，主要用于语义分析，当内容过大时建议用ContentUrl传递，<b>与Content可二选一</b>
                     * @param _contentUrl 商品正文详情，主要用于语义分析，当内容过大时建议用ContentUrl传递，<b>与Content可二选一</b>
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
                     * 获取商品封面url，不超过10个，<b>用作特征</b>
                     * @return PicUrlList 商品封面url，不超过10个，<b>用作特征</b>
                     * 
                     */
                    std::vector<std::string> GetPicUrlList() const;

                    /**
                     * 设置商品封面url，不超过10个，<b>用作特征</b>
                     * @param _picUrlList 商品封面url，不超过10个，<b>用作特征</b>
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
                     * 获取卖家所在国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
                     * @return Country 卖家所在国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置卖家所在国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
                     * @param _country 卖家所在国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
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
                     * 获取卖家所在省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
                     * @return Province 卖家所在省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置卖家所在省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
                     * @param _province 卖家所在省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
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
                     * 获取卖家所在城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
                     * @return City 卖家所在城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置卖家所在城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
                     * @param _city 卖家所在城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
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
                     * 获取商品是否包邮；1:包邮；2:不包邮；3:满足条件包邮，<b>用作特征</b>
                     * @return FreeShipping 商品是否包邮；1:包邮；2:不包邮；3:满足条件包邮，<b>用作特征</b>
                     * 
                     */
                    int64_t GetFreeShipping() const;

                    /**
                     * 设置商品是否包邮；1:包邮；2:不包邮；3:满足条件包邮，<b>用作特征</b>
                     * @param _freeShipping 商品是否包邮；1:包邮；2:不包邮；3:满足条件包邮，<b>用作特征</b>
                     * 
                     */
                    void SetFreeShipping(const int64_t& _freeShipping);

                    /**
                     * 判断参数 FreeShipping 是否已赋值
                     * @return FreeShipping 是否已赋值
                     * 
                     */
                    bool FreeShippingHasBeenSet() const;

                    /**
                     * 获取商品邮费（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征</b>
                     * @return ShippingPrice 商品邮费（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征</b>
                     * 
                     */
                    double GetShippingPrice() const;

                    /**
                     * 设置商品邮费（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征</b>
                     * @param _shippingPrice 商品邮费（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征</b>
                     * 
                     */
                    void SetShippingPrice(const double& _shippingPrice);

                    /**
                     * 判断参数 ShippingPrice 是否已赋值
                     * @return ShippingPrice 是否已赋值
                     * 
                     */
                    bool ShippingPriceHasBeenSet() const;

                    /**
                     * 获取商品累计好评次数，<b>用作特征</b>
                     * @return PraiseCnt 商品累计好评次数，<b>用作特征</b>
                     * 
                     */
                    int64_t GetPraiseCnt() const;

                    /**
                     * 设置商品累计好评次数，<b>用作特征</b>
                     * @param _praiseCnt 商品累计好评次数，<b>用作特征</b>
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
                     * 获取商品累计评论次数，<b>用作特征</b>
                     * @return CommentCnt 商品累计评论次数，<b>用作特征</b>
                     * 
                     */
                    int64_t GetCommentCnt() const;

                    /**
                     * 设置商品累计评论次数，<b>用作特征</b>
                     * @param _commentCnt 商品累计评论次数，<b>用作特征</b>
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
                     * 获取商品累计分享次数，<b>用作特征</b>
                     * @return ShareCnt 商品累计分享次数，<b>用作特征</b>
                     * 
                     */
                    int64_t GetShareCnt() const;

                    /**
                     * 设置商品累计分享次数，<b>用作特征</b>
                     * @param _shareCnt 商品累计分享次数，<b>用作特征</b>
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
                     * 获取商品累计收藏次数，<b>用作特征</b>
                     * @return CollectCnt 商品累计收藏次数，<b>用作特征</b>
                     * 
                     */
                    int64_t GetCollectCnt() const;

                    /**
                     * 设置商品累计收藏次数，<b>用作特征</b>
                     * @param _collectCnt 商品累计收藏次数，<b>用作特征</b>
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
                     * 获取商品累积成交次数，<b>用作特征</b>
                     * @return OrderCnt 商品累积成交次数，<b>用作特征</b>
                     * 
                     */
                    int64_t GetOrderCnt() const;

                    /**
                     * 设置商品累积成交次数，<b>用作特征</b>
                     * @param _orderCnt 商品累积成交次数，<b>用作特征</b>
                     * 
                     */
                    void SetOrderCnt(const int64_t& _orderCnt);

                    /**
                     * 判断参数 OrderCnt 是否已赋值
                     * @return OrderCnt 是否已赋值
                     * 
                     */
                    bool OrderCntHasBeenSet() const;

                    /**
                     * 获取商品平均客户评分，取值范围用户自定，<b>用作特征</b>
                     * @return Score 商品平均客户评分，取值范围用户自定，<b>用作特征</b>
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置商品平均客户评分，取值范围用户自定，<b>用作特征</b>
                     * @param _score 商品平均客户评分，取值范围用户自定，<b>用作特征</b>
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
                     * 获取json字符串，<b>用于物料池管理的自定义扩展</b>
                     * @return Extension json字符串，<b>用于物料池管理的自定义扩展</b>
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置json字符串，<b>用于物料池管理的自定义扩展</b>
                     * @param _extension json字符串，<b>用于物料池管理的自定义扩展</b>
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
                     * 商品唯一ID，skuId或spuId，客户根据需求自行决定商品主键粒度。建议限制在128字符以内
                     */
                    std::string m_goodsId;
                    bool m_goodsIdHasBeenSet;

                    /**
                     * 商品物料展示类型：<br/>● article -图文<br>● text -纯文本<br/>● video -视频<br/>● short_video -时长15秒以内的视频<br/>● mini_video -竖屏视频<br/>● image -纯图片<br/>（如当前类型不满足，请<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决方案）
                     */
                    std::string m_goodsType;
                    bool m_goodsTypeHasBeenSet;

                    /**
                     * 商品状态：
● 1 - 上架 
● 2 - 下架 
Status=2的内容不会在推荐结果中出现 
需要下架内容时，把Status的值修改为2即可
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 商品生成时间，秒级时间戳（1639624786），需大于0，<b>用作特征和物料管理</b>
                     */
                    int64_t m_publishTimestamp;
                    bool m_publishTimestampHasBeenSet;

                    /**
                     * 商品过期时间，秒级时间戳（1639624786），如未填，则默认PublishTimestamp往后延一年，<b>用作特征</b>，过期则不会被推荐，<b>强烈建议</b>
                     */
                    int64_t m_expireTimestamp;
                    bool m_expireTimestampHasBeenSet;

                    /**
                     * spu((Standard Product Unit))维度id，商品聚合信息的最小单位，<b>强烈建议</b>
                     */
                    std::string m_spuId;
                    bool m_spuIdHasBeenSet;

                    /**
                     * 类目层级数，例如3级类目，则填3，和CategoryPath字段的类数据匹配，<b>强烈建议</b>
                     */
                    int64_t m_categoryLevel;
                    bool m_categoryLevelHasBeenSet;

                    /**
                     * 类目路径，一级二级三级等依次用英文冒号联接，和CategoryLevel字段值匹配，如体育：“女装:裙子:半身裙”。<b>用于物料池管理，强烈建议</b>
                     */
                    std::string m_categoryPath;
                    bool m_categoryPathHasBeenSet;

                    /**
                     * 商品标题，<b>主要用于语义分析</b>，<b>强烈建议</b>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 商品标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 商品对应的品牌，取值用户自定义，可以是品牌id或品牌明文，<b>用作特征以及打散/过滤规则，强烈建议</b>
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * 商品所属店铺ID，取值客户自定义，<b>用作特征，强烈建议</b>
                     */
                    std::string m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 商品原始价格（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征，强烈建议</b>
                     */
                    double m_orgPrice;
                    bool m_orgPriceHasBeenSet;

                    /**
                     * 商品当前价格（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征，强烈建议</b>
                     */
                    double m_curPrice;
                    bool m_curPriceHasBeenSet;

                    /**
                     * 商品来源类型，客户自定义，<b>用于物料池管理</b>
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 商品正文关键片段，建议控制在500字符以内，<b>主要用于语义分析</b>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 商品正文详情，主要用于语义分析，当内容过大时建议用ContentUrl传递，<b>与Content可二选一</b>
                     */
                    std::string m_contentUrl;
                    bool m_contentUrlHasBeenSet;

                    /**
                     * 商品封面url，不超过10个，<b>用作特征</b>
                     */
                    std::vector<std::string> m_picUrlList;
                    bool m_picUrlListHasBeenSet;

                    /**
                     * 卖家所在国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 卖家所在省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 卖家所在城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 商品是否包邮；1:包邮；2:不包邮；3:满足条件包邮，<b>用作特征</b>
                     */
                    int64_t m_freeShipping;
                    bool m_freeShippingHasBeenSet;

                    /**
                     * 商品邮费（单位：元，统一货币体系，如统一为RMB或美元等），<b>用作特征</b>
                     */
                    double m_shippingPrice;
                    bool m_shippingPriceHasBeenSet;

                    /**
                     * 商品累计好评次数，<b>用作特征</b>
                     */
                    int64_t m_praiseCnt;
                    bool m_praiseCntHasBeenSet;

                    /**
                     * 商品累计评论次数，<b>用作特征</b>
                     */
                    int64_t m_commentCnt;
                    bool m_commentCntHasBeenSet;

                    /**
                     * 商品累计分享次数，<b>用作特征</b>
                     */
                    int64_t m_shareCnt;
                    bool m_shareCntHasBeenSet;

                    /**
                     * 商品累计收藏次数，<b>用作特征</b>
                     */
                    int64_t m_collectCnt;
                    bool m_collectCntHasBeenSet;

                    /**
                     * 商品累积成交次数，<b>用作特征</b>
                     */
                    int64_t m_orderCnt;
                    bool m_orderCntHasBeenSet;

                    /**
                     * 商品平均客户评分，取值范围用户自定，<b>用作特征</b>
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * json字符串，<b>用于物料池管理的自定义扩展</b>
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220805_MODEL_GOODSINFO_H_
