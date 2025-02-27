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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKPOLICIESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/HealthCheckPolicy.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * DescribeHealthCheckPolicies返回参数结构体
                */
                class DescribeHealthCheckPoliciesResponse : public AbstractModel
                {
                public:
                    DescribeHealthCheckPoliciesResponse();
                    ~DescribeHealthCheckPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取健康检测策略数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckPolicies 健康检测策略数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<HealthCheckPolicy> GetHealthCheckPolicies() const;

                    /**
                     * 判断参数 HealthCheckPolicies 是否已赋值
                     * @return HealthCheckPolicies 是否已赋值
                     * 
                     */
                    bool HealthCheckPoliciesHasBeenSet() const;

                    /**
                     * 获取数组总数目
                     * @return TotalCount 数组总数目
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 健康检测策略数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<HealthCheckPolicy> m_healthCheckPolicies;
                    bool m_healthCheckPoliciesHasBeenSet;

                    /**
                     * 数组总数目
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKPOLICIESRESPONSE_H_
