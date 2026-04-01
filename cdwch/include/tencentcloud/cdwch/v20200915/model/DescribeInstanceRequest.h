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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeInstance请求参数结构体
                */
                class DescribeInstanceRequest : public AbstractModel
                {
                public:
                    DescribeInstanceRequest();
                    ~DescribeInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群实例ID</p>
                     * @return InstanceId <p>集群实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群实例ID</p>
                     * @param _instanceId <p>集群实例ID</p>
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
                     * 获取<p>是否是open api查询</p>
                     * @return IsOpenApi <p>是否是open api查询</p>
                     * 
                     */
                    bool GetIsOpenApi() const;

                    /**
                     * 设置<p>是否是open api查询</p>
                     * @param _isOpenApi <p>是否是open api查询</p>
                     * 
                     */
                    void SetIsOpenApi(const bool& _isOpenApi);

                    /**
                     * 判断参数 IsOpenApi 是否已赋值
                     * @return IsOpenApi 是否已赋值
                     * 
                     */
                    bool IsOpenApiHasBeenSet() const;

                private:

                    /**
                     * <p>集群实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>是否是open api查询</p>
                     */
                    bool m_isOpenApi;
                    bool m_isOpenApiHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCEREQUEST_H_
