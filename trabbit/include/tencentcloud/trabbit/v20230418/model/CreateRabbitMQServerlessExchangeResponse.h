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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSEXCHANGERESPONSE_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSEXCHANGERESPONSE_H_

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
                * CreateRabbitMQServerlessExchange返回参数结构体
                */
                class CreateRabbitMQServerlessExchangeResponse : public AbstractModel
                {
                public:
                    CreateRabbitMQServerlessExchangeResponse();
                    ~CreateRabbitMQServerlessExchangeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取exchange 名称
                     * @return ExchangeName exchange 名称
                     * 
                     */
                    std::string GetExchangeName() const;

                    /**
                     * 判断参数 ExchangeName 是否已赋值
                     * @return ExchangeName 是否已赋值
                     * 
                     */
                    bool ExchangeNameHasBeenSet() const;

                private:

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

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSEXCHANGERESPONSE_H_
