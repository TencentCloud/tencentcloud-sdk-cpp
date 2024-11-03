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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATEDEALSGOODS_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATEDEALSGOODS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/CreateDealsGoodsDetail.h>


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
                class CreateDealsGoods : public AbstractModel
                {
                public:
                    CreateDealsGoods();
                    ~CreateDealsGoods() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                    CreateDealsGoodsDetail GetGoodsDetail() const;

                    /**
                     * 设置商品明细
                     * @param _goodsDetail 商品明细
                     * 
                     */
                    void SetGoodsDetail(const CreateDealsGoodsDetail& _goodsDetail);

                    /**
                     * 判断参数 GoodsDetail 是否已赋值
                     * @return GoodsDetail 是否已赋值
                     * 
                     */
                    bool GoodsDetailHasBeenSet() const;

                    /**
                     * 获取订单类型ID，用来唯一标识一个业务的一种场景（总共三种场景：新购、配置变更、续费）
高级版: 102375(新购),102376(续费),102377(变配)
企业版 : 102378(新购),102379(续费),102380(变配)
旗舰版 : 102369(新购),102370(续费),102371(变配)
域名包 : 102372(新购),102373(续费),102374(变配)
业务扩展包 : 101040(新购),101041(续费),101042(变配)

高级版-CLB: 新购 101198  续费 101199 变配 101200
企业版-CLB 101204(新购),101205(续费),101206(变配)
旗舰版-CLB : 101201(新购),101202(续费),101203(变配)
域名包-CLB: 101207(新购),101208(续费),101209(变配)
业务扩展包-CLB: 101210(新购),101211(续费),101212(变配)

                     * @return GoodsCategoryId 订单类型ID，用来唯一标识一个业务的一种场景（总共三种场景：新购、配置变更、续费）
高级版: 102375(新购),102376(续费),102377(变配)
企业版 : 102378(新购),102379(续费),102380(变配)
旗舰版 : 102369(新购),102370(续费),102371(变配)
域名包 : 102372(新购),102373(续费),102374(变配)
业务扩展包 : 101040(新购),101041(续费),101042(变配)

高级版-CLB: 新购 101198  续费 101199 变配 101200
企业版-CLB 101204(新购),101205(续费),101206(变配)
旗舰版-CLB : 101201(新购),101202(续费),101203(变配)
域名包-CLB: 101207(新购),101208(续费),101209(变配)
业务扩展包-CLB: 101210(新购),101211(续费),101212(变配)

                     * 
                     */
                    int64_t GetGoodsCategoryId() const;

                    /**
                     * 设置订单类型ID，用来唯一标识一个业务的一种场景（总共三种场景：新购、配置变更、续费）
高级版: 102375(新购),102376(续费),102377(变配)
企业版 : 102378(新购),102379(续费),102380(变配)
旗舰版 : 102369(新购),102370(续费),102371(变配)
域名包 : 102372(新购),102373(续费),102374(变配)
业务扩展包 : 101040(新购),101041(续费),101042(变配)

高级版-CLB: 新购 101198  续费 101199 变配 101200
企业版-CLB 101204(新购),101205(续费),101206(变配)
旗舰版-CLB : 101201(新购),101202(续费),101203(变配)
域名包-CLB: 101207(新购),101208(续费),101209(变配)
业务扩展包-CLB: 101210(新购),101211(续费),101212(变配)

                     * @param _goodsCategoryId 订单类型ID，用来唯一标识一个业务的一种场景（总共三种场景：新购、配置变更、续费）
高级版: 102375(新购),102376(续费),102377(变配)
企业版 : 102378(新购),102379(续费),102380(变配)
旗舰版 : 102369(新购),102370(续费),102371(变配)
域名包 : 102372(新购),102373(续费),102374(变配)
业务扩展包 : 101040(新购),101041(续费),101042(变配)

高级版-CLB: 新购 101198  续费 101199 变配 101200
企业版-CLB 101204(新购),101205(续费),101206(变配)
旗舰版-CLB : 101201(新购),101202(续费),101203(变配)
域名包-CLB: 101207(新购),101208(续费),101209(变配)
业务扩展包-CLB: 101210(新购),101211(续费),101212(变配)

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
                     * 获取购买waf实例区域ID
1 表示购买大陆资源;
9表示购买非中国大陆资源
                     * @return RegionId 购买waf实例区域ID
1 表示购买大陆资源;
9表示购买非中国大陆资源
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置购买waf实例区域ID
1 表示购买大陆资源;
9表示购买非中国大陆资源
                     * @param _regionId 购买waf实例区域ID
1 表示购买大陆资源;
9表示购买非中国大陆资源
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
                     * 商品数量
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 商品明细
                     */
                    CreateDealsGoodsDetail m_goodsDetail;
                    bool m_goodsDetailHasBeenSet;

                    /**
                     * 订单类型ID，用来唯一标识一个业务的一种场景（总共三种场景：新购、配置变更、续费）
高级版: 102375(新购),102376(续费),102377(变配)
企业版 : 102378(新购),102379(续费),102380(变配)
旗舰版 : 102369(新购),102370(续费),102371(变配)
域名包 : 102372(新购),102373(续费),102374(变配)
业务扩展包 : 101040(新购),101041(续费),101042(变配)

高级版-CLB: 新购 101198  续费 101199 变配 101200
企业版-CLB 101204(新购),101205(续费),101206(变配)
旗舰版-CLB : 101201(新购),101202(续费),101203(变配)
域名包-CLB: 101207(新购),101208(续费),101209(变配)
业务扩展包-CLB: 101210(新购),101211(续费),101212(变配)

                     */
                    int64_t m_goodsCategoryId;
                    bool m_goodsCategoryIdHasBeenSet;

                    /**
                     * 购买waf实例区域ID
1 表示购买大陆资源;
9表示购买非中国大陆资源
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATEDEALSGOODS_H_
