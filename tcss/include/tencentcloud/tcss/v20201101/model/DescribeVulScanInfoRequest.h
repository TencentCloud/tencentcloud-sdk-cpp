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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANINFOREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANINFOREQUEST_H_

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
                * DescribeVulScanInfo请求参数结构体
                */
                class DescribeVulScanInfoRequest : public AbstractModel
                {
                public:
                    DescribeVulScanInfoRequest();
                    ~DescribeVulScanInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本地镜像漏洞扫描任务ID，无则返回最近一次的漏洞任务扫描
                     * @return LocalTaskID 本地镜像漏洞扫描任务ID，无则返回最近一次的漏洞任务扫描
                     * 
                     */
                    int64_t GetLocalTaskID() const;

                    /**
                     * 设置本地镜像漏洞扫描任务ID，无则返回最近一次的漏洞任务扫描
                     * @param _localTaskID 本地镜像漏洞扫描任务ID，无则返回最近一次的漏洞任务扫描
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
                     * 获取仓库镜像漏洞扫描任务ID，无则返回最近一次的漏洞任务扫描
                     * @return RegistryTaskID 仓库镜像漏洞扫描任务ID，无则返回最近一次的漏洞任务扫描
                     * 
                     */
                    int64_t GetRegistryTaskID() const;

                    /**
                     * 设置仓库镜像漏洞扫描任务ID，无则返回最近一次的漏洞任务扫描
                     * @param _registryTaskID 仓库镜像漏洞扫描任务ID，无则返回最近一次的漏洞任务扫描
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
                     * 本地镜像漏洞扫描任务ID，无则返回最近一次的漏洞任务扫描
                     */
                    int64_t m_localTaskID;
                    bool m_localTaskIDHasBeenSet;

                    /**
                     * 仓库镜像漏洞扫描任务ID，无则返回最近一次的漏洞任务扫描
                     */
                    int64_t m_registryTaskID;
                    bool m_registryTaskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANINFOREQUEST_H_
