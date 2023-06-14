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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERINSTANCETYPESRESPONSE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERINSTANCETYPESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/DedicatedClusterInstanceType.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusterInstanceTypes返回参数结构体
                */
                class DescribeDedicatedClusterInstanceTypesResponse : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterInstanceTypesResponse();
                    ~DescribeDedicatedClusterInstanceTypesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取支持的实例规格列表
                     * @return DedicatedClusterInstanceTypeSet 支持的实例规格列表
                     * 
                     */
                    std::vector<DedicatedClusterInstanceType> GetDedicatedClusterInstanceTypeSet() const;

                    /**
                     * 判断参数 DedicatedClusterInstanceTypeSet 是否已赋值
                     * @return DedicatedClusterInstanceTypeSet 是否已赋值
                     * 
                     */
                    bool DedicatedClusterInstanceTypeSetHasBeenSet() const;

                private:

                    /**
                     * 支持的实例规格列表
                     */
                    std::vector<DedicatedClusterInstanceType> m_dedicatedClusterInstanceTypeSet;
                    bool m_dedicatedClusterInstanceTypeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERINSTANCETYPESRESPONSE_H_
