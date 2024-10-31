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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_RESTARTSREINSTANCEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_RESTARTSREINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * RestartSREInstance请求参数结构体
                */
                class RestartSREInstanceRequest : public AbstractModel
                {
                public:
                    RestartSREInstanceRequest();
                    ~RestartSREInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取微服务引擎实例Id
                     * @return InstanceId 微服务引擎实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置微服务引擎实例Id
                     * @param _instanceId 微服务引擎实例Id
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
                     * 获取重启的环境类型（PROD，DEV，UAT等）
                     * @return EnvTypes 重启的环境类型（PROD，DEV，UAT等）
                     * 
                     */
                    std::vector<std::string> GetEnvTypes() const;

                    /**
                     * 设置重启的环境类型（PROD，DEV，UAT等）
                     * @param _envTypes 重启的环境类型（PROD，DEV，UAT等）
                     * 
                     */
                    void SetEnvTypes(const std::vector<std::string>& _envTypes);

                    /**
                     * 判断参数 EnvTypes 是否已赋值
                     * @return EnvTypes 是否已赋值
                     * 
                     */
                    bool EnvTypesHasBeenSet() const;

                    /**
                     * 获取指定需要重启的实例节点（当前仅支持zk单节点重启）
                     * @return NodeName 指定需要重启的实例节点（当前仅支持zk单节点重启）
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置指定需要重启的实例节点（当前仅支持zk单节点重启）
                     * @param _nodeName 指定需要重启的实例节点（当前仅支持zk单节点重启）
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                private:

                    /**
                     * 微服务引擎实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 重启的环境类型（PROD，DEV，UAT等）
                     */
                    std::vector<std::string> m_envTypes;
                    bool m_envTypesHasBeenSet;

                    /**
                     * 指定需要重启的实例节点（当前仅支持zk单节点重启）
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_RESTARTSREINSTANCEREQUEST_H_
