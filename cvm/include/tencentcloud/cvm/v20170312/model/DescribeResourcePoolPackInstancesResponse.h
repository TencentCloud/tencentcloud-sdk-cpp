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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESOURCEPOOLPACKINSTANCESRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESOURCEPOOLPACKINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/ResourcePoolPackInstance.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeResourcePoolPackInstances返回参数结构体
                */
                class DescribeResourcePoolPackInstancesResponse : public AbstractModel
                {
                public:
                    DescribeResourcePoolPackInstancesResponse();
                    ~DescribeResourcePoolPackInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例资源池内已创建的实例详情列表。
                     * @return DedicatedResourcePackInstanceSet 实例资源池内已创建的实例详情列表。
                     * 
                     */
                    std::vector<ResourcePoolPackInstance> GetDedicatedResourcePackInstanceSet() const;

                    /**
                     * 判断参数 DedicatedResourcePackInstanceSet 是否已赋值
                     * @return DedicatedResourcePackInstanceSet 是否已赋值
                     * 
                     */
                    bool DedicatedResourcePackInstanceSetHasBeenSet() const;

                private:

                    /**
                     * 实例资源池内已创建的实例详情列表。
                     */
                    std::vector<ResourcePoolPackInstance> m_dedicatedResourcePackInstanceSet;
                    bool m_dedicatedResourcePackInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESOURCEPOOLPACKINSTANCESRESPONSE_H_
