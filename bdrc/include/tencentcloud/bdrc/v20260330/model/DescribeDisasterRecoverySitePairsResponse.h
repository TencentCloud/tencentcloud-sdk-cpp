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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYSITEPAIRSRESPONSE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYSITEPAIRSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/SitePair.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeDisasterRecoverySitePairs返回参数结构体
                */
                class DescribeDisasterRecoverySitePairsResponse : public AbstractModel
                {
                public:
                    DescribeDisasterRecoverySitePairsResponse();
                    ~DescribeDisasterRecoverySitePairsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取有效的容灾策略数量。
                     * @return TotalCount 有效的容灾策略数量。
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
                     * 获取容灾策略列表。
                     * @return SitePairSet 容灾策略列表。
                     * 
                     */
                    std::vector<SitePair> GetSitePairSet() const;

                    /**
                     * 判断参数 SitePairSet 是否已赋值
                     * @return SitePairSet 是否已赋值
                     * 
                     */
                    bool SitePairSetHasBeenSet() const;

                private:

                    /**
                     * 有效的容灾策略数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 容灾策略列表。
                     */
                    std::vector<SitePair> m_sitePairSet;
                    bool m_sitePairSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYSITEPAIRSRESPONSE_H_
