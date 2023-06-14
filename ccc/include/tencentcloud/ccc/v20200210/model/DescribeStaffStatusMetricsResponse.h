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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSMETRICSRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSMETRICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/StaffStatusMetrics.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeStaffStatusMetrics返回参数结构体
                */
                class DescribeStaffStatusMetricsResponse : public AbstractModel
                {
                public:
                    DescribeStaffStatusMetricsResponse();
                    ~DescribeStaffStatusMetricsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取坐席状态实时信息
                     * @return Metrics 坐席状态实时信息
                     * 
                     */
                    std::vector<StaffStatusMetrics> GetMetrics() const;

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                private:

                    /**
                     * 坐席状态实时信息
                     */
                    std::vector<StaffStatusMetrics> m_metrics;
                    bool m_metricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSMETRICSRESPONSE_H_
