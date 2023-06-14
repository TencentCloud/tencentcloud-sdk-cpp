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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_PROCESS_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_PROCESS_H_

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
                * 进程信息数据。
                */
                class Process : public AbstractModel
                {
                public:
                    Process();
                    ~Process() = default;
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
                     * 获取主机内网IP。
                     * @return MachineIp 主机内网IP。
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机内网IP。
                     * @param _machineIp 主机内网IP。
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
                     * 获取进程Pid。
                     * @return Pid 进程Pid。
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置进程Pid。
                     * @param _pid 进程Pid。
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
                     * 获取进程Ppid。
                     * @return Ppid 进程Ppid。
                     * 
                     */
                    uint64_t GetPpid() const;

                    /**
                     * 设置进程Ppid。
                     * @param _ppid 进程Ppid。
                     * 
                     */
                    void SetPpid(const uint64_t& _ppid);

                    /**
                     * 判断参数 Ppid 是否已赋值
                     * @return Ppid 是否已赋值
                     * 
                     */
                    bool PpidHasBeenSet() const;

                    /**
                     * 获取进程名。
                     * @return ProcessName 进程名。
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名。
                     * @param _processName 进程名。
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
                     * 获取进程用户名。
                     * @return Username 进程用户名。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置进程用户名。
                     * @param _username 进程用户名。
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取所属平台。
<li>WIN32：windows32位</li>
<li>WIN64：windows64位</li>
<li>LINUX32：Linux32位</li>
<li>LINUX64：Linux64位</li>
                     * @return Platform 所属平台。
<li>WIN32：windows32位</li>
<li>WIN64：windows64位</li>
<li>LINUX32：Linux32位</li>
<li>LINUX64：Linux64位</li>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置所属平台。
<li>WIN32：windows32位</li>
<li>WIN64：windows64位</li>
<li>LINUX32：Linux32位</li>
<li>LINUX64：Linux64位</li>
                     * @param _platform 所属平台。
<li>WIN32：windows32位</li>
<li>WIN64：windows64位</li>
<li>LINUX32：Linux32位</li>
<li>LINUX64：Linux64位</li>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取进程路径。
                     * @return FullPath 进程路径。
                     * 
                     */
                    std::string GetFullPath() const;

                    /**
                     * 设置进程路径。
                     * @param _fullPath 进程路径。
                     * 
                     */
                    void SetFullPath(const std::string& _fullPath);

                    /**
                     * 判断参数 FullPath 是否已赋值
                     * @return FullPath 是否已赋值
                     * 
                     */
                    bool FullPathHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

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
                     * 主机内网IP。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机名。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 进程Pid。
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 进程Ppid。
                     */
                    uint64_t m_ppid;
                    bool m_ppidHasBeenSet;

                    /**
                     * 进程名。
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 进程用户名。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 所属平台。
<li>WIN32：windows32位</li>
<li>WIN64：windows64位</li>
<li>LINUX32：Linux32位</li>
<li>LINUX64：Linux64位</li>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 进程路径。
                     */
                    std::string m_fullPath;
                    bool m_fullPathHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_PROCESS_H_
