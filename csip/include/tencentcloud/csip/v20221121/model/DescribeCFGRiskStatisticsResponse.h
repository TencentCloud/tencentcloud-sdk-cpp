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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECFGRISKSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECFGRISKSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CFGRiskStatisticsItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCFGRiskStatistics返回参数结构体
                */
                class DescribeCFGRiskStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeCFGRiskStatisticsResponse();
                    ~DescribeCFGRiskStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云资源配置风险结果统计
                     * @return CFGRiskStatistics 云资源配置风险结果统计
                     * 
                     */
                    CFGRiskStatisticsItem GetCFGRiskStatistics() const;

                    /**
                     * 判断参数 CFGRiskStatistics 是否已赋值
                     * @return CFGRiskStatistics 是否已赋值
                     * 
                     */
                    bool CFGRiskStatisticsHasBeenSet() const;

                private:

                    /**
                     * 云资源配置风险结果统计
                     */
                    CFGRiskStatisticsItem m_cFGRiskStatistics;
                    bool m_cFGRiskStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECFGRISKSTATISTICSRESPONSE_H_
