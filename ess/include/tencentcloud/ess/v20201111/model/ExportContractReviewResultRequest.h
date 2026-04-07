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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_EXPORTCONTRACTREVIEWRESULTREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_EXPORTCONTRACTREVIEWRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
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
                * ExportContractReviewResult请求参数结构体
                */
                class ExportContractReviewResultRequest : public AbstractModel
                {
                public:
                    ExportContractReviewResultRequest();
                    ~ExportContractReviewResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
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
                     * 获取<p>合同审查任务ID</p>
                     * @return TaskId <p>合同审查任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>合同审查任务ID</p>
                     * @param _taskId <p>合同审查任务ID</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>导出文件类型</p><p>枚举值：</p><ul><li>1： WORD、PDF当前带风险批注文件</li><li>2： 审查结果＆摘要（.xIsx）</li><li>3： WORD、PDF审查合同内容时的文件（最原始文件）</li><li>4： WORD、PDF当前无风险批注文件</li></ul>
                     * @return FileType <p>导出文件类型</p><p>枚举值：</p><ul><li>1： WORD、PDF当前带风险批注文件</li><li>2： 审查结果＆摘要（.xIsx）</li><li>3： WORD、PDF审查合同内容时的文件（最原始文件）</li><li>4： WORD、PDF当前无风险批注文件</li></ul>
                     * 
                     */
                    int64_t GetFileType() const;

                    /**
                     * 设置<p>导出文件类型</p><p>枚举值：</p><ul><li>1： WORD、PDF当前带风险批注文件</li><li>2： 审查结果＆摘要（.xIsx）</li><li>3： WORD、PDF审查合同内容时的文件（最原始文件）</li><li>4： WORD、PDF当前无风险批注文件</li></ul>
                     * @param _fileType <p>导出文件类型</p><p>枚举值：</p><ul><li>1： WORD、PDF当前带风险批注文件</li><li>2： 审查结果＆摘要（.xIsx）</li><li>3： WORD、PDF审查合同内容时的文件（最原始文件）</li><li>4： WORD、PDF当前无风险批注文件</li></ul>
                     * 
                     */
                    void SetFileType(const int64_t& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

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

                private:

                    /**
                     * <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>合同审查任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>导出文件类型</p><p>枚举值：</p><ul><li>1： WORD、PDF当前带风险批注文件</li><li>2： 审查结果＆摘要（.xIsx）</li><li>3： WORD、PDF审查合同内容时的文件（最原始文件）</li><li>4： WORD、PDF当前无风险批注文件</li></ul>
                     */
                    int64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_EXPORTCONTRACTREVIEWRESULTREQUEST_H_
