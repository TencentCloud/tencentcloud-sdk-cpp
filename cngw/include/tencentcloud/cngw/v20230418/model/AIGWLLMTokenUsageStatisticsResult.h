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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMTOKENUSAGESTATISTICSRESULT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMTOKENUSAGESTATISTICSRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWTopConsumersItem.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI 网关token消耗统计汇总响应结果
                */
                class AIGWLLMTokenUsageStatisticsResult : public AbstractModel
                {
                public:
                    AIGWLLMTokenUsageStatisticsResult();
                    ~AIGWLLMTokenUsageStatisticsResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>查询时间范围内请求总数</p>
                     * @return TotalRequestCount <p>查询时间范围内请求总数</p>
                     * 
                     */
                    int64_t GetTotalRequestCount() const;

                    /**
                     * 设置<p>查询时间范围内请求总数</p>
                     * @param _totalRequestCount <p>查询时间范围内请求总数</p>
                     * 
                     */
                    void SetTotalRequestCount(const int64_t& _totalRequestCount);

                    /**
                     * 判断参数 TotalRequestCount 是否已赋值
                     * @return TotalRequestCount 是否已赋值
                     * 
                     */
                    bool TotalRequestCountHasBeenSet() const;

                    /**
                     * 获取<p>查询时间范围内总输入Token数（包含命中缓存的Token数）</p>
                     * @return TotalInputTokens <p>查询时间范围内总输入Token数（包含命中缓存的Token数）</p>
                     * 
                     */
                    int64_t GetTotalInputTokens() const;

                    /**
                     * 设置<p>查询时间范围内总输入Token数（包含命中缓存的Token数）</p>
                     * @param _totalInputTokens <p>查询时间范围内总输入Token数（包含命中缓存的Token数）</p>
                     * 
                     */
                    void SetTotalInputTokens(const int64_t& _totalInputTokens);

                    /**
                     * 判断参数 TotalInputTokens 是否已赋值
                     * @return TotalInputTokens 是否已赋值
                     * 
                     */
                    bool TotalInputTokensHasBeenSet() const;

                    /**
                     * 获取<p>查询时间范围内总输出Token数</p>
                     * @return TotalOutputTokens <p>查询时间范围内总输出Token数</p>
                     * 
                     */
                    int64_t GetTotalOutputTokens() const;

                    /**
                     * 设置<p>查询时间范围内总输出Token数</p>
                     * @param _totalOutputTokens <p>查询时间范围内总输出Token数</p>
                     * 
                     */
                    void SetTotalOutputTokens(const int64_t& _totalOutputTokens);

                    /**
                     * 判断参数 TotalOutputTokens 是否已赋值
                     * @return TotalOutputTokens 是否已赋值
                     * 
                     */
                    bool TotalOutputTokensHasBeenSet() const;

                    /**
                     * 获取<p>查询时间范围内总命中缓存输入Token数</p>
                     * @return TotalCachedReadInputTokens <p>查询时间范围内总命中缓存输入Token数</p>
                     * 
                     */
                    int64_t GetTotalCachedReadInputTokens() const;

                    /**
                     * 设置<p>查询时间范围内总命中缓存输入Token数</p>
                     * @param _totalCachedReadInputTokens <p>查询时间范围内总命中缓存输入Token数</p>
                     * 
                     */
                    void SetTotalCachedReadInputTokens(const int64_t& _totalCachedReadInputTokens);

                    /**
                     * 判断参数 TotalCachedReadInputTokens 是否已赋值
                     * @return TotalCachedReadInputTokens 是否已赋值
                     * 
                     */
                    bool TotalCachedReadInputTokensHasBeenSet() const;

                    /**
                     * 获取<p>查询时间范围内总成本</p>
                     * @return TotalCost <p>查询时间范围内总成本</p>
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置<p>查询时间范围内总成本</p>
                     * @param _totalCost <p>查询时间范围内总成本</p>
                     * 
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取<p>成本货币单位</p>
                     * @return Currency <p>成本货币单位</p>
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置<p>成本货币单位</p>
                     * @param _currency <p>成本货币单位</p>
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取<p>查询时间范围内成本最高的消费者</p>
                     * @return TopConsumers <p>查询时间范围内成本最高的消费者</p>
                     * 
                     */
                    std::vector<AIGWTopConsumersItem> GetTopConsumers() const;

                    /**
                     * 设置<p>查询时间范围内成本最高的消费者</p>
                     * @param _topConsumers <p>查询时间范围内成本最高的消费者</p>
                     * 
                     */
                    void SetTopConsumers(const std::vector<AIGWTopConsumersItem>& _topConsumers);

                    /**
                     * 判断参数 TopConsumers 是否已赋值
                     * @return TopConsumers 是否已赋值
                     * 
                     */
                    bool TopConsumersHasBeenSet() const;

                private:

                    /**
                     * <p>查询时间范围内请求总数</p>
                     */
                    int64_t m_totalRequestCount;
                    bool m_totalRequestCountHasBeenSet;

                    /**
                     * <p>查询时间范围内总输入Token数（包含命中缓存的Token数）</p>
                     */
                    int64_t m_totalInputTokens;
                    bool m_totalInputTokensHasBeenSet;

                    /**
                     * <p>查询时间范围内总输出Token数</p>
                     */
                    int64_t m_totalOutputTokens;
                    bool m_totalOutputTokensHasBeenSet;

                    /**
                     * <p>查询时间范围内总命中缓存输入Token数</p>
                     */
                    int64_t m_totalCachedReadInputTokens;
                    bool m_totalCachedReadInputTokensHasBeenSet;

                    /**
                     * <p>查询时间范围内总成本</p>
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * <p>成本货币单位</p>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * <p>查询时间范围内成本最高的消费者</p>
                     */
                    std::vector<AIGWTopConsumersItem> m_topConsumers;
                    bool m_topConsumersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMTOKENUSAGESTATISTICSRESULT_H_
