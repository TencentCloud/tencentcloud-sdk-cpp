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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBETENDISSLOWLOGRESPONSE_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBETENDISSLOWLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/keewidb/v20220308/model/TendisSlowLogDetail.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * DescribeTendisSlowLog返回参数结构体
                */
                class DescribeTendisSlowLogResponse : public AbstractModel
                {
                public:
                    DescribeTendisSlowLogResponse();
                    ~DescribeTendisSlowLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取慢查询详情。
                     * @return TendisSlowLogDetail 慢查询详情。
                     * 
                     */
                    std::vector<TendisSlowLogDetail> GetTendisSlowLogDetail() const;

                    /**
                     * 判断参数 TendisSlowLogDetail 是否已赋值
                     * @return TendisSlowLogDetail 是否已赋值
                     * 
                     */
                    bool TendisSlowLogDetailHasBeenSet() const;

                    /**
                     * 获取慢查询总数。
                     * @return TotalCount 慢查询总数。
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
                     * 慢查询详情。
                     */
                    std::vector<TendisSlowLogDetail> m_tendisSlowLogDetail;
                    bool m_tendisSlowLogDetailHasBeenSet;

                    /**
                     * 慢查询总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBETENDISSLOWLOGRESPONSE_H_
