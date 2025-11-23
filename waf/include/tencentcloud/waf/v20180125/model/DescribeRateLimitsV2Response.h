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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBERATELIMITSV2RESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBERATELIMITSV2RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/RateLimitCommonRsp.h>
#include <tencentcloud/waf/v20180125/model/LimitRuleV2.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeRateLimitsV2返回参数结构体
                */
                class DescribeRateLimitsV2Response : public AbstractModel
                {
                public:
                    DescribeRateLimitsV2Response();
                    ~DescribeRateLimitsV2Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询结果中规则数量
                     * @return Total 查询结果中规则数量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取操作结果
                     * @return BaseInfo 操作结果
                     * 
                     */
                    RateLimitCommonRsp GetBaseInfo() const;

                    /**
                     * 判断参数 BaseInfo 是否已赋值
                     * @return BaseInfo 是否已赋值
                     * 
                     */
                    bool BaseInfoHasBeenSet() const;

                    /**
                     * 获取规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RateLimits 规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LimitRuleV2> GetRateLimits() const;

                    /**
                     * 判断参数 RateLimits 是否已赋值
                     * @return RateLimits 是否已赋值
                     * 
                     */
                    bool RateLimitsHasBeenSet() const;

                private:

                    /**
                     * 查询结果中规则数量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 操作结果
                     */
                    RateLimitCommonRsp m_baseInfo;
                    bool m_baseInfoHasBeenSet;

                    /**
                     * 规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LimitRuleV2> m_rateLimits;
                    bool m_rateLimitsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBERATELIMITSV2RESPONSE_H_
