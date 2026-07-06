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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPERATETEMPLATEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPERATETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * OperateTemplate请求参数结构体
                */
                class OperateTemplateRequest : public AbstractModel
                {
                public:
                    OperateTemplateRequest();
                    ~OperateTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（模板的归属企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （操作人）</li></ul>
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（模板的归属企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （操作人）</li></ul>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（模板的归属企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （操作人）</li></ul>
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（模板的归属企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （操作人）</li></ul>
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取<p>模板ID，为32位字符串。</p>
                     * @return TemplateId <p>模板ID，为32位字符串。</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>模板ID，为32位字符串。</p>
                     * @param _templateId <p>模板ID，为32位字符串。</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>操作类型，可取值如下:</p><ul><li>DELETE:  删除</li><li>ENABLE: 启用</li><li>DISABLE: 停用</li><li>COPY: 复制新建</li></ul>
                     * @return OperateType <p>操作类型，可取值如下:</p><ul><li>DELETE:  删除</li><li>ENABLE: 启用</li><li>DISABLE: 停用</li><li>COPY: 复制新建</li></ul>
                     * 
                     */
                    std::string GetOperateType() const;

                    /**
                     * 设置<p>操作类型，可取值如下:</p><ul><li>DELETE:  删除</li><li>ENABLE: 启用</li><li>DISABLE: 停用</li><li>COPY: 复制新建</li></ul>
                     * @param _operateType <p>操作类型，可取值如下:</p><ul><li>DELETE:  删除</li><li>ENABLE: 启用</li><li>DISABLE: 停用</li><li>COPY: 复制新建</li></ul>
                     * 
                     */
                    void SetOperateType(const std::string& _operateType);

                    /**
                     * 判断参数 OperateType 是否已赋值
                     * @return OperateType 是否已赋值
                     * 
                     */
                    bool OperateTypeHasBeenSet() const;

                    /**
                     * 获取<p>模板名称，长度不超过64字符。<br><br>模板复制时指定有效，若为空，则复制后模板名称为 <strong>原模板名称_副本</strong>。</p>
                     * @return TemplateName <p>模板名称，长度不超过64字符。<br><br>模板复制时指定有效，若为空，则复制后模板名称为 <strong>原模板名称_副本</strong>。</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>模板名称，长度不超过64字符。<br><br>模板复制时指定有效，若为空，则复制后模板名称为 <strong>原模板名称_副本</strong>。</p>
                     * @param _templateName <p>模板名称，长度不超过64字符。<br><br>模板复制时指定有效，若为空，则复制后模板名称为 <strong>原模板名称_副本</strong>。</p>
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（模板的归属企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （操作人）</li></ul>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>模板ID，为32位字符串。</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>操作类型，可取值如下:</p><ul><li>DELETE:  删除</li><li>ENABLE: 启用</li><li>DISABLE: 停用</li><li>COPY: 复制新建</li></ul>
                     */
                    std::string m_operateType;
                    bool m_operateTypeHasBeenSet;

                    /**
                     * <p>模板名称，长度不超过64字符。<br><br>模板复制时指定有效，若为空，则复制后模板名称为 <strong>原模板名称_副本</strong>。</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPERATETEMPLATEREQUEST_H_
