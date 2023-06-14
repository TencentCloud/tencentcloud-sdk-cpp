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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULSCANTASKRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULSCANTASKRESPONSE_H_

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
                * CreateVulScanTask返回参数结构体
                */
                class CreateVulScanTaskResponse : public AbstractModel
                {
                public:
                    CreateVulScanTaskResponse();
                    ~CreateVulScanTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本地镜像重新漏洞扫描时的任务ID
                     * @return LocalTaskID 本地镜像重新漏洞扫描时的任务ID
                     * 
                     */
                    int64_t GetLocalTaskID() const;

                    /**
                     * 判断参数 LocalTaskID 是否已赋值
                     * @return LocalTaskID 是否已赋值
                     * 
                     */
                    bool LocalTaskIDHasBeenSet() const;

                    /**
                     * 获取仓库镜像重新漏洞扫描时的任务ID
                     * @return RegistryTaskID 仓库镜像重新漏洞扫描时的任务ID
                     * 
                     */
                    int64_t GetRegistryTaskID() const;

                    /**
                     * 判断参数 RegistryTaskID 是否已赋值
                     * @return RegistryTaskID 是否已赋值
                     * 
                     */
                    bool RegistryTaskIDHasBeenSet() const;

                private:

                    /**
                     * 本地镜像重新漏洞扫描时的任务ID
                     */
                    int64_t m_localTaskID;
                    bool m_localTaskIDHasBeenSet;

                    /**
                     * 仓库镜像重新漏洞扫描时的任务ID
                     */
                    int64_t m_registryTaskID;
                    bool m_registryTaskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULSCANTASKRESPONSE_H_
