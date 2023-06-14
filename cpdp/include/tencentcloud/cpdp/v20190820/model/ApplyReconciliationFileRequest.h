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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYRECONCILIATIONFILEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYRECONCILIATIONFILEREQUEST_H_

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
                * ApplyReconciliationFile请求参数结构体
                */
                class ApplyReconciliationFileRequest : public AbstractModel
                {
                public:
                    ApplyReconciliationFileRequest();
                    ~ApplyReconciliationFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取申请的文件类型。
__CZ__：充值文件
__TX__：提现文件
__JY__：交易文件
__YE__：余额文件
                     * @return ApplyFileType 申请的文件类型。
__CZ__：充值文件
__TX__：提现文件
__JY__：交易文件
__YE__：余额文件
                     * 
                     */
                    std::string GetApplyFileType() const;

                    /**
                     * 设置申请的文件类型。
__CZ__：充值文件
__TX__：提现文件
__JY__：交易文件
__YE__：余额文件
                     * @param _applyFileType 申请的文件类型。
__CZ__：充值文件
__TX__：提现文件
__JY__：交易文件
__YE__：余额文件
                     * 
                     */
                    void SetApplyFileType(const std::string& _applyFileType);

                    /**
                     * 判断参数 ApplyFileType 是否已赋值
                     * @return ApplyFileType 是否已赋值
                     * 
                     */
                    bool ApplyFileTypeHasBeenSet() const;

                    /**
                     * 获取申请的对账文件日期，格式：yyyyMMdd。
                     * @return ApplyFileDate 申请的对账文件日期，格式：yyyyMMdd。
                     * 
                     */
                    std::string GetApplyFileDate() const;

                    /**
                     * 设置申请的对账文件日期，格式：yyyyMMdd。
                     * @param _applyFileDate 申请的对账文件日期，格式：yyyyMMdd。
                     * 
                     */
                    void SetApplyFileDate(const std::string& _applyFileDate);

                    /**
                     * 判断参数 ApplyFileDate 是否已赋值
                     * @return ApplyFileDate 是否已赋值
                     * 
                     */
                    bool ApplyFileDateHasBeenSet() const;

                    /**
                     * 获取父账户账号。
_平安渠道为资金汇总账号_
                     * @return BankAccountNumber 父账户账号。
_平安渠道为资金汇总账号_
                     * 
                     */
                    std::string GetBankAccountNumber() const;

                    /**
                     * 设置父账户账号。
_平安渠道为资金汇总账号_
                     * @param _bankAccountNumber 父账户账号。
_平安渠道为资金汇总账号_
                     * 
                     */
                    void SetBankAccountNumber(const std::string& _bankAccountNumber);

                    /**
                     * 判断参数 BankAccountNumber 是否已赋值
                     * @return BankAccountNumber 是否已赋值
                     * 
                     */
                    bool BankAccountNumberHasBeenSet() const;

                    /**
                     * 获取环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     * @return MidasEnvironment 环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     * @param _midasEnvironment 环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                private:

                    /**
                     * 申请的文件类型。
__CZ__：充值文件
__TX__：提现文件
__JY__：交易文件
__YE__：余额文件
                     */
                    std::string m_applyFileType;
                    bool m_applyFileTypeHasBeenSet;

                    /**
                     * 申请的对账文件日期，格式：yyyyMMdd。
                     */
                    std::string m_applyFileDate;
                    bool m_applyFileDateHasBeenSet;

                    /**
                     * 父账户账号。
_平安渠道为资金汇总账号_
                     */
                    std::string m_bankAccountNumber;
                    bool m_bankAccountNumberHasBeenSet;

                    /**
                     * 环境名。
__release__: 现网环境
__sandbox__: 沙箱环境
__development__: 开发环境
_缺省: release_
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYRECONCILIATIONFILEREQUEST_H_
