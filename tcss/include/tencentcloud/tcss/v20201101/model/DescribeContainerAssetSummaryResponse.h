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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECONTAINERASSETSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECONTAINERASSETSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeContainerAssetSummary返回参数结构体
                */
                class DescribeContainerAssetSummaryResponse : public AbstractModel
                {
                public:
                    DescribeContainerAssetSummaryResponse();
                    ~DescribeContainerAssetSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取容器总数
                     * @return ContainerTotalCnt 容器总数
                     * 
                     */
                    uint64_t GetContainerTotalCnt() const;

                    /**
                     * 判断参数 ContainerTotalCnt 是否已赋值
                     * @return ContainerTotalCnt 是否已赋值
                     * 
                     */
                    bool ContainerTotalCntHasBeenSet() const;

                    /**
                     * 获取正在运行容器数量
                     * @return ContainerRunningCnt 正在运行容器数量
                     * 
                     */
                    uint64_t GetContainerRunningCnt() const;

                    /**
                     * 判断参数 ContainerRunningCnt 是否已赋值
                     * @return ContainerRunningCnt 是否已赋值
                     * 
                     */
                    bool ContainerRunningCntHasBeenSet() const;

                    /**
                     * 获取暂停运行容器数量
                     * @return ContainerPauseCnt 暂停运行容器数量
                     * 
                     */
                    uint64_t GetContainerPauseCnt() const;

                    /**
                     * 判断参数 ContainerPauseCnt 是否已赋值
                     * @return ContainerPauseCnt 是否已赋值
                     * 
                     */
                    bool ContainerPauseCntHasBeenSet() const;

                    /**
                     * 获取停止运行容器数量
                     * @return ContainerStopped 停止运行容器数量
                     * 
                     */
                    uint64_t GetContainerStopped() const;

                    /**
                     * 判断参数 ContainerStopped 是否已赋值
                     * @return ContainerStopped 是否已赋值
                     * 
                     */
                    bool ContainerStoppedHasBeenSet() const;

                    /**
                     * 获取本地镜像数量
                     * @return ImageCnt 本地镜像数量
                     * 
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     * 
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取主机节点数量
                     * @return HostCnt 主机节点数量
                     * 
                     */
                    uint64_t GetHostCnt() const;

                    /**
                     * 判断参数 HostCnt 是否已赋值
                     * @return HostCnt 是否已赋值
                     * 
                     */
                    bool HostCntHasBeenSet() const;

                    /**
                     * 获取主机正在运行节点数量
                     * @return HostRunningCnt 主机正在运行节点数量
                     * 
                     */
                    uint64_t GetHostRunningCnt() const;

                    /**
                     * 判断参数 HostRunningCnt 是否已赋值
                     * @return HostRunningCnt 是否已赋值
                     * 
                     */
                    bool HostRunningCntHasBeenSet() const;

                    /**
                     * 获取主机离线节点数量
                     * @return HostOfflineCnt 主机离线节点数量
                     * 
                     */
                    uint64_t GetHostOfflineCnt() const;

                    /**
                     * 判断参数 HostOfflineCnt 是否已赋值
                     * @return HostOfflineCnt 是否已赋值
                     * 
                     */
                    bool HostOfflineCntHasBeenSet() const;

                    /**
                     * 获取镜像仓库数量
                     * @return ImageRegistryCnt 镜像仓库数量
                     * 
                     */
                    uint64_t GetImageRegistryCnt() const;

                    /**
                     * 判断参数 ImageRegistryCnt 是否已赋值
                     * @return ImageRegistryCnt 是否已赋值
                     * 
                     */
                    bool ImageRegistryCntHasBeenSet() const;

                    /**
                     * 获取镜像总数
                     * @return ImageTotalCnt 镜像总数
                     * 
                     */
                    uint64_t GetImageTotalCnt() const;

                    /**
                     * 判断参数 ImageTotalCnt 是否已赋值
                     * @return ImageTotalCnt 是否已赋值
                     * 
                     */
                    bool ImageTotalCntHasBeenSet() const;

                    /**
                     * 获取主机未安装agent数量
                     * @return HostUnInstallCnt 主机未安装agent数量
                     * 
                     */
                    uint64_t GetHostUnInstallCnt() const;

                    /**
                     * 判断参数 HostUnInstallCnt 是否已赋值
                     * @return HostUnInstallCnt 是否已赋值
                     * 
                     */
                    bool HostUnInstallCntHasBeenSet() const;

                    /**
                     * 获取超级节点个数
                     * @return HostSuperNodeCnt 超级节点个数
                     * 
                     */
                    uint64_t GetHostSuperNodeCnt() const;

                    /**
                     * 判断参数 HostSuperNodeCnt 是否已赋值
                     * @return HostSuperNodeCnt 是否已赋值
                     * 
                     */
                    bool HostSuperNodeCntHasBeenSet() const;

                private:

                    /**
                     * 容器总数
                     */
                    uint64_t m_containerTotalCnt;
                    bool m_containerTotalCntHasBeenSet;

                    /**
                     * 正在运行容器数量
                     */
                    uint64_t m_containerRunningCnt;
                    bool m_containerRunningCntHasBeenSet;

                    /**
                     * 暂停运行容器数量
                     */
                    uint64_t m_containerPauseCnt;
                    bool m_containerPauseCntHasBeenSet;

                    /**
                     * 停止运行容器数量
                     */
                    uint64_t m_containerStopped;
                    bool m_containerStoppedHasBeenSet;

                    /**
                     * 本地镜像数量
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * 主机节点数量
                     */
                    uint64_t m_hostCnt;
                    bool m_hostCntHasBeenSet;

                    /**
                     * 主机正在运行节点数量
                     */
                    uint64_t m_hostRunningCnt;
                    bool m_hostRunningCntHasBeenSet;

                    /**
                     * 主机离线节点数量
                     */
                    uint64_t m_hostOfflineCnt;
                    bool m_hostOfflineCntHasBeenSet;

                    /**
                     * 镜像仓库数量
                     */
                    uint64_t m_imageRegistryCnt;
                    bool m_imageRegistryCntHasBeenSet;

                    /**
                     * 镜像总数
                     */
                    uint64_t m_imageTotalCnt;
                    bool m_imageTotalCntHasBeenSet;

                    /**
                     * 主机未安装agent数量
                     */
                    uint64_t m_hostUnInstallCnt;
                    bool m_hostUnInstallCntHasBeenSet;

                    /**
                     * 超级节点个数
                     */
                    uint64_t m_hostSuperNodeCnt;
                    bool m_hostSuperNodeCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECONTAINERASSETSUMMARYRESPONSE_H_
