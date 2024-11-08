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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_CHANGEPWDTASKINFO_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_CHANGEPWDTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dasb/v20191018/model/Department.h>
#include <tencentcloud/dasb/v20191018/model/Device.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * 修改密码任务信息
                */
                class ChangePwdTaskInfo : public AbstractModel
                {
                public:
                    ChangePwdTaskInfo();
                    ~ChangePwdTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
                     * @return Id id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置id
                     * @param _id id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取任务id
                     * @return OperationId 任务id
                     * 
                     */
                    std::string GetOperationId() const;

                    /**
                     * 设置任务id
                     * @param _operationId 任务id
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
                     * 获取所属部门信息
                     * @return Department 所属部门信息
                     * 
                     */
                    Department GetDepartment() const;

                    /**
                     * 设置所属部门信息
                     * @param _department 所属部门信息
                     * 
                     */
                    void SetDepartment(const Department& _department);

                    /**
                     * 判断参数 Department 是否已赋值
                     * @return Department 是否已赋值
                     * 
                     */
                    bool DepartmentHasBeenSet() const;

                    /**
                     * 获取改密方式。1：使用执行账号。2：修改自身密码
                     * @return ChangeMethod 改密方式。1：使用执行账号。2：修改自身密码
                     * 
                     */
                    uint64_t GetChangeMethod() const;

                    /**
                     * 设置改密方式。1：使用执行账号。2：修改自身密码
                     * @param _changeMethod 改密方式。1：使用执行账号。2：修改自身密码
                     * 
                     */
                    void SetChangeMethod(const uint64_t& _changeMethod);

                    /**
                     * 判断参数 ChangeMethod 是否已赋值
                     * @return ChangeMethod 是否已赋值
                     * 
                     */
                    bool ChangeMethodHasBeenSet() const;

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
                     * 获取密码生成策略
                     * @return AuthGenerationStrategy 密码生成策略
                     * 
                     */
                    uint64_t GetAuthGenerationStrategy() const;

                    /**
                     * 设置密码生成策略
                     * @param _authGenerationStrategy 密码生成策略
                     * 
                     */
                    void SetAuthGenerationStrategy(const uint64_t& _authGenerationStrategy);

                    /**
                     * 判断参数 AuthGenerationStrategy 是否已赋值
                     * @return AuthGenerationStrategy 是否已赋值
                     * 
                     */
                    bool AuthGenerationStrategyHasBeenSet() const;

                    /**
                     * 获取密码长度
                     * @return PasswordLength 密码长度
                     * 
                     */
                    uint64_t GetPasswordLength() const;

                    /**
                     * 设置密码长度
                     * @param _passwordLength 密码长度
                     * 
                     */
                    void SetPasswordLength(const uint64_t& _passwordLength);

                    /**
                     * 判断参数 PasswordLength 是否已赋值
                     * @return PasswordLength 是否已赋值
                     * 
                     */
                    bool PasswordLengthHasBeenSet() const;

                    /**
                     * 获取包含小写字母
                     * @return SmallLetter 包含小写字母
                     * 
                     */
                    uint64_t GetSmallLetter() const;

                    /**
                     * 设置包含小写字母
                     * @param _smallLetter 包含小写字母
                     * 
                     */
                    void SetSmallLetter(const uint64_t& _smallLetter);

                    /**
                     * 判断参数 SmallLetter 是否已赋值
                     * @return SmallLetter 是否已赋值
                     * 
                     */
                    bool SmallLetterHasBeenSet() const;

                    /**
                     * 获取包含大写字母
                     * @return BigLetter 包含大写字母
                     * 
                     */
                    uint64_t GetBigLetter() const;

                    /**
                     * 设置包含大写字母
                     * @param _bigLetter 包含大写字母
                     * 
                     */
                    void SetBigLetter(const uint64_t& _bigLetter);

                    /**
                     * 判断参数 BigLetter 是否已赋值
                     * @return BigLetter 是否已赋值
                     * 
                     */
                    bool BigLetterHasBeenSet() const;

                    /**
                     * 获取包含数字
                     * @return Digit 包含数字
                     * 
                     */
                    uint64_t GetDigit() const;

                    /**
                     * 设置包含数字
                     * @param _digit 包含数字
                     * 
                     */
                    void SetDigit(const uint64_t& _digit);

                    /**
                     * 判断参数 Digit 是否已赋值
                     * @return Digit 是否已赋值
                     * 
                     */
                    bool DigitHasBeenSet() const;

                    /**
                     * 获取包含的特殊字符，base64
                     * @return Symbol 包含的特殊字符，base64
                     * 
                     */
                    std::string GetSymbol() const;

                    /**
                     * 设置包含的特殊字符，base64
                     * @param _symbol 包含的特殊字符，base64
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
                     * 获取改密完成通知。0-通知，1-不通知
                     * @return CompleteNotify 改密完成通知。0-通知，1-不通知
                     * 
                     */
                    uint64_t GetCompleteNotify() const;

                    /**
                     * 设置改密完成通知。0-通知，1-不通知
                     * @param _completeNotify 改密完成通知。0-通知，1-不通知
                     * 
                     */
                    void SetCompleteNotify(const uint64_t& _completeNotify);

                    /**
                     * 判断参数 CompleteNotify 是否已赋值
                     * @return CompleteNotify 是否已赋值
                     * 
                     */
                    bool CompleteNotifyHasBeenSet() const;

                    /**
                     * 获取通知人邮箱
                     * @return NotifyEmails 通知人邮箱
                     * 
                     */
                    std::vector<std::string> GetNotifyEmails() const;

                    /**
                     * 设置通知人邮箱
                     * @param _notifyEmails 通知人邮箱
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
                     * 获取加密附件密码
                     * @return FilePassword 加密附件密码
                     * 
                     */
                    std::string GetFilePassword() const;

                    /**
                     * 设置加密附件密码
                     * @param _filePassword 加密附件密码
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
                     * 获取需要改密的账户
                     * @return AccountSet 需要改密的账户
                     * 
                     */
                    std::vector<std::string> GetAccountSet() const;

                    /**
                     * 设置需要改密的账户
                     * @param _accountSet 需要改密的账户
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
                     * 获取需要改密的主机
                     * @return DeviceSet 需要改密的主机
                     * 
                     */
                    std::vector<Device> GetDeviceSet() const;

                    /**
                     * 设置需要改密的主机
                     * @param _deviceSet 需要改密的主机
                     * 
                     */
                    void SetDeviceSet(const std::vector<Device>& _deviceSet);

                    /**
                     * 判断参数 DeviceSet 是否已赋值
                     * @return DeviceSet 是否已赋值
                     * 
                     */
                    bool DeviceSetHasBeenSet() const;

                    /**
                     * 获取任务类型：4手动，5自动
                     * @return Type 任务类型：4手动，5自动
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置任务类型：4手动，5自动
                     * @param _type 任务类型：4手动，5自动
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
                     * 获取周期
                     * @return Period 周期
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置周期
                     * @param _period 周期
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
                     * 获取首次执行时间
                     * @return FirstTime 首次执行时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置首次执行时间
                     * @param _firstTime 首次执行时间
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取下次执行时间
                     * @return NextTime 下次执行时间
                     * 
                     */
                    std::string GetNextTime() const;

                    /**
                     * 设置下次执行时间
                     * @param _nextTime 下次执行时间
                     * 
                     */
                    void SetNextTime(const std::string& _nextTime);

                    /**
                     * 判断参数 NextTime 是否已赋值
                     * @return NextTime 是否已赋值
                     * 
                     */
                    bool NextTimeHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 任务id
                     */
                    std::string m_operationId;
                    bool m_operationIdHasBeenSet;

                    /**
                     * 任务名
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 所属部门信息
                     */
                    Department m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * 改密方式。1：使用执行账号。2：修改自身密码
                     */
                    uint64_t m_changeMethod;
                    bool m_changeMethodHasBeenSet;

                    /**
                     * 执行账号
                     */
                    std::string m_runAccount;
                    bool m_runAccountHasBeenSet;

                    /**
                     * 密码生成策略
                     */
                    uint64_t m_authGenerationStrategy;
                    bool m_authGenerationStrategyHasBeenSet;

                    /**
                     * 密码长度
                     */
                    uint64_t m_passwordLength;
                    bool m_passwordLengthHasBeenSet;

                    /**
                     * 包含小写字母
                     */
                    uint64_t m_smallLetter;
                    bool m_smallLetterHasBeenSet;

                    /**
                     * 包含大写字母
                     */
                    uint64_t m_bigLetter;
                    bool m_bigLetterHasBeenSet;

                    /**
                     * 包含数字
                     */
                    uint64_t m_digit;
                    bool m_digitHasBeenSet;

                    /**
                     * 包含的特殊字符，base64
                     */
                    std::string m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * 改密完成通知。0-通知，1-不通知
                     */
                    uint64_t m_completeNotify;
                    bool m_completeNotifyHasBeenSet;

                    /**
                     * 通知人邮箱
                     */
                    std::vector<std::string> m_notifyEmails;
                    bool m_notifyEmailsHasBeenSet;

                    /**
                     * 加密附件密码
                     */
                    std::string m_filePassword;
                    bool m_filePasswordHasBeenSet;

                    /**
                     * 需要改密的账户
                     */
                    std::vector<std::string> m_accountSet;
                    bool m_accountSetHasBeenSet;

                    /**
                     * 需要改密的主机
                     */
                    std::vector<Device> m_deviceSet;
                    bool m_deviceSetHasBeenSet;

                    /**
                     * 任务类型：4手动，5自动
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 周期
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 首次执行时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 下次执行时间
                     */
                    std::string m_nextTime;
                    bool m_nextTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_CHANGEPWDTASKINFO_H_
