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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAILATENCYRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAILATENCYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AILatencyDetail.h>
#include <tencentcloud/ccc/v20200210/model/AILatencyStatistics.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeAILatency返回参数结构体
                */
                class DescribeAILatencyResponse : public AbstractModel
                {
                public:
                    DescribeAILatencyResponse();
                    ~DescribeAILatencyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取时延明细数据
 -1表示无对应数据
                     * @return AILatencyDetail 时延明细数据
 -1表示无对应数据
                     * 
                     */
                    std::vector<AILatencyDetail> GetAILatencyDetail() const;

                    /**
                     * 判断参数 AILatencyDetail 是否已赋值
                     * @return AILatencyDetail 是否已赋值
                     * 
                     */
                    bool AILatencyDetailHasBeenSet() const;

                    /**
                     * 获取时延统计数据
 -1表示无对应数据
                     * @return AILatencyStatistics 时延统计数据
 -1表示无对应数据
                     * 
                     */
                    AILatencyStatistics GetAILatencyStatistics() const;

                    /**
                     * 判断参数 AILatencyStatistics 是否已赋值
                     * @return AILatencyStatistics 是否已赋值
                     * 
                     */
                    bool AILatencyStatisticsHasBeenSet() const;

                private:

                    /**
                     * 时延明细数据
 -1表示无对应数据
                     */
                    std::vector<AILatencyDetail> m_aILatencyDetail;
                    bool m_aILatencyDetailHasBeenSet;

                    /**
                     * 时延统计数据
 -1表示无对应数据
                     */
                    AILatencyStatistics m_aILatencyStatistics;
                    bool m_aILatencyStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAILATENCYRESPONSE_H_
