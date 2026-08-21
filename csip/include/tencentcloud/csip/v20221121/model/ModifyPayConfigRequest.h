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
                     * 获取主机安全模块自动扩容配置
补充说明：不传则不修改主机配置；本期至少需传本模块。后续可扩展 ContainerConfig / AIAgentConfig 命名模块字段
                     * @return HostConfig 主机安全模块自动扩容配置
补充说明：不传则不修改主机配置；本期至少需传本模块。后续可扩展 ContainerConfig / AIAgentConfig 命名模块字段
                     * 
                     */
                    HostAutoScaleConfig GetHostConfig() const;

                    /**
                     * 设置主机安全模块自动扩容配置
补充说明：不传则不修改主机配置；本期至少需传本模块。后续可扩展 ContainerConfig / AIAgentConfig 命名模块字段
                     * @param _hostConfig 主机安全模块自动扩容配置
补充说明：不传则不修改主机配置；本期至少需传本模块。后续可扩展 ContainerConfig / AIAgentConfig 命名模块字段
                     * 
                     */
                    void SetHostConfig(const HostAutoScaleConfig& _hostConfig);

                    /**
                     * 判断参数 HostConfig 是否已赋值
                     * @return HostConfig 是否已赋值
                     * 
                     */
                    bool HostConfigHasBeenSet() const;

                private:

                    /**
                     * 主机安全模块自动扩容配置
补充说明：不传则不修改主机配置；本期至少需传本模块。后续可扩展 ContainerConfig / AIAgentConfig 命名模块字段
                     */
                    HostAutoScaleConfig m_hostConfig;
                    bool m_hostConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPAYCONFIGREQUEST_H_
