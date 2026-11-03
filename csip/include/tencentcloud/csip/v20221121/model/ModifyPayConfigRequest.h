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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPAYCONFIGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPAYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/HostAutoScaleConfig.h>
#include <tencentcloud/csip/v20221121/model/ContainerAutoScaleConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyPayConfig请求参数结构体
                */
                class ModifyPayConfigRequest : public AbstractModel
                {
                public:
                    ModifyPayConfigRequest();
                    ~ModifyPayConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>主机安全模块自动扩容配置<br>补充说明：不传则不修改主机配置；本期至少需传本模块。后续可扩展 ContainerConfig / AIAgentConfig 命名模块字段</p>
                     * @return HostConfig <p>主机安全模块自动扩容配置<br>补充说明：不传则不修改主机配置；本期至少需传本模块。后续可扩展 ContainerConfig / AIAgentConfig 命名模块字段</p>
                     * 
                     */
                    HostAutoScaleConfig GetHostConfig() const;

                    /**
                     * 设置<p>主机安全模块自动扩容配置<br>补充说明：不传则不修改主机配置；本期至少需传本模块。后续可扩展 ContainerConfig / AIAgentConfig 命名模块字段</p>
                     * @param _hostConfig <p>主机安全模块自动扩容配置<br>补充说明：不传则不修改主机配置；本期至少需传本模块。后续可扩展 ContainerConfig / AIAgentConfig 命名模块字段</p>
                     * 
                     */
                    void SetHostConfig(const HostAutoScaleConfig& _hostConfig);

                    /**
                     * 判断参数 HostConfig 是否已赋值
                     * @return HostConfig 是否已赋值
                     * 
                     */
                    bool HostConfigHasBeenSet() const;

                    /**
                     * 获取<p>容器安全模块自动扩容配置，不传则不修改</p>
                     * @return ContainerConfig <p>容器安全模块自动扩容配置，不传则不修改</p>
                     * 
                     */
                    ContainerAutoScaleConfig GetContainerConfig() const;

                    /**
                     * 设置<p>容器安全模块自动扩容配置，不传则不修改</p>
                     * @param _containerConfig <p>容器安全模块自动扩容配置，不传则不修改</p>
                     * 
                     */
                    void SetContainerConfig(const ContainerAutoScaleConfig& _containerConfig);

                    /**
                     * 判断参数 ContainerConfig 是否已赋值
                     * @return ContainerConfig 是否已赋值
                     * 
                     */
                    bool ContainerConfigHasBeenSet() const;

                private:

                    /**
                     * <p>主机安全模块自动扩容配置<br>补充说明：不传则不修改主机配置；本期至少需传本模块。后续可扩展 ContainerConfig / AIAgentConfig 命名模块字段</p>
                     */
                    HostAutoScaleConfig m_hostConfig;
                    bool m_hostConfigHasBeenSet;

                    /**
                     * <p>容器安全模块自动扩容配置，不传则不修改</p>
                     */
                    ContainerAutoScaleConfig m_containerConfig;
                    bool m_containerConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPAYCONFIGREQUEST_H_
