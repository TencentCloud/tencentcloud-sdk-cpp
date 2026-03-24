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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEREMEDIATIONREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEREMEDIATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * UpdateRemediation请求参数结构体
                */
                class UpdateRemediationRequest : public AbstractModel
                {
                public:
                    UpdateRemediationRequest();
                    ~UpdateRemediationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取修正设置 ID
                     * @return RemediationId 修正设置 ID
                     * 
                     */
                    std::string GetRemediationId() const;

                    /**
                     * 设置修正设置 ID
                     * @param _remediationId 修正设置 ID
                     * 
                     */
                    void SetRemediationId(const std::string& _remediationId);

                    /**
                     * 判断参数 RemediationId 是否已赋值
                     * @return RemediationId 是否已赋值
                     * 
                     */
                    bool RemediationIdHasBeenSet() const;

                    /**
                     * 获取修正类型。取值： SCF：函数计算（自定义修正）。
                     * @return RemediationType 修正类型。取值： SCF：函数计算（自定义修正）。
                     * 
                     */
                    std::string GetRemediationType() const;

                    /**
                     * 设置修正类型。取值： SCF：函数计算（自定义修正）。
                     * @param _remediationType 修正类型。取值： SCF：函数计算（自定义修正）。
                     * 
                     */
                    void SetRemediationType(const std::string& _remediationType);

                    /**
                     * 判断参数 RemediationType 是否已赋值
                     * @return RemediationType 是否已赋值
                     * 
                     */
                    bool RemediationTypeHasBeenSet() const;

                    /**
                     * 获取修正模板 ID
                     * @return RemediationTemplateId 修正模板 ID
                     * 
                     */
                    std::string GetRemediationTemplateId() const;

                    /**
                     * 设置修正模板 ID
                     * @param _remediationTemplateId 修正模板 ID
                     * 
                     */
                    void SetRemediationTemplateId(const std::string& _remediationTemplateId);

                    /**
                     * 判断参数 RemediationTemplateId 是否已赋值
                     * @return RemediationTemplateId 是否已赋值
                     * 
                     */
                    bool RemediationTemplateIdHasBeenSet() const;

                    /**
                     * 获取修正执行方式。取值：  NON_EXECUTION：不执行。  AUTO_EXECUTION：自动执行。  MANUAL_EXECUTION：手动执行。  NOT_CONFIG：未设置。
                     * @return InvokeType 修正执行方式。取值：  NON_EXECUTION：不执行。  AUTO_EXECUTION：自动执行。  MANUAL_EXECUTION：手动执行。  NOT_CONFIG：未设置。
                     * 
                     */
                    std::string GetInvokeType() const;

                    /**
                     * 设置修正执行方式。取值：  NON_EXECUTION：不执行。  AUTO_EXECUTION：自动执行。  MANUAL_EXECUTION：手动执行。  NOT_CONFIG：未设置。
                     * @param _invokeType 修正执行方式。取值：  NON_EXECUTION：不执行。  AUTO_EXECUTION：自动执行。  MANUAL_EXECUTION：手动执行。  NOT_CONFIG：未设置。
                     * 
                     */
                    void SetInvokeType(const std::string& _invokeType);

                    /**
                     * 判断参数 InvokeType 是否已赋值
                     * @return InvokeType 是否已赋值
                     * 
                     */
                    bool InvokeTypeHasBeenSet() const;

                    /**
                     * 获取执行修正来源
                     * @return SourceType 执行修正来源
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置执行修正来源
                     * @param _sourceType 执行修正来源
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                private:

                    /**
                     * 修正设置 ID
                     */
                    std::string m_remediationId;
                    bool m_remediationIdHasBeenSet;

                    /**
                     * 修正类型。取值： SCF：函数计算（自定义修正）。
                     */
                    std::string m_remediationType;
                    bool m_remediationTypeHasBeenSet;

                    /**
                     * 修正模板 ID
                     */
                    std::string m_remediationTemplateId;
                    bool m_remediationTemplateIdHasBeenSet;

                    /**
                     * 修正执行方式。取值：  NON_EXECUTION：不执行。  AUTO_EXECUTION：自动执行。  MANUAL_EXECUTION：手动执行。  NOT_CONFIG：未设置。
                     */
                    std::string m_invokeType;
                    bool m_invokeTypeHasBeenSet;

                    /**
                     * 执行修正来源
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEREMEDIATIONREQUEST_H_
