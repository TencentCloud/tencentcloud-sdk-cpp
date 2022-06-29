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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERTYPESRESPONSE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERTYPESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/DedicatedClusterType.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusterTypes返回参数结构体
                */
                class DescribeDedicatedClusterTypesResponse : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterTypesResponse();
                    ~DescribeDedicatedClusterTypesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取专用集群配置列表
                     * @return DedicatedClusterTypeSet 专用集群配置列表
                     */
                    std::vector<DedicatedClusterType> GetDedicatedClusterTypeSet() const;

                    /**
                     * 判断参数 DedicatedClusterTypeSet 是否已赋值
                     * @return DedicatedClusterTypeSet 是否已赋值
                     */
                    bool DedicatedClusterTypeSetHasBeenSet() const;

                    /**
                     * 获取符合条件的个数
                     * @return TotalCount 符合条件的个数
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 专用集群配置列表
                     */
                    std::vector<DedicatedClusterType> m_dedicatedClusterTypeSet;
                    bool m_dedicatedClusterTypeSetHasBeenSet;

                    /**
                     * 符合条件的个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERTYPESRESPONSE_H_
