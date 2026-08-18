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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONCURRENCYLIMITDETAILLISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONCURRENCYLIMITDETAILLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConcurrencyLimitDetail.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeConcurrencyLimitDetailList返回参数结构体
                */
                class DescribeConcurrencyLimitDetailListResponse : public AbstractModel
                {
                public:
                    DescribeConcurrencyLimitDetailListResponse();
                    ~DescribeConcurrencyLimitDetailListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>并发超限明细列表</p>
                     * @return ConcurrencyLimitDetailList <p>并发超限明细列表</p>
                     * 
                     */
                    std::vector<ConcurrencyLimitDetail> GetConcurrencyLimitDetailList() const;

                    /**
                     * 判断参数 ConcurrencyLimitDetailList 是否已赋值
                     * @return ConcurrencyLimitDetailList 是否已赋值
                     * 
                     */
                    bool ConcurrencyLimitDetailListHasBeenSet() const;

                    /**
                     * 获取<p>总记录数，用于前端分页</p>
                     * @return TotalCount <p>总记录数，用于前端分页</p>
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>并发超限明细列表</p>
                     */
                    std::vector<ConcurrencyLimitDetail> m_concurrencyLimitDetailList;
                    bool m_concurrencyLimitDetailListHasBeenSet;

                    /**
                     * <p>总记录数，用于前端分页</p>
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONCURRENCYLIMITDETAILLISTRESPONSE_H_
