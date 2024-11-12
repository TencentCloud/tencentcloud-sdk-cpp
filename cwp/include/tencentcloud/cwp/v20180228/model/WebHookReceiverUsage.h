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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRECEIVERUSAGE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRECEIVERUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 告警接收人的关联策略使用信息
                */
                class WebHookReceiverUsage : public AbstractModel
                {
                public:
                    WebHookReceiverUsage();
                    ~WebHookReceiverUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接收人id
                     * @return ReceiverId 接收人id
                     * 
                     */
                    int64_t GetReceiverId() const;

                    /**
                     * 设置接收人id
                     * @param _receiverId 接收人id
                     * 
                     */
                    void SetReceiverId(const int64_t& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

                    /**
                     * 获取接收人名称
                     * @return ReceiverName 接收人名称
                     * 
                     */
                    std::string GetReceiverName() const;

                    /**
                     * 设置接收人名称
                     * @param _receiverName 接收人名称
                     * 
                     */
                    void SetReceiverName(const std::string& _receiverName);

                    /**
                     * 判断参数 ReceiverName 是否已赋值
                     * @return ReceiverName 是否已赋值
                     * 
                     */
                    bool ReceiverNameHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return PolicyName 策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
                     * @param _policyName 策略名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                private:

                    /**
                     * 接收人id
                     */
                    int64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * 接收人名称
                     */
                    std::string m_receiverName;
                    bool m_receiverNameHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRECEIVERUSAGE_H_
