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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIRTUALHOSTLISTRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIRTUALHOSTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQPrivateVirtualHost.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQVirtualHostList返回参数结构体
                */
                class DescribeRabbitMQVirtualHostListResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQVirtualHostListResponse();
                    ~DescribeRabbitMQVirtualHostListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群列表数量
                     * @return TotalCount 集群列表数量
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
                     * 获取集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualHostList 集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RabbitMQPrivateVirtualHost> GetVirtualHostList() const;

                    /**
                     * 判断参数 VirtualHostList 是否已赋值
                     * @return VirtualHostList 是否已赋值
                     * 
                     */
                    bool VirtualHostListHasBeenSet() const;

                private:

                    /**
                     * 集群列表数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RabbitMQPrivateVirtualHost> m_virtualHostList;
                    bool m_virtualHostListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIRTUALHOSTLISTRESPONSE_H_
