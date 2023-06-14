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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYREWITHDRAWALRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYREWITHDRAWALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * ApplyReWithdrawal返回参数结构体
                */
                class ApplyReWithdrawalResponse : public AbstractModel
                {
                public:
                    ApplyReWithdrawalResponse();
                    ~ApplyReWithdrawalResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取重新提现业务订单号
                     * @return WithdrawOrderId 重新提现业务订单号
                     * 
                     */
                    std::string GetWithdrawOrderId() const;

                    /**
                     * 判断参数 WithdrawOrderId 是否已赋值
                     * @return WithdrawOrderId 是否已赋值
                     * 
                     */
                    bool WithdrawOrderIdHasBeenSet() const;

                private:

                    /**
                     * 重新提现业务订单号
                     */
                    std::string m_withdrawOrderId;
                    bool m_withdrawOrderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYREWITHDRAWALRESPONSE_H_
