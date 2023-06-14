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

#ifndef TENCENTCLOUD_AF_V20200226_MODEL_GETANTIFRAUDREQUEST_H_
#define TENCENTCLOUD_AF_V20200226_MODEL_GETANTIFRAUDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/af/v20200226/model/AntiFraudFilter.h>
#include <tencentcloud/af/v20200226/model/AntiFraudCryptoFilter.h>


namespace TencentCloud
{
    namespace Af
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * GetAntiFraud请求参数结构体
                */
                class GetAntiFraudRequest : public AbstractModel
                {
                public:
                    GetAntiFraudRequest();
                    ~GetAntiFraudRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取默认不传，约定用原始业务
入参(二选一BusinessSecurityData 或
BusinessCryptoData)。
                     * @return BusinessSecurityData 默认不传，约定用原始业务
入参(二选一BusinessSecurityData 或
BusinessCryptoData)。
                     * 
                     */
                    AntiFraudFilter GetBusinessSecurityData() const;

                    /**
                     * 设置默认不传，约定用原始业务
入参(二选一BusinessSecurityData 或
BusinessCryptoData)。
                     * @param _businessSecurityData 默认不传，约定用原始业务
入参(二选一BusinessSecurityData 或
BusinessCryptoData)。
                     * 
                     */
                    void SetBusinessSecurityData(const AntiFraudFilter& _businessSecurityData);

                    /**
                     * 判断参数 BusinessSecurityData 是否已赋值
                     * @return BusinessSecurityData 是否已赋值
                     * 
                     */
                    bool BusinessSecurityDataHasBeenSet() const;

                    /**
                     * 获取默认不传，约定用密文业务
入参(二选一
BusinessSecurityData 或
BusinessCryptoData)。
                     * @return BusinessCryptoData 默认不传，约定用密文业务
入参(二选一
BusinessSecurityData 或
BusinessCryptoData)。
                     * 
                     */
                    AntiFraudCryptoFilter GetBusinessCryptoData() const;

                    /**
                     * 设置默认不传，约定用密文业务
入参(二选一
BusinessSecurityData 或
BusinessCryptoData)。
                     * @param _businessCryptoData 默认不传，约定用密文业务
入参(二选一
BusinessSecurityData 或
BusinessCryptoData)。
                     * 
                     */
                    void SetBusinessCryptoData(const AntiFraudCryptoFilter& _businessCryptoData);

                    /**
                     * 判断参数 BusinessCryptoData 是否已赋值
                     * @return BusinessCryptoData 是否已赋值
                     * 
                     */
                    bool BusinessCryptoDataHasBeenSet() const;

                private:

                    /**
                     * 默认不传，约定用原始业务
入参(二选一BusinessSecurityData 或
BusinessCryptoData)。
                     */
                    AntiFraudFilter m_businessSecurityData;
                    bool m_businessSecurityDataHasBeenSet;

                    /**
                     * 默认不传，约定用密文业务
入参(二选一
BusinessSecurityData 或
BusinessCryptoData)。
                     */
                    AntiFraudCryptoFilter m_businessCryptoData;
                    bool m_businessCryptoDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AF_V20200226_MODEL_GETANTIFRAUDREQUEST_H_
