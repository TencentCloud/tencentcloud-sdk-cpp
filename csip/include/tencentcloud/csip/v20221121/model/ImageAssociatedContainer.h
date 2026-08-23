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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSOCIATEDCONTAINER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSOCIATEDCONTAINER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 镜像关联主机资产
                */
                class ImageAssociatedContainer : public AbstractModel
                {
                public:
                    ImageAssociatedContainer();
                    ~ImageAssociatedContainer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>容器id</p>
                     * @return ContainerId <p>容器id</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置<p>容器id</p>
                     * @param _containerId <p>容器id</p>
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取<p>容器名</p>
                     * @return ContainerName <p>容器名</p>
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置<p>容器名</p>
                     * @param _containerName <p>容器名</p>
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取<p>pod名</p>
                     * @return PodName <p>pod名</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>pod名</p>
                     * @param _podName <p>pod名</p>
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取<p>pod ip</p>
                     * @return PodIp <p>pod ip</p>
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置<p>pod ip</p>
                     * @param _podIp <p>pod ip</p>
                     * 
                     */
                    void SetPodIp(const std::string& _podIp);

                    /**
                     * 判断参数 PodIp 是否已赋值
                     * @return PodIp 是否已赋值
                     * 
                     */
                    bool PodIpHasBeenSet() const;

                    /**
                     * 获取<p>pod所属账号名</p>
                     * @return OwnerAccountName <p>pod所属账号名</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>pod所属账号名</p>
                     * @param _ownerAccountName <p>pod所属账号名</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>pod所属账号appid</p>
                     * @return OwnerAppId <p>pod所属账号appid</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>pod所属账号appid</p>
                     * @param _ownerAppId <p>pod所属账号appid</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>pod所属账号uin</p>
                     * @return OwnerUin <p>pod所属账号uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>pod所属账号uin</p>
                     * @param _ownerUin <p>pod所属账号uin</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>集群id</p>
                     * @return ClusterId <p>集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterId <p>集群id</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>集群名</p>
                     * @return ClusterName <p>集群名</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名</p>
                     * @param _clusterName <p>集群名</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>集群状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>Exception： 异常</li><li>Unknown： 未知</li><li>Creating： 创建中</li></ul>
                     * @return ClusterStatus <p>集群状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>Exception： 异常</li><li>Unknown： 未知</li><li>Creating： 创建中</li></ul>
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置<p>集群状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>Exception： 异常</li><li>Unknown： 未知</li><li>Creating： 创建中</li></ul>
                     * @param _clusterStatus <p>集群状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>Exception： 异常</li><li>Unknown： 未知</li><li>Creating： 创建中</li></ul>
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取<p>镜像cmd</p>
                     * @return Cmd <p>镜像cmd</p>
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置<p>镜像cmd</p>
                     * @param _cmd <p>镜像cmd</p>
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
                     * 获取<p>Pod唯一id</p>
                     * @return PodId <p>Pod唯一id</p>
                     * 
                     */
                    std::string GetPodId() const;

                    /**
                     * 设置<p>Pod唯一id</p>
                     * @param _podId <p>Pod唯一id</p>
                     * 
                     */
                    void SetPodId(const std::string& _podId);

                    /**
                     * 判断参数 PodId 是否已赋值
                     * @return PodId 是否已赋值
                     * 
                     */
                    bool PodIdHasBeenSet() const;

                    /**
                     * 获取<p>集群唯一Id</p>
                     * @return ClusterCaMd5 <p>集群唯一Id</p>
                     * 
                     */
                    std::string GetClusterCaMd5() const;

                    /**
                     * 设置<p>集群唯一Id</p>
                     * @param _clusterCaMd5 <p>集群唯一Id</p>
                     * 
                     */
                    void SetClusterCaMd5(const std::string& _clusterCaMd5);

                    /**
                     * 判断参数 ClusterCaMd5 是否已赋值
                     * @return ClusterCaMd5 是否已赋值
                     * 
                     */
                    bool ClusterCaMd5HasBeenSet() const;

                private:

                    /**
                     * <p>容器id</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>容器名</p>
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>pod名</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>pod ip</p>
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * <p>pod所属账号名</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>pod所属账号appid</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>pod所属账号uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>Exception： 异常</li><li>Unknown： 未知</li><li>Creating： 创建中</li></ul>
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * <p>镜像cmd</p>
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * <p>Pod唯一id</p>
                     */
                    std::string m_podId;
                    bool m_podIdHasBeenSet;

                    /**
                     * <p>集群唯一Id</p>
                     */
                    std::string m_clusterCaMd5;
                    bool m_clusterCaMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSOCIATEDCONTAINER_H_
