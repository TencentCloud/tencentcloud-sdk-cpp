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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMIGRATINGGROUPSTATSRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMIGRATINGGROUPSTATSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/ConsumerClient.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeMigratingGroupStats返回参数结构体
                */
                class DescribeMigratingGroupStatsResponse : public AbstractModel
                {
                public:
                    DescribeMigratingGroupStatsResponse();
                    ~DescribeMigratingGroupStatsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取源集群消费组堆积
                     * @return SourceConsumeLag 源集群消费组堆积
                     * 
                     */
                    int64_t GetSourceConsumeLag() const;

                    /**
                     * 判断参数 SourceConsumeLag 是否已赋值
                     * @return SourceConsumeLag 是否已赋值
                     * 
                     */
                    bool SourceConsumeLagHasBeenSet() const;

                    /**
                     * 获取目标集群消费组堆积
                     * @return TargetConsumeLag 目标集群消费组堆积
                     * 
                     */
                    int64_t GetTargetConsumeLag() const;

                    /**
                     * 判断参数 TargetConsumeLag 是否已赋值
                     * @return TargetConsumeLag 是否已赋值
                     * 
                     */
                    bool TargetConsumeLagHasBeenSet() const;

                    /**
                     * 获取源集群连接客户端列表
                     * @return SourceConsumerClients 源集群连接客户端列表
                     * 
                     */
                    std::vector<ConsumerClient> GetSourceConsumerClients() const;

                    /**
                     * 判断参数 SourceConsumerClients 是否已赋值
                     * @return SourceConsumerClients 是否已赋值
                     * 
                     */
                    bool SourceConsumerClientsHasBeenSet() const;

                    /**
                     * 获取目标集群连接客户端列表
                     * @return TargetConsumerClients 目标集群连接客户端列表
                     * 
                     */
                    std::vector<ConsumerClient> GetTargetConsumerClients() const;

                    /**
                     * 判断参数 TargetConsumerClients 是否已赋值
                     * @return TargetConsumerClients 是否已赋值
                     * 
                     */
                    bool TargetConsumerClientsHasBeenSet() const;

                private:

                    /**
                     * 源集群消费组堆积
                     */
                    int64_t m_sourceConsumeLag;
                    bool m_sourceConsumeLagHasBeenSet;

                    /**
                     * 目标集群消费组堆积
                     */
                    int64_t m_targetConsumeLag;
                    bool m_targetConsumeLagHasBeenSet;

                    /**
                     * 源集群连接客户端列表
                     */
                    std::vector<ConsumerClient> m_sourceConsumerClients;
                    bool m_sourceConsumerClientsHasBeenSet;

                    /**
                     * 目标集群连接客户端列表
                     */
                    std::vector<ConsumerClient> m_targetConsumerClients;
                    bool m_targetConsumerClientsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMIGRATINGGROUPSTATSRESPONSE_H_
