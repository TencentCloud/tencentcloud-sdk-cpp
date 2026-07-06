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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBERISKLISTRESPONSE_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBERISKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/PolicyRisk.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * DescribeRiskList返回参数结构体
                */
                class DescribeRiskListResponse : public AbstractModel
                {
                public:
                    DescribeRiskListResponse();
                    ~DescribeRiskListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略问题列表
                     * @return PolicyRiskLst 策略问题列表
                     * 
                     */
                    std::vector<PolicyRisk> GetPolicyRiskLst() const;

                    /**
                     * 判断参数 PolicyRiskLst 是否已赋值
                     * @return PolicyRiskLst 是否已赋值
                     * 
                     */
                    bool PolicyRiskLstHasBeenSet() const;

                    /**
                     * 获取策略问题数
                     * @return Total 策略问题数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 策略问题列表
                     */
                    std::vector<PolicyRisk> m_policyRiskLst;
                    bool m_policyRiskLstHasBeenSet;

                    /**
                     * 策略问题数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBERISKLISTRESPONSE_H_
