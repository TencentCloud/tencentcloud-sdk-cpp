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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGERESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeTokenUsage返回参数结构体
                */
                class DescribeTokenUsageResponse : public AbstractModel
                {
                public:
                    DescribeTokenUsageResponse();
                    ~DescribeTokenUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总token消耗量
                     * @return TotalTokenUsage 总token消耗量
                     * 
                     */
                    double GetTotalTokenUsage() const;

                    /**
                     * 判断参数 TotalTokenUsage 是否已赋值
                     * @return TotalTokenUsage 是否已赋值
                     * 
                     */
                    bool TotalTokenUsageHasBeenSet() const;

                    /**
                     * 获取输入token消耗
                     * @return InputTokenUsage 输入token消耗
                     * 
                     */
                    double GetInputTokenUsage() const;

                    /**
                     * 判断参数 InputTokenUsage 是否已赋值
                     * @return InputTokenUsage 是否已赋值
                     * 
                     */
                    bool InputTokenUsageHasBeenSet() const;

                    /**
                     * 获取输出token消耗
                     * @return OutputTokenUsage 输出token消耗
                     * 
                     */
                    double GetOutputTokenUsage() const;

                    /**
                     * 判断参数 OutputTokenUsage 是否已赋值
                     * @return OutputTokenUsage 是否已赋值
                     * 
                     */
                    bool OutputTokenUsageHasBeenSet() const;

                    /**
                     * 获取接口调用次数
                     * @return ApiCallStats 接口调用次数
                     * 
                     */
                    uint64_t GetApiCallStats() const;

                    /**
                     * 判断参数 ApiCallStats 是否已赋值
                     * @return ApiCallStats 是否已赋值
                     * 
                     */
                    bool ApiCallStatsHasBeenSet() const;

                    /**
                     * 获取搜索服务调用次数
                     * @return SearchUsage 搜索服务调用次数
                     * 
                     */
                    double GetSearchUsage() const;

                    /**
                     * 判断参数 SearchUsage 是否已赋值
                     * @return SearchUsage 是否已赋值
                     * 
                     */
                    bool SearchUsageHasBeenSet() const;

                    /**
                     * 获取文档解析消耗页数
                     * @return PageUsage 文档解析消耗页数
                     * 
                     */
                    uint64_t GetPageUsage() const;

                    /**
                     * 判断参数 PageUsage 是否已赋值
                     * @return PageUsage 是否已赋值
                     * 
                     */
                    bool PageUsageHasBeenSet() const;

                    /**
                     * 获取拆分token消耗量
                     * @return SplitTokenUsage 拆分token消耗量
                     * 
                     */
                    double GetSplitTokenUsage() const;

                    /**
                     * 判断参数 SplitTokenUsage 是否已赋值
                     * @return SplitTokenUsage 是否已赋值
                     * 
                     */
                    bool SplitTokenUsageHasBeenSet() const;

                    /**
                     * 获取Rag检索次数
                     * @return RagSearchUsage Rag检索次数
                     * 
                     */
                    double GetRagSearchUsage() const;

                    /**
                     * 判断参数 RagSearchUsage 是否已赋值
                     * @return RagSearchUsage 是否已赋值
                     * 
                     */
                    bool RagSearchUsageHasBeenSet() const;

                    /**
                     * 获取联网搜索次数
                     * @return InternetSearchUsage 联网搜索次数
                     * 
                     */
                    double GetInternetSearchUsage() const;

                    /**
                     * 判断参数 InternetSearchUsage 是否已赋值
                     * @return InternetSearchUsage 是否已赋值
                     * 
                     */
                    bool InternetSearchUsageHasBeenSet() const;

                private:

                    /**
                     * 总token消耗量
                     */
                    double m_totalTokenUsage;
                    bool m_totalTokenUsageHasBeenSet;

                    /**
                     * 输入token消耗
                     */
                    double m_inputTokenUsage;
                    bool m_inputTokenUsageHasBeenSet;

                    /**
                     * 输出token消耗
                     */
                    double m_outputTokenUsage;
                    bool m_outputTokenUsageHasBeenSet;

                    /**
                     * 接口调用次数
                     */
                    uint64_t m_apiCallStats;
                    bool m_apiCallStatsHasBeenSet;

                    /**
                     * 搜索服务调用次数
                     */
                    double m_searchUsage;
                    bool m_searchUsageHasBeenSet;

                    /**
                     * 文档解析消耗页数
                     */
                    uint64_t m_pageUsage;
                    bool m_pageUsageHasBeenSet;

                    /**
                     * 拆分token消耗量
                     */
                    double m_splitTokenUsage;
                    bool m_splitTokenUsageHasBeenSet;

                    /**
                     * Rag检索次数
                     */
                    double m_ragSearchUsage;
                    bool m_ragSearchUsageHasBeenSet;

                    /**
                     * 联网搜索次数
                     */
                    double m_internetSearchUsage;
                    bool m_internetSearchUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGERESPONSE_H_
