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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERHOSTSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERHOSTSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/HostStatistic.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusterHostStatistics返回参数结构体
                */
                class DescribeDedicatedClusterHostStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterHostStatisticsResponse();
                    ~DescribeDedicatedClusterHostStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取该集群内宿主机的统计信息列表
                     * @return HostStatisticSet 该集群内宿主机的统计信息列表
                     * 
                     */
                    std::vector<HostStatistic> GetHostStatisticSet() const;

                    /**
                     * 判断参数 HostStatisticSet 是否已赋值
                     * @return HostStatisticSet 是否已赋值
                     * 
                     */
                    bool HostStatisticSetHasBeenSet() const;

                private:

                    /**
                     * 该集群内宿主机的统计信息列表
                     */
                    std::vector<HostStatistic> m_hostStatisticSet;
                    bool m_hostStatisticSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERHOSTSTATISTICSRESPONSE_H_
