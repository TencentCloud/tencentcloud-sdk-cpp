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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_COMMAND_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_COMMAND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 命令集合
                */
                class Command : public AbstractModel
                {
                public:
                    Command();
                    ~Command() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命令
                     * @return Cmd 命令
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置命令
                     * @param _cmd 命令
                     * 
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取命令输入的时间
                     * @return Time 命令输入的时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置命令输入的时间
                     * @param _time 命令输入的时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     * @return TimeOffset 命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     * 
                     */
                    uint64_t GetTimeOffset() const;

                    /**
                     * 设置命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     * @param _timeOffset 命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     * 
                     */
                    void SetTimeOffset(const uint64_t& _timeOffset);

                    /**
                     * 判断参数 TimeOffset 是否已赋值
                     * @return TimeOffset 是否已赋值
                     * 
                     */
                    bool TimeOffsetHasBeenSet() const;

                    /**
                     * 获取命令执行情况，1--允许，2--拒绝，3--确认
                     * @return Action 命令执行情况，1--允许，2--拒绝，3--确认
                     * 
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置命令执行情况，1--允许，2--拒绝，3--确认
                     * @param _action 命令执行情况，1--允许，2--拒绝，3--确认
                     * 
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取会话id
                     * @return Sid 会话id
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置会话id
                     * @param _sid 会话id
                     * 
                     */
                    void SetSid(const std::string& _sid);

                    /**
                     * 判断参数 Sid 是否已赋值
                     * @return Sid 是否已赋值
                     * 
                     */
                    bool SidHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取设备account
                     * @return Account 设备account
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置设备account
                     * @param _account 设备account
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取设备ip
                     * @return InstanceId 设备ip
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置设备ip
                     * @param _instanceId 设备ip
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取source ip
                     * @return FromIp source ip
                     * 
                     */
                    std::string GetFromIp() const;

                    /**
                     * 设置source ip
                     * @param _fromIp source ip
                     * 
                     */
                    void SetFromIp(const std::string& _fromIp);

                    /**
                     * 判断参数 FromIp 是否已赋值
                     * @return FromIp 是否已赋值
                     * 
                     */
                    bool FromIpHasBeenSet() const;

                    /**
                     * 获取该命令所属会话的会话开始时间
                     * @return SessionTime 该命令所属会话的会话开始时间
                     * 
                     */
                    std::string GetSessionTime() const;

                    /**
                     * 设置该命令所属会话的会话开始时间
                     * @param _sessionTime 该命令所属会话的会话开始时间
                     * 
                     */
                    void SetSessionTime(const std::string& _sessionTime);

                    /**
                     * 判断参数 SessionTime 是否已赋值
                     * @return SessionTime 是否已赋值
                     * 
                     */
                    bool SessionTimeHasBeenSet() const;

                    /**
                     * 获取该命令所属会话的会话开始时间
                     * @return SessTime 该命令所属会话的会话开始时间
                     * @deprecated
                     */
                    std::string GetSessTime() const;

                    /**
                     * 设置该命令所属会话的会话开始时间
                     * @param _sessTime 该命令所属会话的会话开始时间
                     * @deprecated
                     */
                    void SetSessTime(const std::string& _sessTime);

                    /**
                     * 判断参数 SessTime 是否已赋值
                     * @return SessTime 是否已赋值
                     * @deprecated
                     */
                    bool SessTimeHasBeenSet() const;

                    /**
                     * 获取复核时间
                     * @return ConfirmTime 复核时间
                     * 
                     */
                    std::string GetConfirmTime() const;

                    /**
                     * 设置复核时间
                     * @param _confirmTime 复核时间
                     * 
                     */
                    void SetConfirmTime(const std::string& _confirmTime);

                    /**
                     * 判断参数 ConfirmTime 是否已赋值
                     * @return ConfirmTime 是否已赋值
                     * 
                     */
                    bool ConfirmTimeHasBeenSet() const;

                    /**
                     * 获取用户部门id
                     * @return UserDepartmentId 用户部门id
                     * 
                     */
                    std::string GetUserDepartmentId() const;

                    /**
                     * 设置用户部门id
                     * @param _userDepartmentId 用户部门id
                     * 
                     */
                    void SetUserDepartmentId(const std::string& _userDepartmentId);

                    /**
                     * 判断参数 UserDepartmentId 是否已赋值
                     * @return UserDepartmentId 是否已赋值
                     * 
                     */
                    bool UserDepartmentIdHasBeenSet() const;

                    /**
                     * 获取用户部门name
                     * @return UserDepartmentName 用户部门name
                     * 
                     */
                    std::string GetUserDepartmentName() const;

                    /**
                     * 设置用户部门name
                     * @param _userDepartmentName 用户部门name
                     * 
                     */
                    void SetUserDepartmentName(const std::string& _userDepartmentName);

                    /**
                     * 判断参数 UserDepartmentName 是否已赋值
                     * @return UserDepartmentName 是否已赋值
                     * 
                     */
                    bool UserDepartmentNameHasBeenSet() const;

                    /**
                     * 获取设备部门id
                     * @return DeviceDepartmentId 设备部门id
                     * 
                     */
                    std::string GetDeviceDepartmentId() const;

                    /**
                     * 设置设备部门id
                     * @param _deviceDepartmentId 设备部门id
                     * 
                     */
                    void SetDeviceDepartmentId(const std::string& _deviceDepartmentId);

                    /**
                     * 判断参数 DeviceDepartmentId 是否已赋值
                     * @return DeviceDepartmentId 是否已赋值
                     * 
                     */
                    bool DeviceDepartmentIdHasBeenSet() const;

                    /**
                     * 获取设备部门name
                     * @return DeviceDepartmentName 设备部门name
                     * 
                     */
                    std::string GetDeviceDepartmentName() const;

                    /**
                     * 设置设备部门name
                     * @param _deviceDepartmentName 设备部门name
                     * 
                     */
                    void SetDeviceDepartmentName(const std::string& _deviceDepartmentName);

                    /**
                     * 判断参数 DeviceDepartmentName 是否已赋值
                     * @return DeviceDepartmentName 是否已赋值
                     * 
                     */
                    bool DeviceDepartmentNameHasBeenSet() const;

                    /**
                     * 获取会话大小
                     * @return Size 会话大小
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置会话大小
                     * @param _size 会话大小
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取签名值
                     * @return SignValue 签名值
                     * 
                     */
                    std::string GetSignValue() const;

                    /**
                     * 设置签名值
                     * @param _signValue 签名值
                     * 
                     */
                    void SetSignValue(const std::string& _signValue);

                    /**
                     * 判断参数 SignValue 是否已赋值
                     * @return SignValue 是否已赋值
                     * 
                     */
                    bool SignValueHasBeenSet() const;

                private:

                    /**
                     * 命令
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * 命令输入的时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     */
                    uint64_t m_timeOffset;
                    bool m_timeOffsetHasBeenSet;

                    /**
                     * 命令执行情况，1--允许，2--拒绝，3--确认
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 会话id
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 设备account
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 设备ip
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * source ip
                     */
                    std::string m_fromIp;
                    bool m_fromIpHasBeenSet;

                    /**
                     * 该命令所属会话的会话开始时间
                     */
                    std::string m_sessionTime;
                    bool m_sessionTimeHasBeenSet;

                    /**
                     * 该命令所属会话的会话开始时间
                     */
                    std::string m_sessTime;
                    bool m_sessTimeHasBeenSet;

                    /**
                     * 复核时间
                     */
                    std::string m_confirmTime;
                    bool m_confirmTimeHasBeenSet;

                    /**
                     * 用户部门id
                     */
                    std::string m_userDepartmentId;
                    bool m_userDepartmentIdHasBeenSet;

                    /**
                     * 用户部门name
                     */
                    std::string m_userDepartmentName;
                    bool m_userDepartmentNameHasBeenSet;

                    /**
                     * 设备部门id
                     */
                    std::string m_deviceDepartmentId;
                    bool m_deviceDepartmentIdHasBeenSet;

                    /**
                     * 设备部门name
                     */
                    std::string m_deviceDepartmentName;
                    bool m_deviceDepartmentNameHasBeenSet;

                    /**
                     * 会话大小
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 签名值
                     */
                    std::string m_signValue;
                    bool m_signValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_COMMAND_H_
