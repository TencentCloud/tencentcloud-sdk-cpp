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

#ifndef TENCENTCLOUD_AFC_V20200226_MODEL_GETANTIFRAUDVIPREQUEST_H_
#define TENCENTCLOUD_AFC_V20200226_MODEL_GETANTIFRAUDVIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/afc/v20200226/model/AntiFraudVipFilter.h>
#include <tencentcloud/afc/v20200226/model/AntiFraudVipCryptoFilter.h>


namespace TencentCloud
{
    namespace Afc
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * GetAntiFraudVip请求参数结构体
                */
                class GetAntiFraudVipRequest : public AbstractModel
                {
                public:
                    GetAntiFraudVipRequest();
                    ~GetAntiFraudVipRequest() = default;
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
                    AntiFraudVipFilter GetBusinessSecurityData() const;

                    /**
                     * 设置默认不传，约定用原始业务
入参(二选一BusinessSecurityData 或
BusinessCryptoData)。
                     * @param _businessSecurityData 默认不传，约定用原始业务
入参(二选一BusinessSecurityData 或
BusinessCryptoData)。
                     * 
                     */
                    void SetBusinessSecurityData(const AntiFraudVipFilter& _businessSecurityData);

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
                    AntiFraudVipCryptoFilter GetBusinessCryptoData() const;

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
                    void SetBusinessCryptoData(const AntiFraudVipCryptoFilter& _businessCryptoData);

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
                    AntiFraudVipFilter m_businessSecurityData;
                    bool m_businessSecurityDataHasBeenSet;

                    /**
                     * 默认不传，约定用密文业务
入参(二选一
BusinessSecurityData 或
BusinessCryptoData)。
                     */
                    AntiFraudVipCryptoFilter m_businessCryptoData;
                    bool m_businessCryptoDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AFC_V20200226_MODEL_GETANTIFRAUDVIPREQUEST_H_
