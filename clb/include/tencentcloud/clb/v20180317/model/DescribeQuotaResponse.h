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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEQUOTARESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Quota.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
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
                     * 获取配额列表
                     * @return QuotaSet 配额列表
                     * 
                     */
                    std::vector<Quota> GetQuotaSet() const;

                    /**
                     * 判断参数 QuotaSet 是否已赋值
                     * @return QuotaSet 是否已赋值
                     * 
                     */
                    bool QuotaSetHasBeenSet() const;

                private:

                    /**
                     * 配额列表
                     */
                    std::vector<Quota> m_quotaSet;
                    bool m_quotaSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEQUOTARESPONSE_H_
