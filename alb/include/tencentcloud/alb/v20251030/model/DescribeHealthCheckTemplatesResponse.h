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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEHEALTHCHECKTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEHEALTHCHECKTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/HealthCheckTemplate.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeHealthCheckTemplates返回参数结构体
                */
                class DescribeHealthCheckTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeHealthCheckTemplatesResponse();
                    ~DescribeHealthCheckTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>健康检查模板列表。</p>
                     * @return HealthCheckTemplates <p>健康检查模板列表。</p>
                     * 
                     */
                    std::vector<HealthCheckTemplate> GetHealthCheckTemplates() const;

                    /**
                     * 判断参数 HealthCheckTemplates 是否已赋值
                     * @return HealthCheckTemplates 是否已赋值
                     * 
                     */
                    bool HealthCheckTemplatesHasBeenSet() const;

                    /**
                     * 获取<p>下一次查询的Token值，如果当前是最后一页，返回为空。</p>
                     * @return NextToken <p>下一次查询的Token值，如果当前是最后一页，返回为空。</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取<p>经过筛选后查询到的健康检查模板总数。</p>
                     * @return TotalCount <p>经过筛选后查询到的健康检查模板总数。</p>
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
                     * <p>健康检查模板列表。</p>
                     */
                    std::vector<HealthCheckTemplate> m_healthCheckTemplates;
                    bool m_healthCheckTemplatesHasBeenSet;

                    /**
                     * <p>下一次查询的Token值，如果当前是最后一页，返回为空。</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * <p>经过筛选后查询到的健康检查模板总数。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEHEALTHCHECKTEMPLATESRESPONSE_H_
