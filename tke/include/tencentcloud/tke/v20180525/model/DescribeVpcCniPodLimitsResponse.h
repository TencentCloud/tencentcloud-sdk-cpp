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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEVPCCNIPODLIMITSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEVPCCNIPODLIMITSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PodLimitsInstance.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeVpcCniPodLimits返回参数结构体
                */
                class DescribeVpcCniPodLimitsResponse : public AbstractModel
                {
                public:
                    DescribeVpcCniPodLimitsResponse();
                    ~DescribeVpcCniPodLimitsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取机型数据数量
                     * @return TotalCount 机型数据数量
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
                     * 获取机型信息及其可支持的最大VPC-CNI模式Pod数量信息
                     * @return PodLimitsInstanceSet 机型信息及其可支持的最大VPC-CNI模式Pod数量信息
                     * 
                     */
                    std::vector<PodLimitsInstance> GetPodLimitsInstanceSet() const;

                    /**
                     * 判断参数 PodLimitsInstanceSet 是否已赋值
                     * @return PodLimitsInstanceSet 是否已赋值
                     * 
                     */
                    bool PodLimitsInstanceSetHasBeenSet() const;

                private:

                    /**
                     * 机型数据数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 机型信息及其可支持的最大VPC-CNI模式Pod数量信息
                     */
                    std::vector<PodLimitsInstance> m_podLimitsInstanceSet;
                    bool m_podLimitsInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEVPCCNIPODLIMITSRESPONSE_H_
