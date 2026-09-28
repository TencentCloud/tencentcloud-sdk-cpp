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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCESTATEREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCESTATEREQUEST_H_

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
                * DescribeInstanceState请求参数结构体
                */
                class DescribeInstanceStateRequest : public AbstractModel
                {
                public:
                    DescribeInstanceStateRequest();
                    ~DescribeInstanceStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群实例名称</p>
                     * @return InstanceId <p>集群实例名称</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群实例名称</p>
                     * @param _instanceId <p>集群实例名称</p>
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
                     * 获取<p>集群实例名称列表（批量查询，优先于 InstanceId；上限100，超出截断）</p>
                     * @return InstanceIds <p>集群实例名称列表（批量查询，优先于 InstanceId；上限100，超出截断）</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>集群实例名称列表（批量查询，优先于 InstanceId；上限100，超出截断）</p>
                     * @param _instanceIds <p>集群实例名称列表（批量查询，优先于 InstanceId；上限100，超出截断）</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * <p>集群实例名称</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>集群实例名称列表（批量查询，优先于 InstanceId；上限100，超出截断）</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCESTATEREQUEST_H_
