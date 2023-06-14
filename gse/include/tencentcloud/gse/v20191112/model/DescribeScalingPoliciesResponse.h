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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBESCALINGPOLICIESRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBESCALINGPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/ScalingPolicy.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeScalingPolicies返回参数结构体
                */
                class DescribeScalingPoliciesResponse : public AbstractModel
                {
                public:
                    DescribeScalingPoliciesResponse();
                    ~DescribeScalingPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取动态扩缩容配置策略数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScalingPolicies 动态扩缩容配置策略数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ScalingPolicy> GetScalingPolicies() const;

                    /**
                     * 判断参数 ScalingPolicies 是否已赋值
                     * @return ScalingPolicies 是否已赋值
                     * 
                     */
                    bool ScalingPoliciesHasBeenSet() const;

                    /**
                     * 获取动态扩缩容配置策略总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 动态扩缩容配置策略总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 动态扩缩容配置策略数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScalingPolicy> m_scalingPolicies;
                    bool m_scalingPoliciesHasBeenSet;

                    /**
                     * 动态扩缩容配置策略总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBESCALINGPOLICIESRESPONSE_H_
