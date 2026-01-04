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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECCNVPCFWPOLICYLIMITRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECCNVPCFWPOLICYLIMITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCcnVpcFwPolicyLimit返回参数结构体
                */
                class DescribeCcnVpcFwPolicyLimitResponse : public AbstractModel
                {
                public:
                    DescribeCcnVpcFwPolicyLimitResponse();
                    ~DescribeCcnVpcFwPolicyLimitResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取支持的引流策略数量（最外层总条数）
                     * @return CcnPolicyInterconnectPairLenLimit 支持的引流策略数量（最外层总条数）
                     * 
                     */
                    uint64_t GetCcnPolicyInterconnectPairLenLimit() const;

                    /**
                     * 判断参数 CcnPolicyInterconnectPairLenLimit 是否已赋值
                     * @return CcnPolicyInterconnectPairLenLimit 是否已赋值
                     * 
                     */
                    bool CcnPolicyInterconnectPairLenLimitHasBeenSet() const;

                    /**
                     * 获取单条引流策略中单组的最大配置数量（内层单组总条数）
                     * @return CcnPolicyGroupLenLimit 单条引流策略中单组的最大配置数量（内层单组总条数）
                     * 
                     */
                    uint64_t GetCcnPolicyGroupLenLimit() const;

                    /**
                     * 判断参数 CcnPolicyGroupLenLimit 是否已赋值
                     * @return CcnPolicyGroupLenLimit 是否已赋值
                     * 
                     */
                    bool CcnPolicyGroupLenLimitHasBeenSet() const;

                    /**
                     * 获取接入的实例网段长度（网段数量）限制
                     * @return CcnPolicyCidrLenLimit 接入的实例网段长度（网段数量）限制
                     * 
                     */
                    uint64_t GetCcnPolicyCidrLenLimit() const;

                    /**
                     * 判断参数 CcnPolicyCidrLenLimit 是否已赋值
                     * @return CcnPolicyCidrLenLimit 是否已赋值
                     * 
                     */
                    bool CcnPolicyCidrLenLimitHasBeenSet() const;

                private:

                    /**
                     * 支持的引流策略数量（最外层总条数）
                     */
                    uint64_t m_ccnPolicyInterconnectPairLenLimit;
                    bool m_ccnPolicyInterconnectPairLenLimitHasBeenSet;

                    /**
                     * 单条引流策略中单组的最大配置数量（内层单组总条数）
                     */
                    uint64_t m_ccnPolicyGroupLenLimit;
                    bool m_ccnPolicyGroupLenLimitHasBeenSet;

                    /**
                     * 接入的实例网段长度（网段数量）限制
                     */
                    uint64_t m_ccnPolicyCidrLenLimit;
                    bool m_ccnPolicyCidrLenLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECCNVPCFWPOLICYLIMITRESPONSE_H_
