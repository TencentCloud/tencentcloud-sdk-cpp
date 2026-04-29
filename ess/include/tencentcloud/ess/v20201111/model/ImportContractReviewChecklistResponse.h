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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_IMPORTCONTRACTREVIEWCHECKLISTRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_IMPORTCONTRACTREVIEWCHECKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * ImportContractReviewChecklist返回参数结构体
                */
                class ImportContractReviewChecklistResponse : public AbstractModel
                {
                public:
                    ImportContractReviewChecklistResponse();
                    ~ImportContractReviewChecklistResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>导入成功的合同审查清单ID</p>
                     * @return ChecklistId <p>导入成功的合同审查清单ID</p>
                     * 
                     */
                    std::string GetChecklistId() const;

                    /**
                     * 判断参数 ChecklistId 是否已赋值
                     * @return ChecklistId 是否已赋值
                     * 
                     */
                    bool ChecklistIdHasBeenSet() const;

                private:

                    /**
                     * <p>导入成功的合同审查清单ID</p>
                     */
                    std::string m_checklistId;
                    bool m_checklistIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_IMPORTCONTRACTREVIEWCHECKLISTRESPONSE_H_
