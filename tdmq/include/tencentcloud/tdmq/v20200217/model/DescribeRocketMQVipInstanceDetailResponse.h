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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQVIPINSTANCEDETAILRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQVIPINSTANCEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterInfo.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQInstanceConfig.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQVipInstanceDetail返回参数结构体
                */
                class DescribeRocketMQVipInstanceDetailResponse : public AbstractModel
                {
                public:
                    DescribeRocketMQVipInstanceDetailResponse();
                    ~DescribeRocketMQVipInstanceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群信息
                     * @return ClusterInfo 集群信息
                     * 
                     */
                    RocketMQClusterInfo GetClusterInfo() const;

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取集群配置
                     * @return InstanceConfig 集群配置
                     * 
                     */
                    RocketMQInstanceConfig GetInstanceConfig() const;

                    /**
                     * 判断参数 InstanceConfig 是否已赋值
                     * @return InstanceConfig 是否已赋值
                     * 
                     */
                    bool InstanceConfigHasBeenSet() const;

                private:

                    /**
                     * 集群信息
                     */
                    RocketMQClusterInfo m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * 集群配置
                     */
                    RocketMQInstanceConfig m_instanceConfig;
                    bool m_instanceConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQVIPINSTANCEDETAILRESPONSE_H_
