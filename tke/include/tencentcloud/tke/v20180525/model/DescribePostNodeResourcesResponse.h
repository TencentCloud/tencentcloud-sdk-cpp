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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPOSTNODERESOURCESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPOSTNODERESOURCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/SuperNodeResource.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribePostNodeResources返回参数结构体
                */
                class DescribePostNodeResourcesResponse : public AbstractModel
                {
                public:
                    DescribePostNodeResourcesResponse();
                    ~DescribePostNodeResourcesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Pod详情
                     * @return PodSet Pod详情
                     * 
                     */
                    std::vector<SuperNodeResource> GetPodSet() const;

                    /**
                     * 判断参数 PodSet 是否已赋值
                     * @return PodSet 是否已赋值
                     * 
                     */
                    bool PodSetHasBeenSet() const;

                    /**
                     * 获取预留券详情
                     * @return ReservedInstanceSet 预留券详情
                     * 
                     */
                    std::vector<SuperNodeResource> GetReservedInstanceSet() const;

                    /**
                     * 判断参数 ReservedInstanceSet 是否已赋值
                     * @return ReservedInstanceSet 是否已赋值
                     * 
                     */
                    bool ReservedInstanceSetHasBeenSet() const;

                private:

                    /**
                     * Pod详情
                     */
                    std::vector<SuperNodeResource> m_podSet;
                    bool m_podSetHasBeenSet;

                    /**
                     * 预留券详情
                     */
                    std::vector<SuperNodeResource> m_reservedInstanceSet;
                    bool m_reservedInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPOSTNODERESOURCESRESPONSE_H_
