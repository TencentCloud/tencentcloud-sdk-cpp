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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXASSETSCOPE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXASSETSCOPE_H_

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
                * 流量沙箱生效资产元素
                */
                class TrafficSandboxAssetScope : public AbstractModel
                {
                public:
                    TrafficSandboxAssetScope();
                    ~TrafficSandboxAssetScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例 ID，仅主机资产填写
                     * @return InstanceId 实例 ID，仅主机资产填写
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，仅主机资产填写
                     * @param _instanceId 实例 ID，仅主机资产填写
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取容器 ID，仅容器资产类型时填写
                     * @return ContainerId 容器 ID，仅容器资产类型时填写
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置容器 ID，仅容器资产类型时填写
                     * @param _containerId 容器 ID，仅容器资产类型时填写
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，仅主机资产填写
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 容器 ID，仅容器资产类型时填写
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXASSETSCOPE_H_
