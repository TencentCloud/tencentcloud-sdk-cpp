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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_SERVICEPROVIDERACCOUNTBALANCERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_SERVICEPROVIDERACCOUNTBALANCERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 服务商账户余额返回信息
                */
                class ServiceProviderAccountBalanceResult : public AbstractModel
                {
                public:
                    ServiceProviderAccountBalanceResult();
                    ~ServiceProviderAccountBalanceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务商账户余额
                     * @return Balance 服务商账户余额
                     * 
                     */
                    std::string GetBalance() const;

                    /**
                     * 设置服务商账户余额
                     * @param _balance 服务商账户余额
                     * 
                     */
                    void SetBalance(const std::string& _balance);

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                private:

                    /**
                     * 服务商账户余额
                     */
                    std::string m_balance;
                    bool m_balanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_SERVICEPROVIDERACCOUNTBALANCERESULT_H_
