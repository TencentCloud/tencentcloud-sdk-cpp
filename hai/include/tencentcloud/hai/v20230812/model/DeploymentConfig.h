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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_DEPLOYMENTCONFIG_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_DEPLOYMENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/ContainerInfo.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 服务部署信息
                */
                class DeploymentConfig : public AbstractModel
                {
                public:
                    DeploymentConfig();
                    ~DeploymentConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器配置
                     * @return Container 容器配置
                     * 
                     */
                    ContainerInfo GetContainer() const;

                    /**
                     * 设置容器配置
                     * @param _container 容器配置
                     * 
                     */
                    void SetContainer(const ContainerInfo& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取容器数量
                     * @return ContainerCount 容器数量
                     * 
                     */
                    int64_t GetContainerCount() const;

                    /**
                     * 设置容器数量
                     * @param _containerCount 容器数量
                     * 
                     */
                    void SetContainerCount(const int64_t& _containerCount);

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                private:

                    /**
                     * 容器配置
                     */
                    ContainerInfo m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 容器数量
                     */
                    int64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_DEPLOYMENTCONFIG_H_
