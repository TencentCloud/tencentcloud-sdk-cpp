/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_CREATECHANGEPWDTASKREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_CREATECHANGEPWDTASKREQUEST_H_

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
                * CreateChangePwdTask请求参数结构体
                */
                class CreateChangePwdTaskRequest : public AbstractModel
                {
                public:
                    CreateChangePwdTaskRequest();
                    ~CreateChangePwdTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务名</p>
                     * @return TaskName <p>任务名</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名</p>
                     * @param _taskName <p>任务名</p>
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
                     * 获取<p>资产id数组</p>
                     * @return DeviceIdSet <p>资产id数组</p>
                     * 
                     */
                    std::vector<uint64_t> GetDeviceIdSet() const;

                    /**
                     * 设置<p>资产id数组</p>
                     * @param _deviceIdSet <p>资产id数组</p>
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
                     * 获取<p>修改的账户数组</p>
                     * @return AccountSet <p>修改的账户数组</p>
                     * 
                     */
                    std::vector<std::string> GetAccountSet() const;

                    /**
                     * 设置<p>修改的账户数组</p>
                     * @param _accountSet <p>修改的账户数组</p>
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
                     * 获取<p>改密方式。1：使用执行账号修改密码；2：修改自身密码</p>
                     * @return ChangeMethod <p>改密方式。1：使用执行账号修改密码；2：修改自身密码</p>
                     * 
                     */
                    int64_t GetChangeMethod() const;

                    /**
                     * 设置<p>改密方式。1：使用执行账号修改密码；2：修改自身密码</p>
                     * @param _changeMethod <p>改密方式。1：使用执行账号修改密码；2：修改自身密码</p>
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
                     * 获取<p>认证生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码</p>
                     * @return AuthGenerationStrategy <p>认证生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码</p>
                     * 
                     */
                    int64_t GetAuthGenerationStrategy() const;

                    /**
                     * 设置<p>认证生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码</p>
                     * @param _authGenerationStrategy <p>认证生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码</p>
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
                     * 获取<p>执行账号</p>
                     * @return RunAccount <p>执行账号</p>
                     * 
                     */
                    std::string GetRunAccount() const;

                    /**
                     * 设置<p>执行账号</p>
                     * @param _runAccount <p>执行账号</p>
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
                     * 获取<p>手动指定密码时必传</p>
                     * @return Password <p>手动指定密码时必传</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>手动指定密码时必传</p>
                     * @param _password <p>手动指定密码时必传</p>
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
                     * 获取<p>密码限制长度，长度大于 12 位</p>
                     * @return PasswordLength <p>密码限制长度，长度大于 12 位</p>
                     * 
                     */
                    int64_t GetPasswordLength() const;

                    /**
                     * 设置<p>密码限制长度，长度大于 12 位</p>
                     * @param _passwordLength <p>密码限制长度，长度大于 12 位</p>
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
                     * 获取<p>密码包含小写字母。0：否，1：是</p>
                     * @return SmallLetter <p>密码包含小写字母。0：否，1：是</p>
                     * 
                     */
                    int64_t GetSmallLetter() const;

                    /**
                     * 设置<p>密码包含小写字母。0：否，1：是</p>
                     * @param _smallLetter <p>密码包含小写字母。0：否，1：是</p>
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
                     * 获取<p>密码包含大写字母。0：否，1：是</p>
                     * @return BigLetter <p>密码包含大写字母。0：否，1：是</p>
                     * 
                     */
                    int64_t GetBigLetter() const;

                    /**
                     * 设置<p>密码包含大写字母。0：否，1：是</p>
                     * @param _bigLetter <p>密码包含大写字母。0：否，1：是</p>
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
                     * 获取<p>密码包含数字。0：否，1：是</p>
                     * @return Digit <p>密码包含数字。0：否，1：是</p>
                     * 
                     */
                    int64_t GetDigit() const;

                    /**
                     * 设置<p>密码包含数字。0：否，1：是</p>
                     * @param _digit <p>密码包含数字。0：否，1：是</p>
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
                     * 获取<p>密码包含的特殊字符（base64编码），包含：^[-_#();%~!+=]*$</p>
                     * @return Symbol <p>密码包含的特殊字符（base64编码），包含：^[-_#();%~!+=]*$</p>
                     * 
                     */
                    std::string GetSymbol() const;

                    /**
                     * 设置<p>密码包含的特殊字符（base64编码），包含：^[-_#();%~!+=]*$</p>
                     * @param _symbol <p>密码包含的特殊字符（base64编码），包含：^[-_#();%~!+=]*$</p>
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
                     * 获取<p>改密完成通知。0：不通知<br>  1：通知</p>
                     * @return CompleteNotify <p>改密完成通知。0：不通知<br>  1：通知</p>
                     * 
                     */
                    int64_t GetCompleteNotify() const;

                    /**
                     * 设置<p>改密完成通知。0：不通知<br>  1：通知</p>
                     * @param _completeNotify <p>改密完成通知。0：不通知<br>  1：通知</p>
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
                     * 获取<p>通知邮箱</p>
                     * @return NotifyEmails <p>通知邮箱</p>
                     * 
                     */
                    std::vector<std::string> GetNotifyEmails() const;

                    /**
                     * 设置<p>通知邮箱</p>
                     * @param _notifyEmails <p>通知邮箱</p>
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
                     * 获取<p>加密压缩文件密码</p>
                     * @return FilePassword <p>加密压缩文件密码</p>
                     * 
                     */
                    std::string GetFilePassword() const;

                    /**
                     * 设置<p>加密压缩文件密码</p>
                     * @param _filePassword <p>加密压缩文件密码</p>
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
                     * 获取<p>所属部门id。“1.2.3”</p>
                     * @return DepartmentId <p>所属部门id。“1.2.3”</p>
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置<p>所属部门id。“1.2.3”</p>
                     * @param _departmentId <p>所属部门id。“1.2.3”</p>
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
                     * 获取<p>任务类型  4-手工执行  5-周期自动执行</p>
                     * @return Type <p>任务类型  4-手工执行  5-周期自动执行</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>任务类型  4-手工执行  5-周期自动执行</p>
                     * @param _type <p>任务类型  4-手工执行  5-周期自动执行</p>
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
                     * 获取<p>执行周期，单位天（大于等于 1，小于等于 365）</p>
                     * @return Period <p>执行周期，单位天（大于等于 1，小于等于 365）</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>执行周期，单位天（大于等于 1，小于等于 365）</p>
                     * @param _period <p>执行周期，单位天（大于等于 1，小于等于 365）</p>
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
                     * 获取<p>周期任务首次执行时间</p>
                     * @return FirstTime <p>周期任务首次执行时间</p>
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置<p>周期任务首次执行时间</p>
                     * @param _firstTime <p>周期任务首次执行时间</p>
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
                     * 获取<p>改密任务类别</p><p>枚举值：</p><ul><li>0： Linux 类型改密任务</li><li>1： Windows 类型改密任务</li></ul><p>默认值：0</p>
                     * @return Category <p>改密任务类别</p><p>枚举值：</p><ul><li>0： Linux 类型改密任务</li><li>1： Windows 类型改密任务</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetCategory() const;

                    /**
                     * 设置<p>改密任务类别</p><p>枚举值：</p><ul><li>0： Linux 类型改密任务</li><li>1： Windows 类型改密任务</li></ul><p>默认值：0</p>
                     * @param _category <p>改密任务类别</p><p>枚举值：</p><ul><li>0： Linux 类型改密任务</li><li>1： Windows 类型改密任务</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetCategory(const int64_t& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>改密任务协议类型</p><p>枚举值：</p><ul><li>0： 未定义，Linux改密任务类型默认值</li><li>1： Windows OpenSSH 协议</li></ul><p>默认值：0</p>
                     * @return Protocol <p>改密任务协议类型</p><p>枚举值：</p><ul><li>0： 未定义，Linux改密任务类型默认值</li><li>1： Windows OpenSSH 协议</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetProtocol() const;

                    /**
                     * 设置<p>改密任务协议类型</p><p>枚举值：</p><ul><li>0： 未定义，Linux改密任务类型默认值</li><li>1： Windows OpenSSH 协议</li></ul><p>默认值：0</p>
                     * @param _protocol <p>改密任务协议类型</p><p>枚举值：</p><ul><li>0： 未定义，Linux改密任务类型默认值</li><li>1： Windows OpenSSH 协议</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetProtocol(const int64_t& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>改密协议端口号. Linux 改密类型协议端口号需设置为0</p><p>取值范围：[0, 65535]</p><p>默认值：0</p>
                     * @return Port <p>改密协议端口号. Linux 改密类型协议端口号需设置为0</p><p>取值范围：[0, 65535]</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>改密协议端口号. Linux 改密类型协议端口号需设置为0</p><p>取值范围：[0, 65535]</p><p>默认值：0</p>
                     * @param _port <p>改密协议端口号. Linux 改密类型协议端口号需设置为0</p><p>取值范围：[0, 65535]</p><p>默认值：0</p>
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * <p>任务名</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>资产id数组</p>
                     */
                    std::vector<uint64_t> m_deviceIdSet;
                    bool m_deviceIdSetHasBeenSet;

                    /**
                     * <p>修改的账户数组</p>
                     */
                    std::vector<std::string> m_accountSet;
                    bool m_accountSetHasBeenSet;

                    /**
                     * <p>改密方式。1：使用执行账号修改密码；2：修改自身密码</p>
                     */
                    int64_t m_changeMethod;
                    bool m_changeMethodHasBeenSet;

                    /**
                     * <p>认证生成方式。 1:自动生成相同密码 2:自动生成不同密码 3:手动指定相同密码</p>
                     */
                    int64_t m_authGenerationStrategy;
                    bool m_authGenerationStrategyHasBeenSet;

                    /**
                     * <p>执行账号</p>
                     */
                    std::string m_runAccount;
                    bool m_runAccountHasBeenSet;

                    /**
                     * <p>手动指定密码时必传</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>密码限制长度，长度大于 12 位</p>
                     */
                    int64_t m_passwordLength;
                    bool m_passwordLengthHasBeenSet;

                    /**
                     * <p>密码包含小写字母。0：否，1：是</p>
                     */
                    int64_t m_smallLetter;
                    bool m_smallLetterHasBeenSet;

                    /**
                     * <p>密码包含大写字母。0：否，1：是</p>
                     */
                    int64_t m_bigLetter;
                    bool m_bigLetterHasBeenSet;

                    /**
                     * <p>密码包含数字。0：否，1：是</p>
                     */
                    int64_t m_digit;
                    bool m_digitHasBeenSet;

                    /**
                     * <p>密码包含的特殊字符（base64编码），包含：^[-_#();%~!+=]*$</p>
                     */
                    std::string m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * <p>改密完成通知。0：不通知<br>  1：通知</p>
                     */
                    int64_t m_completeNotify;
                    bool m_completeNotifyHasBeenSet;

                    /**
                     * <p>通知邮箱</p>
                     */
                    std::vector<std::string> m_notifyEmails;
                    bool m_notifyEmailsHasBeenSet;

                    /**
                     * <p>加密压缩文件密码</p>
                     */
                    std::string m_filePassword;
                    bool m_filePasswordHasBeenSet;

                    /**
                     * <p>所属部门id。“1.2.3”</p>
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * <p>任务类型  4-手工执行  5-周期自动执行</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>执行周期，单位天（大于等于 1，小于等于 365）</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>周期任务首次执行时间</p>
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * <p>改密任务类别</p><p>枚举值：</p><ul><li>0： Linux 类型改密任务</li><li>1： Windows 类型改密任务</li></ul><p>默认值：0</p>
                     */
                    int64_t m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>改密任务协议类型</p><p>枚举值：</p><ul><li>0： 未定义，Linux改密任务类型默认值</li><li>1： Windows OpenSSH 协议</li></ul><p>默认值：0</p>
                     */
                    int64_t m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>改密协议端口号. Linux 改密类型协议端口号需设置为0</p><p>取值范围：[0, 65535]</p><p>默认值：0</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_CREATECHANGEPWDTASKREQUEST_H_
