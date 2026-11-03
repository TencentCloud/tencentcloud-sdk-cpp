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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_CHANGEPWDTASKINFO_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_CHANGEPWDTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/Department.h>
#include <tencentcloud/bh/v20230418/model/Device.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
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
                     * 获取<p>id</p>
                     * @return Id <p>id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>id</p>
                     * @param _id <p>id</p>
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
                     * 获取<p>任务id</p>
                     * @return OperationId <p>任务id</p>
                     * 
                     */
                    std::string GetOperationId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _operationId <p>任务id</p>
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
                     * 获取<p>所属部门信息</p>
                     * @return Department <p>所属部门信息</p>
                     * 
                     */
                    Department GetDepartment() const;

                    /**
                     * 设置<p>所属部门信息</p>
                     * @param _department <p>所属部门信息</p>
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
                     * 获取<p>改密方式。1：使用执行账号。2：修改自身密码</p>
                     * @return ChangeMethod <p>改密方式。1：使用执行账号。2：修改自身密码</p>
                     * 
                     */
                    uint64_t GetChangeMethod() const;

                    /**
                     * 设置<p>改密方式。1：使用执行账号。2：修改自身密码</p>
                     * @param _changeMethod <p>改密方式。1：使用执行账号。2：修改自身密码</p>
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
                     * 获取<p>密码生成策略</p>
                     * @return AuthGenerationStrategy <p>密码生成策略</p>
                     * 
                     */
                    uint64_t GetAuthGenerationStrategy() const;

                    /**
                     * 设置<p>密码生成策略</p>
                     * @param _authGenerationStrategy <p>密码生成策略</p>
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
                     * 获取<p>密码长度</p>
                     * @return PasswordLength <p>密码长度</p>
                     * 
                     */
                    uint64_t GetPasswordLength() const;

                    /**
                     * 设置<p>密码长度</p>
                     * @param _passwordLength <p>密码长度</p>
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
                     * 获取<p>包含小写字母</p>
                     * @return SmallLetter <p>包含小写字母</p>
                     * 
                     */
                    uint64_t GetSmallLetter() const;

                    /**
                     * 设置<p>包含小写字母</p>
                     * @param _smallLetter <p>包含小写字母</p>
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
                     * 获取<p>包含大写字母</p>
                     * @return BigLetter <p>包含大写字母</p>
                     * 
                     */
                    uint64_t GetBigLetter() const;

                    /**
                     * 设置<p>包含大写字母</p>
                     * @param _bigLetter <p>包含大写字母</p>
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
                     * 获取<p>包含数字</p>
                     * @return Digit <p>包含数字</p>
                     * 
                     */
                    uint64_t GetDigit() const;

                    /**
                     * 设置<p>包含数字</p>
                     * @param _digit <p>包含数字</p>
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
                     * 获取<p>包含的特殊字符，入参base64</p>
                     * @return Symbol <p>包含的特殊字符，入参base64</p>
                     * 
                     */
                    std::string GetSymbol() const;

                    /**
                     * 设置<p>包含的特殊字符，入参base64</p>
                     * @param _symbol <p>包含的特殊字符，入参base64</p>
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
                     * 获取<p>改密完成通知。0-通知，1-不通知</p>
                     * @return CompleteNotify <p>改密完成通知。0-通知，1-不通知</p>
                     * 
                     */
                    uint64_t GetCompleteNotify() const;

                    /**
                     * 设置<p>改密完成通知。0-通知，1-不通知</p>
                     * @param _completeNotify <p>改密完成通知。0-通知，1-不通知</p>
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
                     * 获取<p>通知人邮箱</p>
                     * @return NotifyEmails <p>通知人邮箱</p>
                     * 
                     */
                    std::vector<std::string> GetNotifyEmails() const;

                    /**
                     * 设置<p>通知人邮箱</p>
                     * @param _notifyEmails <p>通知人邮箱</p>
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
                     * 获取<p>加密附件密码</p>
                     * @return FilePassword <p>加密附件密码</p>
                     * 
                     */
                    std::string GetFilePassword() const;

                    /**
                     * 设置<p>加密附件密码</p>
                     * @param _filePassword <p>加密附件密码</p>
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
                     * 获取<p>需要改密的账户</p>
                     * @return AccountSet <p>需要改密的账户</p>
                     * 
                     */
                    std::vector<std::string> GetAccountSet() const;

                    /**
                     * 设置<p>需要改密的账户</p>
                     * @param _accountSet <p>需要改密的账户</p>
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
                     * 获取<p>需要改密的主机</p>
                     * @return DeviceSet <p>需要改密的主机</p>
                     * 
                     */
                    std::vector<Device> GetDeviceSet() const;

                    /**
                     * 设置<p>需要改密的主机</p>
                     * @param _deviceSet <p>需要改密的主机</p>
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
                     * 获取<p>任务类型：4手动，5自动</p>
                     * @return Type <p>任务类型：4手动，5自动</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>任务类型：4手动，5自动</p>
                     * @param _type <p>任务类型：4手动，5自动</p>
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
                     * 获取<p>周期</p>
                     * @return Period <p>周期</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>周期</p>
                     * @param _period <p>周期</p>
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
                     * 获取<p>首次执行时间</p>
                     * @return FirstTime <p>首次执行时间</p>
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置<p>首次执行时间</p>
                     * @param _firstTime <p>首次执行时间</p>
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
                     * 获取<p>下次执行时间</p>
                     * @return NextTime <p>下次执行时间</p>
                     * 
                     */
                    std::string GetNextTime() const;

                    /**
                     * 设置<p>下次执行时间</p>
                     * @param _nextTime <p>下次执行时间</p>
                     * 
                     */
                    void SetNextTime(const std::string& _nextTime);

                    /**
                     * 判断参数 NextTime 是否已赋值
                     * @return NextTime 是否已赋值
                     * 
                     */
                    bool NextTimeHasBeenSet() const;

                    /**
                     * 获取<p>上次执行时间</p>
                     * @return LastTime <p>上次执行时间</p>
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置<p>上次执行时间</p>
                     * @param _lastTime <p>上次执行时间</p>
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取<p>改密任务状态，0-待执行，1-执行完成，2-执行失败，3-执行中，4-执行超时</p>
                     * @return Status <p>改密任务状态，0-待执行，1-执行完成，2-执行失败，3-执行中，4-执行超时</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>改密任务状态，0-待执行，1-执行完成，2-执行失败，3-执行中，4-执行超时</p>
                     * @param _status <p>改密任务状态，0-待执行，1-执行完成，2-执行失败，3-执行中，4-执行超时</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取<p>改密任务协议类型</p><p>枚举值：</p><ul><li>0： 未定义，Linux 改密任务类型默认值</li><li>1： Windows OpenSSH 协议</li></ul><p>默认值：0</p>
                     * @return Protocol <p>改密任务协议类型</p><p>枚举值：</p><ul><li>0： 未定义，Linux 改密任务类型默认值</li><li>1： Windows OpenSSH 协议</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetProtocol() const;

                    /**
                     * 设置<p>改密任务协议类型</p><p>枚举值：</p><ul><li>0： 未定义，Linux 改密任务类型默认值</li><li>1： Windows OpenSSH 协议</li></ul><p>默认值：0</p>
                     * @param _protocol <p>改密任务协议类型</p><p>枚举值：</p><ul><li>0： 未定义，Linux 改密任务类型默认值</li><li>1： Windows OpenSSH 协议</li></ul><p>默认值：0</p>
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
                     * 获取<p>改密协议端口号. Linux 改密协议类型端口号值为0</p><p>默认值：0</p>
                     * @return Port <p>改密协议端口号. Linux 改密协议类型端口号值为0</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>改密协议端口号. Linux 改密协议类型端口号值为0</p><p>默认值：0</p>
                     * @param _port <p>改密协议端口号. Linux 改密协议类型端口号值为0</p><p>默认值：0</p>
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
                     * <p>id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>任务id</p>
                     */
                    std::string m_operationId;
                    bool m_operationIdHasBeenSet;

                    /**
                     * <p>任务名</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>所属部门信息</p>
                     */
                    Department m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * <p>改密方式。1：使用执行账号。2：修改自身密码</p>
                     */
                    uint64_t m_changeMethod;
                    bool m_changeMethodHasBeenSet;

                    /**
                     * <p>执行账号</p>
                     */
                    std::string m_runAccount;
                    bool m_runAccountHasBeenSet;

                    /**
                     * <p>密码生成策略</p>
                     */
                    uint64_t m_authGenerationStrategy;
                    bool m_authGenerationStrategyHasBeenSet;

                    /**
                     * <p>密码长度</p>
                     */
                    uint64_t m_passwordLength;
                    bool m_passwordLengthHasBeenSet;

                    /**
                     * <p>包含小写字母</p>
                     */
                    uint64_t m_smallLetter;
                    bool m_smallLetterHasBeenSet;

                    /**
                     * <p>包含大写字母</p>
                     */
                    uint64_t m_bigLetter;
                    bool m_bigLetterHasBeenSet;

                    /**
                     * <p>包含数字</p>
                     */
                    uint64_t m_digit;
                    bool m_digitHasBeenSet;

                    /**
                     * <p>包含的特殊字符，入参base64</p>
                     */
                    std::string m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * <p>改密完成通知。0-通知，1-不通知</p>
                     */
                    uint64_t m_completeNotify;
                    bool m_completeNotifyHasBeenSet;

                    /**
                     * <p>通知人邮箱</p>
                     */
                    std::vector<std::string> m_notifyEmails;
                    bool m_notifyEmailsHasBeenSet;

                    /**
                     * <p>加密附件密码</p>
                     */
                    std::string m_filePassword;
                    bool m_filePasswordHasBeenSet;

                    /**
                     * <p>需要改密的账户</p>
                     */
                    std::vector<std::string> m_accountSet;
                    bool m_accountSetHasBeenSet;

                    /**
                     * <p>需要改密的主机</p>
                     */
                    std::vector<Device> m_deviceSet;
                    bool m_deviceSetHasBeenSet;

                    /**
                     * <p>任务类型：4手动，5自动</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>周期</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>首次执行时间</p>
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * <p>下次执行时间</p>
                     */
                    std::string m_nextTime;
                    bool m_nextTimeHasBeenSet;

                    /**
                     * <p>上次执行时间</p>
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * <p>改密任务状态，0-待执行，1-执行完成，2-执行失败，3-执行中，4-执行超时</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>改密任务类别</p><p>枚举值：</p><ul><li>0： Linux 类型改密任务</li><li>1： Windows 类型改密任务</li></ul><p>默认值：0</p>
                     */
                    int64_t m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>改密任务协议类型</p><p>枚举值：</p><ul><li>0： 未定义，Linux 改密任务类型默认值</li><li>1： Windows OpenSSH 协议</li></ul><p>默认值：0</p>
                     */
                    int64_t m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>改密协议端口号. Linux 改密协议类型端口号值为0</p><p>默认值：0</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_CHANGEPWDTASKINFO_H_
