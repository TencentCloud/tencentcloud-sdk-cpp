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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDQUOTARESPONSE_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeEtcdQuota返回参数结构体
                */
                class DescribeEtcdQuotaResponse : public AbstractModel
                {
                public:
                    DescribeEtcdQuotaResponse();
                    ~DescribeEtcdQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前配额限制
                     * @return QuotaLimit 当前配额限制
                     * 
                     */
                    uint64_t GetQuotaLimit() const;

                    /**
                     * 判断参数 QuotaLimit 是否已赋值
                     * @return QuotaLimit 是否已赋值
                     * 
                     */
                    bool QuotaLimitHasBeenSet() const;

                private:

                    /**
                     * 当前配额限制
                     */
                    uint64_t m_quotaLimit;
                    bool m_quotaLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDQUOTARESPONSE_H_
