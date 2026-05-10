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
                     * 获取<p>容器配置</p>
                     * @return Container <p>容器配置</p>
                     * 
                     */
                    ContainerInfo GetContainer() const;

                    /**
                     * 设置<p>容器配置</p>
                     * @param _container <p>容器配置</p>
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
                     * 获取<p>容器数量</p>
                     * @return ContainerCount <p>容器数量</p>
                     * 
                     */
                    int64_t GetContainerCount() const;

                    /**
                     * 设置<p>容器数量</p>
                     * @param _containerCount <p>容器数量</p>
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
                     * <p>容器配置</p>
                     */
                    ContainerInfo m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * <p>容器数量</p>
                     */
                    int64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_DEPLOYMENTCONFIG_H_
