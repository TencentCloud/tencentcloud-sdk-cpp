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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHINFORMATIONEXTRACTIONTASKREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHINFORMATIONEXTRACTIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/ExtractionField.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateBatchInformationExtractionTask请求参数结构体
                */
                class CreateBatchInformationExtractionTaskRequest : public AbstractModel
                {
                public:
                    CreateBatchInformationExtractionTaskRequest();
                    ~CreateBatchInformationExtractionTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行合同智能提取的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行合同智能提取的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行合同智能提取的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行合同智能提取的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
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
                     * 获取<p>合同智能提取的文件资源编号列表，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">UploadFiles</a>接口获取PDF、WORD、PNG、JPEG文件资源编号。</p><p>注意：</p><ul><li>此接口仅支持5个文件发起</li><li>PDF、WORD文件限制在10M以内</li><li>PNG、JPEG文件限制在5M以内</li></ul>
                     * @return ResourceIds <p>合同智能提取的文件资源编号列表，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">UploadFiles</a>接口获取PDF、WORD、PNG、JPEG文件资源编号。</p><p>注意：</p><ul><li>此接口仅支持5个文件发起</li><li>PDF、WORD文件限制在10M以内</li><li>PNG、JPEG文件限制在5M以内</li></ul>
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置<p>合同智能提取的文件资源编号列表，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">UploadFiles</a>接口获取PDF、WORD、PNG、JPEG文件资源编号。</p><p>注意：</p><ul><li>此接口仅支持5个文件发起</li><li>PDF、WORD文件限制在10M以内</li><li>PNG、JPEG文件限制在5M以内</li></ul>
                     * @param _resourceIds <p>合同智能提取的文件资源编号列表，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">UploadFiles</a>接口获取PDF、WORD、PNG、JPEG文件资源编号。</p><p>注意：</p><ul><li>此接口仅支持5个文件发起</li><li>PDF、WORD文件限制在10M以内</li><li>PNG、JPEG文件限制在5M以内</li></ul>
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @return Agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @param _agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
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
                     * 获取<p>用户配置的合同智能提取字段模板ID，会基于此模板批量创建合同智能提取任务，为32位字符串。<br><a href="https://qcloudimg.tencent-cloud.cn/raw/99008608577532423ea437c7fdbedca1.png">点击查看模板Id在控制台上的位置</a></p><p>注:  <code>此配置优先级最高，设置了模板ID后Fields配置就会无效</code></p>
                     * @return FieldTemplateId <p>用户配置的合同智能提取字段模板ID，会基于此模板批量创建合同智能提取任务，为32位字符串。<br><a href="https://qcloudimg.tencent-cloud.cn/raw/99008608577532423ea437c7fdbedca1.png">点击查看模板Id在控制台上的位置</a></p><p>注:  <code>此配置优先级最高，设置了模板ID后Fields配置就会无效</code></p>
                     * 
                     */
                    std::string GetFieldTemplateId() const;

                    /**
                     * 设置<p>用户配置的合同智能提取字段模板ID，会基于此模板批量创建合同智能提取任务，为32位字符串。<br><a href="https://qcloudimg.tencent-cloud.cn/raw/99008608577532423ea437c7fdbedca1.png">点击查看模板Id在控制台上的位置</a></p><p>注:  <code>此配置优先级最高，设置了模板ID后Fields配置就会无效</code></p>
                     * @param _fieldTemplateId <p>用户配置的合同智能提取字段模板ID，会基于此模板批量创建合同智能提取任务，为32位字符串。<br><a href="https://qcloudimg.tencent-cloud.cn/raw/99008608577532423ea437c7fdbedca1.png">点击查看模板Id在控制台上的位置</a></p><p>注:  <code>此配置优先级最高，设置了模板ID后Fields配置就会无效</code></p>
                     * 
                     */
                    void SetFieldTemplateId(const std::string& _fieldTemplateId);

                    /**
                     * 判断参数 FieldTemplateId 是否已赋值
                     * @return FieldTemplateId 是否已赋值
                     * 
                     */
                    bool FieldTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>用于合同智能提取的字段信息。</p><p>注意：<code>字段模板优先级最高，如果设置了FieldTemplateId值，此配置就无效</code></p>
                     * @return Fields <p>用于合同智能提取的字段信息。</p><p>注意：<code>字段模板优先级最高，如果设置了FieldTemplateId值，此配置就无效</code></p>
                     * 
                     */
                    std::vector<ExtractionField> GetFields() const;

                    /**
                     * 设置<p>用于合同智能提取的字段信息。</p><p>注意：<code>字段模板优先级最高，如果设置了FieldTemplateId值，此配置就无效</code></p>
                     * @param _fields <p>用于合同智能提取的字段信息。</p><p>注意：<code>字段模板优先级最高，如果设置了FieldTemplateId值，此配置就无效</code></p>
                     * 
                     */
                    void SetFields(const std::vector<ExtractionField>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                private:

                    /**
                     * <p>执行合同智能提取的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>合同智能提取的文件资源编号列表，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">UploadFiles</a>接口获取PDF、WORD、PNG、JPEG文件资源编号。</p><p>注意：</p><ul><li>此接口仅支持5个文件发起</li><li>PDF、WORD文件限制在10M以内</li><li>PNG、JPEG文件限制在5M以内</li></ul>
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>用户配置的合同智能提取字段模板ID，会基于此模板批量创建合同智能提取任务，为32位字符串。<br><a href="https://qcloudimg.tencent-cloud.cn/raw/99008608577532423ea437c7fdbedca1.png">点击查看模板Id在控制台上的位置</a></p><p>注:  <code>此配置优先级最高，设置了模板ID后Fields配置就会无效</code></p>
                     */
                    std::string m_fieldTemplateId;
                    bool m_fieldTemplateIdHasBeenSet;

                    /**
                     * <p>用于合同智能提取的字段信息。</p><p>注意：<code>字段模板优先级最高，如果设置了FieldTemplateId值，此配置就无效</code></p>
                     */
                    std::vector<ExtractionField> m_fields;
                    bool m_fieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHINFORMATIONEXTRACTIONTASKREQUEST_H_
