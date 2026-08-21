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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINECALCULATINGSTATISTICSPOLICYIDLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINECALCULATINGSTATISTICSPOLICYIDLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeBaselineCalculatingStatisticsPolicyIDList返回参数结构体
                */
                class DescribeBaselineCalculatingStatisticsPolicyIDListResponse : public AbstractModel
                {
                public:
                    DescribeBaselineCalculatingStatisticsPolicyIDListResponse();
                    ~DescribeBaselineCalculatingStatisticsPolicyIDListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>当前统计计算中的系统父分类 ID 列表。</p>
                     * @return SystemCategoryIDList <p>当前统计计算中的系统父分类 ID 列表。</p>
                     * 
                     */
                    std::vector<uint64_t> GetSystemCategoryIDList() const;

                    /**
                     * 判断参数 SystemCategoryIDList 是否已赋值
                     * @return SystemCategoryIDList 是否已赋值
                     * 
                     */
                    bool SystemCategoryIDListHasBeenSet() const;

                    /**
                     * 获取<p>当前统计计算中的自定义策略 ID 列表。</p>
                     * @return SelfDefinedPolicyIDList <p>当前统计计算中的自定义策略 ID 列表。</p>
                     * 
                     */
                    std::vector<uint64_t> GetSelfDefinedPolicyIDList() const;

                    /**
                     * 判断参数 SelfDefinedPolicyIDList 是否已赋值
                     * @return SelfDefinedPolicyIDList 是否已赋值
                     * 
                     */
                    bool SelfDefinedPolicyIDListHasBeenSet() const;

                private:

                    /**
                     * <p>当前统计计算中的系统父分类 ID 列表。</p>
                     */
                    std::vector<uint64_t> m_systemCategoryIDList;
                    bool m_systemCategoryIDListHasBeenSet;

                    /**
                     * <p>当前统计计算中的自定义策略 ID 列表。</p>
                     */
                    std::vector<uint64_t> m_selfDefinedPolicyIDList;
                    bool m_selfDefinedPolicyIDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINECALCULATINGSTATISTICSPOLICYIDLISTRESPONSE_H_
