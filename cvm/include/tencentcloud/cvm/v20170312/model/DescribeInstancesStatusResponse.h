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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESSTATUSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/InstanceStatus.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeInstancesStatus返回参数结构体
                */
                class DescribeInstancesStatusResponse : public AbstractModel
                {
                public:
                    DescribeInstancesStatusResponse();
                    ~DescribeInstancesStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的实例状态数量。
                     * @return TotalCount 符合条件的实例状态数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取[实例状态](https://cloud.tencent.com/document/api/213/15753#InstanceStatus) 列表。
                     * @return InstanceStatusSet [实例状态](https://cloud.tencent.com/document/api/213/15753#InstanceStatus) 列表。
                     * 
                     */
                    std::vector<InstanceStatus> GetInstanceStatusSet() const;

                    /**
                     * 判断参数 InstanceStatusSet 是否已赋值
                     * @return InstanceStatusSet 是否已赋值
                     * 
                     */
                    bool InstanceStatusSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的实例状态数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * [实例状态](https://cloud.tencent.com/document/api/213/15753#InstanceStatus) 列表。
                     */
                    std::vector<InstanceStatus> m_instanceStatusSet;
                    bool m_instanceStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESSTATUSRESPONSE_H_
