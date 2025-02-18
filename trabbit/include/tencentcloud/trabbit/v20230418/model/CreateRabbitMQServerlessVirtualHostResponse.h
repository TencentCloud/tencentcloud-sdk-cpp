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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSVIRTUALHOSTRESPONSE_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSVIRTUALHOSTRESPONSE_H_

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
                * CreateRabbitMQServerlessVirtualHost返回参数结构体
                */
                class CreateRabbitMQServerlessVirtualHostResponse : public AbstractModel
                {
                public:
                    CreateRabbitMQServerlessVirtualHostResponse();
                    ~CreateRabbitMQServerlessVirtualHostResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取vhost名称
                     * @return VirtualHost vhost名称
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                private:

                    /**
                     * vhost名称
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSVIRTUALHOSTRESPONSE_H_
