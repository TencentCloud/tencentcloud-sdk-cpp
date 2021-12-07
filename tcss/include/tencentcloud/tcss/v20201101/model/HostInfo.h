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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_HOSTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_HOSTINFO_H_

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
                * 容器安全主机列表
                */
                class HostInfo : public AbstractModel
                {
                public:
                    HostInfo();
                    ~HostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取业务组
                     * @return Group 业务组
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置业务组
                     * @param Group 业务组
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取docker 版本
                     * @return DockerVersion docker 版本
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 设置docker 版本
                     * @param DockerVersion docker 版本
                     */
                    void SetDockerVersion(const std::string& _dockerVersion);

                    /**
                     * 判断参数 DockerVersion 是否已赋值
                     * @return DockerVersion 是否已赋值
                     */
                    bool DockerVersionHasBeenSet() const;

                    /**
                     * 获取docker 文件系统类型
                     * @return DockerFileSystemDriver docker 文件系统类型
                     */
                    std::string GetDockerFileSystemDriver() const;

                    /**
                     * 设置docker 文件系统类型
                     * @param DockerFileSystemDriver docker 文件系统类型
                     */
                    void SetDockerFileSystemDriver(const std::string& _dockerFileSystemDriver);

                    /**
                     * 判断参数 DockerFileSystemDriver 是否已赋值
                     * @return DockerFileSystemDriver 是否已赋值
                     */
                    bool DockerFileSystemDriverHasBeenSet() const;

                    /**
                     * 获取镜像个数
                     * @return ImageCnt 镜像个数
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 设置镜像个数
                     * @param ImageCnt 镜像个数
                     */
                    void SetImageCnt(const uint64_t& _imageCnt);

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取容器个数
                     * @return ContainerCnt 容器个数
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 设置容器个数
                     * @param ContainerCnt 容器个数
                     */
                    void SetContainerCnt(const uint64_t& _containerCnt);

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取主机运行状态
                     * @return Status 主机运行状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置主机运行状态
                     * @param Status 主机运行状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

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
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 业务组
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * docker 版本
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * docker 文件系统类型
                     */
                    std::string m_dockerFileSystemDriver;
                    bool m_dockerFileSystemDriverHasBeenSet;

                    /**
                     * 镜像个数
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * 容器个数
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * 主机运行状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_HOSTINFO_H_
