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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGEDETAILREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQServerlessExchangeDetail请求参数结构体
                */
                class DescribeRabbitMQServerlessExchangeDetailRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessExchangeDetailRequest();
                    ~DescribeRabbitMQServerlessExchangeDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 id
                     * @return InstanceId 实例 id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 id
                     * @param _instanceId 实例 id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取vhost 参数
                     * @return VirtualHost vhost 参数
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置vhost 参数
                     * @param _virtualHost vhost 参数
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取exchange 名称
                     * @return ExchangeName exchange 名称
                     * 
                     */
                    std::string GetExchangeName() const;

                    /**
                     * 设置exchange 名称
                     * @param _exchangeName exchange 名称
                     * 
                     */
                    void SetExchangeName(const std::string& _exchangeName);

                    /**
                     * 判断参数 ExchangeName 是否已赋值
                     * @return ExchangeName 是否已赋值
                     * 
                     */
                    bool ExchangeNameHasBeenSet() const;

                private:

                    /**
                     * 实例 id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * vhost 参数
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * exchange 名称
                     */
                    std::string m_exchangeName;
                    bool m_exchangeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGEDETAILREQUEST_H_
