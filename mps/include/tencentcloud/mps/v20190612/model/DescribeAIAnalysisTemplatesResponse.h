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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIANALYSISTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIANALYSISTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AIAnalysisTemplateItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAIAnalysisTemplates返回参数结构体
                */
                class DescribeAIAnalysisTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeAIAnalysisTemplatesResponse();
                    ~DescribeAIAnalysisTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合过滤条件的记录总数。
                     * @return TotalCount 符合过滤条件的记录总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取视频内容分析模板详情列表。
                     * @return AIAnalysisTemplateSet 视频内容分析模板详情列表。
                     * 
                     */
                    std::vector<AIAnalysisTemplateItem> GetAIAnalysisTemplateSet() const;

                    /**
                     * 判断参数 AIAnalysisTemplateSet 是否已赋值
                     * @return AIAnalysisTemplateSet 是否已赋值
                     * 
                     */
                    bool AIAnalysisTemplateSetHasBeenSet() const;

                private:

                    /**
                     * 符合过滤条件的记录总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 视频内容分析模板详情列表。
                     */
                    std::vector<AIAnalysisTemplateItem> m_aIAnalysisTemplateSet;
                    bool m_aIAnalysisTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIANALYSISTEMPLATESRESPONSE_H_
