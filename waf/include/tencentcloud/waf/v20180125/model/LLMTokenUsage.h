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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMTOKENUSAGE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMTOKENUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/LLMTokenTrendItem.h>
#include <tencentcloud/waf/v20180125/model/LLMImageTrendItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * LLM实例当天4个计费模块的token消耗量及近7天趋势（均为实例维度）
                */
                class LLMTokenUsage : public AbstractModel
                {
                public:
                    LLMTokenUsage();
                    ~LLMTokenUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>今日提示词攻击防护 token 消耗量</p>
                     * @return PromptUsage <p>今日提示词攻击防护 token 消耗量</p>
                     * 
                     */
                    int64_t GetPromptUsage() const;

                    /**
                     * 设置<p>今日提示词攻击防护 token 消耗量</p>
                     * @param _promptUsage <p>今日提示词攻击防护 token 消耗量</p>
                     * 
                     */
                    void SetPromptUsage(const int64_t& _promptUsage);

                    /**
                     * 判断参数 PromptUsage 是否已赋值
                     * @return PromptUsage 是否已赋值
                     * 
                     */
                    bool PromptUsageHasBeenSet() const;

                    /**
                     * 获取<p>今日内容安全文本检测 token 消耗量</p>
                     * @return ContentTextUsage <p>今日内容安全文本检测 token 消耗量</p>
                     * 
                     */
                    int64_t GetContentTextUsage() const;

                    /**
                     * 设置<p>今日内容安全文本检测 token 消耗量</p>
                     * @param _contentTextUsage <p>今日内容安全文本检测 token 消耗量</p>
                     * 
                     */
                    void SetContentTextUsage(const int64_t& _contentTextUsage);

                    /**
                     * 判断参数 ContentTextUsage 是否已赋值
                     * @return ContentTextUsage 是否已赋值
                     * 
                     */
                    bool ContentTextUsageHasBeenSet() const;

                    /**
                     * 获取<p>今日敏感数据检测 token 消耗量</p>
                     * @return SensitiveDataUsage <p>今日敏感数据检测 token 消耗量</p>
                     * 
                     */
                    int64_t GetSensitiveDataUsage() const;

                    /**
                     * 设置<p>今日敏感数据检测 token 消耗量</p>
                     * @param _sensitiveDataUsage <p>今日敏感数据检测 token 消耗量</p>
                     * 
                     */
                    void SetSensitiveDataUsage(const int64_t& _sensitiveDataUsage);

                    /**
                     * 判断参数 SensitiveDataUsage 是否已赋值
                     * @return SensitiveDataUsage 是否已赋值
                     * 
                     */
                    bool SensitiveDataUsageHasBeenSet() const;

                    /**
                     * 获取<p>今日图片送检量（单位：张）</p>
                     * @return ContentImageUsage <p>今日图片送检量（单位：张）</p>
                     * 
                     */
                    int64_t GetContentImageUsage() const;

                    /**
                     * 设置<p>今日图片送检量（单位：张）</p>
                     * @param _contentImageUsage <p>今日图片送检量（单位：张）</p>
                     * 
                     */
                    void SetContentImageUsage(const int64_t& _contentImageUsage);

                    /**
                     * 判断参数 ContentImageUsage 是否已赋值
                     * @return ContentImageUsage 是否已赋值
                     * 
                     */
                    bool ContentImageUsageHasBeenSet() const;

                    /**
                     * 获取<p>该实例近7天token总量趋势（按天，缺失日期补0）</p>
                     * @return TokenTrend <p>该实例近7天token总量趋势（按天，缺失日期补0）</p>
                     * 
                     */
                    std::vector<LLMTokenTrendItem> GetTokenTrend() const;

                    /**
                     * 设置<p>该实例近7天token总量趋势（按天，缺失日期补0）</p>
                     * @param _tokenTrend <p>该实例近7天token总量趋势（按天，缺失日期补0）</p>
                     * 
                     */
                    void SetTokenTrend(const std::vector<LLMTokenTrendItem>& _tokenTrend);

                    /**
                     * 判断参数 TokenTrend 是否已赋值
                     * @return TokenTrend 是否已赋值
                     * 
                     */
                    bool TokenTrendHasBeenSet() const;

                    /**
                     * 获取<p>该实例近7天图片送检趋势（按天，缺失日期补0）</p>
                     * @return ImageTrend <p>该实例近7天图片送检趋势（按天，缺失日期补0）</p>
                     * 
                     */
                    std::vector<LLMImageTrendItem> GetImageTrend() const;

                    /**
                     * 设置<p>该实例近7天图片送检趋势（按天，缺失日期补0）</p>
                     * @param _imageTrend <p>该实例近7天图片送检趋势（按天，缺失日期补0）</p>
                     * 
                     */
                    void SetImageTrend(const std::vector<LLMImageTrendItem>& _imageTrend);

                    /**
                     * 判断参数 ImageTrend 是否已赋值
                     * @return ImageTrend 是否已赋值
                     * 
                     */
                    bool ImageTrendHasBeenSet() const;

                private:

                    /**
                     * <p>今日提示词攻击防护 token 消耗量</p>
                     */
                    int64_t m_promptUsage;
                    bool m_promptUsageHasBeenSet;

                    /**
                     * <p>今日内容安全文本检测 token 消耗量</p>
                     */
                    int64_t m_contentTextUsage;
                    bool m_contentTextUsageHasBeenSet;

                    /**
                     * <p>今日敏感数据检测 token 消耗量</p>
                     */
                    int64_t m_sensitiveDataUsage;
                    bool m_sensitiveDataUsageHasBeenSet;

                    /**
                     * <p>今日图片送检量（单位：张）</p>
                     */
                    int64_t m_contentImageUsage;
                    bool m_contentImageUsageHasBeenSet;

                    /**
                     * <p>该实例近7天token总量趋势（按天，缺失日期补0）</p>
                     */
                    std::vector<LLMTokenTrendItem> m_tokenTrend;
                    bool m_tokenTrendHasBeenSet;

                    /**
                     * <p>该实例近7天图片送检趋势（按天，缺失日期补0）</p>
                     */
                    std::vector<LLMImageTrendItem> m_imageTrend;
                    bool m_imageTrendHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMTOKENUSAGE_H_
