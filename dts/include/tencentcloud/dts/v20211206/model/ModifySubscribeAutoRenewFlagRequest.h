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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSUBSCRIBEAUTORENEWFLAGREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSUBSCRIBEAUTORENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifySubscribeAutoRenewFlag请求参数结构体
                */
                class ModifySubscribeAutoRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifySubscribeAutoRenewFlagRequest();
                    ~ModifySubscribeAutoRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取订阅实例ID
                     * @return SubscribeId 订阅实例ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置订阅实例ID
                     * @param _subscribeId 订阅实例ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取自动续费标识。1-自动续费，0-不自动续费
                     * @return AutoRenewFlag 自动续费标识。1-自动续费，0-不自动续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标识。1-自动续费，0-不自动续费
                     * @param _autoRenewFlag 自动续费标识。1-自动续费，0-不自动续费
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * 订阅实例ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 自动续费标识。1-自动续费，0-不自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSUBSCRIBEAUTORENEWFLAGREQUEST_H_
