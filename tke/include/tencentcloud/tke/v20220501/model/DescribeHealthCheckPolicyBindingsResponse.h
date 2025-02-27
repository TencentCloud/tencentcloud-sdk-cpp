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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKPOLICYBINDINGSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKPOLICYBINDINGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/HealthCheckPolicyBinding.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * DescribeHealthCheckPolicyBindings返回参数结构体
                */
                class DescribeHealthCheckPolicyBindingsResponse : public AbstractModel
                {
                public:
                    DescribeHealthCheckPolicyBindingsResponse();
                    ~DescribeHealthCheckPolicyBindingsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取健康检测规则数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckPolicyBindings 健康检测规则数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<HealthCheckPolicyBinding> GetHealthCheckPolicyBindings() const;

                    /**
                     * 判断参数 HealthCheckPolicyBindings 是否已赋值
                     * @return HealthCheckPolicyBindings 是否已赋值
                     * 
                     */
                    bool HealthCheckPolicyBindingsHasBeenSet() const;

                    /**
                     * 获取健康检测规则数量
                     * @return TotalCount 健康检测规则数量
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
                     * 健康检测规则数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<HealthCheckPolicyBinding> m_healthCheckPolicyBindings;
                    bool m_healthCheckPolicyBindingsHasBeenSet;

                    /**
                     * 健康检测规则数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEHEALTHCHECKPOLICYBINDINGSRESPONSE_H_
