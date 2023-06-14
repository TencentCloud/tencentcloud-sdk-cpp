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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEINSTANCESDISKNUMREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEINSTANCESDISKNUMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeInstancesDiskNum请求参数结构体
                */
                class DescribeInstancesDiskNumRequest : public AbstractModel
                {
                public:
                    DescribeInstancesDiskNumRequest();
                    ~DescribeInstancesDiskNumRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云服务器实例ID，通过[DescribeInstances](/document/product/213/15728)接口查询。
                     * @return InstanceIds 云服务器实例ID，通过[DescribeInstances](/document/product/213/15728)接口查询。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置云服务器实例ID，通过[DescribeInstances](/document/product/213/15728)接口查询。
                     * @param _instanceIds 云服务器实例ID，通过[DescribeInstances](/document/product/213/15728)接口查询。
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
                     * 云服务器实例ID，通过[DescribeInstances](/document/product/213/15728)接口查询。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEINSTANCESDISKNUMREQUEST_H_
