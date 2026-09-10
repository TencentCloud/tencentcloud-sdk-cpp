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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CHANGEINSTANCEMASTERREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CHANGEINSTANCEMASTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * ChangeInstanceMaster请求参数结构体
                */
                class ChangeInstanceMasterRequest : public AbstractModel
                {
                public:
                    ChangeInstanceMasterRequest();
                    ~ChangeInstanceMasterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID，如：kee-6ubh****。</p>
                     * @return InstanceId <p>实例 ID，如：kee-6ubh****。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，如：kee-6ubh****。</p>
                     * @param _instanceId <p>实例 ID，如：kee-6ubh****。</p>
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
                     * 获取<p>副本节点组 ID，请通过接口DescribeInstanceReplicas获取多 AZ备节点组的 ID 信息。</p>
                     * @return GroupId <p>副本节点组 ID，请通过接口DescribeInstanceReplicas获取多 AZ备节点组的 ID 信息。</p>
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>副本节点组 ID，请通过接口DescribeInstanceReplicas获取多 AZ备节点组的 ID 信息。</p>
                     * @param _groupId <p>副本节点组 ID，请通过接口DescribeInstanceReplicas获取多 AZ备节点组的 ID 信息。</p>
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>副本节点 ID。</p>
                     * @return NodeId <p>副本节点 ID。</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>副本节点 ID。</p>
                     * @param _nodeId <p>副本节点 ID。</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，如：kee-6ubh****。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>副本节点组 ID，请通过接口DescribeInstanceReplicas获取多 AZ备节点组的 ID 信息。</p>
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>副本节点 ID。</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CHANGEINSTANCEMASTERREQUEST_H_
