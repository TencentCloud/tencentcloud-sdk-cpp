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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECMQSUBSCRIBERESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECMQSUBSCRIBERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateCmqSubscribe返回参数结构体
                */
                class CreateCmqSubscribeResponse : public AbstractModel
                {
                public:
                    CreateCmqSubscribeResponse();
                    ~CreateCmqSubscribeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取订阅id
                     * @return SubscriptionId 订阅id
                     * 
                     */
                    std::string GetSubscriptionId() const;

                    /**
                     * 判断参数 SubscriptionId 是否已赋值
                     * @return SubscriptionId 是否已赋值
                     * 
                     */
                    bool SubscriptionIdHasBeenSet() const;

                private:

                    /**
                     * 订阅id
                     */
                    std::string m_subscriptionId;
                    bool m_subscriptionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECMQSUBSCRIBERESPONSE_H_
