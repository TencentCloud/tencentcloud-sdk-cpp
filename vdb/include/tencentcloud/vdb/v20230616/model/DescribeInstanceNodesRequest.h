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

#ifndef TENCENTCLOUD_VDB_V20230616_MODEL_DESCRIBEINSTANCENODESREQUEST_H_
#define TENCENTCLOUD_VDB_V20230616_MODEL_DESCRIBEINSTANCENODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vdb
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeInstanceNodes请求参数结构体
                */
                class DescribeInstanceNodesRequest : public AbstractModel
                {
                public:
                    DescribeInstanceNodesRequest();
                    ~DescribeInstanceNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取limit
                     * @return Limit limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置limit
                     * @param _limit limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取offset
                     * @return Offset offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置offset
                     * @param _offset offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取component
                     * @return Component component
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置component
                     * @param _component component
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * component
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_DESCRIBEINSTANCENODESREQUEST_H_
