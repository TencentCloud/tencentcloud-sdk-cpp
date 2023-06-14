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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DELETEAGENTTAXPAYMENTINFOSREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DELETEAGENTTAXPAYMENTINFOSREQUEST_H_

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
                * DeleteAgentTaxPaymentInfos请求参数结构体
                */
                class DeleteAgentTaxPaymentInfosRequest : public AbstractModel
                {
                public:
                    DeleteAgentTaxPaymentInfosRequest();
                    ~DeleteAgentTaxPaymentInfosRequest() = default;
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

                private:

                    /**
                     * 批次号
                     */
                    int64_t m_batchNum;
                    bool m_batchNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DELETEAGENTTAXPAYMENTINFOSREQUEST_H_
