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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DELETEAGENTTAXPAYMENTINFOREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DELETEAGENTTAXPAYMENTINFOREQUEST_H_

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
                * DeleteAgentTaxPaymentInfo请求参数结构体
                */
                class DeleteAgentTaxPaymentInfoRequest : public AbstractModel
                {
                public:
                    DeleteAgentTaxPaymentInfoRequest();
                    ~DeleteAgentTaxPaymentInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批次号
                     * @return BatchNum 批次号
                     * 
                     */
                    int64_t GetBatchNum() const;

                    /**
                     * 设置批次号
                     * @param _batchNum 批次号
                     * 
                     */
                    void SetBatchNum(const int64_t& _batchNum);

                    /**
                     * 判断参数 BatchNum 是否已赋值
                     * @return BatchNum 是否已赋值
                     * 
                     */
                    bool BatchNumHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填sandbox
                     * @return Profile 接入环境。沙箱环境填sandbox
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置接入环境。沙箱环境填sandbox
                     * @param _profile 接入环境。沙箱环境填sandbox
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 批次号
                     */
                    int64_t m_batchNum;
                    bool m_batchNumHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填sandbox
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DELETEAGENTTAXPAYMENTINFOREQUEST_H_
