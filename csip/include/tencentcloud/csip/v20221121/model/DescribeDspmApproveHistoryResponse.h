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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMAPPROVEHISTORYRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMAPPROVEHISTORYRESPONSE_H_

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
                * DescribeDspmApproveHistory返回参数结构体
                */
                class DescribeDspmApproveHistoryResponse : public AbstractModel
                {
                public:
                    DescribeDspmApproveHistoryResponse();
                    ~DescribeDspmApproveHistoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取审批记录总数
                     * @return TotalCount 审批记录总数
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
                     * 获取审批记录信息
                     * @return ApproveSet 审批记录信息
                     * 
                     */
                    std::vector<DspmApplyOrder> GetApproveSet() const;

                    /**
                     * 判断参数 ApproveSet 是否已赋值
                     * @return ApproveSet 是否已赋值
                     * 
                     */
                    bool ApproveSetHasBeenSet() const;

                private:

                    /**
                     * 审批记录总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 审批记录信息
                     */
                    std::vector<DspmApplyOrder> m_approveSet;
                    bool m_approveSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMAPPROVEHISTORYRESPONSE_H_
