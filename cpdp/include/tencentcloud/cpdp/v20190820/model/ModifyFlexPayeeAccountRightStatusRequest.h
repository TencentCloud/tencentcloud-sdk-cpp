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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_MODIFYFLEXPAYEEACCOUNTRIGHTSTATUSREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_MODIFYFLEXPAYEEACCOUNTRIGHTSTATUSREQUEST_H_

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
                * ModifyFlexPayeeAccountRightStatus请求参数结构体
                */
                class ModifyFlexPayeeAccountRightStatusRequest : public AbstractModel
                {
                public:
                    ModifyFlexPayeeAccountRightStatusRequest();
                    ~ModifyFlexPayeeAccountRightStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取收款用户ID
                     * @return PayeeId 收款用户ID
                     * 
                     */
                    std::string GetPayeeId() const;

                    /**
                     * 设置收款用户ID
                     * @param _payeeId 收款用户ID
                     * 
                     */
                    void SetPayeeId(const std::string& _payeeId);

                    /**
                     * 判断参数 PayeeId 是否已赋值
                     * @return PayeeId 是否已赋值
                     * 
                     */
                    bool PayeeIdHasBeenSet() const;

                    /**
                     * 获取账户权益类型
SETTLEMENT:结算权益
PAYMENT:付款权益
                     * @return AccountRightType 账户权益类型
SETTLEMENT:结算权益
PAYMENT:付款权益
                     * 
                     */
                    std::string GetAccountRightType() const;

                    /**
                     * 设置账户权益类型
SETTLEMENT:结算权益
PAYMENT:付款权益
                     * @param _accountRightType 账户权益类型
SETTLEMENT:结算权益
PAYMENT:付款权益
                     * 
                     */
                    void SetAccountRightType(const std::string& _accountRightType);

                    /**
                     * 判断参数 AccountRightType 是否已赋值
                     * @return AccountRightType 是否已赋值
                     * 
                     */
                    bool AccountRightTypeHasBeenSet() const;

                    /**
                     * 获取账户权益状态
ENABLE:启用
DISABLE:停用
                     * @return AccountRightStatus 账户权益状态
ENABLE:启用
DISABLE:停用
                     * 
                     */
                    std::string GetAccountRightStatus() const;

                    /**
                     * 设置账户权益状态
ENABLE:启用
DISABLE:停用
                     * @param _accountRightStatus 账户权益状态
ENABLE:启用
DISABLE:停用
                     * 
                     */
                    void SetAccountRightStatus(const std::string& _accountRightStatus);

                    /**
                     * 判断参数 AccountRightStatus 是否已赋值
                     * @return AccountRightStatus 是否已赋值
                     * 
                     */
                    bool AccountRightStatusHasBeenSet() const;

                    /**
                     * 获取环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * @return Environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * @param _environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 收款用户ID
                     */
                    std::string m_payeeId;
                    bool m_payeeIdHasBeenSet;

                    /**
                     * 账户权益类型
SETTLEMENT:结算权益
PAYMENT:付款权益
                     */
                    std::string m_accountRightType;
                    bool m_accountRightTypeHasBeenSet;

                    /**
                     * 账户权益状态
ENABLE:启用
DISABLE:停用
                     */
                    std::string m_accountRightStatus;
                    bool m_accountRightStatusHasBeenSet;

                    /**
                     * 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_MODIFYFLEXPAYEEACCOUNTRIGHTSTATUSREQUEST_H_
