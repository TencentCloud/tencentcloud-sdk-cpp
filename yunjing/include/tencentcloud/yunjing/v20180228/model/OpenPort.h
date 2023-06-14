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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_OPENPORT_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_OPENPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 端口列表
                */
                class OpenPort : public AbstractModel
                {
                public:
                    OpenPort();
                    ~OpenPort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一ID。
                     * @return Id 唯一ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置唯一ID。
                     * @param _id 唯一ID。
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
                     * 获取云镜客户端唯一UUID。
                     * @return Uuid 云镜客户端唯一UUID。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端唯一UUID。
                     * @param _uuid 云镜客户端唯一UUID。
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取开放端口号。
                     * @return Port 开放端口号。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置开放端口号。
                     * @param _port 开放端口号。
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取主机IP。
                     * @return MachineIp 主机IP。
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机IP。
                     * @param _machineIp 主机IP。
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取主机名。
                     * @return MachineName 主机名。
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名。
                     * @param _machineName 主机名。
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取端口对应进程名。
                     * @return ProcessName 端口对应进程名。
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置端口对应进程名。
                     * @param _processName 端口对应进程名。
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取端口对应进程Pid。
                     * @return Pid 端口对应进程Pid。
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置端口对应进程Pid。
                     * @param _pid 端口对应进程Pid。
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取记录创建时间。
                     * @return CreateTime 记录创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置记录创建时间。
                     * @param _createTime 记录创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取记录更新时间。
                     * @return ModifyTime 记录更新时间。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置记录更新时间。
                     * @param _modifyTime 记录更新时间。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 唯一ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 云镜客户端唯一UUID。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 开放端口号。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 主机IP。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机名。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 端口对应进程名。
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 端口对应进程Pid。
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 记录创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 记录更新时间。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_OPENPORT_H_
