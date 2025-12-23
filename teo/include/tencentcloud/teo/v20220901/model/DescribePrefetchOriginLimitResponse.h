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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPREFETCHORIGINLIMITRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPREFETCHORIGINLIMITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/PrefetchOriginLimit.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribePrefetchOriginLimit返回参数结构体
                */
                class DescribePrefetchOriginLimitResponse : public AbstractModel
                {
                public:
                    DescribePrefetchOriginLimitResponse();
                    ~DescribePrefetchOriginLimitResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取回源限速限制总数。
                     * @return TotalCount 回源限速限制总数。
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
                     * 获取回源限速限制详情List。
                     * @return Limits 回源限速限制详情List。
                     * 
                     */
                    std::vector<PrefetchOriginLimit> GetLimits() const;

                    /**
                     * 判断参数 Limits 是否已赋值
                     * @return Limits 是否已赋值
                     * 
                     */
                    bool LimitsHasBeenSet() const;

                private:

                    /**
                     * 回源限速限制总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 回源限速限制详情List。
                     */
                    std::vector<PrefetchOriginLimit> m_limits;
                    bool m_limitsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPREFETCHORIGINLIMITRESPONSE_H_
