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
                     * 获取<p>执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
                     * @return Operator <p>执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
                     * @param _operator <p>执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
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
                     * 获取<p>起草要求，范围要求 5-1000 字</p>
                     * @return Requirement <p>起草要求，范围要求 5-1000 字</p>
                     * 
                     */
                    std::string GetRequirement() const;

                    /**
                     * 设置<p>起草要求，范围要求 5-1000 字</p>
                     * @param _requirement <p>起草要求，范围要求 5-1000 字</p>
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
                     * 获取<p>参考模板文件资源id（PDF/Word格式），大小不超过1M，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">上传文件</a>接口来获取。</p>
                     * @return ReferenceTemplateId <p>参考模板文件资源id（PDF/Word格式），大小不超过1M，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">上传文件</a>接口来获取。</p>
                     * 
                     */
                    std::string GetReferenceTemplateId() const;

                    /**
                     * 设置<p>参考模板文件资源id（PDF/Word格式），大小不超过1M，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">上传文件</a>接口来获取。</p>
                     * @param _referenceTemplateId <p>参考模板文件资源id（PDF/Word格式），大小不超过1M，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">上传文件</a>接口来获取。</p>
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
                     * 获取<p>相关规定文件资源id列表（PDF/Word格式），最多3个文件，每个大小不超过1M，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">上传文件</a>接口来获取。</p>
                     * @return RequirementFileIds <p>相关规定文件资源id列表（PDF/Word格式），最多3个文件，每个大小不超过1M，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">上传文件</a>接口来获取。</p>
                     * 
                     */
                    std::vector<std::string> GetRequirementFileIds() const;

                    /**
                     * 设置<p>相关规定文件资源id列表（PDF/Word格式），最多3个文件，每个大小不超过1M，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">上传文件</a>接口来获取。</p>
                     * @param _requirementFileIds <p>相关规定文件资源id列表（PDF/Word格式），最多3个文件，每个大小不超过1M，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">上传文件</a>接口来获取。</p>
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
                     * 获取<p>起草合同的语言要求（zh，en）默认zh</p>
                     * @return ContractLanguage <p>起草合同的语言要求（zh，en）默认zh</p>
                     * 
                     */
                    std::string GetContractLanguage() const;

                    /**
                     * 设置<p>起草合同的语言要求（zh，en）默认zh</p>
                     * @param _contractLanguage <p>起草合同的语言要求（zh，en）默认zh</p>
                     * 
                     */
                    void SetContractLanguage(const std::string& _contractLanguage);

                    /**
                     * 判断参数 ContractLanguage 是否已赋值
                     * @return ContractLanguage 是否已赋值
                     * 
                     */
                    bool ContractLanguageHasBeenSet() const;

                    /**
                     * 获取<p>审查任务id，仅支持传入1个，通过<a href="https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/CreateBatchContractReviewTask/">批量创建合同审查任务</a>接口来获取。</p>
                     * @return ReviewTaskId <p>审查任务id，仅支持传入1个，通过<a href="https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/CreateBatchContractReviewTask/">批量创建合同审查任务</a>接口来获取。</p>
                     * 
                     */
                    std::string GetReviewTaskId() const;

                    /**
                     * 设置<p>审查任务id，仅支持传入1个，通过<a href="https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/CreateBatchContractReviewTask/">批量创建合同审查任务</a>接口来获取。</p>
                     * @param _reviewTaskId <p>审查任务id，仅支持传入1个，通过<a href="https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/CreateBatchContractReviewTask/">批量创建合同审查任务</a>接口来获取。</p>
                     * 
                     */
                    void SetReviewTaskId(const std::string& _reviewTaskId);

                    /**
                     * 判断参数 ReviewTaskId 是否已赋值
                     * @return ReviewTaskId 是否已赋值
                     * 
                     */
                    bool ReviewTaskIdHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。 注: 在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>起草要求，范围要求 5-1000 字</p>
                     */
                    std::string m_requirement;
                    bool m_requirementHasBeenSet;

                    /**
                     * <p>参考模板文件资源id（PDF/Word格式），大小不超过1M，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">上传文件</a>接口来获取。</p>
                     */
                    std::string m_referenceTemplateId;
                    bool m_referenceTemplateIdHasBeenSet;

                    /**
                     * <p>相关规定文件资源id列表（PDF/Word格式），最多3个文件，每个大小不超过1M，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">上传文件</a>接口来获取。</p>
                     */
                    std::vector<std::string> m_requirementFileIds;
                    bool m_requirementFileIdsHasBeenSet;

                    /**
                     * <p>起草合同的语言要求（zh，en）默认zh</p>
                     */
                    std::string m_contractLanguage;
                    bool m_contractLanguageHasBeenSet;

                    /**
                     * <p>审查任务id，仅支持传入1个，通过<a href="https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/CreateBatchContractReviewTask/">批量创建合同审查任务</a>接口来获取。</p>
                     */
                    std::string m_reviewTaskId;
                    bool m_reviewTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDRAFTCONTRACTBYPROMPTSTASKREQUEST_H_
