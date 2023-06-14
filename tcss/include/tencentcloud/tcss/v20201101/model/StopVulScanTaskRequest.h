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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_STOPVULSCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_STOPVULSCANTASKREQUEST_H_

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
                * StopVulScanTask请求参数结构体
                */
                class StopVulScanTaskRequest : public AbstractModel
                {
                public:
                    StopVulScanTaskRequest();
                    ~StopVulScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本地镜像漏洞扫描任务ID
                     * @return LocalTaskID 本地镜像漏洞扫描任务ID
                     * 
                     */
                    int64_t GetLocalTaskID() const;

                    /**
                     * 设置本地镜像漏洞扫描任务ID
                     * @param _localTaskID 本地镜像漏洞扫描任务ID
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
                     * 获取本地镜像ID，无则全部
                     * @return LocalImageIDs 本地镜像ID，无则全部
                     * 
                     */
                    std::vector<std::string> GetLocalImageIDs() const;

                    /**
                     * 设置本地镜像ID，无则全部
                     * @param _localImageIDs 本地镜像ID，无则全部
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
                     * 获取仓库镜像ID，无则全部
                     * @return RegistryImageIDs 仓库镜像ID，无则全部
                     * 
                     */
                    std::vector<uint64_t> GetRegistryImageIDs() const;

                    /**
                     * 设置仓库镜像ID，无则全部
                     * @param _registryImageIDs 仓库镜像ID，无则全部
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
                     * 获取仓库镜像漏洞扫描任务ID
                     * @return RegistryTaskID 仓库镜像漏洞扫描任务ID
                     * 
                     */
                    int64_t GetRegistryTaskID() const;

                    /**
                     * 设置仓库镜像漏洞扫描任务ID
                     * @param _registryTaskID 仓库镜像漏洞扫描任务ID
                     * 
                     */
                    void SetRegistryTaskID(const int64_t& _registryTaskID);

                    /**
                     * 判断参数 RegistryTaskID 是否已赋值
                     * @return RegistryTaskID 是否已赋值
                     * 
                     */
                    bool RegistryTaskIDHasBeenSet() const;

                private:

                    /**
                     * 本地镜像漏洞扫描任务ID
                     */
                    int64_t m_localTaskID;
                    bool m_localTaskIDHasBeenSet;

                    /**
                     * 本地镜像ID，无则全部
                     */
                    std::vector<std::string> m_localImageIDs;
                    bool m_localImageIDsHasBeenSet;

                    /**
                     * 仓库镜像ID，无则全部
                     */
                    std::vector<uint64_t> m_registryImageIDs;
                    bool m_registryImageIDsHasBeenSet;

                    /**
                     * 仓库镜像漏洞扫描任务ID
                     */
                    int64_t m_registryTaskID;
                    bool m_registryTaskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_STOPVULSCANTASKREQUEST_H_
