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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEENTERPRISECONTRACTREVIEWCHECKLISTSRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEENTERPRISECONTRACTREVIEWCHECKLISTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/Checklist.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeEnterpriseContractReviewChecklists返回参数结构体
                */
                class DescribeEnterpriseContractReviewChecklistsResponse : public AbstractModel
                {
                public:
                    DescribeEnterpriseContractReviewChecklistsResponse();
                    ~DescribeEnterpriseContractReviewChecklistsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的总条数
                     * @return Total 查询的总条数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取清单列表
                     * @return Checklists 清单列表
                     * 
                     */
                    std::vector<Checklist> GetChecklists() const;

                    /**
                     * 判断参数 Checklists 是否已赋值
                     * @return Checklists 是否已赋值
                     * 
                     */
                    bool ChecklistsHasBeenSet() const;

                private:

                    /**
                     * 查询的总条数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 清单列表
                     */
                    std::vector<Checklist> m_checklists;
                    bool m_checklistsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEENTERPRISECONTRACTREVIEWCHECKLISTSRESPONSE_H_
