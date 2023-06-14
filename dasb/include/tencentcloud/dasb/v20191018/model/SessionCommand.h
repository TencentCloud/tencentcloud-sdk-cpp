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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_SESSIONCOMMAND_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_SESSIONCOMMAND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dasb/v20191018/model/Command.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * 命令和所属会话
                */
                class SessionCommand : public AbstractModel
                {
                public:
                    SessionCommand();
                    ~SessionCommand() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

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
                     * 获取账号
                     * @return RealName 账号
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置账号
                     * @param _realName 账号
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
                     * 获取设备名
                     * @return DeviceName 设备名
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名
                     * @param _deviceName 设备名
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
                     * 获取内部Ip
                     * @return PrivateIp 内部Ip
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内部Ip
                     * @param _privateIp 内部Ip
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
                     * 获取外部Ip
                     * @return PublicIp 外部Ip
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置外部Ip
                     * @param _publicIp 外部Ip
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
                     * 获取命令列表
                     * @return Commands 命令列表
                     * 
                     */
                    std::vector<Command> GetCommands() const;

                    /**
                     * 设置命令列表
                     * @param _commands 命令列表
                     * 
                     */
                    void SetCommands(const std::vector<Command>& _commands);

                    /**
                     * 判断参数 Commands 是否已赋值
                     * @return Commands 是否已赋值
                     * 
                     */
                    bool CommandsHasBeenSet() const;

                    /**
                     * 获取记录数
                     * @return Count 记录数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置记录数
                     * @param _count 记录数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取会话Id
                     * @return Id 会话Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置会话Id
                     * @param _id 会话Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取设备id
                     * @return InstanceId 设备id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置设备id
                     * @param _instanceId 设备id
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
                     * 获取设备所属的地域
                     * @return ApCode 设备所属的地域
                     * 
                     */
                    std::string GetApCode() const;

                    /**
                     * 设置设备所属的地域
                     * @param _apCode 设备所属的地域
                     * 
                     */
                    void SetApCode(const std::string& _apCode);

                    /**
                     * 判断参数 ApCode 是否已赋值
                     * @return ApCode 是否已赋值
                     * 
                     */
                    bool ApCodeHasBeenSet() const;

                private:

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 账号
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 设备名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 内部Ip
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 外部Ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 命令列表
                     */
                    std::vector<Command> m_commands;
                    bool m_commandsHasBeenSet;

                    /**
                     * 记录数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 会话Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 设备id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 设备所属的地域
                     */
                    std::string m_apCode;
                    bool m_apCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_SESSIONCOMMAND_H_
