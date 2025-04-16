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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMIGRATINGTOPICSTATSRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMIGRATINGTOPICSTATSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeMigratingTopicStats返回参数结构体
                */
                class DescribeMigratingTopicStatsResponse : public AbstractModel
                {
                public:
                    DescribeMigratingTopicStatsResponse();
                    ~DescribeMigratingTopicStatsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取源集群的消费者数量
                     * @return SourceClusterConsumerCount 源集群的消费者数量
                     * 
                     */
                    int64_t GetSourceClusterConsumerCount() const;

                    /**
                     * 判断参数 SourceClusterConsumerCount 是否已赋值
                     * @return SourceClusterConsumerCount 是否已赋值
                     * 
                     */
                    bool SourceClusterConsumerCountHasBeenSet() const;

                    /**
                     * 获取目标集群的消费者数量
                     * @return TargetClusterConsumerCount 目标集群的消费者数量
                     * 
                     */
                    int64_t GetTargetClusterConsumerCount() const;

                    /**
                     * 判断参数 TargetClusterConsumerCount 是否已赋值
                     * @return TargetClusterConsumerCount 是否已赋值
                     * 
                     */
                    bool TargetClusterConsumerCountHasBeenSet() const;

                    /**
                     * 获取源集群消费组列表
                     * @return SourceClusterConsumerGroups 源集群消费组列表
                     * 
                     */
                    std::vector<std::string> GetSourceClusterConsumerGroups() const;

                    /**
                     * 判断参数 SourceClusterConsumerGroups 是否已赋值
                     * @return SourceClusterConsumerGroups 是否已赋值
                     * 
                     */
                    bool SourceClusterConsumerGroupsHasBeenSet() const;

                    /**
                     * 获取目标集群消费组列表
                     * @return TargetClusterConsumerGroups 目标集群消费组列表
                     * 
                     */
                    std::vector<std::string> GetTargetClusterConsumerGroups() const;

                    /**
                     * 判断参数 TargetClusterConsumerGroups 是否已赋值
                     * @return TargetClusterConsumerGroups 是否已赋值
                     * 
                     */
                    bool TargetClusterConsumerGroupsHasBeenSet() const;

                private:

                    /**
                     * 源集群的消费者数量
                     */
                    int64_t m_sourceClusterConsumerCount;
                    bool m_sourceClusterConsumerCountHasBeenSet;

                    /**
                     * 目标集群的消费者数量
                     */
                    int64_t m_targetClusterConsumerCount;
                    bool m_targetClusterConsumerCountHasBeenSet;

                    /**
                     * 源集群消费组列表
                     */
                    std::vector<std::string> m_sourceClusterConsumerGroups;
                    bool m_sourceClusterConsumerGroupsHasBeenSet;

                    /**
                     * 目标集群消费组列表
                     */
                    std::vector<std::string> m_targetClusterConsumerGroups;
                    bool m_targetClusterConsumerGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMIGRATINGTOPICSTATSRESPONSE_H_
