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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKPOLICYSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKPOLICYSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyWebhookPolicyStatus请求参数结构体
                */
                class ModifyWebhookPolicyStatusRequest : public AbstractModel
                {
                public:
                    ModifyWebhookPolicyStatusRequest();
                    ~ModifyWebhookPolicyStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略 ID
                     * @return ID 策略 ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置策略 ID
                     * @param _iD 策略 ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取目标状态
枚举值：
ON：启用
OFF：禁用
                     * @return Status 目标状态
枚举值：
ON：启用
OFF：禁用
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置目标状态
枚举值：
ON：启用
OFF：禁用
                     * @param _status 目标状态
枚举值：
ON：启用
OFF：禁用
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 策略 ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 目标状态
枚举值：
ON：启用
OFF：禁用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKPOLICYSTATUSREQUEST_H_
