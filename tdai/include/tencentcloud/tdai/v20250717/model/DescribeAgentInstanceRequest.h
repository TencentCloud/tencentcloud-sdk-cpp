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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * DescribeAgentInstance请求参数结构体
                */
                class DescribeAgentInstanceRequest : public AbstractModel
                {
                public:
                    DescribeAgentInstanceRequest();
                    ~DescribeAgentInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，为空时查询所有，如果填写则会根据InstanceId筛选
                     * @return InstanceId 实例ID，为空时查询所有，如果填写则会根据InstanceId筛选
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，为空时查询所有，如果填写则会根据InstanceId筛选
                     * @param _instanceId 实例ID，为空时查询所有，如果填写则会根据InstanceId筛选
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID，为空时查询所有，如果填写则会根据InstanceId筛选
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEAGENTINSTANCEREQUEST_H_
