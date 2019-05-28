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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillResourceSummary.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillResourceSummary返回参数结构体
                */
                class DescribeBillResourceSummaryResponse : public AbstractModel
                {
                public:
                    DescribeBillResourceSummaryResponse();
                    ~DescribeBillResourceSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取资源汇总列表
                     * @return ResourceSummarySet 资源汇总列表
                     */
                    std::vector<BillResourceSummary> GetResourceSummarySet() const;

                    /**
                     * 判断参数 ResourceSummarySet 是否已赋值
                     * @return ResourceSummarySet 是否已赋值
                     */
                    bool ResourceSummarySetHasBeenSet() const;

                private:

                    /**
                     * 资源汇总列表
                     */
                    std::vector<BillResourceSummary> m_resourceSummarySet;
                    bool m_resourceSummarySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYRESPONSE_H_
