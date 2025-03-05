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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_RESTARTINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_RESTARTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * RestartInstance请求参数结构体
                */
                class RestartInstanceRequest : public AbstractModel
                {
                public:
                    RestartInstanceRequest();
                    ~RestartInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例名称，例如“cdwpg-xxxx"
                     * @return InstanceId 实例名称，例如“cdwpg-xxxx"
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例名称，例如“cdwpg-xxxx"
                     * @param _instanceId 实例名称，例如“cdwpg-xxxx"
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
                     * 获取需要重启的节点类型么，gtm/cn/dn/fn
                     * @return NodeTypes 需要重启的节点类型么，gtm/cn/dn/fn
                     * 
                     */
                    std::vector<std::string> GetNodeTypes() const;

                    /**
                     * 设置需要重启的节点类型么，gtm/cn/dn/fn
                     * @param _nodeTypes 需要重启的节点类型么，gtm/cn/dn/fn
                     * 
                     */
                    void SetNodeTypes(const std::vector<std::string>& _nodeTypes);

                    /**
                     * 判断参数 NodeTypes 是否已赋值
                     * @return NodeTypes 是否已赋值
                     * 
                     */
                    bool NodeTypesHasBeenSet() const;

                    /**
                     * 获取需要重启的节点编号，指定重启节点
                     * @return NodeIds 需要重启的节点编号，指定重启节点
                     * 
                     */
                    std::vector<std::string> GetNodeIds() const;

                    /**
                     * 设置需要重启的节点编号，指定重启节点
                     * @param _nodeIds 需要重启的节点编号，指定重启节点
                     * 
                     */
                    void SetNodeIds(const std::vector<std::string>& _nodeIds);

                    /**
                     * 判断参数 NodeIds 是否已赋值
                     * @return NodeIds 是否已赋值
                     * 
                     */
                    bool NodeIdsHasBeenSet() const;

                private:

                    /**
                     * 实例名称，例如“cdwpg-xxxx"
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 需要重启的节点类型么，gtm/cn/dn/fn
                     */
                    std::vector<std::string> m_nodeTypes;
                    bool m_nodeTypesHasBeenSet;

                    /**
                     * 需要重启的节点编号，指定重启节点
                     */
                    std::vector<std::string> m_nodeIds;
                    bool m_nodeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_RESTARTINSTANCEREQUEST_H_
