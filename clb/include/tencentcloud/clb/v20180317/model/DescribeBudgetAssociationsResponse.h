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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBUDGETASSOCIATIONSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBUDGETASSOCIATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/BudgetAssociation.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeBudgetAssociations返回参数结构体
                */
                class DescribeBudgetAssociationsResponse : public AbstractModel
                {
                public:
                    DescribeBudgetAssociationsResponse();
                    ~DescribeBudgetAssociationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Budget关联资源列表。</p>
                     * @return AssociationSet <p>Budget关联资源列表。</p>
                     * 
                     */
                    std::vector<BudgetAssociation> GetAssociationSet() const;

                    /**
                     * 判断参数 AssociationSet 是否已赋值
                     * @return AssociationSet 是否已赋值
                     * 
                     */
                    bool AssociationSetHasBeenSet() const;

                    /**
                     * 获取<p>符合条件的总数。</p>
                     * @return TotalCount <p>符合条件的总数。</p>
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
                     * <p>Budget关联资源列表。</p>
                     */
                    std::vector<BudgetAssociation> m_associationSet;
                    bool m_associationSetHasBeenSet;

                    /**
                     * <p>符合条件的总数。</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBUDGETASSOCIATIONSRESPONSE_H_
