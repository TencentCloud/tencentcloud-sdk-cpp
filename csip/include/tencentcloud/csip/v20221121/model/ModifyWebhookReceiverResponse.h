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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKRECEIVERRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKRECEIVERRESPONSE_H_

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
                * ModifyWebhookReceiver返回参数结构体
                */
                class ModifyWebhookReceiverResponse : public AbstractModel
                {
                public:
                    ModifyWebhookReceiverResponse();
                    ~ModifyWebhookReceiverResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>新增或被修改的机器人 ID</p>
                     * @return ID <p>新增或被修改的机器人 ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * <p>新增或被修改的机器人 ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKRECEIVERRESPONSE_H_
