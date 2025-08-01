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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEQUOTASRESPONSE_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEQUOTASRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/Quota.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DescribeQuotas返回参数结构体
                */
                class DescribeQuotasResponse : public AbstractModel
                {
                public:
                    DescribeQuotasResponse();
                    ~DescribeQuotasResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取配额id
                     * @return Quotas 配额id
                     * 
                     */
                    Quota GetQuotas() const;

                    /**
                     * 判断参数 Quotas 是否已赋值
                     * @return Quotas 是否已赋值
                     * 
                     */
                    bool QuotasHasBeenSet() const;

                private:

                    /**
                     * 配额id
                     */
                    Quota m_quotas;
                    bool m_quotasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEQUOTASRESPONSE_H_
