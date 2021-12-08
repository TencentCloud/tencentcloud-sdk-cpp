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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 容器列表集合
                */
                class ContainerInfo : public AbstractModel
                {
                public:
                    ContainerInfo();
                    ~ContainerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器id
                     * @return ContainerID 容器id
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置容器id
                     * @param ContainerID 容器id
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     */
                    bool ContainerIDHasBeenSet() const;

                    /**
                     * 获取容器名称
                     * @return ContainerName 容器名称
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名称
                     * @param ContainerName 容器名称
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取容器运行状态
                     * @return Status 容器运行状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置容器运行状态
                     * @param Status 容器运行状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取运行用户
                     * @return RunAs 运行用户
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置运行用户
                     * @param RunAs 运行用户
                     */
                    void SetRunAs(const std::string& _runAs);

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取命令行
                     * @return Cmd 命令行
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置命令行
                     * @param Cmd 命令行
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取cpu 使用率 *1000
                     * @return CPUUsage cpu 使用率 *1000
                     */
                    uint64_t GetCPUUsage() const;

                    /**
                     * 设置cpu 使用率 *1000
                     * @param CPUUsage cpu 使用率 *1000
                     */
                    void SetCPUUsage(const uint64_t& _cPUUsage);

                    /**
                     * 判断参数 CPUUsage 是否已赋值
                     * @return CPUUsage 是否已赋值
                     */
                    bool CPUUsageHasBeenSet() const;

                    /**
                     * 获取内存使用 kb
                     * @return RamUsage 内存使用 kb
                     */
                    uint64_t GetRamUsage() const;

                    /**
                     * 设置内存使用 kb
                     * @param RamUsage 内存使用 kb
                     */
                    void SetRamUsage(const uint64_t& _ramUsage);

                    /**
                     * 判断参数 RamUsage 是否已赋值
                     * @return RamUsage 是否已赋值
                     */
                    bool RamUsageHasBeenSet() const;

                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param ImageName 镜像名称
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取镜像id
                     * @return ImageID 镜像id
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置镜像id
                     * @param ImageID 镜像id
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取镜像id
                     * @return POD 镜像id
                     */
                    std::string GetPOD() const;

                    /**
                     * 设置镜像id
                     * @param POD 镜像id
                     */
                    void SetPOD(const std::string& _pOD);

                    /**
                     * 判断参数 POD 是否已赋值
                     * @return POD 是否已赋值
                     */
                    bool PODHasBeenSet() const;

                    /**
                     * 获取主机id
                     * @return HostID 主机id
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置主机id
                     * @param HostID 主机id
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取主机ip
                     * @return HostIP 主机ip
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置主机ip
                     * @param HostIP 主机ip
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param UpdateTime 更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param HostName 主机名称
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取外网ip
                     * @return PublicIp 外网ip
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置外网ip
                     * @param PublicIp 外网ip
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     */
                    bool PublicIpHasBeenSet() const;

                private:

                    /**
                     * 容器id
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                    /**
                     * 容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 容器运行状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 运行用户
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * 命令行
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * cpu 使用率 *1000
                     */
                    uint64_t m_cPUUsage;
                    bool m_cPUUsageHasBeenSet;

                    /**
                     * 内存使用 kb
                     */
                    uint64_t m_ramUsage;
                    bool m_ramUsageHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像id
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * 镜像id
                     */
                    std::string m_pOD;
                    bool m_pODHasBeenSet;

                    /**
                     * 主机id
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * 主机ip
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERINFO_H_
