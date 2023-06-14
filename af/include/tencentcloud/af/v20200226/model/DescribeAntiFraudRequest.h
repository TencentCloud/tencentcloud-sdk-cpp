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

#ifndef TENCENTCLOUD_AF_V20200226_MODEL_DESCRIBEANTIFRAUDREQUEST_H_
#define TENCENTCLOUD_AF_V20200226_MODEL_DESCRIBEANTIFRAUDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/af/v20200226/model/FinanceAntiFraudFilter.h>
#include <tencentcloud/af/v20200226/model/FinanceAntiFraudCryptoFilter.h>


namespace TencentCloud
{
    namespace Af
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * DescribeAntiFraud请求参数结构体
                */
                class DescribeAntiFraudRequest : public AbstractModel
                {
                public:
                    DescribeAntiFraudRequest();
                    ~DescribeAntiFraudRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取原始业务入参(二选一）
                     * @return BusinessSecurityData 原始业务入参(二选一）
                     * 
                     */
                    FinanceAntiFraudFilter GetBusinessSecurityData() const;

                    /**
                     * 设置原始业务入参(二选一）
                     * @param _businessSecurityData 原始业务入参(二选一）
                     * 
                     */
                    void SetBusinessSecurityData(const FinanceAntiFraudFilter& _businessSecurityData);

                    /**
                     * 判断参数 BusinessSecurityData 是否已赋值
                     * @return BusinessSecurityData 是否已赋值
                     * 
                     */
                    bool BusinessSecurityDataHasBeenSet() const;

                    /**
                     * 获取密文业务入参(二选一）
                     * @return BusinessCryptoData 密文业务入参(二选一）
                     * 
                     */
                    FinanceAntiFraudCryptoFilter GetBusinessCryptoData() const;

                    /**
                     * 设置密文业务入参(二选一）
                     * @param _businessCryptoData 密文业务入参(二选一）
                     * 
                     */
                    void SetBusinessCryptoData(const FinanceAntiFraudCryptoFilter& _businessCryptoData);

                    /**
                     * 判断参数 BusinessCryptoData 是否已赋值
                     * @return BusinessCryptoData 是否已赋值
                     * 
                     */
                    bool BusinessCryptoDataHasBeenSet() const;

                private:

                    /**
                     * 原始业务入参(二选一）
                     */
                    FinanceAntiFraudFilter m_businessSecurityData;
                    bool m_businessSecurityDataHasBeenSet;

                    /**
                     * 密文业务入参(二选一）
                     */
                    FinanceAntiFraudCryptoFilter m_businessCryptoData;
                    bool m_businessCryptoDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AF_V20200226_MODEL_DESCRIBEANTIFRAUDREQUEST_H_
