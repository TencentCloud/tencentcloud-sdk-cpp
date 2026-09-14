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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEQASUMMARYLISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEQASUMMARYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/QASummary.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeQASummaryList返回参数结构体
                */
                class DescribeQASummaryListResponse : public AbstractModel
                {
                public:
                    DescribeQASummaryListResponse();
                    ~DescribeQASummaryListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>未采纳数量</p>
                     * @return NotAcceptedCount <p>未采纳数量</p>
                     * 
                     */
                    uint64_t GetNotAcceptedCount() const;

                    /**
                     * 判断参数 NotAcceptedCount 是否已赋值
                     * @return NotAcceptedCount 是否已赋值
                     * 
                     */
                    bool NotAcceptedCountHasBeenSet() const;

                    /**
                     * 获取<p>待校验数量</p>
                     * @return PendingVerifyCount <p>待校验数量</p>
                     * 
                     */
                    uint64_t GetPendingVerifyCount() const;

                    /**
                     * 判断参数 PendingVerifyCount 是否已赋值
                     * @return PendingVerifyCount 是否已赋值
                     * 
                     */
                    bool PendingVerifyCountHasBeenSet() const;

                    /**
                     * 获取<p>QA 列表</p>
                     * @return QaList <p>QA 列表</p>
                     * 
                     */
                    std::vector<QASummary> GetQaList() const;

                    /**
                     * 判断参数 QaList 是否已赋值
                     * @return QaList 是否已赋值
                     * 
                     */
                    bool QaListHasBeenSet() const;

                    /**
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>未采纳数量</p>
                     */
                    uint64_t m_notAcceptedCount;
                    bool m_notAcceptedCountHasBeenSet;

                    /**
                     * <p>待校验数量</p>
                     */
                    uint64_t m_pendingVerifyCount;
                    bool m_pendingVerifyCountHasBeenSet;

                    /**
                     * <p>QA 列表</p>
                     */
                    std::vector<QASummary> m_qaList;
                    bool m_qaListHasBeenSet;

                    /**
                     * <p>总数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEQASUMMARYLISTRESPONSE_H_
