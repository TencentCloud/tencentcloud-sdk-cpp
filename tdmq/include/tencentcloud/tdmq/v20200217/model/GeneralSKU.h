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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_GENERALSKU_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_GENERALSKU_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/PriceTag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 通用集群售卖信息
                */
                class GeneralSKU : public AbstractModel
                {
                public:
                    GeneralSKU();
                    ~GeneralSKU() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格标识
                     * @return SkuCode 规格标识
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置规格标识
                     * @param _skuCode 规格标识
                     * 
                     */
                    void SetSkuCode(const std::string& _skuCode);

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取是否可售卖
                     * @return OnSale 是否可售卖
                     * 
                     */
                    bool GetOnSale() const;

                    /**
                     * 设置是否可售卖
                     * @param _onSale 是否可售卖
                     * 
                     */
                    void SetOnSale(const bool& _onSale);

                    /**
                     * 判断参数 OnSale 是否已赋值
                     * @return OnSale 是否已赋值
                     * 
                     */
                    bool OnSaleHasBeenSet() const;

                    /**
                     * 获取TPS上限
                     * @return TpsLimit TPS上限
                     * 
                     */
                    int64_t GetTpsLimit() const;

                    /**
                     * 设置TPS上限
                     * @param _tpsLimit TPS上限
                     * 
                     */
                    void SetTpsLimit(const int64_t& _tpsLimit);

                    /**
                     * 判断参数 TpsLimit 是否已赋值
                     * @return TpsLimit 是否已赋值
                     * 
                     */
                    bool TpsLimitHasBeenSet() const;

                    /**
                     * 获取主题数免费额度
                     * @return TopicNumLimit 主题数免费额度
                     * 
                     */
                    int64_t GetTopicNumLimit() const;

                    /**
                     * 设置主题数免费额度
                     * @param _topicNumLimit 主题数免费额度
                     * 
                     */
                    void SetTopicNumLimit(const int64_t& _topicNumLimit);

                    /**
                     * 判断参数 TopicNumLimit 是否已赋值
                     * @return TopicNumLimit 是否已赋值
                     * 
                     */
                    bool TopicNumLimitHasBeenSet() const;

                    /**
                     * 获取主题数上限
                     * @return TopicNumUpperLimit 主题数上限
                     * 
                     */
                    int64_t GetTopicNumUpperLimit() const;

                    /**
                     * 设置主题数上限
                     * @param _topicNumUpperLimit 主题数上限
                     * 
                     */
                    void SetTopicNumUpperLimit(const int64_t& _topicNumUpperLimit);

                    /**
                     * 判断参数 TopicNumUpperLimit 是否已赋值
                     * @return TopicNumUpperLimit 是否已赋值
                     * 
                     */
                    bool TopicNumUpperLimitHasBeenSet() const;

                    /**
                     * 获取计费项信息
                     * @return PriceTags 计费项信息
                     * 
                     */
                    std::vector<PriceTag> GetPriceTags() const;

                    /**
                     * 设置计费项信息
                     * @param _priceTags 计费项信息
                     * 
                     */
                    void SetPriceTags(const std::vector<PriceTag>& _priceTags);

                    /**
                     * 判断参数 PriceTags 是否已赋值
                     * @return PriceTags 是否已赋值
                     * 
                     */
                    bool PriceTagsHasBeenSet() const;

                    /**
                     * 获取存储节点个数
                     * @return NodeCount 存储节点个数
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置存储节点个数
                     * @param _nodeCount 存储节点个数
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                private:

                    /**
                     * 规格标识
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * 是否可售卖
                     */
                    bool m_onSale;
                    bool m_onSaleHasBeenSet;

                    /**
                     * TPS上限
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * 主题数免费额度
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * 主题数上限
                     */
                    int64_t m_topicNumUpperLimit;
                    bool m_topicNumUpperLimitHasBeenSet;

                    /**
                     * 计费项信息
                     */
                    std::vector<PriceTag> m_priceTags;
                    bool m_priceTagsHasBeenSet;

                    /**
                     * 存储节点个数
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_GENERALSKU_H_
