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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSVIRTUALHOSTRESPONSE_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSVIRTUALHOSTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/RabbitMQVirtualHostInfo.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQServerlessVirtualHost返回参数结构体
                */
                class DescribeRabbitMQServerlessVirtualHostResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessVirtualHostResponse();
                    ~DescribeRabbitMQServerlessVirtualHostResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回vhost数量
                     * @return TotalCount 返回vhost数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取vhost详情列表
                     * @return VirtualHostList vhost详情列表
                     * 
                     */
                    std::vector<RabbitMQVirtualHostInfo> GetVirtualHostList() const;

                    /**
                     * 判断参数 VirtualHostList 是否已赋值
                     * @return VirtualHostList 是否已赋值
                     * 
                     */
                    bool VirtualHostListHasBeenSet() const;

                private:

                    /**
                     * 返回vhost数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * vhost详情列表
                     */
                    std::vector<RabbitMQVirtualHostInfo> m_virtualHostList;
                    bool m_virtualHostListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSVIRTUALHOSTRESPONSE_H_
