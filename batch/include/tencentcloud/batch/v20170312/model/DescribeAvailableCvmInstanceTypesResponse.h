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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEAVAILABLECVMINSTANCETYPESRESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEAVAILABLECVMINSTANCETYPESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/InstanceTypeConfig.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAvailableCvmInstanceTypes返回参数结构体
                */
                class DescribeAvailableCvmInstanceTypesResponse : public AbstractModel
                {
                public:
                    DescribeAvailableCvmInstanceTypesResponse();
                    ~DescribeAvailableCvmInstanceTypesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取机型配置数组
                     * @return InstanceTypeConfigSet 机型配置数组
                     * 
                     */
                    std::vector<InstanceTypeConfig> GetInstanceTypeConfigSet() const;

                    /**
                     * 判断参数 InstanceTypeConfigSet 是否已赋值
                     * @return InstanceTypeConfigSet 是否已赋值
                     * 
                     */
                    bool InstanceTypeConfigSetHasBeenSet() const;

                private:

                    /**
                     * 机型配置数组
                     */
                    std::vector<InstanceTypeConfig> m_instanceTypeConfigSet;
                    bool m_instanceTypeConfigSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEAVAILABLECVMINSTANCETYPESRESPONSE_H_
