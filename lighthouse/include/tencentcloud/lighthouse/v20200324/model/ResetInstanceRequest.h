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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETINSTANCEREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DockerContainerConfiguration.h>
#include <tencentcloud/lighthouse/v20200324/model/LoginConfiguration.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ResetInstance请求参数结构体
                */
                class ResetInstanceRequest : public AbstractModel
                {
                public:
                    ResetInstanceRequest();
                    ~ResetInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * @return InstanceId 实例 ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * @param _instanceId 实例 ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
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
                     * 获取镜像 ID。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     * @return BlueprintId 镜像 ID。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置镜像 ID。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     * @param _blueprintId 镜像 ID。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取要创建的容器配置列表。
注意：仅重装的镜像类型为Docker时支持传入该参数。
                     * @return Containers 要创建的容器配置列表。
注意：仅重装的镜像类型为Docker时支持传入该参数。
                     * 
                     */
                    std::vector<DockerContainerConfiguration> GetContainers() const;

                    /**
                     * 设置要创建的容器配置列表。
注意：仅重装的镜像类型为Docker时支持传入该参数。
                     * @param _containers 要创建的容器配置列表。
注意：仅重装的镜像类型为Docker时支持传入该参数。
                     * 
                     */
                    void SetContainers(const std::vector<DockerContainerConfiguration>& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     * 
                     */
                    bool ContainersHasBeenSet() const;

                    /**
                     * 获取实例登录信息配置。默认缺失情况下代表用户选择实例创建后设置登录密码或绑定密钥。
                     * @return LoginConfiguration 实例登录信息配置。默认缺失情况下代表用户选择实例创建后设置登录密码或绑定密钥。
                     * 
                     */
                    LoginConfiguration GetLoginConfiguration() const;

                    /**
                     * 设置实例登录信息配置。默认缺失情况下代表用户选择实例创建后设置登录密码或绑定密钥。
                     * @param _loginConfiguration 实例登录信息配置。默认缺失情况下代表用户选择实例创建后设置登录密码或绑定密钥。
                     * 
                     */
                    void SetLoginConfiguration(const LoginConfiguration& _loginConfiguration);

                    /**
                     * 判断参数 LoginConfiguration 是否已赋值
                     * @return LoginConfiguration 是否已赋值
                     * 
                     */
                    bool LoginConfigurationHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 镜像 ID。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * 要创建的容器配置列表。
注意：仅重装的镜像类型为Docker时支持传入该参数。
                     */
                    std::vector<DockerContainerConfiguration> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * 实例登录信息配置。默认缺失情况下代表用户选择实例创建后设置登录密码或绑定密钥。
                     */
                    LoginConfiguration m_loginConfiguration;
                    bool m_loginConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETINSTANCEREQUEST_H_
