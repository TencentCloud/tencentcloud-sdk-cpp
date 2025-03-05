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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_SCALEOUTINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_SCALEOUTINSTANCEREQUEST_H_

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
                * ScaleOutInstance请求参数结构体
                */
                class ScaleOutInstanceRequest : public AbstractModel
                {
                public:
                    ScaleOutInstanceRequest();
                    ~ScaleOutInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群名
                     * @return InstanceId 集群名
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群名
                     * @param _instanceId 集群名
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
                     * 获取节点类型
                     * @return NodeType 节点类型
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型
                     * @param _nodeType 节点类型
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取扩容节点数量
                     * @return ScaleOutCount 扩容节点数量
                     * 
                     */
                    int64_t GetScaleOutCount() const;

                    /**
                     * 设置扩容节点数量
                     * @param _scaleOutCount 扩容节点数量
                     * 
                     */
                    void SetScaleOutCount(const int64_t& _scaleOutCount);

                    /**
                     * 判断参数 ScaleOutCount 是否已赋值
                     * @return ScaleOutCount 是否已赋值
                     * 
                     */
                    bool ScaleOutCountHasBeenSet() const;

                private:

                    /**
                     * 集群名
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点类型
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 扩容节点数量
                     */
                    int64_t m_scaleOutCount;
                    bool m_scaleOutCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_SCALEOUTINSTANCEREQUEST_H_
