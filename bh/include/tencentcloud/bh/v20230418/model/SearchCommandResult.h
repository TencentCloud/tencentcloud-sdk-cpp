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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SEARCHCOMMANDRESULT_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SEARCHCOMMANDRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 命令执行检索结果
                */
                class SearchCommandResult : public AbstractModel
                {
                public:
                    SearchCommandResult();
                    ~SearchCommandResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取姓名
                     * @return RealName 姓名
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置姓名
                     * @param _realName 姓名
                     * 
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     * 
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取资产ID
                     * @return InstanceId 资产ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资产ID
                     * @param _instanceId 资产ID
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
                     * 获取资产名称
                     * @return DeviceName 资产名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置资产名称
                     * @param _deviceName 资产名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取资产公网IP
                     * @return PublicIp 资产公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置资产公网IP
                     * @param _publicIp 资产公网IP
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取资产内网IP
                     * @return PrivateIp 资产内网IP
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置资产内网IP
                     * @param _privateIp 资产内网IP
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

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
                     * 获取命令执行情况，1--允许，2--拒绝
                     * @return Action 命令执行情况，1--允许，2--拒绝
                     * 
                     */
                    uint64_t GetAction() const;

                    /**
                     * 设置命令执行情况，1--允许，2--拒绝
                     * @param _action 命令执行情况，1--允许，2--拒绝
                     * 
                     */
                    void SetAction(const uint64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取命令所属的会话ID
                     * @return Sid 命令所属的会话ID
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置命令所属的会话ID
                     * @param _sid 命令所属的会话ID
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
                     * 获取账号
                     * @return Account 账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置账号
                     * @param _account 账号
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
                     * 获取该命令所属会话的会话开始时间（使用SessionTime）
                     * @return SessTime 该命令所属会话的会话开始时间（使用SessionTime）
                     * 
                     */
                    std::string GetSessTime() const;

                    /**
                     * 设置该命令所属会话的会话开始时间（使用SessionTime）
                     * @param _sessTime 该命令所属会话的会话开始时间（使用SessionTime）
                     * 
                     */
                    void SetSessTime(const std::string& _sessTime);

                    /**
                     * 判断参数 SessTime 是否已赋值
                     * @return SessTime 是否已赋值
                     * 
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
                     * 获取部门id
                     * @return UserDepartmentId 部门id
                     * 
                     */
                    std::string GetUserDepartmentId() const;

                    /**
                     * 设置部门id
                     * @param _userDepartmentId 部门id
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
                     * 获取用户部门名称
                     * @return UserDepartmentName 用户部门名称
                     * 
                     */
                    std::string GetUserDepartmentName() const;

                    /**
                     * 设置用户部门名称
                     * @param _userDepartmentName 用户部门名称
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
                     * 获取设备部门名称
                     * @return DeviceDepartmentName 设备部门名称
                     * 
                     */
                    std::string GetDeviceDepartmentName() const;

                    /**
                     * 设置设备部门名称
                     * @param _deviceDepartmentName 设备部门名称
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

                    /**
                     * 获取资产类型
                     * @return DeviceKind 资产类型
                     * 
                     */
                    std::string GetDeviceKind() const;

                    /**
                     * 设置资产类型
                     * @param _deviceKind 资产类型
                     * 
                     */
                    void SetDeviceKind(const std::string& _deviceKind);

                    /**
                     * 判断参数 DeviceKind 是否已赋值
                     * @return DeviceKind 是否已赋值
                     * 
                     */
                    bool DeviceKindHasBeenSet() const;

                private:

                    /**
                     * 命令输入的时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 资产ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 资产名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 资产公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 资产内网IP
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 命令
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * 命令执行情况，1--允许，2--拒绝
                     */
                    uint64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 命令所属的会话ID
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * 命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     */
                    uint64_t m_timeOffset;
                    bool m_timeOffsetHasBeenSet;

                    /**
                     * 账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

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
                     * 该命令所属会话的会话开始时间（使用SessionTime）
                     */
                    std::string m_sessTime;
                    bool m_sessTimeHasBeenSet;

                    /**
                     * 复核时间
                     */
                    std::string m_confirmTime;
                    bool m_confirmTimeHasBeenSet;

                    /**
                     * 部门id
                     */
                    std::string m_userDepartmentId;
                    bool m_userDepartmentIdHasBeenSet;

                    /**
                     * 用户部门名称
                     */
                    std::string m_userDepartmentName;
                    bool m_userDepartmentNameHasBeenSet;

                    /**
                     * 设备部门id
                     */
                    std::string m_deviceDepartmentId;
                    bool m_deviceDepartmentIdHasBeenSet;

                    /**
                     * 设备部门名称
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

                    /**
                     * 资产类型
                     */
                    std::string m_deviceKind;
                    bool m_deviceKindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHCOMMANDRESULT_H_
