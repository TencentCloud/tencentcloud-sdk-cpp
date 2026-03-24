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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEVMINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEVMINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/VmInstance.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeVmInstances返回参数结构体
                */
                class DescribeVmInstancesResponse : public AbstractModel
                {
                public:
                    DescribeVmInstancesResponse();
                    ~DescribeVmInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取主机实例列表
                     * @return InstanceList 主机实例列表
                     * 
                     */
                    std::vector<VmInstance> GetInstanceList() const;

                    /**
                     * 判断参数 InstanceList 是否已赋值
                     * @return InstanceList 是否已赋值
                     * 
                     */
                    bool InstanceListHasBeenSet() const;

                private:

                    /**
                     * 主机实例列表
                     */
                    std::vector<VmInstance> m_instanceList;
                    bool m_instanceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEVMINSTANCESRESPONSE_H_
