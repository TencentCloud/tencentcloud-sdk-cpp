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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVFREEQUOTARESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVFREEQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/PostpayEnvQuota.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeEnvFreeQuota返回参数结构体
                */
                class DescribeEnvFreeQuotaResponse : public AbstractModel
                {
                public:
                    DescribeEnvFreeQuotaResponse();
                    ~DescribeEnvFreeQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取免费抵扣配额详情
                     * @return QuotaItems 免费抵扣配额详情
                     * 
                     */
                    std::vector<PostpayEnvQuota> GetQuotaItems() const;

                    /**
                     * 判断参数 QuotaItems 是否已赋值
                     * @return QuotaItems 是否已赋值
                     * 
                     */
                    bool QuotaItemsHasBeenSet() const;

                private:

                    /**
                     * 免费抵扣配额详情
                     */
                    std::vector<PostpayEnvQuota> m_quotaItems;
                    bool m_quotaItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVFREEQUOTARESPONSE_H_
