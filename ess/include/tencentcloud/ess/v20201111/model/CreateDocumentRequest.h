/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDOCUMENTREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDOCUMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/FormField.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateDocument请求参数结构体
                */
                class CreateDocumentRequest : public AbstractModel
                {
                public:
                    CreateDocumentRequest();
                    ~CreateDocumentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return Operator 无
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置无
                     * @param Operator 无
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取用户上传的模板ID
                     * @return TemplateId 用户上传的模板ID
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置用户上传的模板ID
                     * @param TemplateId 用户上传的模板ID
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取流程ID
                     * @return FlowId 流程ID
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流程ID
                     * @param FlowId 流程ID
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取文件名列表
                     * @return FileNames 文件名列表
                     */
                    std::vector<std::string> GetFileNames() const;

                    /**
                     * 设置文件名列表
                     * @param FileNames 文件名列表
                     */
                    void SetFileNames(const std::vector<std::string>& _fileNames);

                    /**
                     * 判断参数 FileNames 是否已赋值
                     * @return FileNames 是否已赋值
                     */
                    bool FileNamesHasBeenSet() const;

                    /**
                     * 获取内容控件信息数组
                     * @return FormFields 内容控件信息数组
                     */
                    std::vector<FormField> GetFormFields() const;

                    /**
                     * 设置内容控件信息数组
                     * @param FormFields 内容控件信息数组
                     */
                    void SetFormFields(const std::vector<FormField>& _formFields);

                    /**
                     * 判断参数 FormFields 是否已赋值
                     * @return FormFields 是否已赋值
                     */
                    bool FormFieldsHasBeenSet() const;

                    /**
                     * 获取应用相关信息
                     * @return Agent 应用相关信息
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息
                     * @param Agent 应用相关信息
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取客户端Token，保持接口幂等性
                     * @return ClientToken 客户端Token，保持接口幂等性
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置客户端Token，保持接口幂等性
                     * @param ClientToken 客户端Token，保持接口幂等性
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取是否需要生成预览文件 默认不生成；
预览链接有效期300秒；
                     * @return NeedPreview 是否需要生成预览文件 默认不生成；
预览链接有效期300秒；
                     */
                    bool GetNeedPreview() const;

                    /**
                     * 设置是否需要生成预览文件 默认不生成；
预览链接有效期300秒；
                     * @param NeedPreview 是否需要生成预览文件 默认不生成；
预览链接有效期300秒；
                     */
                    void SetNeedPreview(const bool& _needPreview);

                    /**
                     * 判断参数 NeedPreview 是否已赋值
                     * @return NeedPreview 是否已赋值
                     */
                    bool NeedPreviewHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 用户上传的模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 流程ID
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 文件名列表
                     */
                    std::vector<std::string> m_fileNames;
                    bool m_fileNamesHasBeenSet;

                    /**
                     * 内容控件信息数组
                     */
                    std::vector<FormField> m_formFields;
                    bool m_formFieldsHasBeenSet;

                    /**
                     * 应用相关信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 客户端Token，保持接口幂等性
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 是否需要生成预览文件 默认不生成；
预览链接有效期300秒；
                     */
                    bool m_needPreview;
                    bool m_needPreviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDOCUMENTREQUEST_H_
