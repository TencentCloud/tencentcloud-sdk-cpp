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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEREBATEINFOSRESPONSE_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEREBATEINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/partners/v20180321/model/RebateInfoElem.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeRebateInfos返回参数结构体
                */
                class DescribeRebateInfosResponse : public AbstractModel
                {
                public:
                    DescribeRebateInfosResponse();
                    ~DescribeRebateInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返佣信息列表
                     * @return RebateInfoSet 返佣信息列表
                     * 
                     */
                    std::vector<RebateInfoElem> GetRebateInfoSet() const;

                    /**
                     * 判断参数 RebateInfoSet 是否已赋值
                     * @return RebateInfoSet 是否已赋值
                     * 
                     */
                    bool RebateInfoSetHasBeenSet() const;

                    /**
                     * 获取符合查询条件返佣信息数目
                     * @return TotalCount 符合查询条件返佣信息数目
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
                     * 返佣信息列表
                     */
                    std::vector<RebateInfoElem> m_rebateInfoSet;
                    bool m_rebateInfoSetHasBeenSet;

                    /**
                     * 符合查询条件返佣信息数目
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEREBATEINFOSRESPONSE_H_
