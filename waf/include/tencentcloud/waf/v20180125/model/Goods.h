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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_GOODS_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_GOODS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/GoodsDetail.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 计费下单接口出入参Goods
                */
                class Goods : public AbstractModel
                {
                public:
                    Goods();
                    ~Goods() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取付费类型，1:预付费，0:后付费
                     * @return PayMode 付费类型，1:预付费，0:后付费
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费类型，1:预付费，0:后付费
                     * @param _payMode 付费类型，1:预付费，0:后付费
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取商品数量
                     * @return GoodsNum 商品数量
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置商品数量
                     * @param _goodsNum 商品数量
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取商品明细
                     * @return GoodsDetail 商品明细
                     * 
                     */
                    GoodsDetail GetGoodsDetail() const;

                    /**
                     * 设置商品明细
                     * @param _goodsDetail 商品明细
                     * 
                     */
                    void SetGoodsDetail(const GoodsDetail& _goodsDetail);

                    /**
                     * 判断参数 GoodsDetail 是否已赋值
                     * @return GoodsDetail 是否已赋值
                     * 
                     */
                    bool GoodsDetailHasBeenSet() const;

                    /**
                     * 获取默认为0
                     * @return ProjectId 默认为0
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置默认为0
                     * @param _projectId 默认为0
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取计费类目ID，对应cid
                     * @return GoodsCategoryId 计费类目ID，对应cid
                     * 
                     */
                    int64_t GetGoodsCategoryId() const;

                    /**
                     * 设置计费类目ID，对应cid
                     * @param _goodsCategoryId 计费类目ID，对应cid
                     * 
                     */
                    void SetGoodsCategoryId(const int64_t& _goodsCategoryId);

                    /**
                     * 判断参数 GoodsCategoryId 是否已赋值
                     * @return GoodsCategoryId 是否已赋值
                     * 
                     */
                    bool GoodsCategoryIdHasBeenSet() const;

                    /**
                     * 获取平台类型，默认1
                     * @return Platform 平台类型，默认1
                     * 
                     */
                    int64_t GetPlatform() const;

                    /**
                     * 设置平台类型，默认1
                     * @param _platform 平台类型，默认1
                     * 
                     */
                    void SetPlatform(const int64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取购买waf实例区域ID
                     * @return RegionId 购买waf实例区域ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置购买waf实例区域ID
                     * @param _regionId 购买waf实例区域ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * 付费类型，1:预付费，0:后付费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 商品数量
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 商品明细
                     */
                    GoodsDetail m_goodsDetail;
                    bool m_goodsDetailHasBeenSet;

                    /**
                     * 默认为0
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 计费类目ID，对应cid
                     */
                    int64_t m_goodsCategoryId;
                    bool m_goodsCategoryIdHasBeenSet;

                    /**
                     * 平台类型，默认1
                     */
                    int64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 购买waf实例区域ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_GOODS_H_
