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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTREVIEWCHECKLISTRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTREVIEWCHECKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/ChecklistCategory.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeContractReviewChecklist返回参数结构体
                */
                class DescribeContractReviewChecklistResponse : public AbstractModel
                {
                public:
                    DescribeContractReviewChecklistResponse();
                    ~DescribeContractReviewChecklistResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>获取的合同风险审查清单ID</p>
                     * @return ChecklistId <p>获取的合同风险审查清单ID</p>
                     * 
                     */
                    std::string GetChecklistId() const;

                    /**
                     * 判断参数 ChecklistId 是否已赋值
                     * @return ChecklistId 是否已赋值
                     * 
                     */
                    bool ChecklistIdHasBeenSet() const;

                    /**
                     * 获取<p>获取的合同风险审查清单名称</p>
                     * @return Name <p>获取的合同风险审查清单名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>获取的合同风险审查清单是否启用</p>
                     * @return Enabled <p>获取的合同风险审查清单是否启用</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>获取的合同风险审查清单审查点列表</p>
                     * @return Categories <p>获取的合同风险审查清单审查点列表</p>
                     * 
                     */
                    std::vector<ChecklistCategory> GetCategories() const;

                    /**
                     * 判断参数 Categories 是否已赋值
                     * @return Categories 是否已赋值
                     * 
                     */
                    bool CategoriesHasBeenSet() const;

                private:

                    /**
                     * <p>获取的合同风险审查清单ID</p>
                     */
                    std::string m_checklistId;
                    bool m_checklistIdHasBeenSet;

                    /**
                     * <p>获取的合同风险审查清单名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>获取的合同风险审查清单是否启用</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>获取的合同风险审查清单审查点列表</p>
                     */
                    std::vector<ChecklistCategory> m_categories;
                    bool m_categoriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTREVIEWCHECKLISTRESPONSE_H_
