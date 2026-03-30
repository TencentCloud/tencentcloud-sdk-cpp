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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDRAFTCONTRACTBYPROMPTSTASKREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDRAFTCONTRACTBYPROMPTSTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateDraftContractByPromptsTask请求参数结构体
                */
                class CreateDraftContractByPromptsTaskRequest : public AbstractModel
                {
                public:
                    CreateDraftContractByPromptsTaskRequest();
                    ~CreateDraftContractByPromptsTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     * @return Operator 执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     * @param _operator 执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取起草要求
                     * @return Requirement 起草要求
                     * 
                     */
                    std::string GetRequirement() const;

                    /**
                     * 设置起草要求
                     * @param _requirement 起草要求
                     * 
                     */
                    void SetRequirement(const std::string& _requirement);

                    /**
                     * 判断参数 Requirement 是否已赋值
                     * @return Requirement 是否已赋值
                     * 
                     */
                    bool RequirementHasBeenSet() const;

                    /**
                     * 获取参考模板文件资源id（PDF/Word格式）
                     * @return ReferenceTemplateId 参考模板文件资源id（PDF/Word格式）
                     * 
                     */
                    std::string GetReferenceTemplateId() const;

                    /**
                     * 设置参考模板文件资源id（PDF/Word格式）
                     * @param _referenceTemplateId 参考模板文件资源id（PDF/Word格式）
                     * 
                     */
                    void SetReferenceTemplateId(const std::string& _referenceTemplateId);

                    /**
                     * 判断参数 ReferenceTemplateId 是否已赋值
                     * @return ReferenceTemplateId 是否已赋值
                     * 
                     */
                    bool ReferenceTemplateIdHasBeenSet() const;

                    /**
                     * 获取相关规定文件资源id列表（PDF/Word格式）
                     * @return RequirementFileIds 相关规定文件资源id列表（PDF/Word格式）
                     * 
                     */
                    std::vector<std::string> GetRequirementFileIds() const;

                    /**
                     * 设置相关规定文件资源id列表（PDF/Word格式）
                     * @param _requirementFileIds 相关规定文件资源id列表（PDF/Word格式）
                     * 
                     */
                    void SetRequirementFileIds(const std::vector<std::string>& _requirementFileIds);

                    /**
                     * 判断参数 RequirementFileIds 是否已赋值
                     * @return RequirementFileIds 是否已赋值
                     * 
                     */
                    bool RequirementFileIdsHasBeenSet() const;

                    /**
                     * 获取起草合同的语言要求（zh，en）默认zh
                     * @return ContractLanguage 起草合同的语言要求（zh，en）默认zh
                     * 
                     */
                    std::string GetContractLanguage() const;

                    /**
                     * 设置起草合同的语言要求（zh，en）默认zh
                     * @param _contractLanguage 起草合同的语言要求（zh，en）默认zh
                     * 
                     */
                    void SetContractLanguage(const std::string& _contractLanguage);

                    /**
                     * 判断参数 ContractLanguage 是否已赋值
                     * @return ContractLanguage 是否已赋值
                     * 
                     */
                    bool ContractLanguageHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 起草要求
                     */
                    std::string m_requirement;
                    bool m_requirementHasBeenSet;

                    /**
                     * 参考模板文件资源id（PDF/Word格式）
                     */
                    std::string m_referenceTemplateId;
                    bool m_referenceTemplateIdHasBeenSet;

                    /**
                     * 相关规定文件资源id列表（PDF/Word格式）
                     */
                    std::vector<std::string> m_requirementFileIds;
                    bool m_requirementFileIdsHasBeenSet;

                    /**
                     * 起草合同的语言要求（zh，en）默认zh
                     */
                    std::string m_contractLanguage;
                    bool m_contractLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDRAFTCONTRACTBYPROMPTSTASKREQUEST_H_
