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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBETASKRESULTSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBETASKRESULTSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeTaskResultSummary返回参数结构体
                */
                class DescribeTaskResultSummaryResponse : public AbstractModel
                {
                public:
                    DescribeTaskResultSummaryResponse();
                    ~DescribeTaskResultSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取严重风险影响的节点数量,返回7天数据
                     * @return SeriousRiskNodeCount 严重风险影响的节点数量,返回7天数据
                     * 
                     */
                    std::vector<uint64_t> GetSeriousRiskNodeCount() const;

                    /**
                     * 判断参数 SeriousRiskNodeCount 是否已赋值
                     * @return SeriousRiskNodeCount 是否已赋值
                     * 
                     */
                    bool SeriousRiskNodeCountHasBeenSet() const;

                    /**
                     * 获取高风险影响的节点的数量,返回7天数据
                     * @return HighRiskNodeCount 高风险影响的节点的数量,返回7天数据
                     * 
                     */
                    std::vector<uint64_t> GetHighRiskNodeCount() const;

                    /**
                     * 判断参数 HighRiskNodeCount 是否已赋值
                     * @return HighRiskNodeCount 是否已赋值
                     * 
                     */
                    bool HighRiskNodeCountHasBeenSet() const;

                    /**
                     * 获取中风险检查项的节点数量,返回7天数据
                     * @return MiddleRiskNodeCount 中风险检查项的节点数量,返回7天数据
                     * 
                     */
                    std::vector<uint64_t> GetMiddleRiskNodeCount() const;

                    /**
                     * 判断参数 MiddleRiskNodeCount 是否已赋值
                     * @return MiddleRiskNodeCount 是否已赋值
                     * 
                     */
                    bool MiddleRiskNodeCountHasBeenSet() const;

                    /**
                     * 获取提示风险检查项的节点数量,返回7天数据
                     * @return HintRiskNodeCount 提示风险检查项的节点数量,返回7天数据
                     * 
                     */
                    std::vector<uint64_t> GetHintRiskNodeCount() const;

                    /**
                     * 判断参数 HintRiskNodeCount 是否已赋值
                     * @return HintRiskNodeCount 是否已赋值
                     * 
                     */
                    bool HintRiskNodeCountHasBeenSet() const;

                private:

                    /**
                     * 严重风险影响的节点数量,返回7天数据
                     */
                    std::vector<uint64_t> m_seriousRiskNodeCount;
                    bool m_seriousRiskNodeCountHasBeenSet;

                    /**
                     * 高风险影响的节点的数量,返回7天数据
                     */
                    std::vector<uint64_t> m_highRiskNodeCount;
                    bool m_highRiskNodeCountHasBeenSet;

                    /**
                     * 中风险检查项的节点数量,返回7天数据
                     */
                    std::vector<uint64_t> m_middleRiskNodeCount;
                    bool m_middleRiskNodeCountHasBeenSet;

                    /**
                     * 提示风险检查项的节点数量,返回7天数据
                     */
                    std::vector<uint64_t> m_hintRiskNodeCount;
                    bool m_hintRiskNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBETASKRESULTSUMMARYRESPONSE_H_
