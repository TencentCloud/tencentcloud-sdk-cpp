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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_COMMAND_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_COMMAND_H_

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
                     * 获取<p>命令</p>
                     * @return Cmd <p>命令</p>
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置<p>命令</p>
                     * @param _cmd <p>命令</p>
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
                     * 获取<p>命令输入的时间</p>
                     * @return Time <p>命令输入的时间</p>
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置<p>命令输入的时间</p>
                     * @param _time <p>命令输入的时间</p>
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
                     * 获取<p>命令执行时间相对于所属会话开始时间的偏移量，单位ms</p>
                     * @return TimeOffset <p>命令执行时间相对于所属会话开始时间的偏移量，单位ms</p>
                     * 
                     */
                    uint64_t GetTimeOffset() const;

                    /**
                     * 设置<p>命令执行时间相对于所属会话开始时间的偏移量，单位ms</p>
                     * @param _timeOffset <p>命令执行时间相对于所属会话开始时间的偏移量，单位ms</p>
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
                     * 获取<p>命令执行情况，1--已放行，2--已阻断，3--确认</p>
                     * @return Action <p>命令执行情况，1--已放行，2--已阻断，3--确认</p>
                     * 
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置<p>命令执行情况，1--已放行，2--已阻断，3--确认</p>
                     * @param _action <p>命令执行情况，1--已放行，2--已阻断，3--确认</p>
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
                     * 获取<p>会话id</p>
                     * @return Sid <p>会话id</p>
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置<p>会话id</p>
                     * @param _sid <p>会话id</p>
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
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
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
                     * 获取<p>设备account</p>
                     * @return Account <p>设备account</p>
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置<p>设备account</p>
                     * @param _account <p>设备account</p>
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
                     * 获取<p>设备ip</p>
                     * @return InstanceId <p>设备ip</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>设备ip</p>
                     * @param _instanceId <p>设备ip</p>
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
                     * 获取<p>source ip</p>
                     * @return FromIp <p>source ip</p>
                     * 
                     */
                    std::string GetFromIp() const;

                    /**
                     * 设置<p>source ip</p>
                     * @param _fromIp <p>source ip</p>
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
                     * 获取<p>该命令所属会话的会话开始时间</p>
                     * @return SessTime <p>该命令所属会话的会话开始时间</p>
                     * 
                     */
                    std::string GetSessTime() const;

                    /**
                     * 设置<p>该命令所属会话的会话开始时间</p>
                     * @param _sessTime <p>该命令所属会话的会话开始时间</p>
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
                     * 获取<p>该命令所属会话的会话开始时间</p>
                     * @return SessionTime <p>该命令所属会话的会话开始时间</p>
                     * 
                     */
                    std::string GetSessionTime() const;

                    /**
                     * 设置<p>该命令所属会话的会话开始时间</p>
                     * @param _sessionTime <p>该命令所属会话的会话开始时间</p>
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
                     * 获取<p>复核时间</p>
                     * @return ConfirmTime <p>复核时间</p>
                     * 
                     */
                    std::string GetConfirmTime() const;

                    /**
                     * 设置<p>复核时间</p>
                     * @param _confirmTime <p>复核时间</p>
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
                     * 获取<p>用户部门id</p>
                     * @return UserDepartmentId <p>用户部门id</p>
                     * 
                     */
                    std::string GetUserDepartmentId() const;

                    /**
                     * 设置<p>用户部门id</p>
                     * @param _userDepartmentId <p>用户部门id</p>
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
                     * 获取<p>用户部门name</p>
                     * @return UserDepartmentName <p>用户部门name</p>
                     * 
                     */
                    std::string GetUserDepartmentName() const;

                    /**
                     * 设置<p>用户部门name</p>
                     * @param _userDepartmentName <p>用户部门name</p>
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
                     * 获取<p>设备部门id</p>
                     * @return DeviceDepartmentId <p>设备部门id</p>
                     * 
                     */
                    std::string GetDeviceDepartmentId() const;

                    /**
                     * 设置<p>设备部门id</p>
                     * @param _deviceDepartmentId <p>设备部门id</p>
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
                     * 获取<p>设备部门name</p>
                     * @return DeviceDepartmentName <p>设备部门name</p>
                     * 
                     */
                    std::string GetDeviceDepartmentName() const;

                    /**
                     * 设置<p>设备部门name</p>
                     * @param _deviceDepartmentName <p>设备部门name</p>
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
                     * 获取<p>会话大小</p>
                     * @return Size <p>会话大小</p>
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置<p>会话大小</p>
                     * @param _size <p>会话大小</p>
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
                     * 获取<p>签名值</p>
                     * @return SignValue <p>签名值</p>
                     * 
                     */
                    std::string GetSignValue() const;

                    /**
                     * 设置<p>签名值</p>
                     * @param _signValue <p>签名值</p>
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
                     * 获取<p>资产类型</p>
                     * @return DeviceKind <p>资产类型</p>
                     * 
                     */
                    std::string GetDeviceKind() const;

                    /**
                     * 设置<p>资产类型</p>
                     * @param _deviceKind <p>资产类型</p>
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
                     * <p>命令</p>
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * <p>命令输入的时间</p>
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>命令执行时间相对于所属会话开始时间的偏移量，单位ms</p>
                     */
                    uint64_t m_timeOffset;
                    bool m_timeOffsetHasBeenSet;

                    /**
                     * <p>命令执行情况，1--已放行，2--已阻断，3--确认</p>
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>会话id</p>
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>设备account</p>
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>设备ip</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>source ip</p>
                     */
                    std::string m_fromIp;
                    bool m_fromIpHasBeenSet;

                    /**
                     * <p>该命令所属会话的会话开始时间</p>
                     */
                    std::string m_sessTime;
                    bool m_sessTimeHasBeenSet;

                    /**
                     * <p>该命令所属会话的会话开始时间</p>
                     */
                    std::string m_sessionTime;
                    bool m_sessionTimeHasBeenSet;

                    /**
                     * <p>复核时间</p>
                     */
                    std::string m_confirmTime;
                    bool m_confirmTimeHasBeenSet;

                    /**
                     * <p>用户部门id</p>
                     */
                    std::string m_userDepartmentId;
                    bool m_userDepartmentIdHasBeenSet;

                    /**
                     * <p>用户部门name</p>
                     */
                    std::string m_userDepartmentName;
                    bool m_userDepartmentNameHasBeenSet;

                    /**
                     * <p>设备部门id</p>
                     */
                    std::string m_deviceDepartmentId;
                    bool m_deviceDepartmentIdHasBeenSet;

                    /**
                     * <p>设备部门name</p>
                     */
                    std::string m_deviceDepartmentName;
                    bool m_deviceDepartmentNameHasBeenSet;

                    /**
                     * <p>会话大小</p>
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>签名值</p>
                     */
                    std::string m_signValue;
                    bool m_signValueHasBeenSet;

                    /**
                     * <p>资产类型</p>
                     */
                    std::string m_deviceKind;
                    bool m_deviceKindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_COMMAND_H_
