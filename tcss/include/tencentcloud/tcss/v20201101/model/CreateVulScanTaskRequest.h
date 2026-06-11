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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULSCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULSCANTASKREQUEST_H_

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
                * CreateVulScanTask请求参数结构体
                */
                class CreateVulScanTaskRequest : public AbstractModel
                {
                public:
                    CreateVulScanTaskRequest();
                    ~CreateVulScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>本地镜像扫描范围类型</p><p>枚举值：</p><ul><li>ALL： 全部本地镜像</li><li>NOT_SCAN： 全部已授权未扫描本地镜像</li><li>IMAGEIDS： 自选本地镜像ID</li><li>CLUSTER： 集群筛选</li></ul>
                     * @return LocalImageScanType <p>本地镜像扫描范围类型</p><p>枚举值：</p><ul><li>ALL： 全部本地镜像</li><li>NOT_SCAN： 全部已授权未扫描本地镜像</li><li>IMAGEIDS： 自选本地镜像ID</li><li>CLUSTER： 集群筛选</li></ul>
                     * 
                     */
                    std::string GetLocalImageScanType() const;

                    /**
                     * 设置<p>本地镜像扫描范围类型</p><p>枚举值：</p><ul><li>ALL： 全部本地镜像</li><li>NOT_SCAN： 全部已授权未扫描本地镜像</li><li>IMAGEIDS： 自选本地镜像ID</li><li>CLUSTER： 集群筛选</li></ul>
                     * @param _localImageScanType <p>本地镜像扫描范围类型</p><p>枚举值：</p><ul><li>ALL： 全部本地镜像</li><li>NOT_SCAN： 全部已授权未扫描本地镜像</li><li>IMAGEIDS： 自选本地镜像ID</li><li>CLUSTER： 集群筛选</li></ul>
                     * 
                     */
                    void SetLocalImageScanType(const std::string& _localImageScanType);

                    /**
                     * 判断参数 LocalImageScanType 是否已赋值
                     * @return LocalImageScanType 是否已赋值
                     * 
                     */
                    bool LocalImageScanTypeHasBeenSet() const;

                    /**
                     * 获取<p>根据已授权的本地镜像IDs扫描，优先权高于根据满足条件的已授权的本地镜像。</p>
                     * @return LocalImageIDs <p>根据已授权的本地镜像IDs扫描，优先权高于根据满足条件的已授权的本地镜像。</p>
                     * 
                     */
                    std::vector<std::string> GetLocalImageIDs() const;

                    /**
                     * 设置<p>根据已授权的本地镜像IDs扫描，优先权高于根据满足条件的已授权的本地镜像。</p>
                     * @param _localImageIDs <p>根据已授权的本地镜像IDs扫描，优先权高于根据满足条件的已授权的本地镜像。</p>
                     * 
                     */
                    void SetLocalImageIDs(const std::vector<std::string>& _localImageIDs);

                    /**
                     * 判断参数 LocalImageIDs 是否已赋值
                     * @return LocalImageIDs 是否已赋值
                     * 
                     */
                    bool LocalImageIDsHasBeenSet() const;

                    /**
                     * 获取<p>仓库镜像扫描范围类型。ALL:全部仓库镜像，NOT_SCAN：全部已授权未扫描仓库镜像，IMAGEIDS:自选仓库镜像ID</p>
                     * @return RegistryImageScanType <p>仓库镜像扫描范围类型。ALL:全部仓库镜像，NOT_SCAN：全部已授权未扫描仓库镜像，IMAGEIDS:自选仓库镜像ID</p>
                     * 
                     */
                    std::string GetRegistryImageScanType() const;

                    /**
                     * 设置<p>仓库镜像扫描范围类型。ALL:全部仓库镜像，NOT_SCAN：全部已授权未扫描仓库镜像，IMAGEIDS:自选仓库镜像ID</p>
                     * @param _registryImageScanType <p>仓库镜像扫描范围类型。ALL:全部仓库镜像，NOT_SCAN：全部已授权未扫描仓库镜像，IMAGEIDS:自选仓库镜像ID</p>
                     * 
                     */
                    void SetRegistryImageScanType(const std::string& _registryImageScanType);

                    /**
                     * 判断参数 RegistryImageScanType 是否已赋值
                     * @return RegistryImageScanType 是否已赋值
                     * 
                     */
                    bool RegistryImageScanTypeHasBeenSet() const;

                    /**
                     * 获取<p>根据已授权的仓库镜像IDs扫描，优先权高于根据满足条件的已授权的仓库镜像。</p>
                     * @return RegistryImageIDs <p>根据已授权的仓库镜像IDs扫描，优先权高于根据满足条件的已授权的仓库镜像。</p>
                     * 
                     */
                    std::vector<uint64_t> GetRegistryImageIDs() const;

                    /**
                     * 设置<p>根据已授权的仓库镜像IDs扫描，优先权高于根据满足条件的已授权的仓库镜像。</p>
                     * @param _registryImageIDs <p>根据已授权的仓库镜像IDs扫描，优先权高于根据满足条件的已授权的仓库镜像。</p>
                     * 
                     */
                    void SetRegistryImageIDs(const std::vector<uint64_t>& _registryImageIDs);

                    /**
                     * 判断参数 RegistryImageIDs 是否已赋值
                     * @return RegistryImageIDs 是否已赋值
                     * 
                     */
                    bool RegistryImageIDsHasBeenSet() const;

                    /**
                     * 获取<p>本地镜像重新漏洞扫描时的任务ID</p>
                     * @return LocalTaskID <p>本地镜像重新漏洞扫描时的任务ID</p>
                     * 
                     */
                    int64_t GetLocalTaskID() const;

                    /**
                     * 设置<p>本地镜像重新漏洞扫描时的任务ID</p>
                     * @param _localTaskID <p>本地镜像重新漏洞扫描时的任务ID</p>
                     * 
                     */
                    void SetLocalTaskID(const int64_t& _localTaskID);

                    /**
                     * 判断参数 LocalTaskID 是否已赋值
                     * @return LocalTaskID 是否已赋值
                     * 
                     */
                    bool LocalTaskIDHasBeenSet() const;

                    /**
                     * 获取<p>仓库镜像重新漏洞扫描时的任务ID</p>
                     * @return RegistryTaskID <p>仓库镜像重新漏洞扫描时的任务ID</p>
                     * 
                     */
                    int64_t GetRegistryTaskID() const;

                    /**
                     * 设置<p>仓库镜像重新漏洞扫描时的任务ID</p>
                     * @param _registryTaskID <p>仓库镜像重新漏洞扫描时的任务ID</p>
                     * 
                     */
                    void SetRegistryTaskID(const int64_t& _registryTaskID);

                    /**
                     * 判断参数 RegistryTaskID 是否已赋值
                     * @return RegistryTaskID 是否已赋值
                     * 
                     */
                    bool RegistryTaskIDHasBeenSet() const;

                    /**
                     * 获取<p>本地镜像容器运行中</p>
                     * @return LocalImageContainerRunning <p>本地镜像容器运行中</p>
                     * 
                     */
                    bool GetLocalImageContainerRunning() const;

                    /**
                     * 设置<p>本地镜像容器运行中</p>
                     * @param _localImageContainerRunning <p>本地镜像容器运行中</p>
                     * 
                     */
                    void SetLocalImageContainerRunning(const bool& _localImageContainerRunning);

                    /**
                     * 判断参数 LocalImageContainerRunning 是否已赋值
                     * @return LocalImageContainerRunning 是否已赋值
                     * 
                     */
                    bool LocalImageContainerRunningHasBeenSet() const;

                    /**
                     * 获取<p>仓库镜像容器运行中</p>
                     * @return RegistryImageContainerRunning <p>仓库镜像容器运行中</p>
                     * 
                     */
                    bool GetRegistryImageContainerRunning() const;

                    /**
                     * 设置<p>仓库镜像容器运行中</p>
                     * @param _registryImageContainerRunning <p>仓库镜像容器运行中</p>
                     * 
                     */
                    void SetRegistryImageContainerRunning(const bool& _registryImageContainerRunning);

                    /**
                     * 判断参数 RegistryImageContainerRunning 是否已赋值
                     * @return RegistryImageContainerRunning 是否已赋值
                     * 
                     */
                    bool RegistryImageContainerRunningHasBeenSet() const;

                    /**
                     * 获取<p>仓库镜像是否是最新</p>
                     * @return IsLatest <p>仓库镜像是否是最新</p>
                     * 
                     */
                    bool GetIsLatest() const;

                    /**
                     * 设置<p>仓库镜像是否是最新</p>
                     * @param _isLatest <p>仓库镜像是否是最新</p>
                     * 
                     */
                    void SetIsLatest(const bool& _isLatest);

                    /**
                     * 判断参数 IsLatest 是否已赋值
                     * @return IsLatest 是否已赋值
                     * 
                     */
                    bool IsLatestHasBeenSet() const;

                    /**
                     * 获取<p>要剔除的本地镜像id</p>
                     * @return ExcludeLocalImageIDs <p>要剔除的本地镜像id</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeLocalImageIDs() const;

                    /**
                     * 设置<p>要剔除的本地镜像id</p>
                     * @param _excludeLocalImageIDs <p>要剔除的本地镜像id</p>
                     * 
                     */
                    void SetExcludeLocalImageIDs(const std::vector<std::string>& _excludeLocalImageIDs);

                    /**
                     * 判断参数 ExcludeLocalImageIDs 是否已赋值
                     * @return ExcludeLocalImageIDs 是否已赋值
                     * 
                     */
                    bool ExcludeLocalImageIDsHasBeenSet() const;

                    /**
                     * 获取<p>要剔除的仓库镜像id</p>
                     * @return ExcludeRegistryImageIDs <p>要剔除的仓库镜像id</p>
                     * 
                     */
                    std::vector<uint64_t> GetExcludeRegistryImageIDs() const;

                    /**
                     * 设置<p>要剔除的仓库镜像id</p>
                     * @param _excludeRegistryImageIDs <p>要剔除的仓库镜像id</p>
                     * 
                     */
                    void SetExcludeRegistryImageIDs(const std::vector<uint64_t>& _excludeRegistryImageIDs);

                    /**
                     * 判断参数 ExcludeRegistryImageIDs 是否已赋值
                     * @return ExcludeRegistryImageIDs 是否已赋值
                     * 
                     */
                    bool ExcludeRegistryImageIDsHasBeenSet() const;

                    /**
                     * 获取<p>集群id</p>
                     * @return LocalClusterIDs <p>集群id</p>
                     * 
                     */
                    std::vector<std::string> GetLocalClusterIDs() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _localClusterIDs <p>集群id</p>
                     * 
                     */
                    void SetLocalClusterIDs(const std::vector<std::string>& _localClusterIDs);

                    /**
                     * 判断参数 LocalClusterIDs 是否已赋值
                     * @return LocalClusterIDs 是否已赋值
                     * 
                     */
                    bool LocalClusterIDsHasBeenSet() const;

                private:

                    /**
                     * <p>本地镜像扫描范围类型</p><p>枚举值：</p><ul><li>ALL： 全部本地镜像</li><li>NOT_SCAN： 全部已授权未扫描本地镜像</li><li>IMAGEIDS： 自选本地镜像ID</li><li>CLUSTER： 集群筛选</li></ul>
                     */
                    std::string m_localImageScanType;
                    bool m_localImageScanTypeHasBeenSet;

                    /**
                     * <p>根据已授权的本地镜像IDs扫描，优先权高于根据满足条件的已授权的本地镜像。</p>
                     */
                    std::vector<std::string> m_localImageIDs;
                    bool m_localImageIDsHasBeenSet;

                    /**
                     * <p>仓库镜像扫描范围类型。ALL:全部仓库镜像，NOT_SCAN：全部已授权未扫描仓库镜像，IMAGEIDS:自选仓库镜像ID</p>
                     */
                    std::string m_registryImageScanType;
                    bool m_registryImageScanTypeHasBeenSet;

                    /**
                     * <p>根据已授权的仓库镜像IDs扫描，优先权高于根据满足条件的已授权的仓库镜像。</p>
                     */
                    std::vector<uint64_t> m_registryImageIDs;
                    bool m_registryImageIDsHasBeenSet;

                    /**
                     * <p>本地镜像重新漏洞扫描时的任务ID</p>
                     */
                    int64_t m_localTaskID;
                    bool m_localTaskIDHasBeenSet;

                    /**
                     * <p>仓库镜像重新漏洞扫描时的任务ID</p>
                     */
                    int64_t m_registryTaskID;
                    bool m_registryTaskIDHasBeenSet;

                    /**
                     * <p>本地镜像容器运行中</p>
                     */
                    bool m_localImageContainerRunning;
                    bool m_localImageContainerRunningHasBeenSet;

                    /**
                     * <p>仓库镜像容器运行中</p>
                     */
                    bool m_registryImageContainerRunning;
                    bool m_registryImageContainerRunningHasBeenSet;

                    /**
                     * <p>仓库镜像是否是最新</p>
                     */
                    bool m_isLatest;
                    bool m_isLatestHasBeenSet;

                    /**
                     * <p>要剔除的本地镜像id</p>
                     */
                    std::vector<std::string> m_excludeLocalImageIDs;
                    bool m_excludeLocalImageIDsHasBeenSet;

                    /**
                     * <p>要剔除的仓库镜像id</p>
                     */
                    std::vector<uint64_t> m_excludeRegistryImageIDs;
                    bool m_excludeRegistryImageIDsHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::vector<std::string> m_localClusterIDs;
                    bool m_localClusterIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULSCANTASKREQUEST_H_
