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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMAPPLYORDERLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMAPPLYORDERLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmApplyOrder.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmApplyOrderList返回参数结构体
                */
                class DescribeDspmApplyOrderListResponse : public AbstractModel
                {
                public:
                    DescribeDspmApplyOrderListResponse();
                    ~DescribeDspmApplyOrderListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取申请单总数
                     * @return TotalCount 申请单总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取申请单详情
                     * @return OrderSet 申请单详情
                     * 
                     */
                    std::vector<DspmApplyOrder> GetOrderSet() const;

                    /**
                     * 判断参数 OrderSet 是否已赋值
                     * @return OrderSet 是否已赋值
                     * 
                     */
                    bool OrderSetHasBeenSet() const;

                private:

                    /**
                     * 申请单总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 申请单详情
                     */
                    std::vector<DspmApplyOrder> m_orderSet;
                    bool m_orderSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMAPPLYORDERLISTRESPONSE_H_
