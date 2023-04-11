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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHCOMMANDRESULT_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHCOMMANDRESULT_H_

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
                     */
                    std::string GetTime() const;

                    /**
                     * 设置命令输入的时间
                     * @param Time 命令输入的时间
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param UserName 用户名
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return RealName 姓名
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置姓名
                     * @param RealName 姓名
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取资产ID
                     * @return InstanceId 资产ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资产ID
                     * @param InstanceId 资产ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取资产名称
                     * @return DeviceName 资产名称
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置资产名称
                     * @param DeviceName 资产名称
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取资产公网IP
                     * @return PublicIp 资产公网IP
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置资产公网IP
                     * @param PublicIp 资产公网IP
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取资产内网IP
                     * @return PrivateIp 资产内网IP
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置资产内网IP
                     * @param PrivateIp 资产内网IP
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取命令
                     * @return Cmd 命令
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置命令
                     * @param Cmd 命令
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取命令执行情况，1--允许，2--拒绝
                     * @return Action 命令执行情况，1--允许，2--拒绝
                     */
                    uint64_t GetAction() const;

                    /**
                     * 设置命令执行情况，1--允许，2--拒绝
                     * @param Action 命令执行情况，1--允许，2--拒绝
                     */
                    void SetAction(const uint64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取命令所属的会话ID
                     * @return Sid 命令所属的会话ID
                     */
                    std::string GetSid() const;

                    /**
                     * 设置命令所属的会话ID
                     * @param Sid 命令所属的会话ID
                     */
                    void SetSid(const std::string& _sid);

                    /**
                     * 判断参数 Sid 是否已赋值
                     * @return Sid 是否已赋值
                     */
                    bool SidHasBeenSet() const;

                    /**
                     * 获取命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     * @return TimeOffset 命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     */
                    uint64_t GetTimeOffset() const;

                    /**
                     * 设置命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     * @param TimeOffset 命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     */
                    void SetTimeOffset(const uint64_t& _timeOffset);

                    /**
                     * 判断参数 TimeOffset 是否已赋值
                     * @return TimeOffset 是否已赋值
                     */
                    bool TimeOffsetHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHCOMMANDRESULT_H_
