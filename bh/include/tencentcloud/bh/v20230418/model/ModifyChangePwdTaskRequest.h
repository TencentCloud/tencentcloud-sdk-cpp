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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYCHANGEPWDTASKREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYCHANGEPWDTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyChangePwdTask请求参数结构体
                */
                class ModifyChangePwdTaskRequest : public AbstractModel
                {
                public:
                    ModifyChangePwdTaskRequest();
                    ~ModifyChangePwdTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取改密任务id
                     * @return OperationId 改密任务id
                     * 
                     */
                    std::string GetOperationId() const;

                    /**
                     * 设置改密任务id
                     * @param _operationId 改密任务id
                     * 
                     */
                    void SetOperationId(const std::string& _operationId);

                    /**
                     * 判断参数 OperationId 是否已赋值
                     * @return OperationId 是否已赋值
                     * 
                     */
                    bool OperationIdHasBeenSet() const;

                    /**
                     * 获取改密资产id列表
                     * @return DeviceIdSet 改密资产id列表
                     * 
                     */
                    std::vector<uint64_t> GetDeviceIdSet() const;

                    /**
                     * 设置改密资产id列表
                     * @param _deviceIdSet 改密资产id列表
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
                     * 获取改密资产的账号列表
                     * @return AccountSet 改密资产的账号列表
                     * 
                     */
                    std::vector<std::string> GetAccountSet() const;

                    /**
                     * 设置改密资产的账号列表
                     * @param _accountSet 改密资产的账号列表
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
                     * 获取修改类型：1：修改任务信息  2：关联任务资产账号
                     * @return ModifyType 修改类型：1：修改任务信息  2：关联任务资产账号
                     * 
                     */
                    uint64_t GetModifyType() const;

                    /**
                     * 设置修改类型：1：修改任务信息  2：关联任务资产账号
                     * @param _modifyType 修改类型：1：修改任务信息  2：关联任务资产账号
                     * 
                     */
                    void SetModifyType(const uint64_t& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

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
                     * 获取密码生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码
                     * @return AuthGenerationStrategy 密码生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码
                     * 
                     */
                    int64_t GetAuthGenerationStrategy() const;

                    /**
                     * 设置密码生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码
                     * @param _authGenerationStrategy 密码生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码
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
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
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
                     * 获取所属部门ID，"1,2,3"
                     * @return DepartmentId 所属部门ID，"1,2,3"
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置所属部门ID，"1,2,3"
                     * @param _departmentId 所属部门ID，"1,2,3"
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
                     * 获取任务的执行账号	
                     * @return RunAccount 任务的执行账号	
                     * 
                     */
                    std::string GetRunAccount() const;

                    /**
                     * 设置任务的执行账号	
                     * @param _runAccount 任务的执行账号	
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
                     * 获取密码，手动指定密码时必传。
                     * @return Password 密码，手动指定密码时必传。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码，手动指定密码时必传。
                     * @param _password 密码，手动指定密码时必传。
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
                     * 获取密码限制长度，自动生成密码必传。	
                     * @return PasswordLength 密码限制长度，自动生成密码必传。	
                     * 
                     */
                    int64_t GetPasswordLength() const;

                    /**
                     * 设置密码限制长度，自动生成密码必传。	
                     * @param _passwordLength 密码限制长度，自动生成密码必传。	
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
                     * 获取密码包含小写字母，0：否，1：是。
                     * @return SmallLetter 密码包含小写字母，0：否，1：是。
                     * 
                     */
                    int64_t GetSmallLetter() const;

                    /**
                     * 设置密码包含小写字母，0：否，1：是。
                     * @param _smallLetter 密码包含小写字母，0：否，1：是。
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
                     * 获取密码包含大写字母，0：否，1：是。
                     * @return BigLetter 密码包含大写字母，0：否，1：是。
                     * 
                     */
                    int64_t GetBigLetter() const;

                    /**
                     * 设置密码包含大写字母，0：否，1：是。
                     * @param _bigLetter 密码包含大写字母，0：否，1：是。
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
                     * 获取密码包含数字，0：否，1：是。
                     * @return Digit 密码包含数字，0：否，1：是。
                     * 
                     */
                    int64_t GetDigit() const;

                    /**
                     * 设置密码包含数字，0：否，1：是。
                     * @param _digit 密码包含数字，0：否，1：是。
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
                     * 获取改密完成通知。0：不通知 1：通知
                     * @return CompleteNotify 改密完成通知。0：不通知 1：通知
                     * 
                     */
                    int64_t GetCompleteNotify() const;

                    /**
                     * 设置改密完成通知。0：不通知 1：通知
                     * @param _completeNotify 改密完成通知。0：不通知 1：通知
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
                     * 获取任务类型， 4：手工执行  5：周期自动执行
                     * @return Type 任务类型， 4：手工执行  5：周期自动执行
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置任务类型， 4：手工执行  5：周期自动执行
                     * @param _type 任务类型， 4：手工执行  5：周期自动执行
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
                     * 获取周期任务周期，单位天（大于等于 1，小于等于 365）
                     * @return Period 周期任务周期，单位天（大于等于 1，小于等于 365）
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置周期任务周期，单位天（大于等于 1，小于等于 365）
                     * @param _period 周期任务周期，单位天（大于等于 1，小于等于 365）
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
                     * 改密任务id
                     */
                    std::string m_operationId;
                    bool m_operationIdHasBeenSet;

                    /**
                     * 改密资产id列表
                     */
                    std::vector<uint64_t> m_deviceIdSet;
                    bool m_deviceIdSetHasBeenSet;

                    /**
                     * 改密资产的账号列表
                     */
                    std::vector<std::string> m_accountSet;
                    bool m_accountSetHasBeenSet;

                    /**
                     * 修改类型：1：修改任务信息  2：关联任务资产账号
                     */
                    uint64_t m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * 改密方式。1：使用执行账号修改密码；2：修改自身密码
                     */
                    int64_t m_changeMethod;
                    bool m_changeMethodHasBeenSet;

                    /**
                     * 密码生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码
                     */
                    int64_t m_authGenerationStrategy;
                    bool m_authGenerationStrategyHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 所属部门ID，"1,2,3"
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 任务的执行账号	
                     */
                    std::string m_runAccount;
                    bool m_runAccountHasBeenSet;

                    /**
                     * 密码，手动指定密码时必传。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 密码限制长度，自动生成密码必传。	
                     */
                    int64_t m_passwordLength;
                    bool m_passwordLengthHasBeenSet;

                    /**
                     * 密码包含小写字母，0：否，1：是。
                     */
                    int64_t m_smallLetter;
                    bool m_smallLetterHasBeenSet;

                    /**
                     * 密码包含大写字母，0：否，1：是。
                     */
                    int64_t m_bigLetter;
                    bool m_bigLetterHasBeenSet;

                    /**
                     * 密码包含数字，0：否，1：是。
                     */
                    int64_t m_digit;
                    bool m_digitHasBeenSet;

                    /**
                     * 密码包含的特殊字符（base64编码），包含：^[-_#();%~!+=]*$
                     */
                    std::string m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * 改密完成通知。0：不通知 1：通知
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
                     * 任务类型， 4：手工执行  5：周期自动执行
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 周期任务周期，单位天（大于等于 1，小于等于 365）
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

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYCHANGEPWDTASKREQUEST_H_
