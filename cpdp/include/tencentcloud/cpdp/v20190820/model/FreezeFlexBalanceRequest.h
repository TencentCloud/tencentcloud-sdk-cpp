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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_FREEZEFLEXBALANCEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_FREEZEFLEXBALANCEREQUEST_H_

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
                * FreezeFlexBalance请求参数结构体
                */
                class FreezeFlexBalanceRequest : public AbstractModel
                {
                public:
                    FreezeFlexBalanceRequest();
                    ~FreezeFlexBalanceRequest() = default;
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
                     * 获取税前金额
                     * @return AmountBeforeTax 税前金额
                     * 
                     */
                    std::string GetAmountBeforeTax() const;

                    /**
                     * 设置税前金额
                     * @param _amountBeforeTax 税前金额
                     * 
                     */
                    void SetAmountBeforeTax(const std::string& _amountBeforeTax);

                    /**
                     * 判断参数 AmountBeforeTax 是否已赋值
                     * @return AmountBeforeTax 是否已赋值
                     * 
                     */
                    bool AmountBeforeTaxHasBeenSet() const;

                    /**
                     * 获取收入类型
LABOR:劳务所得
OCCASION:偶然所得
                     * @return IncomeType 收入类型
LABOR:劳务所得
OCCASION:偶然所得
                     * 
                     */
                    std::string GetIncomeType() const;

                    /**
                     * 设置收入类型
LABOR:劳务所得
OCCASION:偶然所得
                     * @param _incomeType 收入类型
LABOR:劳务所得
OCCASION:偶然所得
                     * 
                     */
                    void SetIncomeType(const std::string& _incomeType);

                    /**
                     * 判断参数 IncomeType 是否已赋值
                     * @return IncomeType 是否已赋值
                     * 
                     */
                    bool IncomeTypeHasBeenSet() const;

                    /**
                     * 获取外部订单ID
                     * @return OutOrderId 外部订单ID
                     * 
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部订单ID
                     * @param _outOrderId 外部订单ID
                     * 
                     */
                    void SetOutOrderId(const std::string& _outOrderId);

                    /**
                     * 判断参数 OutOrderId 是否已赋值
                     * @return OutOrderId 是否已赋值
                     * 
                     */
                    bool OutOrderIdHasBeenSet() const;

                    /**
                     * 获取操作类型
FREEZE:冻结
UNFREEZE:解冻
                     * @return OperationType 操作类型
FREEZE:冻结
UNFREEZE:解冻
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置操作类型
FREEZE:冻结
UNFREEZE:解冻
                     * @param _operationType 操作类型
FREEZE:冻结
UNFREEZE:解冻
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取冻结备注
                     * @return Remark 冻结备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置冻结备注
                     * @param _remark 冻结备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

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
                     * 税前金额
                     */
                    std::string m_amountBeforeTax;
                    bool m_amountBeforeTaxHasBeenSet;

                    /**
                     * 收入类型
LABOR:劳务所得
OCCASION:偶然所得
                     */
                    std::string m_incomeType;
                    bool m_incomeTypeHasBeenSet;

                    /**
                     * 外部订单ID
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                    /**
                     * 操作类型
FREEZE:冻结
UNFREEZE:解冻
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 冻结备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_FREEZEFLEXBALANCEREQUEST_H_
