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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEQUOTARESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/QuotaInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeQuota返回参数结构体
                */
                class DescribeQuotaResponse : public AbstractModel
                {
                public:
                    DescribeQuotaResponse();
                    ~DescribeQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取配额列表。每个元素表示一个配额类型的查询结果；当请求传入 ResourceIds 时，每个元素表示一个配额类型和一个资源ID组合的查询结果。
                     * @return Quotas 配额列表。每个元素表示一个配额类型的查询结果；当请求传入 ResourceIds 时，每个元素表示一个配额类型和一个资源ID组合的查询结果。
                     * 
                     */
                    std::vector<QuotaInfo> GetQuotas() const;

                    /**
                     * 判断参数 Quotas 是否已赋值
                     * @return Quotas 是否已赋值
                     * 
                     */
                    bool QuotasHasBeenSet() const;

                private:

                    /**
                     * 配额列表。每个元素表示一个配额类型的查询结果；当请求传入 ResourceIds 时，每个元素表示一个配额类型和一个资源ID组合的查询结果。
                     */
                    std::vector<QuotaInfo> m_quotas;
                    bool m_quotasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEQUOTARESPONSE_H_
