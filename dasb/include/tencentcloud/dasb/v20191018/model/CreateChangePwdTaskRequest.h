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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_CREATECHANGEPWDTASKREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_CREATECHANGEPWDTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * CreateChangePwdTask请求参数结构体
                */
                class CreateChangePwdTaskRequest : public AbstractModel
                {
                public:
                    CreateChangePwdTaskRequest();
                    ~CreateChangePwdTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务名
                     * @return TaskName 任务名
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名
                     * @param _taskName 任务名
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取资产id数组
                     * @return DeviceIdSet 资产id数组
                     * 
                     */
                    std::vector<uint64_t> GetDeviceIdSet() const;

                    /**
                     * 设置资产id数组
                     * @param _deviceIdSet 资产id数组
                     * 
                     */
                    void SetDeviceIdSet(const std::vector<uint64_t>& _deviceIdSet);

                    /**
                     * 判断参数 DeviceIdSet 是否已赋值
                     * @return DeviceIdSet 是否已赋值
                     * 
                     */
                    bool DeviceIdSetHasBeenSet() const;

                    /**
                     * 获取修改的账户数组
                     * @return AccountSet 修改的账户数组
                     * 
                     */
                    std::vector<std::string> GetAccountSet() const;

                    /**
                     * 设置修改的账户数组
                     * @param _accountSet 修改的账户数组
                     * 
                     */
                    void SetAccountSet(const std::vector<std::string>& _accountSet);

                    /**
                     * 判断参数 AccountSet 是否已赋值
                     * @return AccountSet 是否已赋值
                     * 
                     */
                    bool AccountSetHasBeenSet() const;

                    /**
                     * 获取改密方式。1：使用执行账号修改密码；2：修改自身密码
                     * @return ChangeMethod 改密方式。1：使用执行账号修改密码；2：修改自身密码
                     * 
                     */
                    int64_t GetChangeMethod() const;

                    /**
                     * 设置改密方式。1：使用执行账号修改密码；2：修改自身密码
                     * @param _changeMethod 改密方式。1：使用执行账号修改密码；2：修改自身密码
                     * 
                     */
                    void SetChangeMethod(const int64_t& _changeMethod);

                    /**
                     * 判断参数 ChangeMethod 是否已赋值
                     * @return ChangeMethod 是否已赋值
                     * 
                     */
                    bool ChangeMethodHasBeenSet() const;

                    /**
                     * 获取认证生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码
                     * @return AuthGenerationStrategy 认证生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码
                     * 
                     */
                    int64_t GetAuthGenerationStrategy() const;

                    /**
                     * 设置认证生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码
                     * @param _authGenerationStrategy 认证生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码
                     * 
                     */
                    void SetAuthGenerationStrategy(const int64_t& _authGenerationStrategy);

                    /**
                     * 判断参数 AuthGenerationStrategy 是否已赋值
                     * @return AuthGenerationStrategy 是否已赋值
                     * 
                     */
                    bool AuthGenerationStrategyHasBeenSet() const;

                    /**
                     * 获取执行账号
                     * @return RunAccount 执行账号
                     * 
                     */
                    std::string GetRunAccount() const;

                    /**
                     * 设置执行账号
                     * @param _runAccount 执行账号
                     * 
                     */
                    void SetRunAccount(const std::string& _runAccount);

                    /**
                     * 判断参数 RunAccount 是否已赋值
                     * @return RunAccount 是否已赋值
                     * 
                     */
                    bool RunAccountHasBeenSet() const;

                    /**
                     * 获取手动指定密码时必传
                     * @return Password 手动指定密码时必传
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置手动指定密码时必传
                     * @param _password 手动指定密码时必传
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取密码限制长度，长度大于 12 位
                     * @return PasswordLength 密码限制长度，长度大于 12 位
                     * 
                     */
                    int64_t GetPasswordLength() const;

                    /**
                     * 设置密码限制长度，长度大于 12 位
                     * @param _passwordLength 密码限制长度，长度大于 12 位
                     * 
                     */
                    void SetPasswordLength(const int64_t& _passwordLength);

                    /**
                     * 判断参数 PasswordLength 是否已赋值
                     * @return PasswordLength 是否已赋值
                     * 
                     */
                    bool PasswordLengthHasBeenSet() const;

                    /**
                     * 获取密码包含小写字母。0：否，1：是
                     * @return SmallLetter 密码包含小写字母。0：否，1：是
                     * 
                     */
                    int64_t GetSmallLetter() const;

                    /**
                     * 设置密码包含小写字母。0：否，1：是
                     * @param _smallLetter 密码包含小写字母。0：否，1：是
                     * 
                     */
                    void SetSmallLetter(const int64_t& _smallLetter);

                    /**
                     * 判断参数 SmallLetter 是否已赋值
                     * @return SmallLetter 是否已赋值
                     * 
                     */
                    bool SmallLetterHasBeenSet() const;

                    /**
                     * 获取密码包含大写字母。0：否，1：是
                     * @return BigLetter 密码包含大写字母。0：否，1：是
                     * 
                     */
                    int64_t GetBigLetter() const;

                    /**
                     * 设置密码包含大写字母。0：否，1：是
                     * @param _bigLetter 密码包含大写字母。0：否，1：是
                     * 
                     */
                    void SetBigLetter(const int64_t& _bigLetter);

                    /**
                     * 判断参数 BigLetter 是否已赋值
                     * @return BigLetter 是否已赋值
                     * 
                     */
                    bool BigLetterHasBeenSet() const;

                    /**
                     * 获取密码包含数字。0：否，1：是
                     * @return Digit 密码包含数字。0：否，1：是
                     * 
                     */
                    int64_t GetDigit() const;

                    /**
                     * 设置密码包含数字。0：否，1：是
                     * @param _digit 密码包含数字。0：否，1：是
                     * 
                     */
                    void SetDigit(const int64_t& _digit);

                    /**
                     * 判断参数 Digit 是否已赋值
                     * @return Digit 是否已赋值
                     * 
                     */
                    bool DigitHasBeenSet() const;

                    /**
                     * 获取密码包含的特殊字符（base64编码），包含：^[-_#();%~!+=]*$
                     * @return Symbol 密码包含的特殊字符（base64编码），包含：^[-_#();%~!+=]*$
                     * 
                     */
                    std::string GetSymbol() const;

                    /**
                     * 设置密码包含的特殊字符（base64编码），包含：^[-_#();%~!+=]*$
                     * @param _symbol 密码包含的特殊字符（base64编码），包含：^[-_#();%~!+=]*$
                     * 
                     */
                    void SetSymbol(const std::string& _symbol);

                    /**
                     * 判断参数 Symbol 是否已赋值
                     * @return Symbol 是否已赋值
                     * 
                     */
                    bool SymbolHasBeenSet() const;

                    /**
                     * 获取改密完成通知。0：不通知 
  1：通知
                     * @return CompleteNotify 改密完成通知。0：不通知 
  1：通知
                     * 
                     */
                    int64_t GetCompleteNotify() const;

                    /**
                     * 设置改密完成通知。0：不通知 
  1：通知
                     * @param _completeNotify 改密完成通知。0：不通知 
  1：通知
                     * 
                     */
                    void SetCompleteNotify(const int64_t& _completeNotify);

                    /**
                     * 判断参数 CompleteNotify 是否已赋值
                     * @return CompleteNotify 是否已赋值
                     * 
                     */
                    bool CompleteNotifyHasBeenSet() const;

                    /**
                     * 获取通知邮箱
                     * @return NotifyEmails 通知邮箱
                     * 
                     */
                    std::vector<std::string> GetNotifyEmails() const;

                    /**
                     * 设置通知邮箱
                     * @param _notifyEmails 通知邮箱
                     * 
                     */
                    void SetNotifyEmails(const std::vector<std::string>& _notifyEmails);

                    /**
                     * 判断参数 NotifyEmails 是否已赋值
                     * @return NotifyEmails 是否已赋值
                     * 
                     */
                    bool NotifyEmailsHasBeenSet() const;

                    /**
                     * 获取加密压缩文件密码
                     * @return FilePassword 加密压缩文件密码
                     * 
                     */
                    std::string GetFilePassword() const;

                    /**
                     * 设置加密压缩文件密码
                     * @param _filePassword 加密压缩文件密码
                     * 
                     */
                    void SetFilePassword(const std::string& _filePassword);

                    /**
                     * 判断参数 FilePassword 是否已赋值
                     * @return FilePassword 是否已赋值
                     * 
                     */
                    bool FilePasswordHasBeenSet() const;

                    /**
                     * 获取所属部门id。“1.2.3”
                     * @return DepartmentId 所属部门id。“1.2.3”
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置所属部门id。“1.2.3”
                     * @param _departmentId 所属部门id。“1.2.3”
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                    /**
                     * 获取任务类型  4-手工执行  5-周期自动执行
                     * @return Type 任务类型  4-手工执行  5-周期自动执行
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置任务类型  4-手工执行  5-周期自动执行
                     * @param _type 任务类型  4-手工执行  5-周期自动执行
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取执行周期，单位天（大于等于 1，小于等于 365）
                     * @return Period 执行周期，单位天（大于等于 1，小于等于 365）
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置执行周期，单位天（大于等于 1，小于等于 365）
                     * @param _period 执行周期，单位天（大于等于 1，小于等于 365）
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取周期任务首次执行时间
                     * @return FirstTime 周期任务首次执行时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置周期任务首次执行时间
                     * @param _firstTime 周期任务首次执行时间
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                private:

                    /**
                     * 任务名
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 资产id数组
                     */
                    std::vector<uint64_t> m_deviceIdSet;
                    bool m_deviceIdSetHasBeenSet;

                    /**
                     * 修改的账户数组
                     */
                    std::vector<std::string> m_accountSet;
                    bool m_accountSetHasBeenSet;

                    /**
                     * 改密方式。1：使用执行账号修改密码；2：修改自身密码
                     */
                    int64_t m_changeMethod;
                    bool m_changeMethodHasBeenSet;

                    /**
                     * 认证生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码
                     */
                    int64_t m_authGenerationStrategy;
                    bool m_authGenerationStrategyHasBeenSet;

                    /**
                     * 执行账号
                     */
                    std::string m_runAccount;
                    bool m_runAccountHasBeenSet;

                    /**
                     * 手动指定密码时必传
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 密码限制长度，长度大于 12 位
                     */
                    int64_t m_passwordLength;
                    bool m_passwordLengthHasBeenSet;

                    /**
                     * 密码包含小写字母。0：否，1：是
                     */
                    int64_t m_smallLetter;
                    bool m_smallLetterHasBeenSet;

                    /**
                     * 密码包含大写字母。0：否，1：是
                     */
                    int64_t m_bigLetter;
                    bool m_bigLetterHasBeenSet;

                    /**
                     * 密码包含数字。0：否，1：是
                     */
                    int64_t m_digit;
                    bool m_digitHasBeenSet;

                    /**
                     * 密码包含的特殊字符（base64编码），包含：^[-_#();%~!+=]*$
                     */
                    std::string m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * 改密完成通知。0：不通知 
  1：通知
                     */
                    int64_t m_completeNotify;
                    bool m_completeNotifyHasBeenSet;

                    /**
                     * 通知邮箱
                     */
                    std::vector<std::string> m_notifyEmails;
                    bool m_notifyEmailsHasBeenSet;

                    /**
                     * 加密压缩文件密码
                     */
                    std::string m_filePassword;
                    bool m_filePasswordHasBeenSet;

                    /**
                     * 所属部门id。“1.2.3”
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 任务类型  4-手工执行  5-周期自动执行
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 执行周期，单位天（大于等于 1，小于等于 365）
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 周期任务首次执行时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_CREATECHANGEPWDTASKREQUEST_H_
